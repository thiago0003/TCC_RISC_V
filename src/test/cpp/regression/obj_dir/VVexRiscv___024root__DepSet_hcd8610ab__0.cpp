// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv__Syms.h"
#include "VVexRiscv___024root.h"

VL_INLINE_OPT void VVexRiscv___024root___sequent__TOP__2(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->dBus_cmd_payload_wr = vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_MEMORY_STORE;
}

VL_INLINE_OPT void VVexRiscv___024root___sequent__TOP__3(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->dBus_cmd_payload_size = (3U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0xcU));
    vlSelf->dBus_cmd_payload_data = ((0U == (3U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xcU)))
                                      ? ((vlSymsp->TOP__VexRiscv.__PVT__RegFilePlugin_regFile_spinal_port1 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & (vlSymsp->TOP__VexRiscv.__PVT__RegFilePlugin_regFile_spinal_port1 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (vlSymsp->TOP__VexRiscv.__PVT__RegFilePlugin_regFile_spinal_port1 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & vlSymsp->TOP__VexRiscv.__PVT__RegFilePlugin_regFile_spinal_port1))))
                                      : ((1U == (3U 
                                                 & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0xcU)))
                                          ? ((vlSymsp->TOP__VexRiscv.__PVT__RegFilePlugin_regFile_spinal_port1 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSymsp->TOP__VexRiscv.__PVT__RegFilePlugin_regFile_spinal_port1))
                                          : vlSymsp->TOP__VexRiscv.__PVT__RegFilePlugin_regFile_spinal_port1));
    vlSelf->dBus_cmd_payload_address = vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub;
    vlSelf->dBus_cmd_payload_mask = (0xfU & (((0U == 
                                               (3U 
                                                & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xcU)))
                                               ? 1U
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                       >> 0xcU)))
                                                   ? 3U
                                                   : 0xfU)) 
                                             << (3U 
                                                 & vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub)));
}

VL_INLINE_OPT void VVexRiscv___024root___combo__TOP__4(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->dBus_cmd_valid = ((((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isValid) 
                                & (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE)) 
                               & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isStuckByOthers))) 
                              & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__writeBack_arbitration_flushNext)));
    vlSelf->iBus_cmd_payload_pc = (0xfffffffcU & vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_pc);
    vlSelf->iBus_cmd_valid = vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_cmd_valid;
}

void VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__3(VVexRiscv_VexRiscv* vlSelf);
void VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__4(VVexRiscv_VexRiscv* vlSelf);
void VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__5(VVexRiscv_VexRiscv* vlSelf);
void VVexRiscv_VexRiscv___combo__TOP__VexRiscv__6(VVexRiscv_VexRiscv* vlSelf);
void VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__7(VVexRiscv_VexRiscv* vlSelf);
void VVexRiscv_VexRiscv___combo__TOP__VexRiscv__8(VVexRiscv_VexRiscv* vlSelf);

void VVexRiscv___024root___eval(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__3((&vlSymsp->TOP__VexRiscv));
        VVexRiscv___024root___sequent__TOP__2(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__4((&vlSymsp->TOP__VexRiscv));
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__5((&vlSymsp->TOP__VexRiscv));
        VVexRiscv___024root___sequent__TOP__3(vlSelf);
    }
    VVexRiscv_VexRiscv___combo__TOP__VexRiscv__6((&vlSymsp->TOP__VexRiscv));
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VVexRiscv_VexRiscv___sequent__TOP__VexRiscv__7((&vlSymsp->TOP__VexRiscv));
    }
    VVexRiscv_VexRiscv___combo__TOP__VexRiscv__8((&vlSymsp->TOP__VexRiscv));
    VVexRiscv___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}
