// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv_VexRiscv.h"
#include "VVexRiscv__Syms.h"

VL_INLINE_OPT void VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__3(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__3\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__RegFilePlugin_regFile__v0;
    IData/*31:0*/ __Vdlyvval__RegFilePlugin_regFile__v0;
    CData/*0:0*/ __Vdlyvset__RegFilePlugin_regFile__v0;
    // Body
    __Vdlyvset__RegFilePlugin_regFile__v0 = 0U;
    if (vlSelf->__PVT___zz_1) {
        __Vdlyvval__RegFilePlugin_regFile__v0 = vlSelf->lastStageRegFileWrite_payload_data;
        __Vdlyvset__RegFilePlugin_regFile__v0 = 1U;
        __Vdlyvdim0__RegFilePlugin_regFile__v0 = vlSelf->lastStageRegFileWrite_payload_address;
    }
    vlSelf->__PVT__memory_to_writeBack_MEMORY_READ_DATA 
        = vlSymsp->TOP.dBus_rsp_data;
    if (vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_push_ready) {
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rData_inst 
            = vlSymsp->TOP.iBus_rsp_payload_inst;
    }
    vlSelf->__PVT__CsrPlugin_mip_MEIP = vlSymsp->TOP.externalInterrupt;
    vlSelf->__PVT__CsrPlugin_mip_MTIP = vlSymsp->TOP.timerInterrupt;
    if (vlSelf->__PVT__when_CsrPlugin_l1390) {
        if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege))) {
            vlSelf->__PVT__CsrPlugin_mcause_exceptionCode 
                = vlSelf->CsrPlugin_interrupt_code;
            vlSelf->__PVT__CsrPlugin_mepc = vlSelf->IBusSimplePlugin_fetchPc_pcReg;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL 
            = (3U & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                     >> 0x12U));
        vlSelf->__PVT__decode_to_execute_ALU_CTRL = 
            (3U & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                   >> 0xfU));
        vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE 
            = (1U & (~ ((IData)((0x2000U == (0xfe000U 
                                             & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst))) 
                        | (IData)((0x6000U == (0xfe000U 
                                               & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst))))));
        vlSelf->__PVT__execute_CsrPlugin_csr_834 = 
            (0x342U == (vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
                        >> 0x14U));
    }
    vlSelf->__PVT__CsrPlugin_mip_MSIP = vlSymsp->TOP.softwareInterrupt;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
            vlSelf->__PVT__CsrPlugin_mip_MSIP = (1U 
                                                 & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 3U));
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_SHIFT_CTRL 
            = (3U & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                     >> 0x17U));
        vlSelf->__PVT__decode_to_execute_BRANCH_CTRL 
            = (3U & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                     >> 0x15U));
        vlSelf->__PVT__decode_to_execute_SRC_LESS_UNSIGNED 
            = (1U & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                     >> 0x11U));
        vlSelf->__PVT__decode_to_execute_SRC2_FORCE_ZERO 
            = (IData)((0x100000U == (0x100004U & vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED)));
        vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS 
            = (1U & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                     >> 2U));
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1390) {
        if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege))) {
            vlSelf->__PVT__CsrPlugin_mcause_interrupt 
                = (1U & (~ (IData)(vlSelf->CsrPlugin_hadException)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_IS_CSR = (1U 
                                                   & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                                                      >> 0xdU));
    }
    vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA 
        = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    vlSelf->__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW 
        = vlSelf->__PVT__execute_to_memory_MEMORY_ADDRESS_LOW;
    vlSelf->__PVT__RegFilePlugin_regFile_spinal_port1 
        = vlSelf->RegFilePlugin_regFile[(0x1fU & (vlSelf->__PVT__execute_RegFilePlugin_srcInstruction 
                                                  >> 0x14U))];
    vlSelf->__PVT__RegFilePlugin_regFile_spinal_port0 
        = vlSelf->RegFilePlugin_regFile[(0x1fU & (vlSelf->__PVT__execute_RegFilePlugin_srcInstruction 
                                                  >> 0xfU))];
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_SRC2_CTRL 
            = (3U & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                     >> 5U));
        vlSelf->__PVT__decode_to_execute_SRC1_CTRL 
            = (3U & vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED);
    }
    vlSelf->__PVT__memory_to_writeBack_ENV_CTRL = vlSelf->__PVT__execute_to_memory_ENV_CTRL;
    vlSelf->__PVT__memory_to_writeBack_PC = vlSelf->__PVT__execute_to_memory_PC;
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
        vlSelf->__PVT__execute_to_memory_MEMORY_STORE 
            = vlSelf->__PVT__decode_to_execute_MEMORY_STORE;
    }
    vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE 
        = vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE;
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_RS2_USE = 
            (1U & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                   >> 0xcU));
        vlSelf->__PVT__decode_to_execute_RS1_USE = 
            (1U & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                   >> 4U));
    }
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address 
        = (0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                    >> 7U));
    if (__Vdlyvset__RegFilePlugin_regFile__v0) {
        vlSelf->RegFilePlugin_regFile[__Vdlyvdim0__RegFilePlugin_regFile__v0] 
            = __Vdlyvval__RegFilePlugin_regFile__v0;
    }
    if (vlSelf->__PVT__CsrPlugin_mstatus_MIE) {
        if (vlSelf->__PVT___zz_when_CsrPlugin_l1302) {
            vlSelf->CsrPlugin_interrupt_code = 7U;
        }
        if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_1) {
            vlSelf->CsrPlugin_interrupt_code = 3U;
        }
        if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_2) {
            vlSelf->CsrPlugin_interrupt_code = 0xbU;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_CsrPlugin_csr_836 = 
            (0x344U == (vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
                        >> 0x14U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_834) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = ((0x7fffffffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mcause_interrupt) 
                  << 0x1fU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = ((0xfffffff0U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
               | (IData)(vlSelf->__PVT__CsrPlugin_mcause_exceptionCode));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
        vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA 
            = vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA;
    }
    vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted 
        = vlSelf->__PVT__memory_to_writeBack_MEMORY_READ_DATA;
    if ((1U == (IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffffff00U & vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (0xffU & (vlSelf->__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                           >> 8U)));
    } else if ((2U == (IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffff0000U & vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (vlSelf->__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                  >> 0x10U));
    } else if ((3U == (IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffffff00U & vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (vlSelf->__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                  >> 0x18U));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
        vlSelf->__PVT__execute_to_memory_MEMORY_ADDRESS_LOW 
            = (3U & vlSelf->__PVT__execute_SrcPlugin_addSub);
        vlSelf->__PVT__execute_to_memory_ENV_CTRL = vlSelf->__PVT__decode_to_execute_ENV_CTRL;
        vlSelf->lastStagePc = vlSelf->__PVT__memory_to_writeBack_PC;
        vlSelf->__PVT__execute_to_memory_PC = vlSelf->__PVT__decode_to_execute_PC;
    } else {
        vlSelf->lastStagePc = vlSelf->__PVT__memory_to_writeBack_PC;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_MEMORY_STORE 
            = (1U & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                     >> 0xaU));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
        vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE 
            = vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
            = ((0xfffff7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP) 
                  << 0xbU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP) 
                  << 3U));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_ENV_CTRL = 
            (1U & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                   >> 0xeU));
        vlSelf->__PVT__decode_to_execute_PC = vlSelf->IBusSimplePlugin_fetchPc_pcReg;
        vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE 
            = (1U & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                     >> 3U));
    }
}

VL_INLINE_OPT void VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__4(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__4\n"); );
    // Init
    CData/*0:0*/ __PVT__IBusSimplePlugin_fetcherHalt;
    CData/*0:0*/ __PVT__CsrPlugin_pipelineLiberator_done;
    CData/*2:0*/ __Vdly__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter;
    // Body
    __Vdly__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter 
        = vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter;
    vlSelf->__Vdly__CsrPlugin_mstatus_MIE = vlSelf->__PVT__CsrPlugin_mstatus_MIE;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__IBusSimplePlugin_fetchPc_inc = 0U;
        vlSelf->IBusSimplePlugin_fetchPc_pcReg = 0x80000000U;
        vlSelf->__PVT__CsrPlugin_mie_MEIE = 0U;
        vlSelf->__PVT__CsrPlugin_mie_MTIE = 0U;
        vlSelf->__PVT__CsrPlugin_mie_MSIE = 0U;
        vlSelf->CsrPlugin_hadException = 0U;
        vlSelf->__PVT__CsrPlugin_interrupt_valid = 0U;
        vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1 = 0U;
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
        __Vdly__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter = 0U;
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid = 0U;
        vlSelf->__PVT__CsrPlugin_mstatus_MPP = 3U;
        vlSelf->__Vdly__CsrPlugin_mstatus_MIE = 0U;
    } else {
        if (((IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_correction) 
             | (IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_pcRegPropagate))) {
            vlSelf->__PVT__IBusSimplePlugin_fetchPc_inc = 0U;
        }
        if (vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_fire) {
            vlSelf->__PVT__IBusSimplePlugin_fetchPc_inc = 1U;
        }
        if (((~ (IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_valid)) 
             & (IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready))) {
            vlSelf->__PVT__IBusSimplePlugin_fetchPc_inc = 0U;
        }
        if (((IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_booted) 
             & (((IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready) 
                 | (IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_correction)) 
                | (IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_pcRegPropagate)))) {
            vlSelf->IBusSimplePlugin_fetchPc_pcReg 
                = vlSelf->__PVT__IBusSimplePlugin_fetchPc_pc;
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_772) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__PVT__CsrPlugin_mie_MEIE = 
                    (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                           >> 0xbU));
                vlSelf->__PVT__CsrPlugin_mie_MTIE = 
                    (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                           >> 7U));
                vlSelf->__PVT__CsrPlugin_mie_MSIE = 
                    (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                           >> 3U));
            }
        }
        vlSelf->CsrPlugin_hadException = 0U;
        vlSelf->__PVT__CsrPlugin_interrupt_valid = 0U;
        if (vlSelf->__PVT__CsrPlugin_mstatus_MIE) {
            if (vlSelf->__PVT___zz_when_CsrPlugin_l1302) {
                vlSelf->__PVT__CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_1) {
                vlSelf->__PVT__CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_2) {
                vlSelf->__PVT__CsrPlugin_interrupt_valid = 1U;
            }
        }
        if (vlSelf->CsrPlugin_interruptJump) {
            vlSelf->__PVT__CsrPlugin_interrupt_valid = 0U;
        }
        if (vlSelf->__PVT__decode_arbitration_removeIt) {
            vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1 = 0U;
        }
        if (vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_1_output_ready) {
            vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1 
                = ((IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_valid) 
                   & (~ (IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_halt)));
        }
        if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 
                = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1;
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1340) {
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
        }
        __Vdly__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter 
            = (7U & ((IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter) 
                     - (IData)(vlSelf->__PVT___zz_IBusSimplePlugin_rspJoin_rspBuffer_discardCounter_1)));
        if (vlSelf->__PVT__decode_arbitration_removeIt) {
            __Vdly__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter 
                = (7U & ((IData)(vlSelf->__PVT__IBusSimplePlugin_pending_value) 
                         - (IData)(vlSelf->__PVT__toplevel_IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_fire)));
        }
        if (vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_push_ready) {
            vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid 
                = vlSymsp->TOP.iBus_rsp_valid;
        }
        if (vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__oneStage_doFlush) {
            vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid = 0U;
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1390) {
            if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPP = 3U;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1456) {
            if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPP = 0U;
            }
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                if ((3U == (3U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                  >> 0xbU)))) {
                    vlSelf->__PVT__CsrPlugin_mstatus_MPP = 3U;
                }
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1390) {
            if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege))) {
                vlSelf->__Vdly__CsrPlugin_mstatus_MIE = 0U;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1456) {
            if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSelf->__Vdly__CsrPlugin_mstatus_MIE 
                    = vlSelf->__PVT__CsrPlugin_mstatus_MPIE;
            }
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__Vdly__CsrPlugin_mstatus_MIE 
                    = (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                             >> 3U));
            }
        }
    }
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid 
        = ((~ (IData)(vlSymsp->TOP.reset)) & ((IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                                              & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid)));
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter 
        = __Vdly__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter;
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_booted 
        = (1U & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__CsrPlugin_pipelineLiberator_done = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2;
    if (vlSelf->CsrPlugin_hadException) {
        __PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
        vlSelf->__PVT__IBusSimplePlugin_pending_value = 0U;
        vlSelf->__PVT__CsrPlugin_mstatus_MPIE = 0U;
        vlSelf->__PVT__writeBack_arbitration_isValid = 0U;
    } else {
        if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
                vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 
                    = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1340) {
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
        }
        vlSelf->__PVT__IBusSimplePlugin_pending_value 
            = vlSelf->__PVT__IBusSimplePlugin_pending_next;
        if (vlSelf->__PVT__when_CsrPlugin_l1390) {
            if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPIE 
                    = vlSelf->__PVT__CsrPlugin_mstatus_MIE;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1456) {
            if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPIE = 1U;
            }
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPIE 
                    = (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                             >> 7U));
            }
        }
        vlSelf->__PVT__writeBack_arbitration_isValid = 0U;
        if ((1U & ((~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)) 
                   & (~ (IData)(vlSelf->__PVT__memory_arbitration_removeIt))))) {
            vlSelf->__PVT__writeBack_arbitration_isValid 
                = vlSelf->__PVT__memory_arbitration_isValid;
        }
    }
    vlSelf->CsrPlugin_interruptJump = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
                                       & (IData)(__PVT__CsrPlugin_pipelineLiberator_done));
    vlSelf->__PVT__when_CsrPlugin_l1390 = ((IData)(vlSelf->CsrPlugin_hadException) 
                                           | (IData)(vlSelf->CsrPlugin_interruptJump));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
    } else {
        if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
                vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 1U;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1340) {
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
        }
    }
    vlSelf->lastStageIsValid = vlSelf->__PVT__writeBack_arbitration_isValid;
    vlSelf->lastStageIsFiring = vlSelf->__PVT__writeBack_arbitration_isValid;
    vlSelf->__PVT__when_CsrPlugin_l1456 = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
                                           & (IData)(vlSelf->__PVT__memory_to_writeBack_ENV_CTRL));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__memory_arbitration_isValid = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)) 
                   | (IData)(vlSelf->__PVT__memory_arbitration_removeIt)))) {
            vlSelf->__PVT__memory_arbitration_isValid = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)) 
                   & (~ (IData)(vlSelf->__PVT__execute_arbitration_removeIt))))) {
            vlSelf->__PVT__memory_arbitration_isValid 
                = vlSelf->__PVT__execute_arbitration_isValid;
        }
    }
    vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 0U;
    if (vlSelf->__PVT__when_CsrPlugin_l1390) {
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1456) {
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    __PVT__IBusSimplePlugin_fetcherHalt = 0U;
    if (vlSelf->__PVT__when_CsrPlugin_l1390) {
        __PVT__IBusSimplePlugin_fetcherHalt = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1456) {
        __PVT__IBusSimplePlugin_fetcherHalt = 1U;
    }
    vlSelf->__PVT__writeBack_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__when_CsrPlugin_l1390) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1456) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_valid 
        = ((~ (IData)(__PVT__IBusSimplePlugin_fetcherHalt)) 
           & (IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_booted));
    vlSelf->__PVT__memory_arbitration_removeIt = 0U;
    if (vlSelf->__PVT__writeBack_arbitration_flushNext) {
        vlSelf->__PVT__memory_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__execute_arbitration_isValid = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)) 
                   | (IData)(vlSelf->__PVT__execute_arbitration_removeIt)))) {
            vlSelf->__PVT__execute_arbitration_isValid = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)) 
                   & (~ (IData)(vlSelf->__PVT__decode_arbitration_removeIt))))) {
            vlSelf->__PVT__execute_arbitration_isValid 
                = vlSelf->__PVT__IBusSimplePlugin_rspJoin_join_valid;
        }
    }
    vlSelf->__PVT__execute_arbitration_removeIt = 0U;
    if (vlSelf->__PVT__writeBack_arbitration_flushNext) {
        vlSelf->__PVT__execute_arbitration_removeIt = 1U;
    }
    vlSelf->__PVT__execute_CsrPlugin_writeInstruction 
        = (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
            & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR)) 
           & (IData)(vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE));
    if (vlSelf->__PVT__when_CsrPlugin_l1719) {
        vlSelf->__PVT__execute_CsrPlugin_writeInstruction = 0U;
    }
}

VL_INLINE_OPT void VVexRiscv_VexRiscv___combo__TOP__VexRiscv__6(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___combo__TOP__VexRiscv__6\n"); );
    // Init
    CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid;
    // Body
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid 
        = vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid)))) {
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid 
            = vlSymsp->TOP.iBus_rsp_valid;
    }
    vlSelf->__PVT__memory_arbitration_haltItself = 0U;
    if (((((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
           & (IData)(vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE)) 
          & (~ (IData)(vlSelf->__PVT__execute_to_memory_MEMORY_STORE))) 
         & (~ (IData)(vlSymsp->TOP.dBus_rsp_ready)))) {
        vlSelf->__PVT__memory_arbitration_haltItself = 1U;
    }
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
        = vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rData_inst;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid)))) {
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
            = vlSymsp->TOP.iBus_rsp_payload_inst;
    }
    vlSelf->__PVT___zz_IBusSimplePlugin_rspJoin_rspBuffer_discardCounter_1 
        = ((IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
           & (0U != (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid 
        = ((IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
           & (0U == (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
    vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED = (
                                                   ((0x5010U 
                                                     == 
                                                     (0x7054U 
                                                      & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                    << 0x18U) 
                                                   | ((((0x40001010U 
                                                         == 
                                                         (0x40003054U 
                                                          & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                        | (0x1010U 
                                                           == 
                                                           (0x7054U 
                                                            & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst))) 
                                                       << 0x17U) 
                                                      | ((((0x48U 
                                                            == 
                                                            (0x48U 
                                                             & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                           | (4U 
                                                              == 
                                                              (0x1cU 
                                                               & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst))) 
                                                          << 0x16U) 
                                                         | (((0x40U 
                                                              == 
                                                              (0x58U 
                                                               & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                             << 0x15U) 
                                                            | (((0x24U 
                                                                 == 
                                                                 (0x64U 
                                                                  & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                << 0x14U) 
                                                               | (((0x1000U 
                                                                    == 
                                                                    (0x1000U 
                                                                     & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                   << 0x13U) 
                                                                  | (((0x2000U 
                                                                       == 
                                                                       (0x3000U 
                                                                        & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                      << 0x12U) 
                                                                     | ((((0x2000U 
                                                                           == 
                                                                           (0x2010U 
                                                                            & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                          | (0x1000U 
                                                                             == 
                                                                             (0x5000U 
                                                                              & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst))) 
                                                                         << 0x11U) 
                                                                        | (((0x4000U 
                                                                             == 
                                                                             (0x4004U 
                                                                              & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                            << 0x10U) 
                                                                           | (((0x2000U 
                                                                                == 
                                                                                (0x6004U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                               << 0xfU) 
                                                                              | (((0x50U 
                                                                                == 
                                                                                (0x3050U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                << 0xeU) 
                                                                                | ((((0x1050U 
                                                                                == 
                                                                                (0x1050U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | (0x2050U 
                                                                                == 
                                                                                (0x2050U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst))) 
                                                                                << 0xdU) 
                                                                                | ((((0x20U 
                                                                                == 
                                                                                (0x34U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x64U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst))) 
                                                                                << 0xcU) 
                                                                                | ((((0x40U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | (0x40U 
                                                                                == 
                                                                                (0x3040U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)))) 
                                                                                << 0xbU) 
                                                                                | (((0x20U 
                                                                                == 
                                                                                (0x20U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                << 0xaU) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                << 9U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                << 8U) 
                                                                                | ((((0x48U 
                                                                                == 
                                                                                (0x48U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | ((0x1010U 
                                                                                == 
                                                                                (0x1010U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | ((0x2010U 
                                                                                == 
                                                                                (0x2010U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | ((0x10U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | ((4U 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst))))))) 
                                                                                << 7U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (4U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x70U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst))) 
                                                                                << 6U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (4U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x20U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst))) 
                                                                                << 5U) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | ((0x2000U 
                                                                                == 
                                                                                (0x6004U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | (0x1000U 
                                                                                == 
                                                                                (0x5004U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst))))) 
                                                                                << 4U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x58U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                << 3U) 
                                                                                | ((((0x40U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | ((0x2010U 
                                                                                == 
                                                                                (0x2014U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | (0x40000030U 
                                                                                == 
                                                                                (0x40000034U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)))) 
                                                                                << 2U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | (0x4050U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst))) 
                                                                                << 1U) 
                                                                                | ((4U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)) 
                                                                                | (0x4050U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst)))))))))))))))))))))))))));
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_join_valid 
        = ((IData)(vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1) 
           & (IData)(__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid));
    vlSelf->__PVT__decode_REGFILE_WRITE_VALID = (1U 
                                                 & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                                                    >> 7U));
    if ((0U == (0x1fU & (vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
                         >> 7U)))) {
        vlSelf->__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_active 
        = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_join_valid));
    vlSelf->__PVT__decode_arbitration_haltByOther = 0U;
    if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
    if ((((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
          & (IData)(vlSelf->__PVT__memory_to_writeBack_ENV_CTRL)) 
         | (((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
             & (IData)(vlSelf->__PVT__execute_to_memory_ENV_CTRL)) 
            | ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
               & (IData)(vlSelf->__PVT__decode_to_execute_ENV_CTRL))))) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
}

VL_INLINE_OPT void VVexRiscv_VexRiscv___combo__TOP__VexRiscv__8(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___combo__TOP__VexRiscv__8\n"); );
    // Init
    CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready;
    CData/*0:0*/ __PVT__execute_arbitration_haltItself;
    CData/*0:0*/ __PVT__execute_arbitration_flushNext;
    CData/*0:0*/ __PVT__BranchPlugin_jumpInterface_valid;
    CData/*0:0*/ __PVT__IBusSimplePlugin_jump_pcLoad_valid;
    CData/*1:0*/ __PVT___zz_IBusSimplePlugin_jump_pcLoad_payload;
    CData/*0:0*/ __PVT__IBusSimplePlugin_cmdFork_canEmit;
    CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_join_fire;
    // Body
    vlSelf->__PVT__execute_arbitration_isStuckByOthers 
        = ((IData)(vlSelf->__PVT__execute_arbitration_haltByOther) 
           | (IData)(vlSelf->__PVT__memory_arbitration_haltItself));
    __PVT__execute_arbitration_haltItself = 0U;
    if ((((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
          & (IData)(vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE)) 
         & (~ (IData)(vlSymsp->TOP.dBus_cmd_ready)))) {
        __PVT__execute_arbitration_haltItself = 1U;
    }
    if (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR))) {
        if ((((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
              | (IData)(vlSelf->__PVT__memory_arbitration_isValid)) 
             | (IData)(vlSelf->__PVT__execute_arbitration_isStuckByOthers))) {
            __PVT__execute_arbitration_haltItself = 1U;
        }
    }
    __PVT__BranchPlugin_jumpInterface_valid = (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
                                                & ((0U 
                                                    != (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
                                                   & ((2U 
                                                       == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
                                                      | ((3U 
                                                          == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
                                                         | (IData)(vlSelf->__PVT___zz_execute_BRANCH_DO))))) 
                                               & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuckByOthers)));
    vlSelf->__PVT__execute_arbitration_isStuck = ((IData)(__PVT__execute_arbitration_haltItself) 
                                                  | (IData)(vlSelf->__PVT__execute_arbitration_isStuckByOthers));
    __PVT___zz_IBusSimplePlugin_jump_pcLoad_payload 
        = (((IData)(__PVT__BranchPlugin_jumpInterface_valid) 
            << 1U) | (IData)(vlSelf->__PVT__CsrPlugin_jumpInterface_valid));
    __PVT__IBusSimplePlugin_jump_pcLoad_valid = ((IData)(__PVT__BranchPlugin_jumpInterface_valid) 
                                                 | (IData)(vlSelf->__PVT__CsrPlugin_jumpInterface_valid));
    __PVT__execute_arbitration_flushNext = 0U;
    if (__PVT__BranchPlugin_jumpInterface_valid) {
        __PVT__execute_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__execute_CsrPlugin_writeEnable = 
        ((IData)(vlSelf->__PVT__execute_CsrPlugin_writeInstruction) 
         & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)));
    vlSelf->__PVT__execute_RegFilePlugin_srcInstruction 
        = ((IData)(vlSelf->__PVT__execute_arbitration_isStuck)
            ? vlSelf->__PVT__decode_to_execute_INSTRUCTION
            : vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst);
    vlSelf->__PVT__decode_arbitration_isStuckByOthers 
        = ((IData)(vlSelf->__PVT__decode_arbitration_haltByOther) 
           | ((IData)(vlSelf->__PVT__execute_arbitration_isStuck) 
              | (IData)(vlSelf->__PVT__memory_arbitration_haltItself)));
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_correction = 0U;
    if (__PVT__IBusSimplePlugin_jump_pcLoad_valid) {
        vlSelf->__PVT__IBusSimplePlugin_fetchPc_correction = 1U;
    }
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_pc = (vlSelf->IBusSimplePlugin_fetchPc_pcReg 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_inc) 
                                                   << 2U));
    if (__PVT__IBusSimplePlugin_jump_pcLoad_valid) {
        vlSelf->__PVT__IBusSimplePlugin_fetchPc_pc 
            = ((1U & ((IData)(__PVT___zz_IBusSimplePlugin_jump_pcLoad_payload) 
                      & (~ ((IData)(__PVT___zz_IBusSimplePlugin_jump_pcLoad_payload) 
                            - (IData)(1U))))) ? vlSelf->__PVT__CsrPlugin_jumpInterface_payload
                : (0xfffffffeU & vlSelf->__PVT__execute_BranchPlugin_branchAdder));
    }
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_pc = (0xfffffffcU 
                                                  & vlSelf->__PVT__IBusSimplePlugin_fetchPc_pc);
    vlSelf->__PVT__decode_arbitration_removeIt = 0U;
    if (((IData)(vlSelf->__PVT__writeBack_arbitration_flushNext) 
         | (IData)(__PVT__execute_arbitration_flushNext))) {
        vlSelf->__PVT__decode_arbitration_removeIt = 1U;
    }
    __PVT__IBusSimplePlugin_rspJoin_join_fire = ((IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_join_valid) 
                                                 & (~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)));
    vlSelf->__PVT__when_CsrPlugin_l1340 = (1U & ((~ (IData)(vlSelf->__PVT__CsrPlugin_pipelineLiberator_active)) 
                                                 | (IData)(vlSelf->__PVT__decode_arbitration_removeIt)));
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready 
        = ((IData)(__PVT__IBusSimplePlugin_rspJoin_join_fire) 
           | ((0U != (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)) 
              | (IData)(vlSelf->__PVT__decode_arbitration_removeIt)));
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_1_output_ready 
        = (1U & ((IData)(vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1)
                  ? (IData)(__PVT__IBusSimplePlugin_rspJoin_join_fire)
                  : (~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers))));
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__oneStage_doFlush = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid)))) {
        if (__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready) {
            vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__oneStage_doFlush = 1U;
            vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_push_ready = 1U;
        } else {
            vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_push_ready = 0U;
        }
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_push_ready = 1U;
    } else {
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_push_ready 
            = __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready;
    }
    vlSelf->__PVT__toplevel_IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_fire 
        = ((IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
           & (IData)(__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready));
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_1_output_ready) {
        vlSelf->__PVT__IBusSimplePlugin_fetchPc_pcRegPropagate = 1U;
        __PVT__IBusSimplePlugin_cmdFork_canEmit = (7U 
                                                   != (IData)(vlSelf->__PVT__IBusSimplePlugin_pending_value));
    } else {
        __PVT__IBusSimplePlugin_cmdFork_canEmit = 0U;
    }
    vlSelf->__PVT__IBusSimplePlugin_cmd_valid = ((IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_valid) 
                                                 & (IData)(__PVT__IBusSimplePlugin_cmdFork_canEmit));
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_halt = 0U;
    if (((IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_valid) 
         & ((~ (IData)(__PVT__IBusSimplePlugin_cmdFork_canEmit)) 
            | (~ (IData)(vlSymsp->TOP.iBus_cmd_ready))))) {
        vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_halt = 1U;
    }
    vlSelf->__PVT__IBusSimplePlugin_pending_next = 
        (7U & (((IData)(vlSelf->__PVT__IBusSimplePlugin_pending_value) 
                + ((IData)(vlSelf->__PVT__IBusSimplePlugin_cmd_valid) 
                   & (IData)(vlSymsp->TOP.iBus_cmd_ready))) 
               - (IData)(vlSelf->__PVT__toplevel_IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_fire)));
    vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready 
        = ((IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_1_output_ready) 
           & (~ (IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_halt)));
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_fire 
        = ((IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_valid) 
           & (IData)(vlSelf->__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready));
}
