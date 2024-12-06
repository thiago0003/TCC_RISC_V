package vexriscv.demo

import spinal.core._
import spinal.lib._
import spinal.lib.com.jtag.Jtag
import spinal.lib.cpu.riscv.debug.DebugTransportModuleParameter
import spinal.lib.eda.bench._
import spinal.lib.eda.icestorm.IcestormStdTargets
import spinal.lib.eda.xilinx.VivadoFlow
import spinal.lib.io.InOutWrapper
import vexriscv.demo.smp.VexRiscvSmpClusterGen
import vexriscv.plugin.CsrAccess.{READ_ONLY, READ_WRITE, WRITE_ONLY}
import vexriscv.{VexRiscv, VexRiscvConfig, plugin}
import vexriscv.plugin.{BranchPlugin, CsrPlugin, CsrPluginConfig, DBusSimplePlugin, DebugPlugin, DecoderSimplePlugin, EmbeddedRiscvJtag, FullBarrelShifterPlugin, HazardSimplePlugin, IBusSimplePlugin, IntAluPlugin, LightShifterPlugin, NONE, Plugin, RegFilePlugin, SrcPlugin, YamlPlugin}

import scala.collection.mutable.ArrayBuffer
import scala.util.Random

object GenTwoStage {
  def main(args: Array[String]): Unit = {
    def wrap(that : => Component) : Component = that
    SpinalVerilog(wrap(GenTwoThreeStage.cpu(
        withMulDiv = false,
        bypass = false,
        barrielShifter = false,
        withMemoryStage = false
      )
    ).setDefinitionName("VexRiscvTwoStage.v"))
  }
}