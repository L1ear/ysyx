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
    VL_OUT(instr_diff,31,0);
    VL_OUT64(pc_diff,63,0);
    VL_OUT64(pc_decoding,63,0);
    VL_OUT64(regA0,63,0);

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
        CData/*0:0*/ top__DOT__src1sel_ex;
        CData/*1:0*/ top__DOT__src2sel_ex;
        CData/*4:0*/ top__DOT__aluctr_ex;
        CData/*0:0*/ top__DOT__is_brc_ex;
        CData/*0:0*/ top__DOT__is_jal_ex;
        CData/*0:0*/ top__DOT__is_jalr_ex;
        CData/*0:0*/ top__DOT__wben_ex;
        CData/*0:0*/ top__DOT__DivEn_ex;
        CData/*2:0*/ top__DOT__DivSel_ex;
        CData/*0:0*/ top__DOT__trap_ex;
        CData/*1:0*/ top__DOT__rs1_sel;
        CData/*1:0*/ top__DOT__rs2_sel;
        CData/*4:0*/ top__DOT__rs1_idx_ex;
        CData/*4:0*/ top__DOT__rs2_idx_ex;
        CData/*0:0*/ top__DOT__wben_ls;
        CData/*0:0*/ top__DOT__trap_ls;
        CData/*0:0*/ top__DOT__wben_wb;
        CData/*0:0*/ top__DOT__ID_reg_u__DOT__in_trap_id;
        CData/*0:0*/ top__DOT__ID_reg_u__DOT__out_trap_id;
        CData/*4:0*/ top__DOT__ID_u__DOT__ext_op;
        CData/*0:0*/ top__DOT__hazard_detect_u__DOT__hazard;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__bcu_u__DOT__less;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow;
        CData/*0:0*/ top__DOT__forwarding_u__DOT__reg_wben;
        CData/*4:0*/ top__DOT__forwarding_u__DOT__reg_wb_idx;
        CData/*7:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause;
        SData/*15:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h;
        IData/*31:0*/ top__DOT__instr_id;
        IData/*31:0*/ top__DOT__instr_ex;
        IData/*31:0*/ top__DOT__instr_ls;
        IData/*31:0*/ top__DOT__instr_wb;
        IData/*31:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w;
        QData/*63:0*/ top__DOT__pc_next;
        QData/*63:0*/ top__DOT__pc_new;
        QData/*63:0*/ top__DOT__pc_id;
        QData/*63:0*/ top__DOT__pc_ex;
        QData/*63:0*/ top__DOT__rs2_ex;
        QData/*63:0*/ top__DOT__rs1_ex;
        QData/*63:0*/ top__DOT__imm_ex;
        QData/*63:0*/ top__DOT__pc_ls;
    };
    struct {
        QData/*63:0*/ top__DOT__rs2_ls;
        QData/*63:0*/ top__DOT__alures_ls;
        QData/*63:0*/ top__DOT__csrdata_ls;
        QData/*63:0*/ top__DOT__pc_wb;
        QData/*63:0*/ top__DOT__alures_wb;
        QData/*63:0*/ top__DOT__lsres_wb;
        QData/*63:0*/ top__DOT__wb_data;
        QData/*63:0*/ top__DOT__csrdata_wb;
        QData/*63:0*/ top__DOT__IF_u__DOT__rdata;
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
        QData/*63:0*/ top__DOT__ls_u__DOT__wr_data;
        QData/*63:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base;
        QData/*63:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base_buf;
        QData/*63:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask;
        QData/*63:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b;
        QData/*63:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w;
        QData/*63:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__wr_data;
        QData/*63:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_buf;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__wr_data;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mepc;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mtvec;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mstatus;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mcause;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__ID_u__DOT__regfile_u__DOT__regfiles;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    QData/*63:0*/ __Vtask_top__DOT__IF_u__DOT__vmemread__1__rdata;
    QData/*63:0*/ __Vtask_top__DOT__ls_u__DOT__lsu_u__DOT__vmemread__4__rdata;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

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
