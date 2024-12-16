package vexriscv

import java.io.File

import org.scalatest.funsuite.AnyFunSuite
import spinal.core.SpinalVerilog
import vexriscv.demo._
import vexriscv.demo.BrieySim


import scala.sys.process._

class TCC_pipeline extends AnyFunSuite {
    def doCmd(cmd: String): String = {
        val stdOut = new StringBuilder()
        class Logger extends ProcessLogger {
        override def err(s: => String): Unit = {
            if (!s.startsWith("ar: creating ")) println(s)
        }

        override def out(s: => String): Unit = {
            println(s)
            stdOut ++= s
        }

        override def buffer[T](f: => T) = f
        }
        Process(cmd, new File("src/test/cpp/regression")).!(new Logger)
        stdOut.toString()
    }

    val report = new StringBuilder()

    def getDmips(name: String, gen: => Unit, testCmd: String): Unit = {
        var genPassed = false
        test(name + "_gen") {
            gen
            genPassed = true
        }
        test(name + "_test") {
            assert(genPassed)
            val str = doCmd(testCmd)
            assert(!str.contains("FAIL"))
            val intFind = "(\\d+\\.?)+".r
            val dmips = intFind.findFirstIn("DMIPS per Mhz\\:                              (\\d+.?)+".r.findAllIn(str).toList.last).get.toDouble
            val coremarkTicks = intFind.findFirstIn("Total ticks      \\: (\\d+.?)+".r.findAllIn(str).toList.last).get.toDouble
            val coremarkIterations = intFind.findFirstIn("Iterations       \\: (\\d+.?)+".r.findAllIn(str).toList.last).get.toDouble
            val coremarkHzs = intFind.findFirstIn("DCLOCKS_PER_SEC=(\\d+.?)+".r.findAllIn(str).toList.last).get.toDouble
            val coremarkPerMhz = 1e6 * coremarkIterations / coremarkTicks
            report ++= s"$name -> $dmips DMIPS/MHz $coremarkPerMhz Coremark/MHz\n"
        }

    }


    getDmips(
        name = s"MURAX (RISC-V I)",
        gen = SpinalVerilog(Murax(MuraxConfig.default)),

        testCmd = "make clean run REDO=10 IBUS=SIMPLE DBUS=SIMPLE CSR=no MMU=no DEBUG_PLUGIN=no MUL=no DIV=no COREMARK=yes"
    )

    getDmips(
        name = s"Briey (RISC-V I)",
        gen = SpinalVerilog(new Briey(BrieyConfig.default)),
        testCmd = "make clean run REDO=10 IBUS=SIMPLE DBUS=SIMPLE CSR=no MMU=no DEBUG_PLUGIN=no MUL=no DIV=no COREMARK=yes"
    )

    test("final_report") {
        println(report)
    }
}
