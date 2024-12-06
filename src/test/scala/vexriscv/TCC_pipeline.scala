package vexriscv

import java.io.File

import org.scalatest.funsuite.AnyFunSuite
import spinal.core.SpinalVerilog
import vexriscv.demo._

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

    for(withMemoryStage <- List(false, true)){
        val stages = if(withMemoryStage) "Three" else "Two"
        getDmips(
            name = s"Gen${stages}Stage (RISC-V I) - Bypass: False - BarrielShifter: False",
            gen = SpinalVerilog(GenTwoThreeStage.cpu(
                withMulDiv = false,
                bypass = false,
                barrielShifter = false,
                withMemoryStage = withMemoryStage
            )),

            testCmd = "make clean run REDO=10 IBUS=SIMPLE DBUS=SIMPLE CSR=no MMU=no DEBUG_PLUGIN=no MUL=no DIV=no COREMARK=yes"
        )

        getDmips(
            name = s"Gen${stages}Stage (RISC-V I) - Bypass: True - BarrielShifter: False",
            gen = SpinalVerilog(GenTwoThreeStage.cpu(
                withMulDiv = false,
                bypass = true,
                barrielShifter = false,
                withMemoryStage = withMemoryStage
            )),

            testCmd = "make clean run REDO=10 IBUS=SIMPLE DBUS=SIMPLE CSR=no MMU=no DEBUG_PLUGIN=no MUL=no DIV=no COREMARK=yes"
        )

        getDmips(
            name = s"Gen${stages}Stage (RISC-V I) - Bypass: True - BarrielShifter: True",
            gen = SpinalVerilog(GenTwoThreeStage.cpu(
                withMulDiv = false,
                bypass = true,
                barrielShifter = true,
                withMemoryStage = withMemoryStage
            )),

            testCmd = "make clean run REDO=10 IBUS=SIMPLE DBUS=SIMPLE CSR=no MMU=no DEBUG_PLUGIN=no MUL=no DIV=no  COREMARK=yes"
        )

        getDmips(
            name = s"Gen${stages}Stage (RISC-V I) - Bypass: False - BarrielShifter: True",
            gen = SpinalVerilog(GenTwoThreeStage.cpu(
                withMulDiv = false,
                bypass = false,
                barrielShifter = true,
                withMemoryStage = withMemoryStage
            )),

            testCmd = "make clean run REDO=10 IBUS=SIMPLE DBUS=SIMPLE CSR=no MMU=no DEBUG_PLUGIN=no MUL=no DIV=no  COREMARK=yes"
        )
    }


    getDmips(
        name = s"GenFourStage (RISC-V I) - Bypass: False - BarrielShifter: False",
        gen = SpinalVerilog(Murax(MuraxConfig.default)),

        testCmd = "make clean run REDO=10 IBUS=SIMPLE DBUS=SIMPLE CSR=no MMU=no DEBUG_PLUGIN=no MUL=no DIV=no COREMARK=yes"
    )

    getDmips(
        name = s"GenFourStage (RISC-V I) - Bypass: True - BarrielShifter: False",
        gen = SpinalVerilog(GenTwoThreeStage.cpu(
            withMulDiv = false,
            bypass = true,
            barrielShifter = false,
            withMemoryStage = true,
            withWriteBackStage = true
        )),

        testCmd = "make clean run REDO=10 IBUS=SIMPLE DBUS=SIMPLE CSR=no MMU=no DEBUG_PLUGIN=no MUL=no DIV=no COREMARK=yes"
    )

    getDmips(
        name = s"GenFourStage (RISC-V I) - Bypass: True - BarrielShifter: True",
        gen = SpinalVerilog(GenTwoThreeStage.cpu(
            withMulDiv = false,
            bypass = true,
            barrielShifter = true,
            withMemoryStage = true,
            withWriteBackStage = true
        )),

        testCmd = "make clean run REDO=10 IBUS=SIMPLE DBUS=SIMPLE CSR=no MMU=no DEBUG_PLUGIN=no MUL=no DIV=no  COREMARK=yes"
    )

    getDmips(
        name = s"GenFourStage (RISC-V I) - Bypass: False - BarrielShifter: True",
        gen = SpinalVerilog(GenTwoThreeStage.cpu(
            withMulDiv = false,
            bypass = false,
            barrielShifter = true,
            withMemoryStage = true,
            withWriteBackStage = true
        )),

        testCmd = "make clean run REDO=10 IBUS=SIMPLE DBUS=SIMPLE CSR=no MMU=no DEBUG_PLUGIN=no MUL=no DIV=no  COREMARK=yes"
    )

    test("final_report") {
        println(report)
    }
}
