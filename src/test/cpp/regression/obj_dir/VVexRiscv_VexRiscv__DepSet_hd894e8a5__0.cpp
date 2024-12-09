// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv_VexRiscv.h"

extern const VlUnpacked<CData/*0:0*/, 32> VVexRiscv__ConstPool__TABLE_h1ee20e3d_0;

VL_INLINE_OPT void VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__5(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__5\n"); );
    // Init
    CData/*4:0*/ __Vtableidx22;
    // Body
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_CsrPlugin_csr_772 = 
            (0x304U == (vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
                        >> 0x14U));
    }
    vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID 
        = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID;
    if (vlSelf->__PVT__CsrPlugin_mstatus_MIE) {
        if (vlSelf->__PVT___zz_when_CsrPlugin_l1302) {
            vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
        if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_1) {
            vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
        if (vlSelf->__PVT___zz_when_CsrPlugin_l1302_2) {
            vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_CsrPlugin_csr_768 = 
            (0x300U == (vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
                        >> 0x14U));
    }
    vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
        = vlSelf->__PVT__execute_to_memory_INSTRUCTION;
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
        vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID 
            = vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID;
    }
    vlSelf->__PVT__CsrPlugin_xtvec_base = vlSelf->__Vxrand_h4700d425__0;
    if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege))) {
        vlSelf->__PVT__CsrPlugin_xtvec_base = 8U;
    }
    vlSelf->lastStageInstruction = vlSelf->__PVT__memory_to_writeBack_INSTRUCTION;
    vlSelf->lastStageRegFileWrite_payload_address = 
        (0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                  >> 7U));
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_haltItself)))) {
        vlSelf->__PVT__execute_to_memory_INSTRUCTION 
            = vlSelf->__PVT__decode_to_execute_INSTRUCTION;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID 
            = vlSelf->__PVT__decode_REGFILE_WRITE_VALID;
        vlSelf->__PVT__decode_to_execute_INSTRUCTION 
            = vlSelf->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst;
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
    __Vtableidx22 = (((vlSelf->__PVT___zz_execute_SRC1 
                       == vlSelf->__PVT___zz_execute_SRC2_4) 
                      << 4U) | (((IData)(vlSelf->__PVT__execute_SrcPlugin_less) 
                                 << 3U) | (7U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0xcU))));
    vlSelf->__PVT___zz_execute_BRANCH_DO = VVexRiscv__ConstPool__TABLE_h1ee20e3d_0
        [__Vtableidx22];
}

extern const VlUnpacked<CData/*0:0*/, 128> VVexRiscv__ConstPool__TABLE_hebbe5b07_0;

VL_INLINE_OPT void VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__7(VVexRiscv_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__7\n"); );
    // Init
    IData/*31:0*/ __PVT___zz_lastStageRegFileWrite_payload_data;
    IData/*31:0*/ __PVT__CsrPlugin_csrMapping_readDataInit;
    CData/*0:0*/ __PVT__HazardSimplePlugin_src0Hazard;
    CData/*0:0*/ __PVT__HazardSimplePlugin_src1Hazard;
    CData/*0:0*/ __PVT__when_HazardSimplePlugin_l57;
    CData/*0:0*/ __PVT__when_HazardSimplePlugin_l57_1;
    IData/*31:0*/ __PVT__execute_LightShifterPlugin_shiftInput;
    IData/*31:0*/ __PVT___zz_CsrPlugin_csrMapping_readDataInit;
    IData/*31:0*/ __PVT___zz_CsrPlugin_csrMapping_readDataInit_2;
    CData/*6:0*/ __Vtableidx20;
    CData/*6:0*/ __Vtableidx21;
    // Body
    vlSelf->__PVT___zz_when_CsrPlugin_l1302 = ((IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP) 
                                               & (IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE));
    vlSelf->__PVT___zz_when_CsrPlugin_l1302_1 = ((IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP) 
                                                 & (IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE));
    vlSelf->__PVT___zz_when_CsrPlugin_l1302_2 = ((IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP) 
                                                 & (IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE));
    vlSelf->__PVT__CsrPlugin_mstatus_MIE = vlSelf->__Vdly__CsrPlugin_mstatus_MIE;
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
    __PVT__when_HazardSimplePlugin_l57 = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
                                          & (IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
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
    vlSelf->lastStageRegFileWrite_valid = ((IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                                           & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid));
    if ((0U == (IData)(vlSelf->lastStageRegFileWrite_payload_address))) {
        vlSelf->lastStageRegFileWrite_valid = 0U;
    }
    __PVT__when_HazardSimplePlugin_l57_1 = ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
                                            & (IData)(vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    if (vlSelf->__PVT__execute_LightShifterPlugin_isActive) {
        __PVT__execute_LightShifterPlugin_shiftInput 
            = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA;
        vlSelf->__PVT__execute_LightShifterPlugin_amplitude 
            = (0x1fU & (IData)(vlSelf->__PVT__execute_LightShifterPlugin_amplitudeReg));
    } else {
        __PVT__execute_LightShifterPlugin_shiftInput 
            = vlSelf->__PVT___zz_execute_SRC1;
        vlSelf->__PVT__execute_LightShifterPlugin_amplitude 
            = (0x1fU & vlSelf->__PVT___zz_execute_SRC2_4);
    }
    vlSelf->__PVT__when_ShiftPlugins_l169 = (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
                                              & (0U 
                                                 != (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL))) 
                                             & (0U 
                                                != 
                                                (0x1fU 
                                                 & vlSelf->__PVT___zz_execute_SRC2_4)));
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
    vlSelf->lastStageRegFileWrite_payload_data = __PVT___zz_lastStageRegFileWrite_payload_data;
    vlSelf->__PVT___zz_1 = 0U;
    if (vlSelf->lastStageRegFileWrite_valid) {
        vlSelf->__PVT___zz_1 = 1U;
    }
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
    __PVT__CsrPlugin_csrMapping_readDataInit = ((__PVT___zz_CsrPlugin_csrMapping_readDataInit 
                                                 | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1) 
                                                | (__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
                                                   | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3));
    vlSelf->__PVT__execute_arbitration_haltByOther = 0U;
    if (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & ((IData)(__PVT__HazardSimplePlugin_src0Hazard) 
            | (IData)(__PVT__HazardSimplePlugin_src1Hazard)))) {
        vlSelf->__PVT__execute_arbitration_haltByOther = 1U;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
        = ((0x2000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
            ? ((0x1000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                ? (__PVT__CsrPlugin_csrMapping_readDataInit 
                   & (~ vlSelf->__PVT___zz_execute_SRC1))
                : (__PVT__CsrPlugin_csrMapping_readDataInit 
                   | vlSelf->__PVT___zz_execute_SRC1))
            : vlSelf->__PVT___zz_execute_SRC1);
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
    if (vlSelf->__PVT__when_ShiftPlugins_l169) {
        vlSelf->__PVT___zz_execute_to_memory_REGFILE_WRITE_DATA 
            = ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL))
                ? (__PVT__execute_LightShifterPlugin_shiftInput 
                   << 1U) : (IData)((0x1ffffffffULL 
                                     & ((0x7fffffff80000000ULL 
                                         & ((QData)((IData)(
                                                            ((3U 
                                                              == (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                             & (__PVT__execute_LightShifterPlugin_shiftInput 
                                                                >> 0x1fU)))) 
                                            << 0x1fU)) 
                                        | ((QData)((IData)(__PVT__execute_LightShifterPlugin_shiftInput)) 
                                           >> 1U)))));
    }
}
