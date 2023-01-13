// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;
class Vtop___024unit;


//----------

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(stall_n_diff,0,0);
    VL_OUT(instr_diff,31,0);
    VL_OUT64(pc_diff,63,0);
    VL_OUT64(pc_decoding,63,0);
    VL_OUT64(regA0,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*3:0*/ top__DOT__if_axi_ar_region_o;
        CData/*0:0*/ top__DOT__if_axi_r_last_i;
        CData/*3:0*/ top__DOT__if_axi_r_id_i;
        CData/*0:0*/ top__DOT__if_axi_r_user_i;
        CData/*3:0*/ top__DOT__ls_axi_b_id_i;
        CData/*0:0*/ top__DOT__ls_axi_b_user_i;
        CData/*3:0*/ top__DOT__ls_axi_ar_region_o;
        CData/*0:0*/ top__DOT__ls_axi_r_last_i;
        CData/*3:0*/ top__DOT__ls_axi_r_id_i;
        CData/*0:0*/ top__DOT__ls_axi_r_user_i;
        CData/*0:0*/ top__DOT__is_jump;
        CData/*0:0*/ top__DOT__if_stall_n;
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
        CData/*7:0*/ top__DOT__cache_dut__DOT__wr_mask_i;
        CData/*0:0*/ top__DOT__cache_dut__DOT__data_ok_o;
        CData/*0:0*/ top__DOT__cache_dut__DOT__cacheRdValid_o;
        CData/*0:0*/ top__DOT__cache_dut__DOT__rdLast_i;
        CData/*2:0*/ top__DOT__cache_dut__DOT__cacheCurState;
        CData/*2:0*/ top__DOT__cache_dut__DOT__cacheNexState;
        CData/*0:0*/ top__DOT__cache_dut__DOT__cacheHit;
        CData/*0:0*/ top__DOT__cache_dut__DOT__way1Hit;
        CData/*0:0*/ top__DOT__cache_dut__DOT__way2Hit;
        CData/*0:0*/ top__DOT__cache_dut__DOT__wenWay1_1;
        CData/*0:0*/ top__DOT__cache_dut__DOT__wenWay1_2;
        CData/*0:0*/ top__DOT__cache_dut__DOT__wenWay2_1;
        CData/*0:0*/ top__DOT__cache_dut__DOT__wenWay2_2;
        CData/*0:0*/ top__DOT__cache_dut__DOT__bitValid1;
        CData/*0:0*/ top__DOT__cache_dut__DOT__bitValid2;
        CData/*0:0*/ top__DOT__cache_dut__DOT__bitValid1_d;
        CData/*0:0*/ top__DOT__cache_dut__DOT__bitValid2_d;
        CData/*0:0*/ top__DOT__cache_dut__DOT__validWay1_q;
        CData/*0:0*/ top__DOT__cache_dut__DOT__validWay2_q;
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
    };
    struct {
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
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__w_valid;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__b_ready;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__trans_ok;
        CData/*1:0*/ top__DOT__axi_ls_u__DOT__r_state;
        CData/*1:0*/ top__DOT__axi_ls_u__DOT__r_state_next;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__ar_valid;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__r_ready;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__instr_valid;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__instr_valid_reg;
        CData/*2:0*/ top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWSIZE;
        CData/*2:0*/ top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWPROT;
        CData/*0:0*/ top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID;
        CData/*7:0*/ top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WSTRB;
        CData/*0:0*/ top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID;
        CData/*0:0*/ top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_BREADY;
        CData/*0:0*/ top__DOT__ifAxiSlaveRam_u__DOT__axi_awready;
        CData/*0:0*/ top__DOT__ifAxiSlaveRam_u__DOT__axi_wready;
        CData/*1:0*/ top__DOT__ifAxiSlaveRam_u__DOT__axi_bresp;
        CData/*0:0*/ top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid;
        CData/*0:0*/ top__DOT__ifAxiSlaveRam_u__DOT__axi_arready;
        CData/*1:0*/ top__DOT__ifAxiSlaveRam_u__DOT__axi_rresp;
        CData/*0:0*/ top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid;
        CData/*0:0*/ top__DOT__ifAxiSlaveRam_u__DOT__aw_en;
        CData/*0:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_awready;
        CData/*0:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_wready;
        CData/*1:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp;
        CData/*0:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid;
        CData/*0:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_arready;
        CData/*1:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp;
        CData/*0:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
        CData/*0:0*/ top__DOT__lsAxiSlaveRam_u__DOT__aw_en;
        SData/*15:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h;
        IData/*31:0*/ top__DOT__cache_dut__DOT__cacheAddr_o;
        VlWide<4>/*127:0*/ top__DOT__cache_dut__DOT__dataWay1_1;
        VlWide<4>/*127:0*/ top__DOT__cache_dut__DOT__dataWay1_2;
        VlWide<4>/*127:0*/ top__DOT__cache_dut__DOT__dataWay2_1;
        VlWide<4>/*127:0*/ top__DOT__cache_dut__DOT__dataWay2_2;
        VlWide<4>/*127:0*/ top__DOT__cache_dut__DOT__inDataWay1_1;
        VlWide<4>/*127:0*/ top__DOT__cache_dut__DOT__inDataWay1_2;
        VlWide<4>/*127:0*/ top__DOT__cache_dut__DOT__inDataWay2_1;
        VlWide<4>/*127:0*/ top__DOT__cache_dut__DOT__inDataWay2_2;
        IData/*20:0*/ top__DOT__cache_dut__DOT__tagArray1_d;
        IData/*20:0*/ top__DOT__cache_dut__DOT__tagArray2_d;
        IData/*20:0*/ top__DOT__cache_dut__DOT__tagWay1_q;
        IData/*20:0*/ top__DOT__cache_dut__DOT__tagWay2_q;
        VlWide<8>/*255:0*/ top__DOT__cache_dut__DOT__way1Data;
        VlWide<8>/*255:0*/ top__DOT__cache_dut__DOT__way2Data;
        IData/*31:0*/ top__DOT__cache_dut__DOT__randomBit;
        IData/*31:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w;
    };
    struct {
        IData/*31:0*/ top__DOT__ifAxiSlaveRam_u__DOT__byte_index;
        IData/*31:0*/ top__DOT__lsAxiSlaveRam_u__DOT__byte_index;
        QData/*63:0*/ top__DOT__pc_next;
        QData/*63:0*/ top__DOT__pc_new;
        QData/*63:0*/ top__DOT__csrdata_ls;
        QData/*63:0*/ top__DOT__ls_sram_rd_data;
        QData/*63:0*/ top__DOT__wb_data;
        QData/*63:0*/ top__DOT__IF_u__DOT__instr_reg;
        QData/*63:0*/ top__DOT__IF_u__DOT__pc_next_o;
        QData/*63:0*/ top__DOT__cache_dut__DOT__wr_data_i;
        QData/*63:0*/ top__DOT__cache_dut__DOT__rd_data_o;
        QData/*63:0*/ top__DOT__cache_dut__DOT__rdData_i;
        QData/*32:0*/ top__DOT__cache_dut__DOT__reqLatch;
        QData/*63:0*/ top__DOT__cache_dut__DOT__validArray1;
        QData/*63:0*/ top__DOT__cache_dut__DOT__validArray2;
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
        QData/*63:0*/ top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWADDR;
        QData/*63:0*/ top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WDATA;
        QData/*63:0*/ top__DOT__ifAxiSlaveRam_u__DOT__axi_awaddr;
        QData/*63:0*/ top__DOT__ifAxiSlaveRam_u__DOT__axi_araddr;
        QData/*63:0*/ top__DOT__ifAxiSlaveRam_u__DOT__axi_rdata;
        QData/*63:0*/ top__DOT__ifAxiSlaveRam_u__DOT__slv_reg0;
        QData/*63:0*/ top__DOT__ifAxiSlaveRam_u__DOT__slv_reg1;
        QData/*63:0*/ top__DOT__ifAxiSlaveRam_u__DOT__slv_reg2;
        QData/*63:0*/ top__DOT__ifAxiSlaveRam_u__DOT__slv_reg3;
        QData/*63:0*/ top__DOT__ifAxiSlaveRam_u__DOT__reg_data_out;
        QData/*63:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr;
        QData/*63:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr;
        QData/*63:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata;
        QData/*63:0*/ top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0;
        QData/*63:0*/ top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1;
        QData/*63:0*/ top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2;
        QData/*63:0*/ top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3;
        QData/*63:0*/ top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out;
        VlUnpacked<IData/*20:0*/, 64> top__DOT__cache_dut__DOT__tagArray1;
        VlUnpacked<IData/*20:0*/, 64> top__DOT__cache_dut__DOT__tagArray2;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 32> top__DOT__ID_u__DOT__regfile_u__DOT__regfiles;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN;
    CData/*0:0*/ top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN;
    CData/*0:0*/ top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN;
    CData/*0:0*/ top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0;
    CData/*0:0*/ __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    VlWide<3>/*95:0*/ top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout;
    VlWide<10>/*314:0*/ top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout;
    VlWide<8>/*225:0*/ top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout;
    VlWide<10>/*288:0*/ top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout;
    VlWide<10>/*288:0*/ top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din;
    QData/*63:0*/ __Vtask_axiSlaveRead__0__rdata;
    QData/*63:0*/ __Vtask_axiSlaveRead__1__rdata;
    QData/*63:0*/ __Vtask_axiSlaveRead__2__rdata;
    QData/*63:0*/ __Vtask_axiSlaveRead__3__rdata;
    QData/*63:0*/ __Vtask_axiSlaveRead__4__rdata;
    QData/*63:0*/ __Vtask_axiSlaveRead__5__rdata;
    QData/*63:0*/ __Vtask_axiSlaveRead__6__rdata;
    QData/*63:0*/ __Vtask_axiSlaveRead__7__rdata;
    QData/*63:0*/ __Vdly__top__DOT__axi_if_u__DOT__addr_reg;
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
