// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv___024root.h"

VL_ATTR_COLD void VVexRiscv___024root___final(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___final\n"); );
}

VL_ATTR_COLD void VVexRiscv___024root___ctor_var_reset(VVexRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___ctor_var_reset\n"); );
    // Body
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
}
