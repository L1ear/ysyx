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
    VL_OUT(instr_diff,31,0);
    VL_OUT64(pc_diff,63,0);
    VL_OUT64(pc_decoding,63,0);
    VL_OUT64(regA0,63,0);
    VL_OUT64(axi_ar_addr_o,63,0);
    VL_IN64(axi_r_data_i,63,0);
    VL_OUT64(axi_aw_addr_o,63,0);
    VL_OUT64(axi_w_data_o,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__axi_mmio_ar_valid_o;
        CData/*0:0*/ top__DOT__axi_mmio_r_last_i;
        CData/*3:0*/ top__DOT__axi_mmio_r_id_i;
        CData/*0:0*/ top__DOT__axi_mmio_r_user_i;
        CData/*0:0*/ top__DOT__axi_mmio_aw_valid_o;
        CData/*0:0*/ top__DOT__axi_mmio_w_valid_o;
        CData/*0:0*/ top__DOT__axi_mmio_b_ready_o;
        CData/*3:0*/ top__DOT__axi_mmio_b_id_i;
        CData/*0:0*/ top__DOT__axi_mmio_b_user_i;
        CData/*3:0*/ top__DOT__if_axi_ar_region_o;
        CData/*0:0*/ top__DOT__if_axi_r_last_i;
        CData/*0:0*/ top__DOT__if_axi_r_user_i;
        CData/*7:0*/ top__DOT__ls_axi_w_strb_o;
        CData/*3:0*/ top__DOT__ls_axi_ar_region_o;
        CData/*0:0*/ top__DOT__ls_axi_r_last_i;
        CData/*0:0*/ top__DOT__ls_axi_r_user_i;
        CData/*0:0*/ top__DOT__is_jump;
        CData/*0:0*/ top__DOT__if_stall_n;
        CData/*0:0*/ top__DOT__if_instr_valid;
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
        CData/*0:0*/ top__DOT__ex_not_ok;
        CData/*0:0*/ top__DOT__ls_stall_n;
        CData/*0:0*/ top__DOT__ls_sram_rd_data_valid;
        CData/*0:0*/ top__DOT__ls_sram_wr_data_ok;
        CData/*0:0*/ top__DOT__clint_axi_arvalid;
        CData/*0:0*/ top__DOT__clint_axi_awvalid;
        CData/*7:0*/ top__DOT__clint_axi_wstrb;
        CData/*0:0*/ top__DOT__clint_axi_wvalid;
        CData/*0:0*/ top__DOT__clint_axi_bready;
        CData/*0:0*/ top__DOT__rw_valid_i;
        CData/*0:0*/ top__DOT__dataValid_o;
        CData/*0:0*/ top__DOT__fence_id;
        CData/*0:0*/ top__DOT__in_intr_ls;
        CData/*0:0*/ top__DOT__dataNotOk;
        CData/*0:0*/ top__DOT__DcacheRdValid;
        CData/*0:0*/ top__DOT__DcacheWrValid;
        CData/*0:0*/ top__DOT__lsAxiRdDataVAlid;
        CData/*0:0*/ top__DOT__axi_crossbar_u__DOT__axi_w_ready;
        CData/*0:0*/ top__DOT__axi_crossbar_u__DOT__axi_ar_ready;
        CData/*0:0*/ top__DOT__axi_crossbar_u__DOT__axi_ar_valid;
        CData/*2:0*/ top__DOT__axi_crossbar_u__DOT__axi_ar_size;
        CData/*0:0*/ top__DOT__axi_crossbar_u__DOT__axi_r_ready;
        CData/*0:0*/ top__DOT__axi_crossbar_u__DOT__axi_r_valid;
        CData/*0:0*/ top__DOT__axi_crossbar_u__DOT__axi_r_last;
        CData/*3:0*/ top__DOT__axi_crossbar_u__DOT__axi_r_id;
    };
    struct {
        CData/*2:0*/ top__DOT__cache_dut__DOT__cacheCurState;
        CData/*2:0*/ top__DOT__cache_dut__DOT__cacheNexState;
        CData/*0:0*/ top__DOT__cache_dut__DOT__cacheHit;
        CData/*0:0*/ top__DOT__cache_dut__DOT__way1Hit;
        CData/*0:0*/ top__DOT__cache_dut__DOT__way2Hit;
        CData/*0:0*/ top__DOT__cache_dut__DOT__wenWay1;
        CData/*0:0*/ top__DOT__cache_dut__DOT__wenWay2;
        CData/*0:0*/ top__DOT__cache_dut__DOT__uncached;
        CData/*0:0*/ top__DOT__cache_dut__DOT__uncachedOk;
        CData/*0:0*/ top__DOT__cache_dut__DOT__diffAddr;
        CData/*0:0*/ top__DOT__cache_dut__DOT__validWay1_q;
        CData/*0:0*/ top__DOT__cache_dut__DOT__validWay2_q;
        CData/*0:0*/ top__DOT__cache_dut__DOT__missFlag;
        CData/*1:0*/ top__DOT__cache_dut__DOT__rdCnt;
        CData/*1:0*/ top__DOT__axi_icache_dut__DOT__r_state;
        CData/*1:0*/ top__DOT__axi_icache_dut__DOT__r_state_next;
        CData/*4:0*/ top__DOT__ID_u__DOT__ext_op;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid;
        CData/*5:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__resultValidReg_q;
        CData/*1:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul_signed;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_d;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q;
        CData/*1:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r;
        CData/*5:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__bcu_u__DOT__less;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry;
        CData/*0:0*/ top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow;
        CData/*0:0*/ top__DOT__forwarding_u__DOT__reg_wben;
        CData/*4:0*/ top__DOT__forwarding_u__DOT__reg_wb_idx;
        CData/*0:0*/ top__DOT__ls_u__DOT__csr_stall_n;
        CData/*0:0*/ top__DOT__ls_u__DOT__timr_int;
        CData/*0:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__lh;
        CData/*0:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__lhu;
        CData/*0:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__lw;
        CData/*0:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__lwu;
        CData/*0:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__ld;
        CData/*7:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b;
        CData/*2:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__wr_size;
        CData/*7:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__csrrw;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__csrrs;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__csrrc;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus;
        CData/*0:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause;
        CData/*0:0*/ top__DOT__ls_u__DOT__clint_u__DOT__axi_awready;
        CData/*0:0*/ top__DOT__ls_u__DOT__clint_u__DOT__axi_wready;
        CData/*1:0*/ top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp;
        CData/*0:0*/ top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid;
        CData/*0:0*/ top__DOT__ls_u__DOT__clint_u__DOT__axi_arready;
        CData/*1:0*/ top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp;
    };
    struct {
        CData/*0:0*/ top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid;
        CData/*0:0*/ top__DOT__ls_u__DOT__clint_u__DOT__aw_en;
        CData/*0:0*/ top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn;
        CData/*0:0*/ top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn;
        CData/*0:0*/ top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren;
        CData/*2:0*/ top__DOT__Dcache_u__DOT__cacheCurState;
        CData/*2:0*/ top__DOT__Dcache_u__DOT__cacheNexState;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__cacheHit;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__way1Hit;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__way2Hit;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__wenWay1;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__wenWay2;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__uncached;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__bitValid1_d;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__bitValid2_d;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__validWay1_q;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__validWay2_q;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__replaceEnDelay;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__randomBit;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__missFlag;
        CData/*1:0*/ top__DOT__Dcache_u__DOT__rdCnt;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__wenDelay1;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__wenDelay2;
        CData/*7:0*/ top__DOT__Dcache_u__DOT__wrMaskLatch;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__wrLow;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__wrHigh;
        CData/*7:0*/ top__DOT__Dcache_u__DOT__storeMask;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__replaceWay;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__needWrBk_Reg;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__uncache;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__axiWrBusy;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__uncacheOpOk;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__uncacheRdOk;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__uncacheWrOk;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__clean_OK;
        CData/*6:0*/ top__DOT__Dcache_u__DOT__cleanCnt;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__cleanWrValid;
        CData/*0:0*/ top__DOT__Dcache_u__DOT__oneCycleDelay;
        CData/*1:0*/ top__DOT__axi_ls_u__DOT__w_state;
        CData/*1:0*/ top__DOT__axi_ls_u__DOT__w_state_next;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__trans_ok;
        CData/*0:0*/ top__DOT__axi_ls_u__DOT__wrLast;
        CData/*7:0*/ top__DOT__axi_ls_u__DOT__wrMask_reg;
        CData/*2:0*/ top__DOT__axi_ls_u__DOT__wrSize_reg;
        CData/*7:0*/ top__DOT__axi_ls_u__DOT__storeLenth_reg;
        CData/*1:0*/ top__DOT__axi_ls_u__DOT__wrCnt;
        CData/*1:0*/ top__DOT__axi_ls_u__DOT__r_state;
        CData/*1:0*/ top__DOT__axi_ls_u__DOT__r_state_next;
        CData/*0:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_awready;
        CData/*0:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_wready;
        CData/*1:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp;
        CData/*0:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid;
        CData/*0:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_arready;
        CData/*1:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp;
        CData/*0:0*/ top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
        CData/*0:0*/ top__DOT__lsAxiSlaveRam_u__DOT__aw_en;
        SData/*15:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h;
        VlWide<4>/*127:0*/ top__DOT__cache_dut__DOT__dataWay1_1;
        VlWide<4>/*127:0*/ top__DOT__cache_dut__DOT__dataWay1_2;
        VlWide<4>/*127:0*/ top__DOT__cache_dut__DOT__dataWay2_1;
        VlWide<4>/*127:0*/ top__DOT__cache_dut__DOT__dataWay2_2;
        VlWide<8>/*255:0*/ top__DOT__cache_dut__DOT__way1Data;
        VlWide<8>/*255:0*/ top__DOT__cache_dut__DOT__way2Data;
        IData/*31:0*/ top__DOT__cache_dut__DOT__randomBit;
    };
    struct {
        VlWide<8>/*255:0*/ top__DOT__cache_dut__DOT__rdBuffer;
        VlWide<5>/*129:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2;
        VlWide<4>/*127:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg;
        IData/*31:0*/ top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w;
        IData/*31:0*/ top__DOT__ls_u__DOT__clint_u__DOT__byte_index;
        VlWide<4>/*127:0*/ top__DOT__Dcache_u__DOT__dataWay1_1;
        VlWide<4>/*127:0*/ top__DOT__Dcache_u__DOT__dataWay1_2;
        VlWide<4>/*127:0*/ top__DOT__Dcache_u__DOT__dataWay2_1;
        VlWide<4>/*127:0*/ top__DOT__Dcache_u__DOT__dataWay2_2;
        IData/*20:0*/ top__DOT__Dcache_u__DOT__tagArray1_d;
        IData/*20:0*/ top__DOT__Dcache_u__DOT__tagArray2_d;
        VlWide<8>/*255:0*/ top__DOT__Dcache_u__DOT__way1Data;
        VlWide<8>/*255:0*/ top__DOT__Dcache_u__DOT__way2Data;
        VlWide<8>/*255:0*/ top__DOT__Dcache_u__DOT__rdBuffer;
        VlWide<8>/*255:0*/ top__DOT__axi_ls_u__DOT__wr_data_reg;
        IData/*31:0*/ top__DOT__lsAxiSlaveRam_u__DOT__byte_index;
        QData/*63:0*/ top__DOT__ls_axi_w_data_o;
        QData/*63:0*/ top__DOT__ls_axi_r_data_i;
        QData/*63:0*/ top__DOT__pc_next;
        QData/*63:0*/ top__DOT__pc_new;
        QData/*63:0*/ top__DOT__sram_rdata;
        QData/*63:0*/ top__DOT__alures_ex;
        QData/*63:0*/ top__DOT__csrdata_ls;
        QData/*63:0*/ top__DOT__ls_sram_rd_data;
        QData/*63:0*/ top__DOT__wb_data;
        QData/*63:0*/ top__DOT__clint_axi_wdata;
        QData/*63:0*/ top__DOT__DcacheRdAddr;
        QData/*63:0*/ top__DOT__DcacheWrAddr;
        QData/*63:0*/ top__DOT__axi_crossbar_u__DOT__axi_ar_addr;
        QData/*63:0*/ top__DOT__axi_crossbar_u__DOT__axi_r_data;
        QData/*63:0*/ top__DOT__IF_u__DOT__pc_next_o;
        QData/*32:0*/ top__DOT__cache_dut__DOT__reqLatch;
        QData/*63:0*/ top__DOT__cache_dut__DOT__validArray1;
        QData/*63:0*/ top__DOT__cache_dut__DOT__validArray2;
        QData/*63:0*/ top__DOT__axi_icache_dut__DOT__addr_reg;
        QData/*63:0*/ top__DOT__ID_u__DOT__imm;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__src1;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__src2;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__rs1;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__rs2;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__src1Reg;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2Reg;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1;
        QData/*32:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src1;
        QData/*32:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src2;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s;
        QData/*63:0*/ top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres;
        QData/*63:0*/ top__DOT__forwarding_u__DOT__rd_wb;
        QData/*63:0*/ top__DOT__ls_u__DOT__csr_wr_data;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__commitPC;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__wr_data;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mepc;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mtvec;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mstatus;
    };
    struct {
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mcause;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mie;
        QData/*63:0*/ top__DOT__ls_u__DOT__CSR_u__DOT__mip;
        QData/*63:0*/ top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr;
        QData/*63:0*/ top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr;
        QData/*63:0*/ top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out;
        QData/*63:0*/ top__DOT__ls_u__DOT__clint_u__DOT__mtime;
        QData/*63:0*/ top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp;
        QData/*32:0*/ top__DOT__Dcache_u__DOT__reqLatch;
        QData/*63:0*/ top__DOT__Dcache_u__DOT__validArray1;
        QData/*63:0*/ top__DOT__Dcache_u__DOT__validArray2;
        QData/*63:0*/ top__DOT__Dcache_u__DOT__wrDataLatch;
        QData/*63:0*/ top__DOT__Dcache_u__DOT__dirtyArray1;
        QData/*63:0*/ top__DOT__Dcache_u__DOT__dirtyArray2;
        QData/*63:0*/ top__DOT__Dcache_u__DOT__storeData;
        QData/*63:0*/ top__DOT__Dcache_u__DOT__sramMask;
        QData/*63:0*/ top__DOT__Dcache_u__DOT__temp;
        QData/*63:0*/ top__DOT__axi_ls_u__DOT__wrAddr_reg;
        QData/*63:0*/ top__DOT__axi_ls_u__DOT__rdAddr_reg;
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
        VlUnpacked<QData/*63:0*/, 32> top__DOT__ID_u__DOT__regfile_u__DOT__regfiles;
        VlUnpacked<IData/*20:0*/, 64> top__DOT__Dcache_u__DOT__tagArray1;
        VlUnpacked<IData/*20:0*/, 64> top__DOT__Dcache_u__DOT__tagArray2;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n;
    CData/*0:0*/ top__DOT____Vcellinp__Dcache_u__lsValid_i;
    CData/*0:0*/ top__DOT____Vcellinp__Dcache_u__exValid_i;
    CData/*5:0*/ top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A;
    CData/*0:0*/ top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN;
    CData/*5:0*/ top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A;
    CData/*0:0*/ top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN;
    CData/*5:0*/ top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A;
    CData/*5:0*/ top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A;
    CData/*1:0*/ __Vdly__top__DOT__cache_dut__DOT__rdCnt;
    CData/*1:0*/ __Vdly__top__DOT__Dcache_u__DOT__rdCnt;
    CData/*6:0*/ __Vdly__top__DOT__Dcache_u__DOT__cleanCnt;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0;
    CData/*0:0*/ __VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n;
    CData/*0:0*/ __Vchglast__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n;
    IData/*31:0*/ top__DOT____Vcellinp__Dcache_u__addr_i;
    VlWide<3>/*95:0*/ top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout;
    VlWide<10>/*315:0*/ top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout;
    VlWide<9>/*263:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout;
    VlWide<8>/*226:0*/ top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout;
    VlWide<10>/*288:0*/ top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout;
    VlWide<10>/*288:0*/ top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din;
    QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT____Vcellinp__divider__divisor;
    QData/*63:0*/ top__DOT__ex_stage_u__DOT__u_ALU__DOT____Vcellinp__divider__dividend;
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
