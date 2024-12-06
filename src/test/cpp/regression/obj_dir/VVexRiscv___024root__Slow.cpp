// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv__Syms.h"
#include "VVexRiscv___024root.h"

void VVexRiscv___024root___ctor_var_reset(VVexRiscv___024root* vlSelf);

VVexRiscv___024root::VVexRiscv___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VVexRiscv___024root___ctor_var_reset(this);
}

void VVexRiscv___024root::__Vconfigure(VVexRiscv__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VVexRiscv___024root::~VVexRiscv___024root() {
}
