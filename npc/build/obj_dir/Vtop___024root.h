// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(sram_data_valid,0,0);
    VL_OUT8(sram_ren,0,0);
    VL_OUT(instr_diff,31,0);
    VL_OUT64(pc_diff,63,0);
    VL_OUT64(pc_decoding,63,0);
    VL_OUT64(regA0,63,0);
    VL_IN64(sram_rdata,63,0);
    VL_OUT64(sram_addr,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__is_jump;
        CData/*0:0*/ top__DOT__src1sel_id;
        CData/*1:0*/ top__DOT__src2sel_id;
        CData/*4:0*/ top__DOT__aluctr_id;
        CData/*0:0*/ top__DOT__is_brc_id;
        CData/*0:0*/ top__DOT__is_jal_id;
        CData/*0:0*/ top__DOT__is_jalr_id;
        CData/*0:0*/ top__DOT__wben_id;
        CData/*4:0*/ top__DOT__rs1_idx_id;
        CData/*4:0*/ top__DOT__rs2_idx_id;
        CData/*0:0*/ top__DOT__DivEn_id;
        CData/*2:0*/ top__DOT__DivSel_id;
        CData/*0:0*/ top__DOT__in_trap_id;
        CData/*0:0*/ top__DOT__out_trap_id;
        CData/*0:0*/ top__DOT__trap_id;
        CData/*0:0*/ top__DOT__ld_use_hazard;
        CData/*0:0*/ top__DOT__id_flush;
        CData/*1:0*/ top__DOT__rs1_sel;
        CData/*1:0*/ top__DOT__rs2_sel;
        CData/*0:0*/ top__DOT__ex_flush;
        CData/*4:0*/ top__DOT__ID_u__DOT__ext_op;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__bcu_u__DOT__less;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow;
        CData/*0:0*/ top__DOT__forwarding_u__DOT__reg_wben;
        CData/*4:0*/ top__DOT__forwarding_u__DOT__reg_wb_idx;
        CData/*7:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b;
        CData/*7:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause;
        CData/*0:0*/ top__DOT__pipline_ctrl_u__DOT__if_valid;
        CData/*0:0*/ top__DOT__pipline_ctrl_u__DOT__testabc;
        SData/*15:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h;
        IData/*31:0*/ top__DOT__instr_if_id_reg;
        IData/*31:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w;
        QData/*63:0*/ top__DOT__pc_next;
        QData/*63:0*/ top__DOT__pc_new;
        QData/*63:0*/ top__DOT__csrdata_ls;
        QData/*63:0*/ top__DOT__wb_data;
        QData/*63:0*/ top__DOT__ID_u__DOT__imm;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__src1;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__src2;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__rs1;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__rs2;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres;
        QData/*63:0*/ top__DOT__forwarding_u__DOT__rd_wb;
        QData/*63:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__wr_data;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mepc;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mtvec;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mstatus;
    };
    struct {
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mcause;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__ID_u__DOT__regfile_u__DOT__regfiles;
    };

    // LOCAL VARIABLES
    CData/*4:0*/ __Vdlyvdim0__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    VlWide<3>/*95:0*/ top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout;
    VlWide<10>/*314:0*/ top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout;
    VlWide<8>/*225:0*/ top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout;
    VlWide<10>/*288:0*/ top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout;
    VlWide<10>/*288:0*/ top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din;
    QData/*63:0*/ __Vdlyvval__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
