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
    VL_OUT8(stall_n_diff,0,0);
    VL_IN8(axi_ar_ready_i,0,0);
    VL_OUT8(axi_ar_valid_o,0,0);
    VL_OUT8(axi_ar_prot_o,2,0);
    VL_OUT8(axi_ar_id_o,3,0);
    VL_OUT8(axi_ar_user_o,0,0);
    VL_OUT8(axi_ar_len_o,7,0);
    VL_OUT8(axi_ar_size_o,2,0);
    VL_OUT8(axi_ar_burst_o,1,0);
    VL_OUT8(axi_ar_lock_o,0,0);
    VL_OUT8(axi_ar_cache_o,3,0);
    VL_OUT8(axi_ar_qos_o,3,0);
    VL_OUT8(axi_ar_region_o,3,0);
    VL_OUT8(axi_r_ready_o,0,0);
    VL_IN8(axi_r_valid_i,0,0);
    VL_IN8(axi_r_resp_i,1,0);
    VL_IN8(axi_r_last_i,0,0);
    VL_IN8(axi_r_id_i,3,0);
    VL_IN8(axi_r_user_i,0,0);
    VL_IN8(axi_aw_ready_i,0,0);
    VL_OUT8(axi_aw_valid_o,0,0);
    VL_OUT8(axi_aw_prot_o,2,0);
    VL_OUT8(axi_aw_id_o,3,0);
    VL_OUT8(axi_aw_user_o,0,0);
    VL_OUT8(axi_aw_len_o,7,0);
    VL_OUT8(axi_aw_size_o,2,0);
    VL_OUT8(axi_aw_burst_o,1,0);
    VL_OUT8(axi_aw_lock_o,0,0);
    VL_OUT8(axi_aw_cache_o,3,0);
    VL_OUT8(axi_aw_qos_o,3,0);
    VL_OUT8(axi_aw_region_o,3,0);
    VL_IN8(axi_w_ready_i,0,0);
    VL_OUT8(axi_w_valid_o,0,0);
    VL_OUT8(axi_w_strb_o,7,0);
    VL_OUT8(axi_w_last_o,0,0);
    VL_OUT8(axi_w_user_o,0,0);
    VL_OUT8(axi_b_ready_o,0,0);
    VL_IN8(axi_b_valid_i,0,0);
    VL_IN8(axi_b_resp_i,1,0);
    VL_IN8(axi_b_id_i,3,0);
    VL_IN8(axi_b_user_i,0,0);
    VL_IN8(axi_mmio_ar_ready_i,0,0);
    VL_OUT8(axi_mmio_ar_valid_o,0,0);
    VL_OUT8(axi_mmio_ar_prot_o,2,0);
    VL_OUT8(axi_mmio_ar_id_o,3,0);
    VL_OUT8(axi_mmio_ar_user_o,0,0);
    VL_OUT8(axi_mmio_ar_len_o,7,0);
    VL_OUT8(axi_mmio_ar_size_o,2,0);
    VL_OUT8(axi_mmio_ar_burst_o,1,0);
    VL_OUT8(axi_mmio_ar_lock_o,0,0);
    VL_OUT8(axi_mmio_ar_cache_o,3,0);
    VL_OUT8(axi_mmio_ar_qos_o,3,0);
    VL_OUT8(axi_mmio_ar_region_o,3,0);
    VL_OUT8(axi_mmio_r_ready_o,0,0);
    VL_IN8(axi_mmio_r_valid_i,0,0);
    VL_IN8(axi_mmio_r_resp_i,1,0);
    VL_IN8(axi_mmio_r_last_i,0,0);
    VL_IN8(axi_mmio_r_id_i,3,0);
    VL_IN8(axi_mmio_r_user_i,0,0);
    VL_IN8(axi_mmio_aw_ready_i,0,0);
    VL_OUT8(axi_mmio_aw_valid_o,0,0);
    VL_OUT8(axi_mmio_aw_prot_o,2,0);
    VL_OUT8(axi_mmio_aw_id_o,3,0);
    VL_OUT8(axi_mmio_aw_user_o,0,0);
    VL_OUT8(axi_mmio_aw_len_o,7,0);
    VL_OUT8(axi_mmio_aw_size_o,2,0);
    VL_OUT8(axi_mmio_aw_burst_o,1,0);
    VL_OUT8(axi_mmio_aw_lock_o,0,0);
    VL_OUT8(axi_mmio_aw_cache_o,3,0);
    VL_OUT8(axi_mmio_aw_qos_o,3,0);
    VL_OUT8(axi_mmio_aw_region_o,3,0);
    VL_IN8(axi_mmio_w_ready_i,0,0);
    VL_OUT8(axi_mmio_w_valid_o,0,0);
    VL_OUT8(axi_mmio_w_strb_o,7,0);
    VL_OUT8(axi_mmio_w_last_o,0,0);
    VL_OUT8(axi_mmio_w_user_o,0,0);
    VL_OUT8(axi_mmio_b_ready_o,0,0);
    VL_IN8(axi_mmio_b_valid_i,0,0);
    VL_IN8(axi_mmio_b_resp_i,1,0);
    VL_IN8(axi_mmio_b_id_i,3,0);
    VL_IN8(axi_mmio_b_user_i,0,0);
    VL_OUT(instr_diff,31,0);
    VL_OUT64(pc_diff,63,0);
    VL_OUT64(pc_decoding,63,0);
    VL_OUT64(regA0,63,0);
    VL_OUT64(axi_ar_addr_o,63,0);
    VL_IN64(axi_r_data_i,63,0);
    VL_OUT64(axi_aw_addr_o,63,0);
    VL_OUT64(axi_w_data_o,63,0);
    VL_OUT64(axi_mmio_ar_addr_o,63,0);
    VL_IN64(axi_mmio_r_data_i,63,0);
    VL_OUT64(axi_mmio_aw_addr_o,63,0);
    VL_OUT64(axi_mmio_w_data_o,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__instr_fetching;
        CData/*3:0*/ top__DOT__if_axi_ar_region_o;
        CData/*0:0*/ top__DOT__if_axi_r_valid_i;
        CData/*0:0*/ top__DOT__if_axi_r_user_i;
        CData/*7:0*/ top__DOT__ls_axi_w_strb_o;
        CData/*3:0*/ top__DOT__ls_axi_ar_region_o;
        CData/*0:0*/ top__DOT__ls_axi_r_valid_i;
        CData/*0:0*/ top__DOT__ls_axi_r_user_i;
        CData/*0:0*/ top__DOT__is_jump;
        CData/*0:0*/ top__DOT__sram_data_valid;
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
        CData/*0:0*/ top__DOT__ls_not_ok;
        CData/*0:0*/ top__DOT__wb_stall_n;
        CData/*0:0*/ top__DOT__axi_crossbar_u__DOT__axi_b_valid;
        CData/*0:0*/ top__DOT__axi_crossbar_u__DOT__axi_ar_ready;
        CData/*0:0*/ top__DOT__axi_crossbar_u__DOT__axi_ar_valid;
        CData/*3:0*/ top__DOT__axi_crossbar_u__DOT__axi_ar_region;
        CData/*0:0*/ top__DOT__axi_crossbar_u__DOT__axi_r_ready;
        CData/*0:0*/ top__DOT__axi_crossbar_u__DOT__axi_r_valid;
        CData/*3:0*/ top__DOT__axi_crossbar_u__DOT__axi_r_id;
        CData/*1:0*/ top__DOT__axi_if_u__DOT__r_state;
        CData/*1:0*/ top__DOT__axi_if_u__DOT__r_state_next;
        CData/*0:0*/ top__DOT__axi_if_u__DOT__ar_valid;
        CData/*0:0*/ top__DOT__axi_if_u__DOT__r_ready;
        CData/*0:0*/ top__DOT__axi_if_u__DOT__instr_valid;
        CData/*0:0*/ top__DOT__axi_if_u__DOT__instr_valid_reg;
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
        CData/*2:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__wr_size;
        CData/*7:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause;
        CData/*1:0*/ top__DOT__axi_ls_u__DOT__w_state;
        CData/*1:0*/ top__DOT__axi_ls_u__DOT__w_state_next;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__aw_valid;
    };
    struct {
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__w_valid;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__b_ready;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__trans_ok;
        CData/*1:0*/ top__DOT__axi_ls_u__DOT__r_state;
        CData/*1:0*/ top__DOT__axi_ls_u__DOT__r_state_next;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__ar_valid;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__r_ready;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__instr_valid;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__instr_valid_reg;
        SData/*15:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h;
        IData/*31:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w;
        QData/*63:0*/ top__DOT__pc_next;
        QData/*63:0*/ top__DOT__pc_new;
        QData/*63:0*/ top__DOT__sram_rdata;
        QData/*63:0*/ top__DOT__csrdata_ls;
        QData/*63:0*/ top__DOT__ls_sram_rd_data;
        QData/*63:0*/ top__DOT__wb_data;
        QData/*63:0*/ top__DOT__axi_crossbar_u__DOT__axi_ar_addr;
        QData/*63:0*/ top__DOT__axi_crossbar_u__DOT__axi_r_data;
        QData/*63:0*/ top__DOT__IF_u__DOT__pc_next_o;
        QData/*63:0*/ top__DOT__axi_if_u__DOT__addr_reg;
        QData/*63:0*/ top__DOT__axi_if_u__DOT__rd_data_reg;
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
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__wr_data;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mepc;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mtvec;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mstatus;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mcause;
        QData/*63:0*/ top__DOT__axi_ls_u__DOT__addr_reg;
        QData/*63:0*/ top__DOT__axi_ls_u__DOT__wr_data_reg;
        QData/*63:0*/ top__DOT__axi_ls_u__DOT__rd_data_reg;
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
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;

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
