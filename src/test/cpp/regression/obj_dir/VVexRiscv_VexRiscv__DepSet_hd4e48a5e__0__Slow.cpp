// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv_VexRiscv.h"
#include "VVexRiscv__Syms.h"

extern const VlUnpacked<CData/*0:0*/, 128> VVexRiscv__ConstPool__TABLE_hebbe5b07_0;
extern const VlUnpacked<CData/*0:0*/, 32> VVexRiscv__ConstPool__TABLE_h1ee20e3d_0;

VL_ATTR_COLD void VVexRiscv_VexRiscv___settle__TOP__VexRiscv__2(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___settle__TOP__VexRiscv__2\n"); );
    // Init
    CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready;
    IData/*31:0*/ __PVT___zz_lastStageRegFileWrite_payload_data;
    CData/*0:0*/ __PVT__execute_arbitration_haltItself;
    CData/*0:0*/ __PVT__execute_arbitration_flushNext;
    CData/*0:0*/ __PVT__IBusSimplePlugin_fetcherHalt;
    IData/*31:0*/ __PVT__CsrPlugin_csrMapping_readDataInit;
    CData/*0:0*/ __PVT__BranchPlugin_jumpInterface_valid;
    CData/*0:0*/ __PVT__IBusSimplePlugin_jump_pcLoad_valid;
    CData/*1:0*/ __PVT___zz_IBusSimplePlugin_jump_pcLoad_payload;
    CData/*0:0*/ __PVT__IBusSimplePlugin_cmdFork_canEmit;
    CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid;
    CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_join_fire;
    CData/*0:0*/ __PVT__CsrPlugin_pipelineLiberator_done;
    CData/*0:0*/ __PVT__HazardSimplePlugin_src0Hazard;
    CData/*0:0*/ __PVT__HazardSimplePlugin_src1Hazard;
    CData/*0:0*/ __PVT__when_HazardSimplePlugin_l57;
    CData/*0:0*/ __PVT__when_HazardSimplePlugin_l57_1;
    IData/*31:0*/ __PVT__execute_FullBarrelShifterPlugin_reversed;
    IData/*31:0*/ __PVT___zz_CsrPlugin_csrMapping_readDataInit;
    IData/*31:0*/ __PVT___zz_CsrPlugin_csrMapping_readDataInit_2;
    CData/*6:0*/ __Vtableidx20;
    CData/*6:0*/ __Vtableidx21;
    CData/*4:0*/ __Vtableidx22;
    // Body
    vlSelf->__PVT__when_CsrPlugin_l1719 = 0U;
    vlSelf->lastStagePc = vlSelf->__PVT__memory_to_writeBack_PC;
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
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid 
        = vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid)))) {
        vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid 
            = vlSymsp->TOP.iBus_rsp_valid;
    }
    vlSelf->lastStageIsValid = vlSelf->__PVT__writeBack_arbitration_isValid;
    vlSelf->lastStageIsFiring = vlSelf->__PVT__writeBack_arbitration_isValid;
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
    __PVT___zz_CsrPlugin_csrMapping_readDataInit_2 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_772) {
        __PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = ((0xfffff7ffU & __PVT___zz_CsrPlugin_csrMapping_readDataInit_2) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE) 
                  << 0xbU));
        __PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = ((0xffffff7fU & __PVT___zz_CsrPlugin_csrMapping_readDataInit_2) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE) 
                  << 7U));
        __PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = ((0xfffffff7U & __PVT___zz_CsrPlugin_csrMapping_readDataInit_2) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE) 
                  << 3U));
    }
    vlSelf->__PVT__when_CsrPlugin_l1456 = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
                                           & (IData)(vlSelf->__PVT__memory_to_writeBack_ENV_CTRL));
    __PVT__CsrPlugin_pipelineLiberator_done = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2;
    if (vlSelf->CsrPlugin_hadException) {
        __PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    __PVT__when_HazardSimplePlugin_l57 = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
                                          & (IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    vlSelf->__PVT___zz_when_CsrPlugin_l1302 = ((IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP) 
                                               & (IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE));
    vlSelf->__PVT___zz_when_CsrPlugin_l1302_1 = ((IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP) 
                                                 & (IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE));
    vlSelf->__PVT___zz_when_CsrPlugin_l1302_2 = ((IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP) 
                                                 & (IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE));
    vlSelf->lastStageInstruction = vlSelf->__PVT__memory_to_writeBack_INSTRUCTION;
    vlSelf->lastStageRegFileWrite_payload_address = 
        (0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                  >> 7U));
    __PVT___zz_CsrPlugin_csrMapping_readDataInit = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
        __PVT___zz_CsrPlugin_csrMapping_readDataInit 
            = ((0xffffff7fU & __PVT___zz_CsrPlugin_csrMapping_readDataInit) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MPIE) 
                  << 7U));
        __PVT___zz_CsrPlugin_csrMapping_readDataInit 
            = ((0xfffffff7U & __PVT___zz_CsrPlugin_csrMapping_readDataInit) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MIE) 
                  << 3U));
        __PVT___zz_CsrPlugin_csrMapping_readDataInit 
            = ((0xffffe7ffU & __PVT___zz_CsrPlugin_csrMapping_readDataInit) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MPP) 
                  << 0xbU));
    }
    __PVT__when_HazardSimplePlugin_l57_1 = ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
                                            & (IData)(vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID));
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
    vlSelf->__PVT__execute_BranchPlugin_branchAdder 
        = (((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
             ? vlSelf->__PVT__RegFilePlugin_regFile_spinal_port0
             : vlSelf->__PVT__decode_to_execute_PC) 
           + ((2U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
               ? (((- (IData)((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                               >> 0x1fU))) << 0x15U) 
                  | ((0x100000U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                   >> 0xbU)) | ((0xff000U 
                                                 & vlSelf->__PVT__decode_to_execute_INSTRUCTION) 
                                                | ((0x800U 
                                                    & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                         >> 0x14U))))))
               : ((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
                   ? (((- (IData)((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                   >> 0x1fU))) << 0xcU) 
                      | (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x14U)) : (((- (IData)(
                                                   (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x1fU))) 
                                        << 0xdU) | 
                                       ((0x1000U & 
                                         (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 7U)))))))));
    vlSelf->__PVT___zz_execute_SRC2_4 = ((0U == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                          ? vlSelf->__PVT__RegFilePlugin_regFile_spinal_port1
                                          : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                              ? (((- (IData)(
                                                             (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x14U))
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                           >> 7U))))
                                                  : vlSelf->__PVT__decode_to_execute_PC)));
    vlSelf->__PVT___zz_execute_SRC1 = ((0U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                        ? vlSelf->__PVT__RegFilePlugin_regFile_spinal_port0
                                        : ((2U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                            ? 4U : 
                                           ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                             ? (0xfffff000U 
                                                & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                                             : (0x1fU 
                                                & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xfU)))));
    vlSelf->__PVT__CsrPlugin_xtvec_base = vlSelf->__Vxrand_h4700d425__0;
    if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege))) {
        vlSelf->__PVT__CsrPlugin_xtvec_base = 8U;
    }
    vlSelf->__PVT__execute_CsrPlugin_writeInstruction 
        = (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
            & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR)) 
           & (IData)(vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE));
    __PVT___zz_lastStageRegFileWrite_payload_data = vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE))) {
        __PVT___zz_lastStageRegFileWrite_payload_data 
            = ((0U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                             >> 0xcU))) ? (((- (IData)(
                                                       (1U 
                                                        & ((vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                            >> 7U) 
                                                           & (~ 
                                                              (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                               >> 0xeU)))))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted))
                : ((1U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                 >> 0xcU))) ? (((- (IData)(
                                                           (1U 
                                                            & ((vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                                >> 0xfU) 
                                                               & (~ 
                                                                  (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                                   >> 0xeU)))))) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted))
                    : vlSelf->__PVT__writeBack_DBusSimplePlugin_rspShifted));
    }
    vlSelf->__PVT___zz_IBusSimplePlugin_rspJoin_rspBuffer_discardCounter_1 
        = ((IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
           & (0U != (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
    __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid 
        = ((IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
           & (0U == (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
    vlSelf->CsrPlugin_interruptJump = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
                                       & (IData)(__PVT__CsrPlugin_pipelineLiberator_done));
    vlSelf->lastStageRegFileWrite_valid = ((IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                                           & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid));
    if ((0U == (IData)(vlSelf->lastStageRegFileWrite_payload_address))) {
        vlSelf->lastStageRegFileWrite_valid = 0U;
    }
    __PVT__CsrPlugin_csrMapping_readDataInit = ((__PVT___zz_CsrPlugin_csrMapping_readDataInit 
                                                 | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1) 
                                                | (__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
                                                   | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3));
    __Vtableidx20 = ((0x40U & ((~ (IData)(vlSelf->__PVT__decode_to_execute_RS1_USE)) 
                               << 6U)) | ((((0x1fU 
                                             & (vlSelf->__PVT__execute_to_memory_INSTRUCTION 
                                                >> 7U)) 
                                            == (0x1fU 
                                                & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xfU))) 
                                           << 5U) | 
                                          (((IData)(__PVT__when_HazardSimplePlugin_l57_1) 
                                            << 4U) 
                                           | ((((0x1fU 
                                                 & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                    >> 7U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0xfU))) 
                                               << 3U) 
                                              | (((IData)(__PVT__when_HazardSimplePlugin_l57) 
                                                  << 2U) 
                                                 | ((((IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                          >> 0xfU))) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid)))))));
    __PVT__HazardSimplePlugin_src0Hazard = VVexRiscv__ConstPool__TABLE_hebbe5b07_0
        [__Vtableidx20];
    __Vtableidx21 = ((0x40U & ((~ (IData)(vlSelf->__PVT__decode_to_execute_RS2_USE)) 
                               << 6U)) | ((((0x1fU 
                                             & (vlSelf->__PVT__execute_to_memory_INSTRUCTION 
                                                >> 7U)) 
                                            == (0x1fU 
                                                & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x14U))) 
                                           << 5U) | 
                                          (((IData)(__PVT__when_HazardSimplePlugin_l57_1) 
                                            << 4U) 
                                           | ((((0x1fU 
                                                 & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                    >> 7U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x14U))) 
                                               << 3U) 
                                              | (((IData)(__PVT__when_HazardSimplePlugin_l57) 
                                                  << 2U) 
                                                 | ((((IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                          >> 0x14U))) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid)))))));
    __PVT__HazardSimplePlugin_src1Hazard = VVexRiscv__ConstPool__TABLE_hebbe5b07_0
        [__Vtableidx21];
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
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffffff8U & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((4U & (vlSelf->__PVT___zz_execute_SRC1 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT___zz_execute_SRC1 
                                          >> 0x1dU)) 
                                   | (vlSelf->__PVT___zz_execute_SRC1 
                                      >> 0x1fU))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffffffc7U & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x20U & (vlSelf->__PVT___zz_execute_SRC1 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT___zz_execute_SRC1 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT___zz_execute_SRC1 
                                               >> 0x19U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffffe3fU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x100U & (vlSelf->__PVT___zz_execute_SRC1 
                         >> 0xfU)) | ((0x80U & (vlSelf->__PVT___zz_execute_SRC1 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->__PVT___zz_execute_SRC1 
                                                  >> 0x13U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffff1ffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x800U & (vlSelf->__PVT___zz_execute_SRC1 
                         >> 9U)) | ((0x400U & (vlSelf->__PVT___zz_execute_SRC1 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->__PVT___zz_execute_SRC1 
                                                 >> 0xdU)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffff8fffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x4000U & (vlSelf->__PVT___zz_execute_SRC1 
                          >> 3U)) | ((0x2000U & (vlSelf->__PVT___zz_execute_SRC1 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->__PVT___zz_execute_SRC1 
                                                   >> 7U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffc7fffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x20000U & (vlSelf->__PVT___zz_execute_SRC1 
                           << 3U)) | ((0x10000U & (vlSelf->__PVT___zz_execute_SRC1 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->__PVT___zz_execute_SRC1 
                                          >> 1U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffe3ffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x100000U & (vlSelf->__PVT___zz_execute_SRC1 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->__PVT___zz_execute_SRC1 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->__PVT___zz_execute_SRC1 
                                         << 5U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xff1fffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x800000U & (vlSelf->__PVT___zz_execute_SRC1 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->__PVT___zz_execute_SRC1 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->__PVT___zz_execute_SRC1 
                                               << 0xbU)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xf8ffffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x4000000U & (vlSelf->__PVT___zz_execute_SRC1 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->__PVT___zz_execute_SRC1 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->__PVT___zz_execute_SRC1 
                                                 << 0x11U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xc7ffffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x20000000U & (vlSelf->__PVT___zz_execute_SRC1 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->__PVT___zz_execute_SRC1 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->__PVT___zz_execute_SRC1 
                                                  << 0x17U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0x3fffffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((vlSelf->__PVT___zz_execute_SRC1 << 0x1fU) 
              | (0x40000000U & (vlSelf->__PVT___zz_execute_SRC1 
                                << 0x1dU))));
    vlSelf->__PVT__execute_SrcPlugin_addSub = ((vlSelf->__PVT___zz_execute_SRC1 
                                                + ((IData)(vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                    ? 
                                                   (~ vlSelf->__PVT___zz_execute_SRC2_4)
                                                    : vlSelf->__PVT___zz_execute_SRC2_4)) 
                                               + ((IData)(vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                   ? 1U
                                                   : 0U));
    if (vlSelf->__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
        vlSelf->__PVT__execute_SrcPlugin_addSub = vlSelf->__PVT___zz_execute_SRC1;
    }
    vlSelf->lastStageRegFileWrite_payload_data = __PVT___zz_lastStageRegFileWrite_payload_data;
    vlSelf->__PVT__IBusSimplePlugin_rspJoin_join_valid 
        = ((IData)(vlSelf->__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1) 
           & (IData)(__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid));
    vlSelf->__PVT__when_CsrPlugin_l1390 = ((IData)(vlSelf->CsrPlugin_hadException) 
                                           | (IData)(vlSelf->CsrPlugin_interruptJump));
    vlSelf->__PVT___zz_1 = 0U;
    if (vlSelf->lastStageRegFileWrite_valid) {
        vlSelf->__PVT___zz_1 = 1U;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
        = ((0x2000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
            ? ((0x1000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                ? (__PVT__CsrPlugin_csrMapping_readDataInit 
                   & (~ vlSelf->__PVT___zz_execute_SRC1))
                : (__PVT__CsrPlugin_csrMapping_readDataInit 
                   | vlSelf->__PVT___zz_execute_SRC1))
            : vlSelf->__PVT___zz_execute_SRC1);
    vlSelf->__PVT__execute_arbitration_haltByOther = 0U;
    if (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & ((IData)(__PVT__HazardSimplePlugin_src0Hazard) 
            | (IData)(__PVT__HazardSimplePlugin_src1Hazard)))) {
        vlSelf->__PVT__execute_arbitration_haltByOther = 1U;
    }
    vlSelf->__PVT__decode_REGFILE_WRITE_VALID = (1U 
                                                 & (vlSelf->__PVT___zz_decode_SRC_LESS_UNSIGNED 
                                                    >> 7U));
    if ((0U == (0x1fU & (vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
                         >> 7U)))) {
        vlSelf->__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    __PVT__execute_FullBarrelShifterPlugin_reversed 
        = ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL))
            ? vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed
            : vlSelf->__PVT___zz_execute_SRC1);
    vlSelf->__PVT__execute_SrcPlugin_less = (1U & (
                                                   ((vlSelf->__PVT___zz_execute_SRC1 
                                                     >> 0x1fU) 
                                                    == 
                                                    (vlSelf->__PVT___zz_execute_SRC2_4 
                                                     >> 0x1fU))
                                                    ? 
                                                   (vlSelf->__PVT__execute_SrcPlugin_addSub 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__decode_to_execute_SRC_LESS_UNSIGNED)
                                                     ? 
                                                    (vlSelf->__PVT___zz_execute_SRC2_4 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelf->__PVT___zz_execute_SRC1 
                                                     >> 0x1fU))));
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_active 
        = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSelf->__PVT__IBusSimplePlugin_rspJoin_join_valid));
    vlSelf->__PVT__CsrPlugin_jumpInterface_payload 
        = vlSelf->__Vxrand_h9700cf2a__0;
    if (vlSelf->__PVT__when_CsrPlugin_l1390) {
        vlSelf->__PVT__CsrPlugin_jumpInterface_payload 
            = (vlSelf->__PVT__CsrPlugin_xtvec_base 
               << 2U);
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1456) {
        if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                          >> 0x1cU)))) {
            vlSelf->__PVT__CsrPlugin_jumpInterface_payload 
                = vlSelf->__PVT__CsrPlugin_mepc;
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
    vlSelf->__PVT__execute_arbitration_isStuckByOthers 
        = ((IData)(vlSelf->__PVT__execute_arbitration_haltByOther) 
           | (IData)(vlSelf->__PVT__memory_arbitration_haltItself));
    vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 = (0x1ffffffffULL 
                                                & VL_SHIFTRS_QQI(33,33,5, 
                                                                 (((QData)((IData)(
                                                                                ((3U 
                                                                                == (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                                & (__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                                >> 0x1fU)))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                                 (0x1fU 
                                                                  & vlSelf->__PVT___zz_execute_SRC2_4)));
    __Vtableidx22 = (((vlSelf->__PVT___zz_execute_SRC1 
                       == vlSelf->__PVT___zz_execute_SRC2_4) 
                      << 4U) | (((IData)(vlSelf->__PVT__execute_SrcPlugin_less) 
                                 << 3U) | (7U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0xcU))));
    vlSelf->__PVT___zz_execute_BRANCH_DO = VVexRiscv__ConstPool__TABLE_h1ee20e3d_0
        [__Vtableidx22];
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
    vlSelf->__PVT__IBusSimplePlugin_fetchPc_output_valid 
        = ((~ (IData)(__PVT__IBusSimplePlugin_fetcherHalt)) 
           & (IData)(vlSelf->__PVT__IBusSimplePlugin_fetchPc_booted));
    vlSelf->__PVT__execute_arbitration_removeIt = 0U;
    if (vlSelf->__PVT__writeBack_arbitration_flushNext) {
        vlSelf->__PVT__execute_arbitration_removeIt = 1U;
        vlSelf->__PVT__memory_arbitration_removeIt = 0U;
        vlSelf->__PVT__memory_arbitration_removeIt = 1U;
    } else {
        vlSelf->__PVT__memory_arbitration_removeIt = 0U;
    }
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
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1 
        = ((0xfffffff8U & vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1) 
           | ((4U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                              >> 0x1dU)) << 2U)) | 
              ((2U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                               >> 0x1eU)) << 1U)) | 
               (1U & (IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                              >> 0x1fU))))));
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1 
        = ((0xffffffc7U & vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1) 
           | ((0x20U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                 >> 0x1aU)) << 5U)) 
              | ((0x10U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                    >> 0x1bU)) << 4U)) 
                 | (8U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                   >> 0x1cU)) << 3U)))));
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1 
        = ((0xfffffe3fU & vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1) 
           | ((0x100U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                  >> 0x17U)) << 8U)) 
              | ((0x80U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                    >> 0x18U)) << 7U)) 
                 | (0x40U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                      >> 0x19U)) << 6U)))));
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1 
        = ((0xfffff1ffU & vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1) 
           | ((0x800U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                  >> 0x14U)) << 0xbU)) 
              | ((0x400U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                     >> 0x15U)) << 0xaU)) 
                 | (0x200U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                       >> 0x16U)) << 9U)))));
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1 
        = ((0xffff8fffU & vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1) 
           | ((0x4000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                   >> 0x11U)) << 0xeU)) 
              | ((0x2000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                      >> 0x12U)) << 0xdU)) 
                 | (0x1000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                        >> 0x13U)) 
                               << 0xcU)))));
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1 
        = ((0xfffc7fffU & vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1) 
           | ((0x20000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                    >> 0xeU)) << 0x11U)) 
              | ((0x10000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                       >> 0xfU)) << 0x10U)) 
                 | (0x8000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                        >> 0x10U)) 
                               << 0xfU)))));
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1 
        = ((0xffe3ffffU & vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1) 
           | ((0x100000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                     >> 0xbU)) << 0x14U)) 
              | ((0x80000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                       >> 0xcU)) << 0x13U)) 
                 | (0x40000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                         >> 0xdU)) 
                                << 0x12U)))));
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1 
        = ((0xff1fffffU & vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1) 
           | ((0x800000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                     >> 8U)) << 0x17U)) 
              | ((0x400000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                        >> 9U)) << 0x16U)) 
                 | (0x200000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                          >> 0xaU)) 
                                 << 0x15U)))));
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1 
        = ((0xf8ffffffU & vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1) 
           | ((0x4000000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                      >> 5U)) << 0x1aU)) 
              | ((0x2000000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                         >> 6U)) << 0x19U)) 
                 | (0x1000000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                           >> 7U)) 
                                  << 0x18U)))));
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1 
        = ((0xc7ffffffU & vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1) 
           | ((0x20000000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                       >> 2U)) << 0x1dU)) 
              | ((0x10000000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                          >> 3U)) << 0x1cU)) 
                 | (0x8000000U & ((IData)((vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                           >> 4U)) 
                                  << 0x1bU)))));
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1 
        = ((0x3fffffffU & vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1) 
           | (((IData)(vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1) 
               << 0x1fU) | (0x40000000U & ((IData)(
                                                   (vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1 
                                                    >> 1U)) 
                                           << 0x1eU))));
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
    vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA 
        = ((2U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_CTRL))
            ? ((2U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                ? (vlSelf->__PVT___zz_execute_SRC1 
                   & vlSelf->__PVT___zz_execute_SRC2_4)
                : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                    ? (vlSelf->__PVT___zz_execute_SRC1 
                       | vlSelf->__PVT___zz_execute_SRC2_4)
                    : (vlSelf->__PVT___zz_execute_SRC1 
                       ^ vlSelf->__PVT___zz_execute_SRC2_4)))
            : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_CTRL))
                ? (IData)(vlSelf->__PVT__execute_SrcPlugin_less)
                : vlSelf->__PVT__execute_SrcPlugin_addSub));
    if (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR))) {
        vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA 
            = __PVT__CsrPlugin_csrMapping_readDataInit;
    }
    if (vlSelf->__PVT__execute_arbitration_isValid) {
        if ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL))) {
            vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA 
                = vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA_1;
        } else if (((2U == (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL)) 
                    | (3U == (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL)))) {
            vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA 
                = (IData)(vlSelf->__PVT___zz_execute_SHIFT_RIGHT_1);
        }
    }
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
