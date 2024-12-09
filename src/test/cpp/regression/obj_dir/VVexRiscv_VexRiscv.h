// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVexRiscv.h for the primary calling header

#ifndef VERILATED_VVEXRISCV_VEXRISCV_H_
#define VERILATED_VVEXRISCV_VEXRISCV_H_  // guard

#include "verilated.h"

class VVexRiscv__Syms;
VL_MODULE(VVexRiscv_VexRiscv) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
        CData/*0:0*/ __PVT___zz_IBusSimplePlugin_rspJoin_rspBuffer_discardCounter_1;
        CData/*0:0*/ __PVT___zz_1;
        CData/*0:0*/ __PVT__decode_REGFILE_WRITE_VALID;
        CData/*0:0*/ __PVT__decode_arbitration_haltByOther;
        CData/*0:0*/ __PVT__decode_arbitration_removeIt;
        CData/*0:0*/ __PVT__decode_arbitration_isStuckByOthers;
        CData/*0:0*/ __PVT__execute_arbitration_haltByOther;
        CData/*0:0*/ __PVT__execute_arbitration_removeIt;
        CData/*0:0*/ __PVT__execute_arbitration_isValid;
        CData/*0:0*/ __PVT__execute_arbitration_isStuck;
        CData/*0:0*/ __PVT__execute_arbitration_isStuckByOthers;
        CData/*0:0*/ __PVT__memory_arbitration_haltItself;
        CData/*0:0*/ __PVT__memory_arbitration_removeIt;
        CData/*0:0*/ __PVT__memory_arbitration_isValid;
        CData/*0:0*/ __PVT__writeBack_arbitration_flushNext;
        CData/*0:0*/ __PVT__writeBack_arbitration_isValid;
        CData/*0:0*/ lastStageIsValid;
        CData/*0:0*/ lastStageIsFiring;
        CData/*0:0*/ CsrPlugin_inWfi;
        CData/*0:0*/ __PVT__CsrPlugin_jumpInterface_valid;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_output_valid;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_correction;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_output_fire;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_pcRegPropagate;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_booted;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_inc;
        CData/*0:0*/ __PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready;
        CData/*0:0*/ __PVT__IBusSimplePlugin_iBusRsp_stages_0_halt;
        CData/*0:0*/ __PVT__IBusSimplePlugin_iBusRsp_stages_1_output_ready;
        CData/*0:0*/ __PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_input_valid_1;
        CData/*0:0*/ __PVT__IBusSimplePlugin_cmd_valid;
        CData/*2:0*/ __PVT__IBusSimplePlugin_pending_value;
        CData/*2:0*/ __PVT__IBusSimplePlugin_pending_next;
        CData/*2:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter;
        CData/*0:0*/ __PVT__toplevel_IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_fire;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_join_valid;
        CData/*0:0*/ __PVT__CsrPlugin_mstatus_MIE;
        CData/*0:0*/ __PVT__CsrPlugin_mstatus_MPIE;
        CData/*1:0*/ __PVT__CsrPlugin_mstatus_MPP;
        CData/*0:0*/ __PVT__CsrPlugin_mip_MEIP;
        CData/*0:0*/ __PVT__CsrPlugin_mip_MTIP;
        CData/*0:0*/ __PVT__CsrPlugin_mip_MSIP;
        CData/*0:0*/ __PVT__CsrPlugin_mie_MEIE;
        CData/*0:0*/ __PVT__CsrPlugin_mie_MTIE;
        CData/*0:0*/ __PVT__CsrPlugin_mie_MSIE;
        CData/*0:0*/ __PVT__CsrPlugin_mcause_interrupt;
        CData/*3:0*/ __PVT__CsrPlugin_mcause_exceptionCode;
        CData/*0:0*/ __PVT___zz_when_CsrPlugin_l1302;
    };
    struct {
        CData/*0:0*/ __PVT___zz_when_CsrPlugin_l1302_1;
        CData/*0:0*/ __PVT___zz_when_CsrPlugin_l1302_2;
        CData/*0:0*/ __PVT__CsrPlugin_interrupt_valid;
        CData/*3:0*/ CsrPlugin_interrupt_code;
        CData/*1:0*/ __PVT__CsrPlugin_interrupt_targetPrivilege;
        CData/*0:0*/ __PVT__CsrPlugin_pipelineLiberator_pcValids_0;
        CData/*0:0*/ __PVT__CsrPlugin_pipelineLiberator_pcValids_1;
        CData/*0:0*/ __PVT__CsrPlugin_pipelineLiberator_pcValids_2;
        CData/*0:0*/ __PVT__CsrPlugin_pipelineLiberator_active;
        CData/*0:0*/ __PVT__when_CsrPlugin_l1340;
        CData/*0:0*/ CsrPlugin_interruptJump;
        CData/*0:0*/ CsrPlugin_hadException;
        CData/*0:0*/ __PVT__when_CsrPlugin_l1390;
        CData/*0:0*/ __PVT__when_CsrPlugin_l1456;
        CData/*0:0*/ __PVT__execute_CsrPlugin_writeInstruction;
        CData/*0:0*/ __PVT__execute_CsrPlugin_writeEnable;
        CData/*0:0*/ lastStageRegFileWrite_valid;
        CData/*4:0*/ lastStageRegFileWrite_payload_address;
        CData/*0:0*/ __PVT__execute_SrcPlugin_less;
        CData/*0:0*/ __PVT__HazardSimplePlugin_writeBackBuffer_valid;
        CData/*4:0*/ __PVT__HazardSimplePlugin_writeBackBuffer_payload_address;
        CData/*0:0*/ __PVT___zz_execute_BRANCH_DO;
        CData/*0:0*/ __PVT__execute_LightShifterPlugin_isActive;
        CData/*4:0*/ __PVT__execute_LightShifterPlugin_amplitudeReg;
        CData/*4:0*/ __PVT__execute_LightShifterPlugin_amplitude;
        CData/*0:0*/ __PVT__when_ShiftPlugins_l169;
        CData/*0:0*/ __PVT__decode_to_execute_CSR_WRITE_OPCODE;
        CData/*1:0*/ __PVT__decode_to_execute_SRC1_CTRL;
        CData/*0:0*/ __PVT__decode_to_execute_SRC_USE_SUB_LESS;
        CData/*0:0*/ __PVT__decode_to_execute_MEMORY_ENABLE;
        CData/*0:0*/ __PVT__execute_to_memory_MEMORY_ENABLE;
        CData/*0:0*/ __PVT__memory_to_writeBack_MEMORY_ENABLE;
        CData/*0:0*/ __PVT__decode_to_execute_RS1_USE;
        CData/*1:0*/ __PVT__decode_to_execute_SRC2_CTRL;
        CData/*0:0*/ __PVT__decode_to_execute_REGFILE_WRITE_VALID;
        CData/*0:0*/ __PVT__execute_to_memory_REGFILE_WRITE_VALID;
        CData/*0:0*/ __PVT__memory_to_writeBack_REGFILE_WRITE_VALID;
        CData/*0:0*/ __PVT__decode_to_execute_MEMORY_STORE;
        CData/*0:0*/ __PVT__execute_to_memory_MEMORY_STORE;
        CData/*0:0*/ __PVT__decode_to_execute_RS2_USE;
        CData/*0:0*/ __PVT__decode_to_execute_IS_CSR;
        CData/*0:0*/ __PVT__decode_to_execute_ENV_CTRL;
        CData/*0:0*/ __PVT__execute_to_memory_ENV_CTRL;
        CData/*0:0*/ __PVT__memory_to_writeBack_ENV_CTRL;
        CData/*1:0*/ __PVT__decode_to_execute_ALU_CTRL;
        CData/*0:0*/ __PVT__decode_to_execute_SRC_LESS_UNSIGNED;
        CData/*1:0*/ __PVT__decode_to_execute_ALU_BITWISE_CTRL;
        CData/*1:0*/ __PVT__decode_to_execute_BRANCH_CTRL;
        CData/*1:0*/ __PVT__decode_to_execute_SHIFT_CTRL;
        CData/*0:0*/ __PVT__decode_to_execute_SRC2_FORCE_ZERO;
        CData/*1:0*/ __PVT__execute_to_memory_MEMORY_ADDRESS_LOW;
        CData/*1:0*/ __PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW;
        CData/*0:0*/ __PVT__execute_CsrPlugin_csr_768;
        CData/*0:0*/ __PVT__execute_CsrPlugin_csr_836;
        CData/*0:0*/ __PVT__execute_CsrPlugin_csr_772;
        CData/*0:0*/ __PVT__execute_CsrPlugin_csr_834;
        CData/*0:0*/ __PVT__when_CsrPlugin_l1719;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_push_ready;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__oneStage_doFlush;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rValid;
        CData/*0:0*/ __Vdly__CsrPlugin_mstatus_MIE;
        IData/*29:0*/ __Vxrand_h4700d425__0;
        IData/*31:0*/ __Vxrand_h9700cf2a__0;
    };
    struct {
        VL_OUT(iBus_cmd_payload_pc,31,0);
        VL_IN(iBus_rsp_payload_inst,31,0);
        VL_OUT(dBus_cmd_payload_address,31,0);
        VL_OUT(dBus_cmd_payload_data,31,0);
        VL_IN(dBus_rsp_data,31,0);
        IData/*31:0*/ __PVT__RegFilePlugin_regFile_spinal_port0;
        IData/*31:0*/ __PVT__RegFilePlugin_regFile_spinal_port1;
        IData/*31:0*/ __PVT___zz_execute_to_memory_REGFILE_WRITE_DATA;
        IData/*31:0*/ lastStageInstruction;
        IData/*31:0*/ lastStagePc;
        IData/*31:0*/ __PVT__CsrPlugin_jumpInterface_payload;
        IData/*31:0*/ IBusSimplePlugin_fetchPc_pcReg;
        IData/*31:0*/ __PVT__IBusSimplePlugin_fetchPc_pc;
        IData/*31:0*/ __PVT__writeBack_DBusSimplePlugin_rspShifted;
        IData/*31:0*/ __PVT__CsrPlugin_mepc;
        IData/*29:0*/ __PVT__CsrPlugin_xtvec_base;
        IData/*31:0*/ __PVT___zz_CsrPlugin_csrMapping_writeDataSignal;
        IData/*24:0*/ __PVT___zz_decode_SRC_LESS_UNSIGNED;
        IData/*31:0*/ __PVT__execute_RegFilePlugin_srcInstruction;
        IData/*31:0*/ lastStageRegFileWrite_payload_data;
        IData/*31:0*/ __PVT___zz_execute_SRC1;
        IData/*31:0*/ __PVT___zz_execute_SRC2_4;
        IData/*31:0*/ __PVT__execute_SrcPlugin_addSub;
        IData/*31:0*/ __PVT__execute_BranchPlugin_branchAdder;
        IData/*31:0*/ __PVT__decode_to_execute_PC;
        IData/*31:0*/ __PVT__execute_to_memory_PC;
        IData/*31:0*/ __PVT__memory_to_writeBack_PC;
        IData/*31:0*/ __PVT__decode_to_execute_INSTRUCTION;
        IData/*31:0*/ __PVT__execute_to_memory_INSTRUCTION;
        IData/*31:0*/ __PVT__memory_to_writeBack_INSTRUCTION;
        IData/*31:0*/ __PVT__execute_to_memory_REGFILE_WRITE_DATA;
        IData/*31:0*/ __PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
        IData/*31:0*/ __PVT__memory_to_writeBack_MEMORY_READ_DATA;
        IData/*31:0*/ __PVT___zz_CsrPlugin_csrMapping_readDataInit_1;
        IData/*31:0*/ __PVT___zz_CsrPlugin_csrMapping_readDataInit_3;
        IData/*31:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst;
        IData/*31:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_rData_inst;
        VlUnpacked<IData/*31:0*/, 32> RegFilePlugin_regFile;
    };

    // INTERNAL VARIABLES
    VVexRiscv__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VVexRiscv_VexRiscv(const char* name);
    ~VVexRiscv_VexRiscv();
    VL_UNCOPYABLE(VVexRiscv_VexRiscv);

    // INTERNAL METHODS
    void __Vconfigure(VVexRiscv__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
