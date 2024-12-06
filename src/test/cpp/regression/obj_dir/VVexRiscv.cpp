// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VVexRiscv.h"
#include "VVexRiscv__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VVexRiscv::VVexRiscv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VVexRiscv__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , iBus_cmd_valid{vlSymsp->TOP.iBus_cmd_valid}
    , iBus_cmd_ready{vlSymsp->TOP.iBus_cmd_ready}
    , iBus_rsp_valid{vlSymsp->TOP.iBus_rsp_valid}
    , iBus_rsp_payload_error{vlSymsp->TOP.iBus_rsp_payload_error}
    , timerInterrupt{vlSymsp->TOP.timerInterrupt}
    , externalInterrupt{vlSymsp->TOP.externalInterrupt}
    , softwareInterrupt{vlSymsp->TOP.softwareInterrupt}
    , dBus_cmd_valid{vlSymsp->TOP.dBus_cmd_valid}
    , dBus_cmd_ready{vlSymsp->TOP.dBus_cmd_ready}
    , dBus_cmd_payload_wr{vlSymsp->TOP.dBus_cmd_payload_wr}
    , dBus_cmd_payload_mask{vlSymsp->TOP.dBus_cmd_payload_mask}
    , dBus_cmd_payload_size{vlSymsp->TOP.dBus_cmd_payload_size}
    , dBus_rsp_ready{vlSymsp->TOP.dBus_rsp_ready}
    , dBus_rsp_error{vlSymsp->TOP.dBus_rsp_error}
    , iBus_cmd_payload_pc{vlSymsp->TOP.iBus_cmd_payload_pc}
    , iBus_rsp_payload_inst{vlSymsp->TOP.iBus_rsp_payload_inst}
    , dBus_cmd_payload_address{vlSymsp->TOP.dBus_cmd_payload_address}
    , dBus_cmd_payload_data{vlSymsp->TOP.dBus_cmd_payload_data}
    , dBus_rsp_data{vlSymsp->TOP.dBus_rsp_data}
    , VexRiscv{vlSymsp->TOP.VexRiscv}
    , rootp{&(vlSymsp->TOP)}
{
}

VVexRiscv::VVexRiscv(const char* _vcname__)
    : VVexRiscv(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VVexRiscv::~VVexRiscv() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VVexRiscv___024root___eval_initial(VVexRiscv___024root* vlSelf);
void VVexRiscv___024root___eval_settle(VVexRiscv___024root* vlSelf);
void VVexRiscv___024root___eval(VVexRiscv___024root* vlSelf);
#ifdef VL_DEBUG
void VVexRiscv___024root___eval_debug_assertions(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG
void VVexRiscv___024root___final(VVexRiscv___024root* vlSelf);

static void _eval_initial_loop(VVexRiscv__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VVexRiscv___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VVexRiscv___024root___eval_settle(&(vlSymsp->TOP));
        VVexRiscv___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VVexRiscv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVexRiscv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VVexRiscv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VVexRiscv___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VVexRiscv::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VVexRiscv::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VVexRiscv::final() {
    VVexRiscv___024root___final(&(vlSymsp->TOP));
}
