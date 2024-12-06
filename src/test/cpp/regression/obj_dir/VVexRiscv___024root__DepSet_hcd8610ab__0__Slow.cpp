// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv__Syms.h"
#include "VVexRiscv___024root.h"

VL_ATTR_COLD void VVexRiscv___024root___settle__TOP__1(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->dBus_cmd_payload_wr = vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_MEMORY_STORE;
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
    vlSelf->dBus_cmd_valid = ((((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isValid) 
                                & (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE)) 
                               & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isStuckByOthers))) 
                              & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__writeBack_arbitration_flushNext)));
    vlSelf->iBus_cmd_payload_pc = (0xfffffffcU & vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_pc);
    vlSelf->iBus_cmd_valid = vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_cmd_valid;
}

VL_ATTR_COLD void VVexRiscv_VexRiscv___initial__TOP__VexRiscv__1(VVexRiscv_VexRiscv* vlSelf);

VL_ATTR_COLD void VVexRiscv___024root___eval_initial(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_initial\n"); );
    // Body
    VVexRiscv_VexRiscv___initial__TOP__VexRiscv__1((&vlSymsp->TOP__VexRiscv));
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void VVexRiscv_VexRiscv___settle__TOP__VexRiscv__2(VVexRiscv_VexRiscv* vlSelf);

VL_ATTR_COLD void VVexRiscv___024root___eval_settle(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_settle\n"); );
    // Body
    VVexRiscv_VexRiscv___settle__TOP__VexRiscv__2((&vlSymsp->TOP__VexRiscv));
    VVexRiscv___024root___settle__TOP__1(vlSelf);
}
