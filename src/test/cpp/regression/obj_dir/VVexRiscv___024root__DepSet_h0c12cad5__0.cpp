// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv___024root.h"

#ifdef VL_DEBUG
void VVexRiscv___024root___eval_debug_assertions(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->iBus_cmd_ready & 0xfeU))) {
        Verilated::overWidthError("iBus_cmd_ready");}
    if (VL_UNLIKELY((vlSelf->iBus_rsp_valid & 0xfeU))) {
        Verilated::overWidthError("iBus_rsp_valid");}
    if (VL_UNLIKELY((vlSelf->iBus_rsp_payload_error 
                     & 0xfeU))) {
        Verilated::overWidthError("iBus_rsp_payload_error");}
    if (VL_UNLIKELY((vlSelf->timerInterrupt & 0xfeU))) {
        Verilated::overWidthError("timerInterrupt");}
    if (VL_UNLIKELY((vlSelf->externalInterrupt & 0xfeU))) {
        Verilated::overWidthError("externalInterrupt");}
    if (VL_UNLIKELY((vlSelf->softwareInterrupt & 0xfeU))) {
        Verilated::overWidthError("softwareInterrupt");}
    if (VL_UNLIKELY((vlSelf->dBus_cmd_ready & 0xfeU))) {
        Verilated::overWidthError("dBus_cmd_ready");}
    if (VL_UNLIKELY((vlSelf->dBus_rsp_ready & 0xfeU))) {
        Verilated::overWidthError("dBus_rsp_ready");}
    if (VL_UNLIKELY((vlSelf->dBus_rsp_error & 0xfeU))) {
        Verilated::overWidthError("dBus_rsp_error");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
