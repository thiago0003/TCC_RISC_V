// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv_VexRiscv.h"

extern const VlWide<12>/*383:0*/ VVexRiscv__ConstPool__CONST_h6d207abc_0;

VL_ATTR_COLD void VVexRiscv_VexRiscv___initial__TOP__VexRiscv__1(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___initial__TOP__VexRiscv__1\n"); );
    // Body
    vlSelf->CsrPlugin_inWfi = 0U;
    vlSelf->__Vxrand_h9700cf2a__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vxrand_h4700d425__0 = (0x3fffffffU & 
                                     VL_RAND_RESET_I(30));
    VL_READMEM_N(false, 32, 32, 0, VL_CVT_PACK_STR_NW(12, VVexRiscv__ConstPool__CONST_h6d207abc_0)
                 ,  &(vlSelf->RegFilePlugin_regFile)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VVexRiscv_VexRiscv___ctor_var_reset(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vxrand_h4700d425__0 = VL_RAND_RESET_I(30);
    vlSelf->__Vxrand_h9700cf2a__0 = VL_RAND_RESET_I(32);
    vlSelf->iBus_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->iBus_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->iBus_cmd_payload_pc = VL_RAND_RESET_I(32);
    vlSelf->iBus_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->iBus_rsp_payload_error = VL_RAND_RESET_I(1);
    vlSelf->iBus_rsp_payload_inst = VL_RAND_RESET_I(32);
    vlSelf->timerInterrupt = VL_RAND_RESET_I(1);
    vlSelf->externalInterrupt = VL_RAND_RESET_I(1);
    vlSelf->softwareInterrupt = VL_RAND_RESET_I(1);
    vlSelf->dBus_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->dBus_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->dBus_cmd_payload_wr = VL_RAND_RESET_I(1);
    vlSelf->dBus_cmd_payload_mask = VL_RAND_RESET_I(4);
    vlSelf->dBus_cmd_payload_address = VL_RAND_RESET_I(32);
    vlSelf->dBus_cmd_payload_data = VL_RAND_RESET_I(32);
    vlSelf->dBus_cmd_payload_size = VL_RAND_RESET_I(2);
    vlSelf->dBus_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->dBus_rsp_error = VL_RAND_RESET_I(1);
    vlSelf->dBus_rsp_data = VL_RAND_RESET_I(32);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__RegFilePlugin_regFile_spinal_port0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__RegFilePlugin_regFile_spinal_port1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_IBusSimplePlugin_rspJoin_rspBuffer_discardCounter_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_arbitration_haltByOther = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_arbitration_removeIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_arbitration_isStuckByOthers = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_haltByOther = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_removeIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_isStuck = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_isStuckByOthers = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_haltItself = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_removeIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_flushNext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_isValid = VL_RAND_RESET_I(1);
    vlSelf->lastStageInstruction = VL_RAND_RESET_I(32);
    vlSelf->lastStagePc = VL_RAND_RESET_I(32);
    vlSelf->lastStageIsValid = VL_RAND_RESET_I(1);
    vlSelf->lastStageIsFiring = VL_RAND_RESET_I(1);
    vlSelf->CsrPlugin_inWfi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_jumpInterface_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_jumpInterface_payload = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_valid = VL_RAND_RESET_I(1);
    vlSelf->IBusSimplePlugin_fetchPc_pcReg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_correction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_pcRegPropagate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_booted = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_inc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_halt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_1_output_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_pending_value = VL_RAND_RESET_I(3);
    vlSelf->__PVT__IBusSimplePlugin_pending_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter = VL_RAND_RESET_I(3);
    vlSelf->__PVT__toplevel_IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_join_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted = VL_RAND_RESET_I(32);
    vlSelf->__PVT__CsrPlugin_mepc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__CsrPlugin_mstatus_MIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mstatus_MPIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mstatus_MPP = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_mip_MEIP = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mip_MTIP = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mip_MSIP = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mie_MEIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mie_MTIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mie_MSIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mcause_interrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mcause_exceptionCode = VL_RAND_RESET_I(4);
    vlSelf->__PVT___zz_when_CsrPlugin_l1302 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_when_CsrPlugin_l1302_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_when_CsrPlugin_l1302_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_interrupt_valid = VL_RAND_RESET_I(1);
    vlSelf->CsrPlugin_interrupt_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_CsrPlugin_l1340 = VL_RAND_RESET_I(1);
    vlSelf->CsrPlugin_interruptJump = VL_RAND_RESET_I(1);
    vlSelf->CsrPlugin_hadException = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_xtvec_base = VL_RAND_RESET_I(30);
    vlSelf->__PVT__when_CsrPlugin_l1390 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_CsrPlugin_l1456 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_writeInstruction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_writeEnable = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED = VL_RAND_RESET_I(25);
    vlSelf->__PVT__execute_RegFilePlugin_srcInstruction = VL_RAND_RESET_I(32);
    vlSelf->lastStageRegFileWrite_valid = VL_RAND_RESET_I(1);
    vlSelf->lastStageRegFileWrite_payload_address = VL_RAND_RESET_I(5);
    vlSelf->lastStageRegFileWrite_payload_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_execute_SRC1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_execute_SRC2_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_SrcPlugin_addSub = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_SrcPlugin_less = VL_RAND_RESET_I(1);
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address = VL_RAND_RESET_I(5);
    vlSelf->__PVT___zz_execute_BRANCH_DO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_BranchPlugin_branchAdder = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_LightShifterPlugin_isActive = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_LightShifterPlugin_amplitudeReg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__execute_LightShifterPlugin_amplitude = VL_RAND_RESET_I(5);
    vlSelf->__PVT__when_ShiftPlugins_l169 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_PC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_PC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_PC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_INSTRUCTION = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_INSTRUCTION = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_INSTRUCTION = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_RS1_USE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_SRC2_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_MEMORY_STORE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_MEMORY_STORE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_RS2_USE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_IS_CSR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_ENV_CTRL = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_ENV_CTRL = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_to_writeBack_ENV_CTRL = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_ALU_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_SRC_LESS_UNSIGNED = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_BRANCH_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_SRC2_FORCE_ZERO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_MEMORY_ADDRESS_LOW = VL_RAND_RESET_I(2);
    vlSelf->__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW = VL_RAND_RESET_I(2);
    vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_MEMORY_READ_DATA = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_CsrPlugin_csr_768 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_836 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_772 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_834 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__when_CsrPlugin_l1719 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->RegFilePlugin_regFile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_push_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__oneStage_doFlush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rData_inst = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__CsrPlugin_mstatus_MIE = VL_RAND_RESET_I(1);
}
