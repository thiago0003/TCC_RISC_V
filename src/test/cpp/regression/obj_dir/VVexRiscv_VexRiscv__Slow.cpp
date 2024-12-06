// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVexRiscv_VexRiscv.h"
#include "VVexRiscv__Syms.h"

void VVexRiscv_VexRiscv___ctor_var_reset(VVexRiscv_VexRiscv* vlSelf);

VVexRiscv_VexRiscv::VVexRiscv_VexRiscv(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VVexRiscv_VexRiscv___ctor_var_reset(this);
}

void VVexRiscv_VexRiscv::__Vconfigure(VVexRiscv__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VVexRiscv_VexRiscv::~VVexRiscv_VexRiscv() {
}
