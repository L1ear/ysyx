// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+788,"clk", false,-1);
        tracep->declBit(c+789,"rst_n", false,-1);
        tracep->declQuad(c+790,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+792,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+794,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+795,"regA0", false,-1, 63,0);
        tracep->declBit(c+797,"stall_n_diff", false,-1);
        tracep->declBit(c+798,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+799,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+800,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+802,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+803,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+804,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+805,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+806,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+807,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+808,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+809,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+810,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+811,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+812,"axi_r_ready_o", false,-1);
        tracep->declBit(c+813,"axi_r_valid_i", false,-1);
        tracep->declBus(c+814,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+815,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+817,"axi_r_last_i", false,-1);
        tracep->declBus(c+818,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+819,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+820,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+821,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+822,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+824,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+825,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+826,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+827,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+828,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+829,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+830,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+831,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+832,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+833,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+834,"axi_w_ready_i", false,-1);
        tracep->declBit(c+835,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+836,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+838,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+839,"axi_w_last_o", false,-1);
        tracep->declBus(c+840,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+841,"axi_b_ready_o", false,-1);
        tracep->declBit(c+842,"axi_b_valid_i", false,-1);
        tracep->declBus(c+843,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+844,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+845,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+884,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+884,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+884,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+884,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+885,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+886,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+887,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+788,"top clk", false,-1);
        tracep->declBit(c+789,"top rst_n", false,-1);
        tracep->declQuad(c+790,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+792,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+794,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+795,"top regA0", false,-1, 63,0);
        tracep->declBit(c+797,"top stall_n_diff", false,-1);
        tracep->declBit(c+798,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+799,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+800,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+802,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+803,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+805,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+806,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+807,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+808,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+809,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+812,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+813,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+814,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+815,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+817,"top axi_r_last_i", false,-1);
        tracep->declBus(c+818,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+819,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+820,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+821,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+822,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+824,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+825,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+826,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+827,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+828,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+829,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+830,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+831,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+832,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+833,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+834,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+835,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+836,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+838,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+839,"top axi_w_last_o", false,-1);
        tracep->declBus(c+840,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+841,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+842,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+843,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+844,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+845,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+164,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+306,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+307,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+130,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+889,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+131,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+309,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+310,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+890,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+311,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+132,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+312,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+165,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+166,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+167,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+892,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+893,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+894,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+169,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+313,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+170,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+172,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+889,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+291,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+173,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+174,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+890,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+175,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+176,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+314,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+292,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+177,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+294,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+889,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+315,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+178,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+179,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+895,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+896,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top instr_fetching", false,-1);
        tracep->declBit(c+846,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+888,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+891,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+889,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+316,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+317,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+897,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+890,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+898,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+891,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+899,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+671,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+847,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+672,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+674,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+675,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+900,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+848,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+318,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+180,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+888,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+901,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+889,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+319,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+182,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+897,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+890,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+902,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+891,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+891,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+676,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+320,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+321,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+183,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+323,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+889,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+324,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+849,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+850,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+851,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+852,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+853,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+888,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+901,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+889,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+319,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+133,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+897,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+890,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+898,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+891,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+903,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+677,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+854,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+678,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+680,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+675,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+904,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+905,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+325,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+327,"top is_jump", false,-1);
        tracep->declQuad(c+328,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+855,"top pc_stall_n", false,-1);
        tracep->declBit(c+681,"top if_stall_n", false,-1);
        tracep->declBit(c+330,"top if_instr_valid", false,-1);
        tracep->declBit(c+907,"top sram_data_valid", false,-1);
        tracep->declQuad(c+331,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+333,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+908,"top sram_ren", false,-1);
        tracep->declBit(c+335,"top sram_addr_valid", false,-1);
        tracep->declBit(c+336,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+337,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+338,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+339,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+341,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+656,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+658,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+342,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+344,"top src1sel_id", false,-1);
        tracep->declBus(c+345,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+346,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+347,"top is_brc_id", false,-1);
        tracep->declBit(c+348,"top is_jal_id", false,-1);
        tracep->declBit(c+349,"top is_jalr_id", false,-1);
        tracep->declBit(c+350,"top wben_id", false,-1);
        tracep->declBus(c+351,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+352,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+855,"top id_stall_n", false,-1);
        tracep->declBit(c+353,"top DivEn_id", false,-1);
        tracep->declBus(c+354,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+355,"top in_trap_id", false,-1);
        tracep->declBit(c+356,"top out_trap_id", false,-1);
        tracep->declBit(c+357,"top trap_id", false,-1);
        tracep->declBit(c+358,"top ld_use_hazard", false,-1);
        tracep->declBit(c+359,"top id_flush", false,-1);
        tracep->declQuad(c+360,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+362,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+363,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+365,"top src1sel_ex", false,-1);
        tracep->declBus(c+366,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+367,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+369,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+371,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+373,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+375,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+376,"top is_brc_ex", false,-1);
        tracep->declBit(c+377,"top is_jal_ex", false,-1);
        tracep->declBit(c+378,"top is_jalr_ex", false,-1);
        tracep->declBit(c+379,"top wben_ex", false,-1);
        tracep->declBit(c+380,"top DivEn_ex", false,-1);
        tracep->declBus(c+381,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+382,"top trap_ex", false,-1);
        tracep->declBit(c+856,"top ex_stall_n", false,-1);
        tracep->declQuad(c+10,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+383,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+384,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+385,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+386,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+387,"top ex_flush", false,-1);
        tracep->declBit(c+388,"top rden_ls", false,-1);
        tracep->declBit(c+389,"top wren_ls", false,-1);
        tracep->declBit(c+682,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+683,"top ex_not_ok", false,-1);
        tracep->declQuad(c+12,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+18,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+857,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+19,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+26,"top trap_ls", false,-1);
        tracep->declBit(c+684,"top ls_stall_n", false,-1);
        tracep->declBit(c+685,"top ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+134,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+909,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+910,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+686,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+30,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+390,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+391,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+393,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+395,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+397,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+398,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+400,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+401,"top wben_wb", false,-1);
        tracep->declQuad(c+402,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+684,"top wb_stall_n", false,-1);
        tracep->declQuad(c+404,"top clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+888,"top clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+406,"top clint_axi_arvalid", false,-1);
        tracep->declBit(c+184,"top clint_axi_arready", false,-1);
        tracep->declBus(c+407,"top clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+31,"top clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+185,"top clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+186,"top clint_axi_rvalid", false,-1);
        tracep->declBit(c+408,"top clint_axi_rready", false,-1);
        tracep->declBus(c+187,"top clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+188,"top clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+888,"top clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+409,"top clint_axi_awvalid", false,-1);
        tracep->declBit(c+190,"top clint_axi_awready", false,-1);
        tracep->declQuad(c+410,"top clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+191,"top clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+412,"top clint_axi_wvalid", false,-1);
        tracep->declBit(c+192,"top clint_axi_wready", false,-1);
        tracep->declBus(c+185,"top clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+193,"top clint_axi_bvalid", false,-1);
        tracep->declBit(c+413,"top clint_axi_bready", false,-1);
        tracep->declBit(c+414,"top rw_valid_i", false,-1);
        tracep->declBit(c+33,"top rw_ready_o", false,-1);
        tracep->declBus(c+316,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+674,"top rdLast_o", false,-1);
        tracep->declBus(c+136,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+672,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+688,"top dataValid_o", false,-1);
        tracep->declBit(c+137,"top ld_csr_hazard", false,-1);
        tracep->declBit(c+34,"top ls_flush", false,-1);
        tracep->declBit(c+34,"top in_intr_ls", false,-1);
        tracep->declBit(c+859,"top dataNotOk", false,-1);
        tracep->declBit(c+415,"top DcacheRdValid", false,-1);
        tracep->declBit(c+416,"top DcacheWrValid", false,-1);
        tracep->declBit(c+35,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+319,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+680,"top lsRdLast", false,-1);
        tracep->declQuad(c+417,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+782,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+678,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+689,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+419,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+298,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+319,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+420,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+421,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+133,"top lsLoadSize", false,-1, 2,0);
        tracep->declBus(c+884,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+884,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+884,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+884,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+885,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+886,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+887,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+846,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+891,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+889,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+316,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+317,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+897,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+890,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+898,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+899,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+671,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+847,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+672,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+674,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+675,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+900,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+848,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+318,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+180,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+901,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+889,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+319,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+182,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+897,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+890,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+902,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+676,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+320,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+321,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+183,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+323,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+889,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+324,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+849,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+850,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+851,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+852,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+853,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+6,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+7,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+901,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+889,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+319,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+133,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+897,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+890,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+898,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+903,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+677,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+854,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+678,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+680,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+675,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+904,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+820,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+821,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+822,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+824,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+825,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+826,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+827,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+828,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+829,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+830,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+831,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+832,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+833,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+834,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+835,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+836,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+838,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+839,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+840,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+841,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+842,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+843,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+844,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+845,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+798,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+799,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+800,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+802,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+803,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+805,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+806,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+807,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+808,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+809,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+812,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+813,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+814,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+815,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+817,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+818,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+819,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+169,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+313,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+170,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+172,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+889,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+291,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+173,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+174,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+890,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+175,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+176,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+314,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+292,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+177,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+294,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+889,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+315,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+178,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+179,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+901,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+896,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+164,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+306,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+307,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+130,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+889,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+131,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+309,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+310,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+890,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+311,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+132,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+312,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+165,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+166,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+167,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+165,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+901,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+894,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+404,"top axi_crossbar_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_crossbar_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+406,"top axi_crossbar_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+184,"top axi_crossbar_u clint_axi_arready", false,-1);
        tracep->declBus(c+407,"top axi_crossbar_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+31,"top axi_crossbar_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+185,"top axi_crossbar_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+186,"top axi_crossbar_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+408,"top axi_crossbar_u clint_axi_rready", false,-1);
        tracep->declBus(c+187,"top axi_crossbar_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+188,"top axi_crossbar_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_crossbar_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+409,"top axi_crossbar_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+190,"top axi_crossbar_u clint_axi_awready", false,-1);
        tracep->declQuad(c+410,"top axi_crossbar_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+191,"top axi_crossbar_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+412,"top axi_crossbar_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+192,"top axi_crossbar_u clint_axi_wready", false,-1);
        tracep->declBus(c+185,"top axi_crossbar_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+193,"top axi_crossbar_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+413,"top axi_crossbar_u clint_axi_bready", false,-1);
        tracep->declBit(c+848,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+318,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+180,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+901,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+889,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+319,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+182,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+897,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+890,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+902,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+676,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+320,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+321,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+183,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+323,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+889,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+324,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+849,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+850,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+851,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+852,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+690,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+36,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+422,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+37,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+889,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+138,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+424,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+897,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+911,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+898,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+425,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+691,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+860,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+692,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+694,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+675,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+861,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+426,"top axi_crossbar_u clint_r_trans", false,-1);
        tracep->declBit(c+194,"top axi_crossbar_u clint_w_trans", false,-1);
        tracep->declBit(c+427,"top axi_crossbar_u perip_r_trans", false,-1);
        tracep->declBit(c+195,"top axi_crossbar_u perip_w_trans", false,-1);
        tracep->declBit(c+788,"top IF_u clk", false,-1);
        tracep->declBit(c+789,"top IF_u rst_n", false,-1);
        tracep->declBit(c+327,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+328,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+355,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+356,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+681,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+325,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+338,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+330,"top IF_u if_instr_valid", false,-1);
        tracep->declBit(c+34,"top IF_u in_intr_ls", false,-1);
        tracep->declQuad(c+331,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+907,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+336,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+337,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+333,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+908,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+335,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+333,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+788,"top cache_dut clk", false,-1);
        tracep->declBit(c+789,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+428,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+335,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+890,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+912,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+914,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+681,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+336,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+429,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+337,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+331,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+414,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+33,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+316,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+674,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+136,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+672,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+688,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+888,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+915,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+916,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+917,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+918,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+919,"top cache_dut unCacheOp", false,-1, 2,0);
        tracep->declBus(c+430,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+695,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+431,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+39,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+40,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+196,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+200,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+204,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+208,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+432,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+436,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+432,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+436,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+440,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+441,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+442,"top cache_dut uncached", false,-1);
        tracep->declBit(c+41,"top cache_dut uncachedOk", false,-1);
        tracep->declBit(c+443,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+42,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+44,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+45,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+46,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+47,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+49,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+51,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+52,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+862,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+863,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+864,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+865,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+53,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+54,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+920,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+921,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+444,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+212,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+220,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+866,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+868,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+445,"top cache_dut missEn", false,-1);
        tracep->declBit(c+446,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+55,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+228,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+57,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+447,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+448,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+456,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+922,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+884,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+923,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+922,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+196,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+788,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+457,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+458,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+924,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+696,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+432,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+459,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+440,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+928,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+922,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+884,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+923,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+922,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+200,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+788,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+457,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+458,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+924,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+696,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+436,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+459,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+440,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+928,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+922,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+884,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+923,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+922,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+204,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+788,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+460,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+461,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+924,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+697,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+432,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+462,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+441,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+928,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+922,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+884,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+923,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+922,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+208,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+788,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+460,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+461,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+924,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+697,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+436,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+462,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+441,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+928,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+884,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+884,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+884,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+884,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+885,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+886,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+887,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+788,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+789,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+414,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+33,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+672,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+139,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+316,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+674,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+688,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+1,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+846,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+891,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+889,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+316,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+317,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+897,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+890,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+898,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+899,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+671,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+847,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+672,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+674,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+675,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+900,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+932,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+897,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+933,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+934,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+58,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+698,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+2,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+5,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+935,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+891,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+890,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+316,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+317,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+788,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+789,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+325,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+338,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+855,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+359,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+339,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+341,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+463,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+465,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+936,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+937,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+788,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+789,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+855,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+466,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+469,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+788,"top ID_u clk", false,-1);
        tracep->declBit(c+789,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+339,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+391,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+397,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+341,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+398,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+400,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+401,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+658,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+656,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+342,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+344,"top ID_u src1sel", false,-1);
        tracep->declBus(c+345,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+346,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+349,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+348,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+347,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+350,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+351,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+352,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+795,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+353,"top ID_u DivEn", false,-1);
        tracep->declBus(c+354,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+357,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+355,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+356,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+472,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+342,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+658,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+656,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+339,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+341,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+351,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+352,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+472,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+344,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+345,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+346,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+349,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+348,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+347,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+350,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+353,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+354,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+357,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+355,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+356,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+473,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+474,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+475,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+476,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+472,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+342,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+788,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+391,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+397,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+351,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+658,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+352,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+656,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+400,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+398,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+401,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+795,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+717+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+341,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+362,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBus(c+18,"top hazard_detect_u instr_ls_i", false,-1, 31,0);
        tracep->declBus(c+397,"top hazard_detect_u instr_wb_i", false,-1, 31,0);
        tracep->declBit(c+358,"top hazard_detect_u ld_use_hazard", false,-1);
        tracep->declBit(c+137,"top hazard_detect_u ld_csr_hazard", false,-1);
        tracep->declBit(c+477,"top hazard_detect_u wb_is_load", false,-1);
        tracep->declBit(c+59,"top hazard_detect_u ls_is_csropi", false,-1);
        tracep->declBit(c+788,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+789,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+856,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+387,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+339,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+341,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+342,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+656,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+658,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+346,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+349,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+348,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+347,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+344,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+345,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+350,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+351,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+352,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+353,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+354,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+357,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+360,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+362,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+367,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+369,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+371,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+375,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+378,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+377,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+376,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+365,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+366,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+379,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+385,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+386,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+380,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+381,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+382,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+478,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+480,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+481,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+482,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+483,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+484,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+485,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+938,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+937,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+788,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+789,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+856,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+660,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+486,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+375,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+369,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+367,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+371,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+360,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+362,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+378,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+377,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+376,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+365,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+366,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+383,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+384,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+16,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+398,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+380,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+381,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+363,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+328,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+373,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+327,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+683,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+388,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+389,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+682,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+496,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+498,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+500,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+373,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+375,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+496,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+498,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+380,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+381,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+363,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+502,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+503,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+504,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+506,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+507,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+509,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+511,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+511,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+512,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+513,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+514,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+516,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+517,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+518,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+520,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+522,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+524,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+496,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+507,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+506,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+509,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+516,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+503,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+517,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+526,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+513,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+511,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+512,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+506,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+511,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+527,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+496,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+528,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+512,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+511,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+514,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+529,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+531,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+533,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+535,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+537,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+539,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+541,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+496,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+498,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+381,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+524,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+500,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+373,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+378,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+377,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+376,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+543,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+371,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+360,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+328,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+327,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+544,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+546,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+939,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+548,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+549,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+550,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+551,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+553,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+555,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+788,"top forwarding_u clk", false,-1);
        tracep->declBit(c+789,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+385,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+386,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+60,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+400,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+19,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+401,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+398,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+684,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+383,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+384,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+10,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+10,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+61,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+62,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+141,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+556,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+142,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+143,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+557,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+144,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+788,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+789,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+360,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+373,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+362,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+363,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+379,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+382,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+684,"top L_S_reg_u stall_n", false,-1);
        tracep->declBit(c+34,"top L_S_reg_u flush_i", false,-1);
        tracep->declQuad(c+12,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+18,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+16,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+19,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+26,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declArray(c+145,"top L_S_reg_u bundle", false,-1, 225,0);
        tracep->declBus(c+940,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+937,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+788,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+789,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+684,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+145,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+63,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+788,"top ls_u clk", false,-1);
        tracep->declBit(c+789,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+393,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+397,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+395,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+402,"top ls_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+684,"top ls_u stall_n", false,-1);
        tracep->declQuad(c+857,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+685,"top ls_u ls_not_ok", false,-1);
        tracep->declBit(c+34,"top ls_u in_intr_ls", false,-1);
        tracep->declBit(c+137,"top ls_u ld_csr_hazard", false,-1);
        tracep->declQuad(c+391,"top ls_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+360,"top ls_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+339,"top ls_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+404,"top ls_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+888,"top ls_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+406,"top ls_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+184,"top ls_u clint_axi_arready", false,-1);
        tracep->declBus(c+407,"top ls_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+31,"top ls_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+185,"top ls_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+186,"top ls_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+408,"top ls_u clint_axi_rready", false,-1);
        tracep->declBus(c+187,"top ls_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+188,"top ls_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+888,"top ls_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+409,"top ls_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+190,"top ls_u clint_axi_awready", false,-1);
        tracep->declQuad(c+410,"top ls_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+191,"top ls_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+412,"top ls_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+192,"top ls_u clint_axi_wready", false,-1);
        tracep->declBus(c+185,"top ls_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+193,"top ls_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+413,"top ls_u clint_axi_bready", false,-1);
        tracep->declQuad(c+16,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+134,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+30,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+390,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+859,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+859,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+686,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u rden", false,-1);
        tracep->declBus(c+71,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+134,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+558,"top ls_u wren_last", false,-1);
        tracep->declQuad(c+559,"top ls_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+72,"top ls_u timr_int", false,-1);
        tracep->declBit(c+788,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+789,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+71,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+134,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+393,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+558,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+857,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+685,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+134,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+30,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+390,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+859,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+859,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+686,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+686,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+73,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+74,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+561,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+562,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+563,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+564,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+565,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+390,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+699,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+700,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+701,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+30,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+75,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+76,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+77,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+78,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+18,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+397,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+395,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+402,"top ls_u ls_ctr_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+71,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+134,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+153,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+154,"top ls_u ls_ctr_u csr_st_en", false,-1);
        tracep->declBit(c+788,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+789,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+391,"top ls_u CSR_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+360,"top ls_u CSR_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+339,"top ls_u CSR_u id_pc", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+559,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+684,"top ls_u CSR_u stall_n", false,-1);
        tracep->declBit(c+72,"top ls_u CSR_u timer_int_i", false,-1);
        tracep->declBit(c+34,"top ls_u CSR_u in_intr_ls", false,-1);
        tracep->declQuad(c+20,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declQuad(c+79,"top ls_u CSR_u commitPC", false,-1, 63,0);
        tracep->declBit(c+81,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+82,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+83,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+84,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+85,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+86,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+87,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+88,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+89,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declBit(c+90,"top ls_u CSR_u sel_mie", false,-1);
        tracep->declBit(c+91,"top ls_u CSR_u sel_mip", false,-1);
        tracep->declQuad(c+559,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+155,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+157,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+566,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+92,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declBit(c+94,"top ls_u CSR_u mstatus_MIE", false,-1);
        tracep->declQuad(c+95,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+97,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declQuad(c+99,"top ls_u CSR_u mie", false,-1, 63,0);
        tracep->declBit(c+101,"top ls_u CSR_u mie_MTIE", false,-1);
        tracep->declQuad(c+102,"top ls_u CSR_u mip", false,-1, 63,0);
        tracep->declBit(c+104,"top ls_u CSR_u mie_MTIP", false,-1);
        tracep->declBit(c+788,"top ls_u clint_u clk", false,-1);
        tracep->declBit(c+789,"top ls_u clint_u rst_n", false,-1);
        tracep->declQuad(c+404,"top ls_u clint_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+888,"top ls_u clint_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+406,"top ls_u clint_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+184,"top ls_u clint_u clint_axi_arready", false,-1);
        tracep->declBus(c+407,"top ls_u clint_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+31,"top ls_u clint_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+185,"top ls_u clint_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+186,"top ls_u clint_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+408,"top ls_u clint_u clint_axi_rready", false,-1);
        tracep->declBus(c+187,"top ls_u clint_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+188,"top ls_u clint_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+888,"top ls_u clint_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+409,"top ls_u clint_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+190,"top ls_u clint_u clint_axi_awready", false,-1);
        tracep->declQuad(c+410,"top ls_u clint_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+191,"top ls_u clint_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+412,"top ls_u clint_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+192,"top ls_u clint_u clint_axi_wready", false,-1);
        tracep->declBus(c+185,"top ls_u clint_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+193,"top ls_u clint_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+413,"top ls_u clint_u clint_axi_bready", false,-1);
        tracep->declBit(c+72,"top ls_u clint_u hart0_time_int_o", false,-1);
        tracep->declQuad(c+229,"top ls_u clint_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+190,"top ls_u clint_u axi_awready", false,-1);
        tracep->declBit(c+192,"top ls_u clint_u axi_wready", false,-1);
        tracep->declBus(c+231,"top ls_u clint_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+193,"top ls_u clint_u axi_bvalid", false,-1);
        tracep->declQuad(c+232,"top ls_u clint_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+184,"top ls_u clint_u axi_arready", false,-1);
        tracep->declBus(c+185,"top ls_u clint_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+186,"top ls_u clint_u axi_rvalid", false,-1);
        tracep->declBit(c+234,"top ls_u clint_u aw_en", false,-1);
        tracep->declQuad(c+31,"top ls_u clint_u reg_data_out", false,-1, 63,0);
        tracep->declQuad(c+105,"top ls_u clint_u mtime", false,-1, 63,0);
        tracep->declQuad(c+107,"top ls_u clint_u mtimecmp", false,-1, 63,0);
        tracep->declBit(c+568,"top ls_u clint_u mtimeWrEn", false,-1);
        tracep->declBit(c+569,"top ls_u clint_u mtimecmpWrEn", false,-1);
        tracep->declBit(c+570,"top ls_u clint_u slv_reg_wren", false,-1);
        tracep->declBit(c+295,"top ls_u clint_u slv_reg_rden", false,-1);
        tracep->declBus(c+109,"top ls_u clint_u byte_index", false,-1, 31,0);
        tracep->declBit(c+110,"top ls_u clint_u time_int_intern", false,-1);
        tracep->declBit(c+111,"top ls_u clint_u time_int_intern_0", false,-1);
        tracep->declBit(c+112,"top ls_u clint_u time_int_intern_1", false,-1);
        tracep->declBit(c+788,"top Dcache_u clk", false,-1);
        tracep->declBit(c+789,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+571,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+572,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+573,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+574,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+134,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+29,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+684,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+682,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+859,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+686,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBus(c+30,"top Dcache_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+390,"top Dcache_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+415,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+35,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+319,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+680,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+575,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+870,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declBus(c+133,"top Dcache_u cacheRdSize_o", false,-1, 2,0);
        tracep->declQuad(c+678,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+689,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+419,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+416,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+298,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+319,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+420,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+421,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+888,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+915,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+916,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+917,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+918,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+919,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+576,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+871,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+577,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+578,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+579,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+235,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+239,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+243,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+247,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+580,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+584,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+580,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+584,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+784,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+785,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+588,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+589,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+590,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+592,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+593,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+594,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+113,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+115,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+159,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+160,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+872,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+873,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+874,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+875,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+161,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+162,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+941,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+942,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+117,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+118,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+119,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+595,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+251,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+259,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+876,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+878,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+596,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+597,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+598,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+781,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+119,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+600,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+601,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+609,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+120,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+121,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+610,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+122,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+612,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+614,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+616,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+617,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+618,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+620,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+621,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+623,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+627,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+623,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+627,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+631,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+632,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+123,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+670,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+416,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+124,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+416,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+870,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+633,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+634,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+702,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+163,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+125,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+635,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+636,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+126,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBus(c+922,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+884,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+923,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+922,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+235,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+788,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+880,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+786,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+637,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+703,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+580,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+881,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+784,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+623,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+922,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+884,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+923,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+922,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+239,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+788,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+880,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+786,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+641,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+703,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+584,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+881,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+784,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+627,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+922,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+884,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+923,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+922,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+243,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+788,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+882,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+787,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+637,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+704,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+580,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+883,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+785,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+623,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+922,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+884,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+923,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+922,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+247,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+788,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+882,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+787,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+641,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+704,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+584,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+883,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+785,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+627,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+884,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+884,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+884,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+884,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+885,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+886,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+887,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+788,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+789,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+415,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+35,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+678,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+417,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+319,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+680,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+689,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+416,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+419,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+298,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+319,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+421,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+133,"top axi_ls_u loadSize", false,-1, 2,0);
        tracep->declBus(c+420,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+782,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+848,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+318,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+180,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+901,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+889,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+319,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+182,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+897,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+890,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+902,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+676,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+320,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+321,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+183,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+323,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+889,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+324,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+849,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+850,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+851,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+852,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+853,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+888,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+901,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+889,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+319,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+133,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+897,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+890,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+898,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+903,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+677,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+854,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+678,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+680,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+675,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+904,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+932,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+897,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+933,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+934,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+645,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+705,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+318,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+320,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+324,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+943,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+323,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+180,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+267,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+275,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+182,"top axi_ls_u wrSize_reg", false,-1, 2,0);
        tracep->declBus(c+276,"top axi_ls_u storeLenth_reg", false,-1, 7,0);
        tracep->declBus(c+128,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+932,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+897,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+933,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+934,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+129,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+706,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+6,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+9,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+935,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+901,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+890,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+944,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+917,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+277,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+788,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+789,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+857,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+19,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+684,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+391,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+397,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+393,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+395,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+401,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+402,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+945,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+937,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+788,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+789,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+684,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+707,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+646,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+391,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+397,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+393,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+395,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+402,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+400,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+398,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+788,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+789,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+358,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+327,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+355,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+356,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+330,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+683,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+685,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u in_intr_ls", false,-1);
        tracep->declBit(c+681,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+855,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+855,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+856,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+684,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+684,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+359,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+387,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u ls_flush", false,-1);
        tracep->declBus(c+946,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+946,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+309,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+173,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+788,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+789,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+170,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+888,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+313,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+169,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+292,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+177,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+314,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+176,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+179,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+178,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+315,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+307,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+888,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+306,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+164,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+167,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+166,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+165,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+312,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+278,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+169,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+176,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+179,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+178,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+280,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+164,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+167,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+166,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+165,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+947,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+948,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+282,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+284,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+286,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+288,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+296,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+297,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+949,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+951,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+290,"top lsAxiSlaveRam_u aw_en", false,-1);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_1e22d3d3_0;

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<8>/*255:0*/ __Vtemp262;
    VlWide<8>/*255:0*/ __Vtemp263;
    VlWide<8>/*255:0*/ __Vtemp266;
    VlWide<4>/*127:0*/ __Vtemp267;
    VlWide<4>/*127:0*/ __Vtemp268;
    VlWide<3>/*95:0*/ __Vtemp269;
    VlWide<3>/*95:0*/ __Vtemp271;
    VlWide<3>/*95:0*/ __Vtemp272;
    VlWide<3>/*95:0*/ __Vtemp273;
    VlWide<3>/*95:0*/ __Vtemp274;
    VlWide<3>/*95:0*/ __Vtemp275;
    VlWide<3>/*95:0*/ __Vtemp278;
    VlWide<3>/*95:0*/ __Vtemp279;
    VlWide<3>/*95:0*/ __Vtemp280;
    VlWide<3>/*95:0*/ __Vtemp281;
    VlWide<3>/*95:0*/ __Vtemp282;
    VlWide<4>/*127:0*/ __Vtemp286;
    VlWide<4>/*127:0*/ __Vtemp293;
    VlWide<4>/*127:0*/ __Vtemp296;
    VlWide<4>/*127:0*/ __Vtemp303;
    VlWide<4>/*127:0*/ __Vtemp306;
    VlWide<4>/*127:0*/ __Vtemp315;
    VlWide<4>/*127:0*/ __Vtemp318;
    VlWide<4>/*127:0*/ __Vtemp327;
    VlWide<4>/*127:0*/ __Vtemp330;
    VlWide<4>/*127:0*/ __Vtemp340;
    VlWide<4>/*127:0*/ __Vtemp343;
    VlWide<4>/*127:0*/ __Vtemp353;
    VlWide<10>/*319:0*/ __Vtemp358;
    VlWide<4>/*127:0*/ __Vtemp359;
    VlWide<4>/*127:0*/ __Vtemp360;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+2,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+5,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+6,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
        tracep->fullBit(oldp+9,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+10,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+12,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+14,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+16,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullIData(oldp+18,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1eU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U))),32);
        tracep->fullBit(oldp+19,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+26,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+27,((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))));
        tracep->fullBit(oldp+28,((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))));
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out),64);
        tracep->fullBit(oldp+33,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__in_intr_ls));
        tracep->fullBit(oldp+35,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullCData(oldp+37,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U)),4);
        tracep->fullCData(oldp+38,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                     : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))),4);
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__cache_dut__DOT__uncachedOk));
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+44,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+45,((0x3fU & (IData)(
                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                     >> 5U)))),6);
        tracep->fullIData(oldp+46,((0x1fffffU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))),21);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+51,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullBit(oldp+52,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullIData(oldp+53,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullIData(oldp+54,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullQData(oldp+55,((((QData)((IData)(
                                                     (0x1fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                 >> 0xbU))))) 
                                     << 0xbU) | (QData)((IData)(
                                                                (0x7e0U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                             >> 5U)) 
                                                                    << 5U)))))),64);
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullBit(oldp+59,(((0x73U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                  & (((1U == (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU))) 
                                      | (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))) 
                                     | (2U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))))));
        tracep->fullCData(oldp+60,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))),5);
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+63,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+71,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                          >> 0xeU))),3);
        tracep->fullBit(oldp+72,(((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__time_int_intern_0) 
                                  & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__time_int_intern_1)))));
        tracep->fullBit(oldp+73,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+74,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (4U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+75,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+76,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+77,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+78,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC),64);
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs));
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc));
        tracep->fullBit(oldp+84,((0x1cU == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 4U)))));
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullBit(oldp+90,(((0x304U == (0xfffU 
                                              & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                  << 0xaU) 
                                                 | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 0x16U)))) 
                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullBit(oldp+91,(((0x344U == (0xfffU 
                                              & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                  << 0xaU) 
                                                 | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 0x16U)))) 
                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullBit(oldp+94,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                >> 3U)))));
        tracep->fullQData(oldp+95,(((0x1cU == (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))
                                     ? 0xbULL : ((IData)(vlSelf->top__DOT__in_intr_ls)
                                                  ? 0x8000000000000007ULL
                                                  : 0ULL))),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie),64);
        tracep->fullBit(oldp+101,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                                 >> 7U)))));
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip),64);
        tracep->fullBit(oldp+104,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                 >> 7U)))));
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp),64);
        tracep->fullIData(oldp+109,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index),32);
        tracep->fullBit(oldp+110,((vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                                   >= vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp)));
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__time_int_intern_0));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__time_int_intern_1));
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+117,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullIData(oldp+118,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [0x23U]),21);
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+122,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
        tracep->fullCData(oldp+128,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+129,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+130,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? 0U
                                               : 1U))),4);
        tracep->fullCData(oldp+131,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (0xffU 
                                              & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U))))),8);
        tracep->fullCData(oldp+132,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (0xfU 
                                              & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                                  : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))))),4);
        tracep->fullCData(oldp+133,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                      : 3U)),3);
        tracep->fullQData(oldp+134,((((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x16U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                               >> 1U)))
                                      : ((((0x73U == 
                                            (0x7fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 1U))) 
                                           & (((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 0xdU))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                      >> 0xdU)))) 
                                              | (2U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                     >> 0xdU))))) 
                                          & ((0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 0x16U)) 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 8U))))
                                          ? (((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))
                                          : (((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                 << 0x1eU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                   >> 2U)))))),64);
        tracep->fullIData(oldp+136,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullBit(oldp+137,((((3U == (0x7fU & 
                                            (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                             >> 1U))) 
                                    & ((0x73U == (0x7fU 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 2U))) 
                                       & (((1U == (7U 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 0xeU))) 
                                           | (3U == 
                                              (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))) 
                                          | (2U == 
                                             (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))))) 
                                   & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x11U))))));
        tracep->fullCData(oldp+138,((0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
        tracep->fullQData(oldp+139,((QData)((IData)(
                                                    ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                                      : 
                                                     (((IData)(
                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                >> 0xbU)) 
                                                       << 0xbU) 
                                                      | (0x7e0U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                     >> 5U)) 
                                                            << 5U))))))),64);
        tracep->fullBit(oldp+141,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+142,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+143,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+144,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        if (vlSelf->top__DOT__in_intr_ls) {
            __Vtemp262[0U] = Vtop__ConstPool__CONST_1e22d3d3_0[0U];
            __Vtemp262[1U] = Vtop__ConstPool__CONST_1e22d3d3_0[1U];
            __Vtemp262[2U] = Vtop__ConstPool__CONST_1e22d3d3_0[2U];
            __Vtemp262[3U] = Vtop__ConstPool__CONST_1e22d3d3_0[3U];
            __Vtemp262[4U] = Vtop__ConstPool__CONST_1e22d3d3_0[4U];
            __Vtemp262[5U] = Vtop__ConstPool__CONST_1e22d3d3_0[5U];
            __Vtemp262[6U] = Vtop__ConstPool__CONST_1e22d3d3_0[6U];
            __Vtemp262[7U] = Vtop__ConstPool__CONST_1e22d3d3_0[7U];
        } else {
            __Vtemp262[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp262[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1eU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 2U));
            __Vtemp262[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1eU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 2U));
            __Vtemp262[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1eU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 2U));
            __Vtemp262[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1eU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x7cU 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp262[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp262[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp262[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
        }
        tracep->fullWData(oldp+145,(__Vtemp262),226);
        tracep->fullBit(oldp+153,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+154,((((0x73U == (0x7fU 
                                               & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 1U))) 
                                    & (((1U == (7U 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 0xdU))) 
                                        | (3U == (7U 
                                                  & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                     >> 0xdU)))) 
                                       | (2U == (7U 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 0xdU))))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullQData(oldp+155,((vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                                     | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+157,(((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullBit(oldp+159,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+160,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+161,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+162,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+163,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullBit(oldp+164,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+165,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+166,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+169,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+170,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg)),64);
        tracep->fullCData(oldp+172,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+173,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)))),3);
        tracep->fullCData(oldp+174,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+175,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 0xfU)),4);
        tracep->fullBit(oldp+176,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+177,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (0xffU 
                                              & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)))),8);
        tracep->fullBit(oldp+178,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+179,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+182,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
        tracep->fullCData(oldp+183,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+184,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready));
        tracep->fullCData(oldp+185,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp),2);
        tracep->fullBit(oldp+186,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+187,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                      : 0U)),3);
        tracep->fullQData(oldp+188,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+190,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready));
        tracep->fullCData(oldp+191,(vlSelf->top__DOT__clint_axi_wstrb),8);
        tracep->fullBit(oldp+192,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready));
        tracep->fullBit(oldp+193,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid));
        tracep->fullBit(oldp+194,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+195,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))));
        tracep->fullWData(oldp+196,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+200,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+204,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+208,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+212,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+220,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullIData(oldp+228,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr),64);
        tracep->fullCData(oldp+231,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr),64);
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en));
        tracep->fullWData(oldp+235,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+239,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+243,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+247,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+251,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+259,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullWData(oldp+267,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+275,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+276,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
        tracep->fullCData(oldp+277,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+290,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullCData(oldp+291,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                               ? 0U
                                               : 3U))),8);
        tracep->fullQData(oldp+292,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o)),64);
        tracep->fullBit(oldp+294,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))));
        tracep->fullBit(oldp+295,((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+296,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+297,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        VL_EXTEND_WQ(256,64, __Vtemp263, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp266[0U] = __Vtemp263[0U];
            __Vtemp266[1U] = __Vtemp263[1U];
            __Vtemp266[2U] = __Vtemp263[2U];
            __Vtemp266[3U] = __Vtemp263[3U];
            __Vtemp266[4U] = __Vtemp263[4U];
            __Vtemp266[5U] = __Vtemp263[5U];
            __Vtemp266[6U] = __Vtemp263[6U];
            __Vtemp266[7U] = __Vtemp263[7U];
        } else {
            __Vtemp266[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]);
            __Vtemp266[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]);
            __Vtemp266[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]);
            __Vtemp266[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]);
            __Vtemp266[4U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]);
            __Vtemp266[5U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]);
            __Vtemp266[6U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]);
            __Vtemp266[7U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]);
        }
        tracep->fullWData(oldp+298,(__Vtemp266),256);
        tracep->fullBit(oldp+306,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+307,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr)),64);
        tracep->fullCData(oldp+309,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)))),3);
        tracep->fullCData(oldp+310,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+311,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 2U)),4);
        tracep->fullBit(oldp+312,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))));
        tracep->fullBit(oldp+313,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+314,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+315,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullCData(oldp+316,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+317,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                              ? 0U : 3U))
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+318,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+319,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+320,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+323,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+324,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+327,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+328,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                         + (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                             << 0x25U) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                << 5U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                  >> 0x1bU))))
                                      : ((((QData)((IData)(
                                                           vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                           << 0x25U) 
                                          | (((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                              << 5U) 
                                             | ((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                >> 0x1bU))) 
                                         + (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                             << 0x25U) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                << 5U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                  >> 0x1bU)))))),64);
        tracep->fullBit(oldp+330,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+333,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+335,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+336,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+337,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+338,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+339,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+341,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+342,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+344,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+345,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+346,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+347,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+349,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+350,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+351,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+352,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+353,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+354,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+355,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+356,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+357,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+358,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+359,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+360,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+362,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+363,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+365,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+366,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+367,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+369,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+371,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+373,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+375,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+376,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+377,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+378,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+379,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+380,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+381,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+382,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullCData(oldp+383,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+384,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+385,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+386,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+387,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+388,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+389,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullCData(oldp+390,(((((1U & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                              | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                       | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                      | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                     | (3U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld)))))),3);
        tracep->fullQData(oldp+391,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+393,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+395,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+397,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+398,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+400,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+401,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+402,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+404,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullBit(oldp+406,(vlSelf->top__DOT__clint_axi_arvalid));
        tracep->fullCData(oldp+407,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                      : 0U)),3);
        tracep->fullBit(oldp+408,(((2U == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+409,(vlSelf->top__DOT__clint_axi_awvalid));
        tracep->fullQData(oldp+410,(vlSelf->top__DOT__clint_axi_wdata),64);
        tracep->fullBit(oldp+412,(vlSelf->top__DOT__clint_axi_wvalid));
        tracep->fullBit(oldp+413,(vlSelf->top__DOT__clint_axi_bready));
        tracep->fullBit(oldp+414,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+415,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+416,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullQData(oldp+417,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullBit(oldp+419,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+420,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullCData(oldp+421,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & ((((1U 
                                                  & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                                     | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                                 | (2U 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                                | (2U 
                                                   & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                               | (3U 
                                                  & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld))))))
                                      : 3U)),3);
        tracep->fullQData(oldp+422,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+424,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullBit(oldp+425,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+426,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+427,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))));
        tracep->fullIData(oldp+428,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+429,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+430,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+431,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        __Vtemp267[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp267[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp267[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp267[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+432,(__Vtemp267),128);
        __Vtemp268[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp268[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp268[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp268[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+436,(__Vtemp268),128);
        tracep->fullBit(oldp+440,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+441,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+442,(vlSelf->top__DOT__cache_dut__DOT__uncached));
        tracep->fullBit(oldp+443,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+444,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+445,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+446,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+447,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+448,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+456,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+457,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+458,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+459,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+460,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+461,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+462,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+463,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+465,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp269[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp269[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp269[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+466,(__Vtemp269),96);
        tracep->fullWData(oldp+469,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+472,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+473,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+474,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+475,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+476,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullBit(oldp+477,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U)))));
        tracep->fullQData(oldp+478,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+480,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+481,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+482,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+483,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+484,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+485,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+486,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+496,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+498,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+500,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp271, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp272, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp273, __Vtemp271, __Vtemp272);
        VL_EXTEND_WI(65,1, __Vtemp274, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp275, __Vtemp273, __Vtemp274);
        tracep->fullBit(oldp+502,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp275[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+503,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+504,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+506,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+511,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+512,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+513,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+514,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp278, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp279, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp280, __Vtemp278, __Vtemp279);
        VL_EXTEND_WI(65,1, __Vtemp281, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp282, __Vtemp280, __Vtemp281);
        tracep->fullBit(oldp+516,((1U & __Vtemp282[2U])));
        tracep->fullBit(oldp+517,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+518,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+520,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+522,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+524,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((2U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                          : ((2U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                                      : ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((2U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                          : ((2U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullCData(oldp+526,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+527,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+528,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+529,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+533,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+535,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+537,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+539,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                        >> 0x1fU)))
                                          ? (0x100000000ULL 
                                             | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                | (QData)((IData)(
                                                                  (~ (IData)(
                                                                             ((0xffffffffffffffffULL 
                                                                               >> 
                                                                               (0x3fU 
                                                                                & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                                              >> 0x20U)))))))
                                          : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                             & (QData)((IData)(
                                                               ((0xffffffffffffffffULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                                >> 0x20U)))))
                                      : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                           >> 0x3fU)))))) 
                                            & (~ (0xffffffffffffffffULL 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))))))),64);
        tracep->fullQData(oldp+541,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+543,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+544,(((((QData)((IData)(
                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                       << 0x25U) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                        << 5U) | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                  >> 0x1bU))) 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullQData(oldp+546,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+548,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+549,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+550,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+551,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+553,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+555,((1U & ((0x200U & 
                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                          ? ((0x100U 
                                              & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                              ? ((0x80U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                  ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                              : ((0x80U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                  ? 
                                                 (~ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
                                                            >> 0x3fU)) 
                                                   ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow)))
                                                  : 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
                                                           >> 0x3fU)) 
                                                  ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow))))
                                          : ((~ (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 >> 8U)) 
                                             & ((0x80U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                 ? 
                                                (0U 
                                                 != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)))))))));
        tracep->fullBit(oldp+556,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+557,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+558,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__ls_u__DOT__csr_wr_data),64);
        tracep->fullBit(oldp+561,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
        tracep->fullBit(oldp+562,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
        tracep->fullBit(oldp+563,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
        tracep->fullBit(oldp+564,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
        tracep->fullBit(oldp+565,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
        tracep->fullQData(oldp+566,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullBit(oldp+568,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn));
        tracep->fullBit(oldp+569,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn));
        tracep->fullBit(oldp+570,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren));
        tracep->fullIData(oldp+571,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+572,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+573,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+574,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullIData(oldp+575,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+576,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+577,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+578,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+579,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp286, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp293[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp293[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp293[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp293[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp293[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp286[0U])
                               : 0U);
            __Vtemp293[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp286[1U])
                               : 0U);
            __Vtemp293[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp286[2U])
                               : 0U);
            __Vtemp293[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp286[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+580,(__Vtemp293),128);
        VL_EXTEND_WQ(128,64, __Vtemp296, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp303[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp303[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp303[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp303[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp303[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp296[0U])
                               : 0U);
            __Vtemp303[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp296[1U])
                               : 0U);
            __Vtemp303[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp296[2U])
                               : 0U);
            __Vtemp303[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp296[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+584,(__Vtemp303),128);
        tracep->fullBit(oldp+588,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+589,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+590,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+592,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+593,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+594,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+595,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+596,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+597,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+598,((((QData)((IData)(
                                                      (0x1fffffU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                  >> 0xbU))))) 
                                      << 0xbU) | (QData)((IData)(
                                                                 (0x7e0U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                              >> 5U)) 
                                                                     << 5U)))))),64);
        tracep->fullCData(oldp+600,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+601,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+609,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+610,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullQData(oldp+612,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+614,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+616,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+617,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+618,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+620,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+621,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp306, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp315[0U] = 0xffffffffU;
            __Vtemp315[1U] = 0xffffffffU;
            __Vtemp315[2U] = 0xffffffffU;
            __Vtemp315[3U] = 0xffffffffU;
        } else {
            __Vtemp315[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp306[0U])
                                   : 0U) : 0U);
            __Vtemp315[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp306[1U])
                                   : 0U) : 0U);
            __Vtemp315[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp306[2U])
                                   : 0U) : 0U);
            __Vtemp315[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp306[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+623,(__Vtemp315),128);
        VL_EXTEND_WQ(128,64, __Vtemp318, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp327[0U] = 0xffffffffU;
            __Vtemp327[1U] = 0xffffffffU;
            __Vtemp327[2U] = 0xffffffffU;
            __Vtemp327[3U] = 0xffffffffU;
        } else {
            __Vtemp327[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp318[0U])
                                   : 0U) : 0U);
            __Vtemp327[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp318[1U])
                                   : 0U) : 0U);
            __Vtemp327[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp318[2U])
                                   : 0U) : 0U);
            __Vtemp327[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp318[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+627,(__Vtemp327),128);
        tracep->fullBit(oldp+631,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+632,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+633,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+634,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        tracep->fullBit(oldp+635,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullIData(oldp+636,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
        VL_EXTEND_WQ(128,64, __Vtemp330, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp340[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp330[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp340[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp330[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp340[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                                     : 
                                                    __Vtemp330[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp340[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp330[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+637,(__Vtemp340),128);
        VL_EXTEND_WQ(128,64, __Vtemp343, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp353[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp343[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp353[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp343[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp353[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                                     : 
                                                    __Vtemp343[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp353[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp343[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+641,(__Vtemp353),128);
        tracep->fullCData(oldp+645,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+646,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+656,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+658,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp358[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           << 0x1bU) | (((IData)(vlSelf->top__DOT__aluctr_id) 
                                         << 0x16U) 
                                        | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                             & (IData)(vlSelf->top__DOT__is_jalr_id)) 
                                            << 0x15U) 
                                           | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                & (IData)(vlSelf->top__DOT__is_jal_id)) 
                                               << 0x14U) 
                                              | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                   & (IData)(vlSelf->top__DOT__is_brc_id)) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSelf->top__DOT__src1sel_id) 
                                                     << 0x12U) 
                                                    | (((IData)(vlSelf->top__DOT__src2sel_id) 
                                                        << 0x10U) 
                                                       | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                            & (IData)(vlSelf->top__DOT__wben_id)) 
                                                           << 0xfU) 
                                                          | (((IData)(vlSelf->top__DOT__rs1_idx_id) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->top__DOT__rs2_idx_id) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__DivEn_id) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSelf->top__DOT__DivSel_id) 
                                                                       << 1U) 
                                                                      | ((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                         & (IData)(vlSelf->top__DOT__trap_id))))))))))))));
        __Vtemp358[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp358[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp358[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp358[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp358[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp358[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp358[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp358[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                           >> 5U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                                ? 0ULL
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp358[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+660,(__Vtemp358),315);
        tracep->fullBit(oldp+670,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
                                   & ((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U))) 
                                       & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk))) 
                                      | ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncached)) 
                                         & (((((1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0x20U))) 
                                              & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                             & (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                            >> 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                        >> 5U)))))) 
                                                | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                              >> 
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                          >> 5U)))))))) 
                                            | ((((1U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                               & (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                              >> 
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                          >> 5U)))))) 
                                                  | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                            >> 5U))))))))))))));
        tracep->fullBit(oldp+671,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+672,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+674,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+675,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+676,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+677,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+678,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+680,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+681,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+682,(vlSelf->top__DOT__ls_addr_ok_i));
        tracep->fullBit(oldp+683,((1U & (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))));
        tracep->fullBit(oldp+684,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+685,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullQData(oldp+686,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+688,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+689,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+690,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+691,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+692,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+694,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+695,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+696,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+697,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+698,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullCData(oldp+699,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+700,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+701,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+702,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+703,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+704,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+705,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+706,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+707,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+717,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+719,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+721,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+723,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+725,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+727,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+729,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+731,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+733,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+735,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+737,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+739,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+741,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+743,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+745,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+747,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+749,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+751,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+753,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+755,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+757,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+759,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+761,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+763,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+765,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+767,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+769,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+771,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+773,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+775,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+777,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+779,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+781,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullQData(oldp+782,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+784,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+785,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+786,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        tracep->fullBit(oldp+787,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullBit(oldp+788,(vlSelf->clk));
        tracep->fullBit(oldp+789,(vlSelf->rst_n));
        tracep->fullQData(oldp+790,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+792,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+794,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+795,(vlSelf->regA0),64);
        tracep->fullBit(oldp+797,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+798,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+799,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+800,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+802,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+803,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+804,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+805,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+806,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+807,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+808,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+809,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+810,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+811,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+812,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+813,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+814,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+815,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+817,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+818,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+819,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+820,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+821,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+822,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+824,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+825,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+826,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+827,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+828,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+829,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+830,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+831,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+832,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+833,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+834,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+835,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+836,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+838,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+839,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+840,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+841,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+842,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+843,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+844,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+845,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+846,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+847,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((0xaU 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (
                                                   (2U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                                >> 0x18U))))
                                                    ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                                    : (IData)(vlSelf->axi_r_resp_i)))))),2);
        tracep->fullBit(oldp+848,(((0xaU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU))))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                    : ((2U == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)
                                        : (IData)(vlSelf->axi_aw_ready_i)))));
        tracep->fullBit(oldp+849,(((0xaU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU))))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                    : ((2U == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid)
                                        : (IData)(vlSelf->axi_b_valid_i)))));
        tracep->fullCData(oldp+850,(((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x1cU))))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp)
                                      : ((2U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U))))
                                          ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                          : (IData)(vlSelf->axi_b_resp_i)))),2);
        tracep->fullCData(oldp+851,(((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x1cU))))
                                      ? 1U : ((2U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                               ? 1U
                                               : (0xfU 
                                                  & (IData)(vlSelf->axi_b_id_i))))),4);
        tracep->fullBit(oldp+852,((1U & ((0xaU == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU))))
                                          ? (IData)(vlSelf->top__DOT__axi_mmio_b_user_i)
                                          : ((2U == 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                              ? 0U : (IData)(vlSelf->axi_b_user_i))))));
        tracep->fullBit(oldp+853,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+854,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((0xaU 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (
                                                   (2U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                                >> 0x18U))))
                                                    ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                                    : (IData)(vlSelf->axi_r_resp_i))))
                                      : 0U)),2);
        tracep->fullBit(oldp+855,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+856,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullQData(oldp+857,(((((((((- (QData)((IData)(
                                                              ((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                    >> 2U))) 
                                                               & (0U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                      >> 0xeU))))))) 
                                           & (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b) 
                                                                      >> 7U))))) 
                                               << 8U) 
                                              | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                          | ((- (QData)((IData)(
                                                                ((3U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                      >> 2U))) 
                                                                 & (4U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                        >> 0xeU))))))) 
                                             & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                         | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                            & (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h) 
                                                                       >> 0xfU))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
                                        | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))) 
                                           & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                       | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))) 
                                          & (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                                      | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))) 
                                         & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld))) 
                                        & vlSelf->top__DOT__ls_sram_rd_data))),64);
        tracep->fullBit(oldp+859,((((((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                       | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))) 
                                      | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (~ (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 0x20U)))) 
                                       & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay))) 
                                      & (((IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit) 
                                          & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1)) 
                                         | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__way2Hit) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2)))))));
        tracep->fullCData(oldp+860,(((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x1cU))))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                      : ((2U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x18U))))
                                          ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                          : (IData)(vlSelf->axi_r_resp_i)))),2);
        tracep->fullBit(oldp+861,((1U & ((0xaU == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU))))
                                          ? (IData)(vlSelf->top__DOT__axi_mmio_r_user_i)
                                          : ((2U == 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x18U))))
                                              ? 0U : (IData)(vlSelf->axi_r_user_i))))));
        tracep->fullBit(oldp+862,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+863,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+864,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+865,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+866,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (0ULL != vlSelf->top__DOT__pc_new)) 
                                      | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                          & (0ULL != vlSelf->top__DOT__pc_new)) 
                                         & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 4U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way1Data[6U]))))
                                              : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way1Data[4U])))))
                                          : ((1U & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way1Data[2U]))))
                                              : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way1Data[0U]))))))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+868,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (0ULL != vlSelf->top__DOT__pc_new)) 
                                      | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                          & (0ULL != vlSelf->top__DOT__pc_new)) 
                                         & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 4U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way2Data[6U]))))
                                              : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way2Data[4U])))))
                                          : ((1U & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way2Data[2U]))))
                                              : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way2Data[0U]))))))
                                      : 0ULL)),64);
        tracep->fullIData(oldp+870,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? ((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 3U)) 
                                         << 3U) : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   ((vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 5U)))] 
                                                     << 0xbU) 
                                                    | (0x7e0U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                   >> 5U)) 
                                                          << 5U)))
                                                    : 
                                                   ((vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 5U)))] 
                                                     << 0xbU) 
                                                    | (0x7e0U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                   >> 5U)) 
                                                          << 5U)))))),32);
        tracep->fullCData(oldp+871,(((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? ((2U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                          ? ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                              ? 1U : 
                                             (((IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk) 
                                               & (IData)(vlSelf->top__DOT__ls_stall_n))
                                               ? 1U
                                               : 6U))
                                          : 0U) : (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__ls_axi_r_last_i)
                                                      ? 7U
                                                      : 3U)
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                                      ? 3U
                                                      : 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__Dcache_u__DOT__uncached)
                                                      ? 6U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)
                                                       ? 
                                                      ((((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                                                         & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                                        | (((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
                                                            & (~ (IData)(
                                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                          >> 0x20U)))) 
                                                           & (~ (IData)(vlSelf->top__DOT__ls_stall_n))))
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i)
                                                        ? 
                                                       (((IData)(
                                                                 (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                  >> 0x20U)) 
                                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg))
                                                         ? 1U
                                                         : 2U)
                                                        : 
                                                       ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)
                                                         ? 1U
                                                         : 0U))))
                                                     : 
                                                    (((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                                                      & (IData)(vlSelf->top__DOT__ls_stall_n))
                                                      ? 1U
                                                      : 0U))))),3);
        tracep->fullBit(oldp+872,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+873,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+874,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                      ? (0x1fffffU 
                                         & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                             ? vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))]
                                             : (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0xbU))))
                                      : 0U)),21);
        tracep->fullIData(oldp+875,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                      ? (0x1fffffU 
                                         & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                             ? (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0xbU))
                                             : vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))]))
                                      : 0U)),21);
        tracep->fullQData(oldp+876,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                        & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                       | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                           & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                          & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                      | (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 4U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]))))
                                              : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U])))))
                                          : ((1U & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]))))
                                              : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]))))))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+878,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                        & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                       | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                           & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                          & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                      | (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 4U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]))))
                                              : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U])))))
                                          : ((1U & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]))))
                                              : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]))))))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+880,((1U & (~ ((((((((0U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                  | ((6U 
                                                      == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                | (1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                               | (2U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                              | (7U 
                                                 == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                             | (3U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))));
        tracep->fullBit(oldp+881,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
        tracep->fullBit(oldp+882,((1U & (~ ((((((((0U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                  | ((6U 
                                                      == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                | (1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                               | (2U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                              | (7U 
                                                 == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                             | (3U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
        tracep->fullBit(oldp+883,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
        tracep->fullIData(oldp+884,(0x40U),32);
        tracep->fullIData(oldp+885,(4U),32);
        tracep->fullIData(oldp+886,(8U),32);
        tracep->fullIData(oldp+887,(1U),32);
        tracep->fullCData(oldp+888,(0U),3);
        tracep->fullBit(oldp+889,(0U));
        tracep->fullBit(oldp+890,(0U));
        tracep->fullCData(oldp+891,(0U),4);
        tracep->fullBit(oldp+892,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+893,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+894,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+895,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+896,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+897,(1U),2);
        tracep->fullCData(oldp+898,(2U),4);
        tracep->fullCData(oldp+899,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+900,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+901,(1U),4);
        tracep->fullCData(oldp+902,(0xfU),4);
        tracep->fullCData(oldp+903,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+904,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+905,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+907,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+908,(1U));
        tracep->fullBit(oldp+909,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+910,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullBit(oldp+911,(0U));
        tracep->fullQData(oldp+912,(0ULL),64);
        tracep->fullCData(oldp+914,(0U),8);
        tracep->fullCData(oldp+915,(1U),3);
        tracep->fullCData(oldp+916,(2U),3);
        tracep->fullCData(oldp+917,(3U),3);
        tracep->fullCData(oldp+918,(7U),3);
        tracep->fullCData(oldp+919,(6U),3);
        tracep->fullBit(oldp+920,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+921,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+922,(0x80U),32);
        tracep->fullIData(oldp+923,(6U),32);
        __Vtemp359[0U] = 0U;
        __Vtemp359[1U] = 0U;
        __Vtemp359[2U] = 0U;
        __Vtemp359[3U] = 0U;
        tracep->fullWData(oldp+924,(__Vtemp359),128);
        __Vtemp360[0U] = 0xffffffffU;
        __Vtemp360[1U] = 0xffffffffU;
        __Vtemp360[2U] = 0xffffffffU;
        __Vtemp360[3U] = 0xffffffffU;
        tracep->fullWData(oldp+928,(__Vtemp360),128);
        tracep->fullCData(oldp+932,(0U),2);
        tracep->fullCData(oldp+933,(3U),2);
        tracep->fullCData(oldp+934,(2U),2);
        tracep->fullIData(oldp+935,(3U),32);
        tracep->fullIData(oldp+936,(0x60U),32);
        tracep->fullIData(oldp+937,(0U),32);
        tracep->fullIData(oldp+938,(0x13bU),32);
        tracep->fullBit(oldp+939,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+940,(0xe2U),32);
        tracep->fullBit(oldp+941,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+942,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+943,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullCData(oldp+944,(3U),8);
        tracep->fullIData(oldp+945,(0x121U),32);
        tracep->fullIData(oldp+946,(0x40U),32);
        tracep->fullIData(oldp+947,(3U),32);
        tracep->fullIData(oldp+948,(1U),32);
        tracep->fullQData(oldp+949,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+951,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
