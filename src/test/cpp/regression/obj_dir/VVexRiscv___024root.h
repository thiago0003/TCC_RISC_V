// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVexRiscv.h for the primary calling header

#ifndef VERILATED_VVEXRISCV___024ROOT_H_
#define VERILATED_VVEXRISCV___024ROOT_H_  // guard

#include "verilated.h"

class VVexRiscv__Syms;
class VVexRiscv_VexRiscv;

VL_MODULE(VVexRiscv___024root) {
  public:
    // CELLS
    VVexRiscv_VexRiscv* VexRiscv;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(iBus_cmd_valid,0,0);
    VL_IN8(iBus_cmd_ready,0,0);
    VL_IN8(iBus_rsp_valid,0,0);
    VL_IN8(iBus_rsp_payload_error,0,0);
    VL_IN8(timerInterrupt,0,0);
    VL_IN8(externalInterrupt,0,0);
    VL_IN8(softwareInterrupt,0,0);
    VL_OUT8(dBus_cmd_valid,0,0);
    VL_IN8(dBus_cmd_ready,0,0);
    VL_OUT8(dBus_cmd_payload_wr,0,0);
    VL_OUT8(dBus_cmd_payload_mask,3,0);
    VL_OUT8(dBus_cmd_payload_size,1,0);
    VL_IN8(dBus_rsp_ready,0,0);
    VL_IN8(dBus_rsp_error,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VL_OUT(iBus_cmd_payload_pc,31,0);
    VL_IN(iBus_rsp_payload_inst,31,0);
    VL_OUT(dBus_cmd_payload_address,31,0);
    VL_OUT(dBus_cmd_payload_data,31,0);
    VL_IN(dBus_rsp_data,31,0);

    // INTERNAL VARIABLES
    VVexRiscv__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VVexRiscv___024root(const char* name);
    ~VVexRiscv___024root();
    VL_UNCOPYABLE(VVexRiscv___024root);

    // INTERNAL METHODS
    void __Vconfigure(VVexRiscv__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
