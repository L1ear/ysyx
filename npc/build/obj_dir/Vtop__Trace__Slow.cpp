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
        tracep->declBit(c+828,"clk", false,-1);
        tracep->declBit(c+829,"rst_n", false,-1);
        tracep->declQuad(c+830,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+832,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+834,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+835,"regA0", false,-1, 63,0);
        tracep->declBit(c+837,"stall_n_diff", false,-1);
        tracep->declBit(c+838,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+839,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+840,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+842,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+843,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+844,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+845,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+846,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+847,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+848,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+849,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+850,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+851,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+852,"axi_r_ready_o", false,-1);
        tracep->declBit(c+853,"axi_r_valid_i", false,-1);
        tracep->declBus(c+854,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+855,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+857,"axi_r_last_i", false,-1);
        tracep->declBus(c+858,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+859,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+860,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+861,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+862,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+864,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+865,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+866,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+867,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+868,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+869,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+870,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+871,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+872,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+873,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+874,"axi_w_ready_i", false,-1);
        tracep->declBit(c+875,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+876,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+878,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+879,"axi_w_last_o", false,-1);
        tracep->declBus(c+880,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+881,"axi_b_ready_o", false,-1);
        tracep->declBit(c+882,"axi_b_valid_i", false,-1);
        tracep->declBus(c+883,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+884,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+885,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+918,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+918,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+918,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+918,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+919,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+920,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+921,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+828,"top clk", false,-1);
        tracep->declBit(c+829,"top rst_n", false,-1);
        tracep->declQuad(c+830,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+832,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+834,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+835,"top regA0", false,-1, 63,0);
        tracep->declBit(c+837,"top stall_n_diff", false,-1);
        tracep->declBit(c+838,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+839,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+840,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+842,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+843,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+844,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+845,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+846,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+847,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+848,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+849,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+850,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+851,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+852,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+853,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+854,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+855,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+857,"top axi_r_last_i", false,-1);
        tracep->declBus(c+858,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+859,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+860,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+861,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+862,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+864,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+865,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+866,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+867,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+868,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+869,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+870,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+871,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+872,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+873,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+874,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+875,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+876,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+878,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+879,"top axi_w_last_o", false,-1);
        tracep->declBus(c+880,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+881,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+882,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+883,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+884,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+885,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+180,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+331,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+332,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+137,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+138,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+334,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+335,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+924,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+336,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+139,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+337,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+181,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+182,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+183,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+926,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+927,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+928,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+185,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+338,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+186,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+188,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+308,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+189,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+190,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+924,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+191,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+192,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+339,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+309,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+193,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+311,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+923,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+340,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+194,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+195,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+929,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+930,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top instr_fetching", false,-1);
        tracep->declBit(c+886,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+922,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+925,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+923,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+341,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+342,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+931,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+924,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+932,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+925,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+933,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+714,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+887,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+715,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+717,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+718,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+934,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+888,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+343,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+196,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+922,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+935,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+923,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+344,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+198,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+931,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+924,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+936,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+925,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+925,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+719,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+345,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+346,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+199,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+348,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+923,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+349,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+889,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+890,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+891,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+892,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+893,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+922,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+935,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+923,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+344,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+140,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+931,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+924,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+932,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+925,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+937,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+720,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+894,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+721,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+723,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+718,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+938,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+939,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+350,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+352,"top is_jump", false,-1);
        tracep->declQuad(c+353,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+693,"top pc_stall_n", false,-1);
        tracep->declBit(c+724,"top if_stall_n", false,-1);
        tracep->declBit(c+355,"top if_instr_valid", false,-1);
        tracep->declBit(c+941,"top sram_data_valid", false,-1);
        tracep->declQuad(c+356,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+358,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+942,"top sram_ren", false,-1);
        tracep->declBit(c+360,"top sram_addr_valid", false,-1);
        tracep->declBit(c+361,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+362,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+363,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+364,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+366,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+700,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+702,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+367,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+369,"top src1sel_id", false,-1);
        tracep->declBus(c+370,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+371,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+372,"top is_brc_id", false,-1);
        tracep->declBit(c+373,"top is_jal_id", false,-1);
        tracep->declBit(c+374,"top is_jalr_id", false,-1);
        tracep->declBit(c+375,"top wben_id", false,-1);
        tracep->declBus(c+376,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+377,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+694,"top id_stall_n", false,-1);
        tracep->declBit(c+378,"top DivEn_id", false,-1);
        tracep->declBus(c+379,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+380,"top in_trap_id", false,-1);
        tracep->declBit(c+381,"top out_trap_id", false,-1);
        tracep->declBit(c+382,"top trap_id", false,-1);
        tracep->declBit(c+383,"top ld_use_hazard", false,-1);
        tracep->declBit(c+384,"top id_flush", false,-1);
        tracep->declQuad(c+385,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+387,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+388,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+390,"top src1sel_ex", false,-1);
        tracep->declBus(c+391,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+392,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+394,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+396,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+398,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+400,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+401,"top is_brc_ex", false,-1);
        tracep->declBit(c+402,"top is_jal_ex", false,-1);
        tracep->declBit(c+403,"top is_jalr_ex", false,-1);
        tracep->declBit(c+404,"top wben_ex", false,-1);
        tracep->declBit(c+405,"top DivEn_ex", false,-1);
        tracep->declBus(c+406,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+407,"top trap_ex", false,-1);
        tracep->declBit(c+695,"top ex_stall_n", false,-1);
        tracep->declQuad(c+10,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+408,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+409,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+410,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+411,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+412,"top ex_flush", false,-1);
        tracep->declBit(c+413,"top rden_ls", false,-1);
        tracep->declBit(c+414,"top wren_ls", false,-1);
        tracep->declBit(c+725,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+726,"top ex_not_ok", false,-1);
        tracep->declQuad(c+12,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+18,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+895,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+19,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+26,"top trap_ls", false,-1);
        tracep->declBit(c+727,"top ls_stall_n", false,-1);
        tracep->declBit(c+728,"top ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+141,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+943,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+944,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+729,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+30,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+415,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+416,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+418,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+420,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+422,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+423,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+425,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+426,"top wben_wb", false,-1);
        tracep->declQuad(c+427,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+727,"top wb_stall_n", false,-1);
        tracep->declQuad(c+429,"top clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+922,"top clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+431,"top clint_axi_arvalid", false,-1);
        tracep->declBit(c+200,"top clint_axi_arready", false,-1);
        tracep->declBus(c+432,"top clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+31,"top clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+201,"top clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+202,"top clint_axi_rvalid", false,-1);
        tracep->declBit(c+433,"top clint_axi_rready", false,-1);
        tracep->declBus(c+203,"top clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+204,"top clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+922,"top clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+434,"top clint_axi_awvalid", false,-1);
        tracep->declBit(c+206,"top clint_axi_awready", false,-1);
        tracep->declQuad(c+435,"top clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+207,"top clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+437,"top clint_axi_wvalid", false,-1);
        tracep->declBit(c+208,"top clint_axi_wready", false,-1);
        tracep->declBus(c+201,"top clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+209,"top clint_axi_bvalid", false,-1);
        tracep->declBit(c+438,"top clint_axi_bready", false,-1);
        tracep->declBit(c+439,"top rw_valid_i", false,-1);
        tracep->declBit(c+33,"top rw_ready_o", false,-1);
        tracep->declBus(c+341,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+717,"top rdLast_o", false,-1);
        tracep->declBus(c+143,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+715,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+731,"top dataValid_o", false,-1);
        tracep->declBit(c+440,"top fence_id", false,-1);
        tracep->declBit(c+441,"top fence_ex", false,-1);
        tracep->declBit(c+144,"top ld_csr_hazard", false,-1);
        tracep->declBit(c+34,"top ls_flush", false,-1);
        tracep->declBit(c+34,"top in_intr_ls", false,-1);
        tracep->declBit(c+728,"top dataNotOk", false,-1);
        tracep->declBit(c+35,"top fence_ls", false,-1);
        tracep->declBit(c+442,"top clear_Icache", false,-1);
        tracep->declBit(c+443,"top DcacheRdValid", false,-1);
        tracep->declBit(c+444,"top DcacheWrValid", false,-1);
        tracep->declBit(c+36,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+344,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+723,"top lsRdLast", false,-1);
        tracep->declQuad(c+445,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+447,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+721,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+732,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+449,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+312,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+344,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+450,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+451,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+140,"top lsLoadSize", false,-1, 2,0);
        tracep->declBus(c+918,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+918,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+918,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+918,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+919,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+920,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+921,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+886,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+925,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+341,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+342,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+931,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+924,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+932,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+933,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+714,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+887,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+715,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+717,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+718,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+934,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+888,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+343,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+196,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+935,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+344,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+198,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+931,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+924,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+936,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+719,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+345,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+346,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+199,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+348,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+923,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+349,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+889,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+890,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+891,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+892,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+893,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+6,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+7,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+935,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+344,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+140,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+931,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+924,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+932,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+937,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+720,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+894,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+721,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+723,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+718,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+938,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+860,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+861,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+862,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+864,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+865,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+866,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+867,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+868,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+869,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+870,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+871,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+872,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+873,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+874,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+875,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+876,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+878,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+879,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+880,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+881,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+882,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+883,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+884,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+885,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+838,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+839,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+840,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+842,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+843,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+844,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+845,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+846,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+847,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+848,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+849,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+850,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+851,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+852,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+853,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+854,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+855,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+857,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+858,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+859,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+185,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+338,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+186,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+188,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+308,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+189,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+190,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+924,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+191,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+192,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+339,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+309,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+193,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+311,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+923,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+340,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+194,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+195,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+935,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+930,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+180,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+331,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+332,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+137,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+138,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+334,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+335,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+924,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+336,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+139,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+337,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+181,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+182,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+183,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+181,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+935,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+928,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+429,"top axi_crossbar_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_crossbar_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+431,"top axi_crossbar_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+200,"top axi_crossbar_u clint_axi_arready", false,-1);
        tracep->declBus(c+432,"top axi_crossbar_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+31,"top axi_crossbar_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+201,"top axi_crossbar_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+202,"top axi_crossbar_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+433,"top axi_crossbar_u clint_axi_rready", false,-1);
        tracep->declBus(c+203,"top axi_crossbar_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+204,"top axi_crossbar_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_crossbar_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+434,"top axi_crossbar_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+206,"top axi_crossbar_u clint_axi_awready", false,-1);
        tracep->declQuad(c+435,"top axi_crossbar_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+207,"top axi_crossbar_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+437,"top axi_crossbar_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+208,"top axi_crossbar_u clint_axi_wready", false,-1);
        tracep->declBus(c+201,"top axi_crossbar_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+209,"top axi_crossbar_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+438,"top axi_crossbar_u clint_axi_bready", false,-1);
        tracep->declBit(c+888,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+343,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+196,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+935,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+344,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+198,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+931,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+924,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+936,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+719,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+345,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+346,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+199,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+348,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+923,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+349,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+889,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+890,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+891,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+892,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+733,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+37,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+452,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+145,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+454,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+931,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+945,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+932,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+39,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+455,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+734,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+897,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+735,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+737,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+718,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+898,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+456,"top axi_crossbar_u clint_r_trans", false,-1);
        tracep->declBit(c+210,"top axi_crossbar_u clint_w_trans", false,-1);
        tracep->declBit(c+457,"top axi_crossbar_u perip_r_trans", false,-1);
        tracep->declBit(c+211,"top axi_crossbar_u perip_w_trans", false,-1);
        tracep->declBit(c+828,"top IF_u clk", false,-1);
        tracep->declBit(c+829,"top IF_u rst_n", false,-1);
        tracep->declBit(c+352,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+353,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+380,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+381,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+724,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+350,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+363,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+355,"top IF_u if_instr_valid", false,-1);
        tracep->declBit(c+34,"top IF_u in_intr_ls", false,-1);
        tracep->declQuad(c+356,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+941,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+361,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+362,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+358,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+942,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+360,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+358,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+828,"top cache_dut clk", false,-1);
        tracep->declBit(c+829,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+458,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+360,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+924,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+946,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+948,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+724,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+361,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+459,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+362,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+356,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+442,"top cache_dut clrValid", false,-1);
        tracep->declBit(c+439,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+33,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+341,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+717,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+143,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+715,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+731,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+922,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+949,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+950,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+951,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+952,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+953,"top cache_dut unCacheOp", false,-1, 2,0);
        tracep->declBus(c+460,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+738,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+461,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+40,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+41,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+212,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+216,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+220,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+224,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+462,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+466,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+462,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+466,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+470,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+471,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+472,"top cache_dut uncached", false,-1);
        tracep->declBit(c+42,"top cache_dut uncachedOk", false,-1);
        tracep->declBit(c+473,"top cache_dut diffAddr", false,-1);
        tracep->declBit(c+474,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+43,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+45,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+46,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+47,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+48,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+50,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+52,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+53,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+899,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+900,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+901,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+902,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+54,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+55,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+954,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+955,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+475,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+228,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+236,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+903,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+905,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+476,"top cache_dut missEn", false,-1);
        tracep->declBit(c+477,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+56,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+244,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+58,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+478,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+479,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+487,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+956,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+918,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+957,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+956,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+212,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+828,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+488,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+489,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+958,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+739,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+462,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+490,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+470,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+962,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+956,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+918,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+957,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+956,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+216,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+828,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+491,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+489,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+958,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+740,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+466,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+492,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+470,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+962,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+956,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+918,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+957,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+956,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+220,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+828,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+493,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+494,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+958,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+741,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+462,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+495,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+471,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+962,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+956,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+918,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+957,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+956,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+224,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+828,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+496,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+494,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+958,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+742,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+466,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+497,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+471,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+962,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+918,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+918,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+918,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+918,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+919,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+920,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+921,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+828,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+829,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+439,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+33,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+715,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+146,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+341,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+717,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+731,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+1,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+886,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+925,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+341,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+342,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+931,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+924,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+932,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+933,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+714,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+887,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+715,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+717,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+718,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+934,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+966,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+931,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+967,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+968,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+59,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+743,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+2,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+5,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+969,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+925,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+924,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+341,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+342,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+828,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+829,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+350,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+363,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+694,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+384,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+364,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+366,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+498,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+500,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+970,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+971,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+828,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+829,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+694,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+501,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+504,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+828,"top ID_u clk", false,-1);
        tracep->declBit(c+829,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+364,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+416,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+422,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+366,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+423,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+425,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+426,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+702,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+700,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+367,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+369,"top ID_u src1sel", false,-1);
        tracep->declBus(c+370,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+371,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+374,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+373,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+372,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+375,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+376,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+377,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+835,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+378,"top ID_u DivEn", false,-1);
        tracep->declBus(c+379,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+382,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+380,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+381,"top ID_u out_trap_id", false,-1);
        tracep->declBit(c+440,"top ID_u fence_id", false,-1);
        tracep->declBus(c+507,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+367,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+702,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+700,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+364,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+366,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+376,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+377,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+507,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+369,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+370,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+371,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+374,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+373,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+372,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+375,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+378,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+379,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+382,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+380,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+381,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBit(c+440,"top ID_u decoder_u fence_id", false,-1);
        tracep->declBus(c+508,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+509,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+510,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+511,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+507,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+367,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+828,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+416,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+422,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+376,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+702,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+377,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+700,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+425,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+423,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+426,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+835,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+764+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+366,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+387,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBus(c+18,"top hazard_detect_u instr_ls_i", false,-1, 31,0);
        tracep->declBus(c+422,"top hazard_detect_u instr_wb_i", false,-1, 31,0);
        tracep->declBit(c+383,"top hazard_detect_u ld_use_hazard", false,-1);
        tracep->declBit(c+144,"top hazard_detect_u ld_csr_hazard", false,-1);
        tracep->declBit(c+512,"top hazard_detect_u wb_is_load", false,-1);
        tracep->declBit(c+60,"top hazard_detect_u ls_is_csropi", false,-1);
        tracep->declBit(c+828,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+829,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+695,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+412,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+364,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+366,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+367,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+700,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+702,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+371,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+374,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+373,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+372,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+369,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+370,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+375,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+376,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+377,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+378,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+379,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+382,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declBit(c+440,"top EX_reg_u fence_ex_reg_i", false,-1);
        tracep->declQuad(c+385,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+387,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+392,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+394,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+396,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+400,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+403,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+402,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+401,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+390,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+391,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+404,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+410,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+411,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+405,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+406,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+407,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declBit(c+441,"top EX_reg_u fence_ex_reg_o", false,-1);
        tracep->declQuad(c+513,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+515,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+516,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+517,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+518,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+519,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+520,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBit(c+521,"top EX_reg_u fence_ex_reg", false,-1);
        tracep->declBus(c+972,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+971,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+828,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+829,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+695,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+704,"top EX_reg_u ex_reg i_din", false,-1, 315,0);
        tracep->declArray(c+522,"top EX_reg_u ex_reg o_dout", false,-1, 315,0);
        tracep->declBus(c+400,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+394,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+392,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+396,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+385,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+387,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+403,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+402,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+401,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+390,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+391,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+408,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+409,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+16,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+423,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+405,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+406,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+388,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+353,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+398,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+352,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+726,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+413,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+414,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+725,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+532,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+534,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+536,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+398,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+400,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+532,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+534,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+405,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+406,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+388,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+538,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+539,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+540,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+542,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+543,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+545,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+547,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+547,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+548,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+549,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+550,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+552,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+553,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+554,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+556,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+558,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+560,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+532,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+543,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+542,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+545,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+552,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+539,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+553,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+562,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+549,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+547,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+548,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+542,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+547,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+563,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+532,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+564,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+548,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+547,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+550,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+565,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+567,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+569,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+571,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+573,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+575,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+577,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+532,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+534,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+406,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+560,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+536,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+398,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+403,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+402,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+401,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+579,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+396,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+385,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+353,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+352,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+580,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+582,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+973,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+584,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+585,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+586,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+587,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+589,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+591,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+828,"top forwarding_u clk", false,-1);
        tracep->declBit(c+829,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+410,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+411,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+61,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+425,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+19,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+426,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+423,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+727,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+408,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+409,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+10,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+10,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+62,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+63,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+148,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+592,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+149,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+150,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+593,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+151,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+828,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+829,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+385,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+398,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+387,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+388,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+404,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+407,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+727,"top L_S_reg_u stall_n", false,-1);
        tracep->declBit(c+34,"top L_S_reg_u flush_i", false,-1);
        tracep->declBit(c+441,"top L_S_reg_u fence_ls_reg_i", false,-1);
        tracep->declQuad(c+12,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+18,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+16,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+19,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+26,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBit(c+35,"top L_S_reg_u fence_ls_reg_o", false,-1);
        tracep->declArray(c+152,"top L_S_reg_u bundle", false,-1, 226,0);
        tracep->declBus(c+974,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+971,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+828,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+829,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+727,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+160,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+64,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+828,"top ls_u clk", false,-1);
        tracep->declBit(c+829,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+418,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+422,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+420,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+427,"top ls_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+727,"top ls_u stall_n", false,-1);
        tracep->declBit(c+724,"top ls_u if_stall_n", false,-1);
        tracep->declQuad(c+895,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+728,"top ls_u ls_not_ok", false,-1);
        tracep->declBit(c+34,"top ls_u in_intr_ls", false,-1);
        tracep->declBit(c+144,"top ls_u ld_csr_hazard", false,-1);
        tracep->declQuad(c+416,"top ls_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+385,"top ls_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+364,"top ls_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+350,"top ls_u if_pc", false,-1, 63,0);
        tracep->declQuad(c+429,"top ls_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+922,"top ls_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+431,"top ls_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+200,"top ls_u clint_axi_arready", false,-1);
        tracep->declBus(c+432,"top ls_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+31,"top ls_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+201,"top ls_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+202,"top ls_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+433,"top ls_u clint_axi_rready", false,-1);
        tracep->declBus(c+203,"top ls_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+204,"top ls_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+922,"top ls_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+434,"top ls_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+206,"top ls_u clint_axi_awready", false,-1);
        tracep->declQuad(c+435,"top ls_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+207,"top ls_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+437,"top ls_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+208,"top ls_u clint_axi_wready", false,-1);
        tracep->declBus(c+201,"top ls_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+209,"top ls_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+438,"top ls_u clint_axi_bready", false,-1);
        tracep->declQuad(c+16,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+141,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+30,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+415,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+728,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+728,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+729,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u rden", false,-1);
        tracep->declBus(c+72,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+141,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+594,"top ls_u wren_last", false,-1);
        tracep->declQuad(c+595,"top ls_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+744,"top ls_u csr_stall_n", false,-1);
        tracep->declBit(c+73,"top ls_u timr_int", false,-1);
        tracep->declBit(c+828,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+829,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+72,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+141,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+418,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+594,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+895,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+728,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+141,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+30,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+415,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+728,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+728,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+729,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+729,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+74,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+75,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+597,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+598,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+599,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+600,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+601,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+415,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+745,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+746,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+747,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+30,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+76,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+77,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+78,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+79,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+18,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+422,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+420,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+427,"top ls_u ls_ctr_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+72,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+141,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+168,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+169,"top ls_u ls_ctr_u csr_st_en", false,-1);
        tracep->declBit(c+828,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+829,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+416,"top ls_u CSR_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+385,"top ls_u CSR_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+364,"top ls_u CSR_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+350,"top ls_u CSR_u if_pc", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+595,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+744,"top ls_u CSR_u stall_n", false,-1);
        tracep->declBit(c+73,"top ls_u CSR_u timer_int_i", false,-1);
        tracep->declBit(c+34,"top ls_u CSR_u in_intr_ls", false,-1);
        tracep->declQuad(c+20,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declQuad(c+80,"top ls_u CSR_u commitPC", false,-1, 63,0);
        tracep->declBit(c+82,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+83,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+84,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+85,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+86,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+87,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+88,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+89,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+90,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declBit(c+91,"top ls_u CSR_u sel_mie", false,-1);
        tracep->declBit(c+92,"top ls_u CSR_u sel_mip", false,-1);
        tracep->declQuad(c+595,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+170,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+172,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+602,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+93,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declBit(c+95,"top ls_u CSR_u mstatus_MIE", false,-1);
        tracep->declQuad(c+96,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+98,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declQuad(c+100,"top ls_u CSR_u mie", false,-1, 63,0);
        tracep->declBit(c+102,"top ls_u CSR_u mie_MTIE", false,-1);
        tracep->declQuad(c+103,"top ls_u CSR_u mip", false,-1, 63,0);
        tracep->declBit(c+105,"top ls_u CSR_u mip_MTIP", false,-1);
        tracep->declBit(c+828,"top ls_u clint_u clk", false,-1);
        tracep->declBit(c+829,"top ls_u clint_u rst_n", false,-1);
        tracep->declQuad(c+429,"top ls_u clint_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+922,"top ls_u clint_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+431,"top ls_u clint_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+200,"top ls_u clint_u clint_axi_arready", false,-1);
        tracep->declBus(c+432,"top ls_u clint_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+31,"top ls_u clint_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+201,"top ls_u clint_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+202,"top ls_u clint_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+433,"top ls_u clint_u clint_axi_rready", false,-1);
        tracep->declBus(c+203,"top ls_u clint_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+204,"top ls_u clint_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+922,"top ls_u clint_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+434,"top ls_u clint_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+206,"top ls_u clint_u clint_axi_awready", false,-1);
        tracep->declQuad(c+435,"top ls_u clint_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+207,"top ls_u clint_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+437,"top ls_u clint_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+208,"top ls_u clint_u clint_axi_wready", false,-1);
        tracep->declBus(c+201,"top ls_u clint_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+209,"top ls_u clint_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+438,"top ls_u clint_u clint_axi_bready", false,-1);
        tracep->declBit(c+73,"top ls_u clint_u hart0_time_int_o", false,-1);
        tracep->declQuad(c+245,"top ls_u clint_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+206,"top ls_u clint_u axi_awready", false,-1);
        tracep->declBit(c+208,"top ls_u clint_u axi_wready", false,-1);
        tracep->declBus(c+247,"top ls_u clint_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+209,"top ls_u clint_u axi_bvalid", false,-1);
        tracep->declQuad(c+248,"top ls_u clint_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+200,"top ls_u clint_u axi_arready", false,-1);
        tracep->declBus(c+201,"top ls_u clint_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+202,"top ls_u clint_u axi_rvalid", false,-1);
        tracep->declBit(c+250,"top ls_u clint_u aw_en", false,-1);
        tracep->declQuad(c+31,"top ls_u clint_u reg_data_out", false,-1, 63,0);
        tracep->declQuad(c+106,"top ls_u clint_u mtime", false,-1, 63,0);
        tracep->declQuad(c+108,"top ls_u clint_u mtimecmp", false,-1, 63,0);
        tracep->declBit(c+604,"top ls_u clint_u mtimeWrEn", false,-1);
        tracep->declBit(c+605,"top ls_u clint_u mtimecmpWrEn", false,-1);
        tracep->declBit(c+606,"top ls_u clint_u slv_reg_wren", false,-1);
        tracep->declBit(c+320,"top ls_u clint_u slv_reg_rden", false,-1);
        tracep->declBus(c+110,"top ls_u clint_u byte_index", false,-1, 31,0);
        tracep->declBit(c+828,"top Dcache_u clk", false,-1);
        tracep->declBit(c+829,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+607,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+608,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+609,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+610,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+141,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+29,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+727,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+725,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+728,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+729,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBus(c+30,"top Dcache_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+415,"top Dcache_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+35,"top Dcache_u fence_clean", false,-1);
        tracep->declBit(c+442,"top Dcache_u clear_Icache", false,-1);
        tracep->declBit(c+443,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+36,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+344,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+723,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+611,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+907,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declBus(c+140,"top Dcache_u cacheRdSize_o", false,-1, 2,0);
        tracep->declQuad(c+721,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+732,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+449,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+444,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+312,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+344,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+450,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+451,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+922,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+949,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+950,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+951,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+952,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+953,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+975,"top Dcache_u clean", false,-1, 2,0);
        tracep->declBus(c+612,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+748,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+613,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+614,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+615,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+251,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+255,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+259,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+263,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+616,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+620,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+616,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+620,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+624,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+625,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+626,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+627,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+628,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+630,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+631,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+632,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+111,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+113,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+174,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+175,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+908,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+909,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+910,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+911,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+176,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+177,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+976,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+977,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+115,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+116,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+117,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+633,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+267,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+275,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+912,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+914,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+634,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+635,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+636,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+283,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+117,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+638,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+639,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+647,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+118,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+119,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+648,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+120,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+121,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+123,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+650,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+651,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+652,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+654,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+655,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+657,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+661,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+657,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+661,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+665,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+666,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+125,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+916,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+126,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+127,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+126,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+917,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+667,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+178,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+749,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+179,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+128,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+129,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+668,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+130,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBit(c+669,"top Dcache_u cleanEn", false,-1);
        tracep->declBit(c+442,"top Dcache_u clean_OK", false,-1);
        tracep->declBus(c+670,"top Dcache_u cleanCnt", false,-1, 6,0);
        tracep->declBit(c+132,"top Dcache_u cleanWrValid", false,-1);
        tracep->declQuad(c+133,"top Dcache_u cleanWrAddr", false,-1, 32,0);
        tracep->declArray(c+321,"top Dcache_u cleanData", false,-1, 255,0);
        tracep->declBus(c+956,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+918,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+957,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+956,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+251,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+828,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+696,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+671,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+672,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+750,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+616,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+697,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+624,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+657,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+956,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+918,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+957,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+956,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+255,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+828,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+696,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+671,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+676,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+750,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+620,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+697,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+624,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+661,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+956,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+918,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+957,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+956,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+259,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+828,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+698,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+680,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+672,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+751,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+616,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+699,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+625,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+657,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+956,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+918,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+957,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+956,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+263,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+828,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+698,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+680,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+676,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+751,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+620,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+699,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+625,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+661,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+918,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+918,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+918,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+918,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+919,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+920,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+921,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+828,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+829,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+443,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+36,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+721,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+445,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+344,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+723,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+732,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+444,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+449,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+312,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+344,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+451,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+140,"top axi_ls_u loadSize", false,-1, 2,0);
        tracep->declBus(c+450,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+447,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+888,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+343,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+196,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+935,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+344,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+198,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+931,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+924,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+936,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+719,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+345,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+346,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+199,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+348,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+923,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+349,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+889,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+890,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+891,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+892,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+893,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+922,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+935,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+344,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+140,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+931,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+924,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+932,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+937,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+720,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+894,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+721,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+723,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+718,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+938,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+966,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+931,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+967,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+968,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+681,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+752,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+343,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+345,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+349,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+978,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+348,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+196,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+284,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+292,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+198,"top axi_ls_u wrSize_reg", false,-1, 2,0);
        tracep->declBus(c+293,"top axi_ls_u storeLenth_reg", false,-1, 7,0);
        tracep->declBus(c+135,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+966,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+931,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+967,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+968,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+136,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+753,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+6,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+9,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+969,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+935,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+924,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+979,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+951,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+294,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+828,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+829,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+895,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+19,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+727,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+416,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+422,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+418,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+420,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+426,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+427,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+980,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+971,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+828,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+829,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+727,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+754,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+682,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+416,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+422,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+418,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+420,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+427,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+425,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+423,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+828,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+829,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+383,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+352,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+380,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+381,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+355,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+726,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+728,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u in_intr_ls", false,-1);
        tracep->declBit(c+440,"top pipline_ctrl_u fence_id", false,-1);
        tracep->declBit(c+441,"top pipline_ctrl_u fence_ex", false,-1);
        tracep->declBit(c+35,"top pipline_ctrl_u fence_ls", false,-1);
        tracep->declBit(c+724,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+693,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+694,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+695,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+727,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+727,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+384,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+412,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u ls_flush", false,-1);
        tracep->declBit(c+692,"top pipline_ctrl_u fenceInPip", false,-1);
        tracep->declBus(c+981,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+981,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+334,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+189,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+828,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+829,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+186,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+922,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+338,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+185,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+309,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+193,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+339,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+192,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+195,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+194,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+340,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+332,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+922,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+331,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+180,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+183,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+182,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+181,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+337,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+295,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+185,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+192,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+195,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+194,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+297,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+180,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+183,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+182,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+181,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+982,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+983,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+299,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+301,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+303,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+305,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+329,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+330,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+984,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+986,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+307,"top lsAxiSlaveRam_u aw_en", false,-1);
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

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_d5724acc_0;
extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_5b979003_0;

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<8>/*255:0*/ __Vtemp417;
    VlWide<8>/*255:0*/ __Vtemp418;
    VlWide<8>/*255:0*/ __Vtemp419;
    VlWide<8>/*255:0*/ __Vtemp420;
    VlWide<8>/*255:0*/ __Vtemp421;
    VlWide<8>/*255:0*/ __Vtemp422;
    VlWide<8>/*255:0*/ __Vtemp423;
    VlWide<8>/*255:0*/ __Vtemp424;
    VlWide<8>/*255:0*/ __Vtemp425;
    VlWide<8>/*255:0*/ __Vtemp426;
    VlWide<8>/*255:0*/ __Vtemp427;
    VlWide<8>/*255:0*/ __Vtemp428;
    VlWide<8>/*255:0*/ __Vtemp429;
    VlWide<8>/*255:0*/ __Vtemp430;
    VlWide<8>/*255:0*/ __Vtemp431;
    VlWide<8>/*255:0*/ __Vtemp432;
    VlWide<8>/*255:0*/ __Vtemp433;
    VlWide<8>/*255:0*/ __Vtemp434;
    VlWide<8>/*255:0*/ __Vtemp435;
    VlWide<8>/*255:0*/ __Vtemp436;
    VlWide<8>/*255:0*/ __Vtemp437;
    VlWide<8>/*255:0*/ __Vtemp438;
    VlWide<8>/*255:0*/ __Vtemp439;
    VlWide<8>/*255:0*/ __Vtemp440;
    VlWide<8>/*255:0*/ __Vtemp441;
    VlWide<8>/*255:0*/ __Vtemp442;
    VlWide<8>/*255:0*/ __Vtemp443;
    VlWide<8>/*255:0*/ __Vtemp444;
    VlWide<8>/*255:0*/ __Vtemp445;
    VlWide<8>/*255:0*/ __Vtemp446;
    VlWide<8>/*255:0*/ __Vtemp447;
    VlWide<8>/*255:0*/ __Vtemp448;
    VlWide<8>/*255:0*/ __Vtemp449;
    VlWide<8>/*255:0*/ __Vtemp450;
    VlWide<8>/*255:0*/ __Vtemp451;
    VlWide<8>/*255:0*/ __Vtemp452;
    VlWide<8>/*255:0*/ __Vtemp453;
    VlWide<8>/*255:0*/ __Vtemp454;
    VlWide<8>/*255:0*/ __Vtemp455;
    VlWide<8>/*255:0*/ __Vtemp456;
    VlWide<8>/*255:0*/ __Vtemp457;
    VlWide<8>/*255:0*/ __Vtemp458;
    VlWide<8>/*255:0*/ __Vtemp459;
    VlWide<8>/*255:0*/ __Vtemp460;
    VlWide<8>/*255:0*/ __Vtemp461;
    VlWide<8>/*255:0*/ __Vtemp466;
    VlWide<8>/*255:0*/ __Vtemp473;
    VlWide<8>/*255:0*/ __Vtemp474;
    VlWide<8>/*255:0*/ __Vtemp475;
    VlWide<8>/*255:0*/ __Vtemp480;
    VlWide<8>/*255:0*/ __Vtemp485;
    VlWide<8>/*255:0*/ __Vtemp489;
    VlWide<4>/*127:0*/ __Vtemp490;
    VlWide<4>/*127:0*/ __Vtemp491;
    VlWide<3>/*95:0*/ __Vtemp492;
    VlWide<3>/*95:0*/ __Vtemp494;
    VlWide<3>/*95:0*/ __Vtemp495;
    VlWide<3>/*95:0*/ __Vtemp496;
    VlWide<3>/*95:0*/ __Vtemp497;
    VlWide<3>/*95:0*/ __Vtemp498;
    VlWide<3>/*95:0*/ __Vtemp501;
    VlWide<3>/*95:0*/ __Vtemp502;
    VlWide<3>/*95:0*/ __Vtemp503;
    VlWide<3>/*95:0*/ __Vtemp504;
    VlWide<3>/*95:0*/ __Vtemp505;
    VlWide<4>/*127:0*/ __Vtemp509;
    VlWide<4>/*127:0*/ __Vtemp516;
    VlWide<4>/*127:0*/ __Vtemp519;
    VlWide<4>/*127:0*/ __Vtemp526;
    VlWide<4>/*127:0*/ __Vtemp529;
    VlWide<4>/*127:0*/ __Vtemp538;
    VlWide<4>/*127:0*/ __Vtemp541;
    VlWide<4>/*127:0*/ __Vtemp550;
    VlWide<4>/*127:0*/ __Vtemp553;
    VlWide<4>/*127:0*/ __Vtemp563;
    VlWide<4>/*127:0*/ __Vtemp566;
    VlWide<4>/*127:0*/ __Vtemp576;
    VlWide<10>/*319:0*/ __Vtemp581;
    VlWide<8>/*255:0*/ __Vtemp582;
    VlWide<8>/*255:0*/ __Vtemp583;
    VlWide<8>/*255:0*/ __Vtemp584;
    VlWide<8>/*255:0*/ __Vtemp585;
    VlWide<4>/*127:0*/ __Vtemp586;
    VlWide<4>/*127:0*/ __Vtemp587;
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
        VL_EXTEND_WW(227,226, __Vtemp417, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullQData(oldp+12,((((QData)((IData)(
                                                     __Vtemp417[7U])) 
                                     << 0x3dU) | (((QData)((IData)(
                                                                   __Vtemp417[6U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp417[5U])) 
                                                     >> 3U)))),64);
        VL_EXTEND_WW(227,226, __Vtemp418, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullQData(oldp+14,((((QData)((IData)(
                                                     __Vtemp418[4U])) 
                                     << 0x3dU) | (((QData)((IData)(
                                                                   __Vtemp418[3U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp418[2U])) 
                                                     >> 3U)))),64);
        VL_EXTEND_WW(227,226, __Vtemp419, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullQData(oldp+16,((((QData)((IData)(
                                                     __Vtemp419[2U])) 
                                     << 0x3dU) | (((QData)((IData)(
                                                                   __Vtemp419[1U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp419[0U])) 
                                                     >> 3U)))),64);
        VL_EXTEND_WW(227,226, __Vtemp420, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullIData(oldp+18,(((__Vtemp420[5U] 
                                     << 0x1dU) | (__Vtemp420[4U] 
                                                  >> 3U))),32);
        VL_EXTEND_WW(227,226, __Vtemp421, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+19,((1U & (__Vtemp421[0U] 
                                        >> 2U))));
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        VL_EXTEND_WW(227,226, __Vtemp422, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+26,((1U & (__Vtemp422[0U] 
                                        >> 1U))));
        VL_EXTEND_WW(227,226, __Vtemp423, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+27,((3U == (0x7fU & (__Vtemp423[4U] 
                                                  >> 3U)))));
        VL_EXTEND_WW(227,226, __Vtemp424, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+28,((8U == (0x1fU & (__Vtemp424[4U] 
                                                  >> 5U)))));
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out),64);
        tracep->fullBit(oldp+33,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__in_intr_ls));
        VL_EXTEND_WW(227,226, __Vtemp425, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+35,((1U & __Vtemp425[0U])));
        tracep->fullBit(oldp+36,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullCData(oldp+38,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U)),4);
        tracep->fullCData(oldp+39,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                     : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))),4);
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__cache_dut__DOT__uncachedOk));
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+45,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+46,((0x3fU & (IData)(
                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                     >> 5U)))),6);
        tracep->fullIData(oldp+47,((0x1fffffU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))),21);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+52,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullBit(oldp+53,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullIData(oldp+54,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullIData(oldp+55,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullQData(oldp+56,((((QData)((IData)(
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
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        VL_EXTEND_WW(227,226, __Vtemp426, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp427, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp428, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp429, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+60,(((0x73U == (0x7fU 
                                             & (__Vtemp426[4U] 
                                                >> 3U))) 
                                  & (((1U == (7U & 
                                              (__Vtemp427[4U] 
                                               >> 0xfU))) 
                                      | (3U == (7U 
                                                & (__Vtemp428[4U] 
                                                   >> 0xfU)))) 
                                     | (2U == (7U & 
                                               (__Vtemp429[4U] 
                                                >> 0xfU)))))));
        VL_EXTEND_WW(227,226, __Vtemp430, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullCData(oldp+61,((0x1fU & (__Vtemp430[4U] 
                                             >> 0xaU))),5);
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+64,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        VL_EXTEND_WW(227,226, __Vtemp431, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullCData(oldp+72,((7U & (__Vtemp431[4U] 
                                          >> 0xfU))),3);
        tracep->fullBit(oldp+73,(vlSelf->top__DOT__ls_u__DOT__timr_int));
        VL_EXTEND_WW(227,226, __Vtemp432, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp433, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+74,(((3U == (0x7fU & (
                                                   __Vtemp432[4U] 
                                                   >> 3U))) 
                                  & (0U == (7U & (__Vtemp433[4U] 
                                                  >> 0xfU))))));
        VL_EXTEND_WW(227,226, __Vtemp434, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp435, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+75,(((3U == (0x7fU & (
                                                   __Vtemp434[4U] 
                                                   >> 3U))) 
                                  & (4U == (7U & (__Vtemp435[4U] 
                                                  >> 0xfU))))));
        VL_EXTEND_WW(227,226, __Vtemp436, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp437, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+76,(((8U == (0x1fU & (
                                                   __Vtemp436[4U] 
                                                   >> 5U))) 
                                  & (0U == (7U & (__Vtemp437[4U] 
                                                  >> 0xfU))))));
        VL_EXTEND_WW(227,226, __Vtemp438, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp439, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+77,(((8U == (0x1fU & (
                                                   __Vtemp438[4U] 
                                                   >> 5U))) 
                                  & (1U == (7U & (__Vtemp439[4U] 
                                                  >> 0xfU))))));
        VL_EXTEND_WW(227,226, __Vtemp440, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp441, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+78,(((8U == (0x1fU & (
                                                   __Vtemp440[4U] 
                                                   >> 5U))) 
                                  & (2U == (7U & (__Vtemp441[4U] 
                                                  >> 0xfU))))));
        VL_EXTEND_WW(227,226, __Vtemp442, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp443, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+79,(((8U == (0x1fU & (
                                                   __Vtemp442[4U] 
                                                   >> 5U))) 
                                  & (3U == (7U & (__Vtemp443[4U] 
                                                  >> 0xfU))))));
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC),64);
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw));
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs));
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc));
        VL_EXTEND_WW(227,226, __Vtemp444, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+85,((0x1cU == (0x1fU & 
                                            (__Vtemp444[4U] 
                                             >> 5U)))));
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        VL_EXTEND_WW(227,226, __Vtemp445, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+91,(((0x304U == (0xfffU 
                                              & ((__Vtemp445[5U] 
                                                  << 9U) 
                                                 | (__Vtemp445[4U] 
                                                    >> 0x17U)))) 
                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        VL_EXTEND_WW(227,226, __Vtemp446, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+92,(((0x344U == (0xfffU 
                                              & ((__Vtemp446[5U] 
                                                  << 9U) 
                                                 | (__Vtemp446[4U] 
                                                    >> 0x17U)))) 
                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullBit(oldp+95,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                >> 3U)))));
        VL_EXTEND_WW(227,226, __Vtemp447, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullQData(oldp+96,(((0x1cU == (0x1fU 
                                               & (__Vtemp447[4U] 
                                                  >> 5U)))
                                     ? 0xbULL : ((IData)(vlSelf->top__DOT__in_intr_ls)
                                                  ? 0x8000000000000007ULL
                                                  : 0ULL))),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie),64);
        tracep->fullBit(oldp+102,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                                 >> 7U)))));
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip),64);
        tracep->fullBit(oldp+105,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                 >> 7U)))));
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp),64);
        tracep->fullIData(oldp+110,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index),32);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+115,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullIData(oldp+116,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [0x23U]),21);
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+120,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid));
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__Dcache_u__DOT__cleanWrAddr),33);
        tracep->fullCData(oldp+135,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+136,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+137,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+138,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+139,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+140,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                      : 3U)),3);
        VL_EXTEND_WW(227,226, __Vtemp448, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp449, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp450, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullQData(oldp+141,((((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   __Vtemp448[4U] 
                                                   >> 0x17U)) 
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
                                              & (__Vtemp449[4U] 
                                                 >> 0x17U)) 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 8U))))
                                          ? (((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))
                                          : (((QData)((IData)(
                                                              __Vtemp450[4U])) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 __Vtemp450[3U])) 
                                                 << 0x1dU) 
                                                | ((QData)((IData)(
                                                                   __Vtemp450[2U])) 
                                                   >> 3U)))))),64);
        tracep->fullIData(oldp+143,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        VL_EXTEND_WW(227,226, __Vtemp451, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp452, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp453, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp454, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp455, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+144,((((3U == (0x7fU & 
                                            (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                             >> 1U))) 
                                    & ((0x73U == (0x7fU 
                                                  & (__Vtemp451[4U] 
                                                     >> 3U))) 
                                       & (((1U == (7U 
                                                   & (__Vtemp452[4U] 
                                                      >> 0xfU))) 
                                           | (3U == 
                                              (7U & 
                                               (__Vtemp453[4U] 
                                                >> 0xfU)))) 
                                          | (2U == 
                                             (7U & 
                                              (__Vtemp454[4U] 
                                               >> 0xfU)))))) 
                                   & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U)) 
                                      == (0x1fU & (
                                                   __Vtemp455[4U] 
                                                   >> 0x12U))))));
        tracep->fullCData(oldp+145,((0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
        tracep->fullQData(oldp+146,((QData)((IData)(
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
        VL_EXTEND_WW(227,226, __Vtemp456, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp457, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp458, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+148,((((__Vtemp456[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (__Vtemp457[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (__Vtemp458[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+149,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        VL_EXTEND_WW(227,226, __Vtemp459, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp460, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp461, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+150,((((__Vtemp459[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (__Vtemp460[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (__Vtemp461[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+151,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        if (vlSelf->top__DOT__in_intr_ls) {
            __Vtemp466[0U] = Vtop__ConstPool__CONST_d5724acc_0[0U];
            __Vtemp466[1U] = Vtop__ConstPool__CONST_d5724acc_0[1U];
            __Vtemp466[2U] = Vtop__ConstPool__CONST_d5724acc_0[2U];
            __Vtemp466[3U] = Vtop__ConstPool__CONST_d5724acc_0[3U];
            __Vtemp466[4U] = Vtop__ConstPool__CONST_d5724acc_0[4U];
            __Vtemp466[5U] = Vtop__ConstPool__CONST_d5724acc_0[5U];
            __Vtemp466[6U] = Vtop__ConstPool__CONST_d5724acc_0[6U];
            __Vtemp466[7U] = Vtop__ConstPool__CONST_d5724acc_0[7U];
        } else {
            __Vtemp466[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 3U) | ((4U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (3U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp466[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp466[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 3U));
            __Vtemp466[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp466[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp466[5U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp466[6U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp466[7U] = (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
        }
        tracep->fullWData(oldp+152,(__Vtemp466),227);
        __Vtemp473[0U] = (Vtop__ConstPool__CONST_5b979003_0[0U] 
                          & ((IData)(vlSelf->top__DOT__in_intr_ls)
                              ? Vtop__ConstPool__CONST_d5724acc_0[0U]
                              : (((IData)(vlSelf->top__DOT__alures_ex) 
                                  << 3U) | ((4U & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 0xeU)) 
                                            | (3U & 
                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])))));
        __Vtemp473[1U] = (Vtop__ConstPool__CONST_5b979003_0[1U] 
                          & ((IData)(vlSelf->top__DOT__in_intr_ls)
                              ? Vtop__ConstPool__CONST_d5724acc_0[1U]
                              : (((IData)(vlSelf->top__DOT__alures_ex) 
                                  >> 0x1dU) | ((IData)(
                                                       (vlSelf->top__DOT__alures_ex 
                                                        >> 0x20U)) 
                                               << 3U))));
        __Vtemp473[2U] = (Vtop__ConstPool__CONST_5b979003_0[2U] 
                          & ((IData)(vlSelf->top__DOT__in_intr_ls)
                              ? Vtop__ConstPool__CONST_d5724acc_0[2U]
                              : (((IData)((vlSelf->top__DOT__alures_ex 
                                           >> 0x20U)) 
                                  >> 0x1dU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                               << 3U))));
        __Vtemp473[3U] = (Vtop__ConstPool__CONST_5b979003_0[3U] 
                          & ((IData)(vlSelf->top__DOT__in_intr_ls)
                              ? Vtop__ConstPool__CONST_d5724acc_0[3U]
                              : (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                  >> 0x1dU) | ((IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                        >> 0x20U)) 
                                               << 3U))));
        __Vtemp473[4U] = (Vtop__ConstPool__CONST_5b979003_0[4U] 
                          & ((IData)(vlSelf->top__DOT__in_intr_ls)
                              ? Vtop__ConstPool__CONST_d5724acc_0[4U]
                              : (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                           >> 0x20U)) 
                                  >> 0x1dU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                << 7U) 
                                               | (0x78U 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                     >> 0x19U))))));
        __Vtemp473[5U] = (Vtop__ConstPool__CONST_5b979003_0[5U] 
                          & ((IData)(vlSelf->top__DOT__in_intr_ls)
                              ? Vtop__ConstPool__CONST_d5724acc_0[5U]
                              : ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                        >> 0x19U)) 
                                 | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     << 7U) | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                  >> 0x19U))))));
        __Vtemp473[6U] = (Vtop__ConstPool__CONST_5b979003_0[6U] 
                          & ((IData)(vlSelf->top__DOT__in_intr_ls)
                              ? Vtop__ConstPool__CONST_d5724acc_0[6U]
                              : ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                        >> 0x19U)) 
                                 | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                     << 7U) | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                  >> 0x19U))))));
        __Vtemp473[7U] = (Vtop__ConstPool__CONST_5b979003_0[7U] 
                          & ((IData)(vlSelf->top__DOT__in_intr_ls)
                              ? Vtop__ConstPool__CONST_d5724acc_0[7U]
                              : (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                       >> 0x19U))));
        tracep->fullWData(oldp+160,(__Vtemp473),226);
        VL_EXTEND_WW(227,226, __Vtemp474, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+168,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (__Vtemp474[4U] 
                                                >> 0x17U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        VL_EXTEND_WW(227,226, __Vtemp475, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullBit(oldp+169,((((0x73U == (0x7fU 
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
                                   & ((0x1fU & (__Vtemp475[4U] 
                                                >> 0x17U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullQData(oldp+170,((vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                                     | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+172,(((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullBit(oldp+174,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+175,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+176,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+177,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+178,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        tracep->fullBit(oldp+179,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullBit(oldp+180,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+181,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+182,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+185,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+186,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg)),64);
        tracep->fullCData(oldp+188,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+189,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)))),3);
        tracep->fullCData(oldp+190,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+191,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 0xfU)),4);
        tracep->fullBit(oldp+192,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+193,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (0xffU 
                                              & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)))),8);
        tracep->fullBit(oldp+194,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+195,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+198,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
        tracep->fullCData(oldp+199,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+200,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready));
        tracep->fullCData(oldp+201,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp),2);
        tracep->fullBit(oldp+202,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+203,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                      : 0U)),3);
        tracep->fullQData(oldp+204,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready));
        tracep->fullCData(oldp+207,(vlSelf->top__DOT__clint_axi_wstrb),8);
        tracep->fullBit(oldp+208,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready));
        tracep->fullBit(oldp+209,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid));
        tracep->fullBit(oldp+210,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+211,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))));
        tracep->fullWData(oldp+212,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+216,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+220,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+224,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+228,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+236,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullIData(oldp+244,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr),64);
        tracep->fullCData(oldp+247,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr),64);
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en));
        tracep->fullWData(oldp+251,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+255,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+259,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+263,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+267,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+275,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullBit(oldp+283,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullWData(oldp+284,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+292,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+293,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
        tracep->fullCData(oldp+294,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+307,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullCData(oldp+308,((((0xaU != (0xfU 
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
        tracep->fullQData(oldp+309,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o)),64);
        tracep->fullBit(oldp+311,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))));
        VL_EXTEND_WQ(256,64, __Vtemp480, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp485[0U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U]);
            __Vtemp485[1U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U]);
            __Vtemp485[2U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U]);
            __Vtemp485[3U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U]);
            __Vtemp485[4U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U]);
            __Vtemp485[5U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U]);
            __Vtemp485[6U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U]);
            __Vtemp485[7U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U]);
        } else {
            __Vtemp485[0U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp480[0U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
            __Vtemp485[1U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp480[1U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
            __Vtemp485[2U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp480[2U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
            __Vtemp485[3U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp480[3U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
            __Vtemp485[4U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp480[4U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
            __Vtemp485[5U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp480[5U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
            __Vtemp485[6U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp480[6U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
            __Vtemp485[7U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp480[7U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
        }
        tracep->fullWData(oldp+312,(__Vtemp485),256);
        tracep->fullBit(oldp+320,((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))));
        if ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))) {
            __Vtemp489[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U];
            __Vtemp489[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U];
            __Vtemp489[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U];
            __Vtemp489[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U];
            __Vtemp489[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U];
            __Vtemp489[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U];
            __Vtemp489[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U];
            __Vtemp489[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U];
        } else {
            __Vtemp489[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U];
            __Vtemp489[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U];
            __Vtemp489[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U];
            __Vtemp489[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U];
            __Vtemp489[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U];
            __Vtemp489[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U];
            __Vtemp489[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U];
            __Vtemp489[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U];
        }
        tracep->fullWData(oldp+321,(__Vtemp489),256);
        tracep->fullBit(oldp+329,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+330,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        tracep->fullBit(oldp+331,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+332,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr)),64);
        tracep->fullCData(oldp+334,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)))),3);
        tracep->fullCData(oldp+335,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+336,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 2U)),4);
        tracep->fullBit(oldp+337,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))));
        tracep->fullBit(oldp+338,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+340,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullCData(oldp+341,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+342,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                              ? 0U : 3U))
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+343,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+344,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+345,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+346,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+349,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+350,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+352,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+353,(((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                         + (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                  >> 0x1cU))))
                                      : ((((QData)((IData)(
                                                           vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                           << 0x24U) 
                                          | (((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                              << 4U) 
                                             | ((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                >> 0x1cU))) 
                                         + (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                  >> 0x1cU)))))),64);
        tracep->fullBit(oldp+355,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+356,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+358,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+360,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+361,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+362,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+363,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+364,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+366,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+367,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+369,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+370,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+371,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+372,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+373,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+374,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+375,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+376,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+377,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+378,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+379,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+380,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+381,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+382,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+383,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+384,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+385,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullIData(oldp+387,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1cU))),32);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+390,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+391,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x11U))),2);
        tracep->fullQData(oldp+392,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+394,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+396,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+398,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+400,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x17U))),5);
        tracep->fullBit(oldp+401,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+402,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+403,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+404,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+405,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+406,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),3);
        tracep->fullBit(oldp+407,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullCData(oldp+408,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+409,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+410,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xbU))),5);
        tracep->fullCData(oldp+411,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 6U))),5);
        tracep->fullBit(oldp+412,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+413,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 4U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1cU))))));
        tracep->fullBit(oldp+414,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 2U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1eU))))));
        tracep->fullCData(oldp+415,(((((1U & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                              | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                       | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                      | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                     | (3U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld)))))),3);
        tracep->fullQData(oldp+416,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+418,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+420,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+422,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+423,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+425,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+426,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+427,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+429,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullBit(oldp+431,(vlSelf->top__DOT__clint_axi_arvalid));
        tracep->fullCData(oldp+432,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                      : 0U)),3);
        tracep->fullBit(oldp+433,(((2U == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+434,(vlSelf->top__DOT__clint_axi_awvalid));
        tracep->fullQData(oldp+435,(vlSelf->top__DOT__clint_axi_wdata),64);
        tracep->fullBit(oldp+437,(vlSelf->top__DOT__clint_axi_wvalid));
        tracep->fullBit(oldp+438,(vlSelf->top__DOT__clint_axi_bready));
        tracep->fullBit(oldp+439,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+440,(vlSelf->top__DOT__fence_id));
        tracep->fullBit(oldp+441,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+442,(vlSelf->top__DOT__Dcache_u__DOT__clean_OK));
        tracep->fullBit(oldp+443,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+444,(vlSelf->top__DOT__DcacheWrValid));
        tracep->fullQData(oldp+445,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+447,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+449,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+450,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullCData(oldp+451,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullQData(oldp+452,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+454,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullBit(oldp+455,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+456,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+457,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))));
        tracep->fullIData(oldp+458,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+459,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+460,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+461,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        __Vtemp490[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp490[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp490[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp490[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+462,(__Vtemp490),128);
        __Vtemp491[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp491[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp491[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp491[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+466,(__Vtemp491),128);
        tracep->fullBit(oldp+470,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+471,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+472,(vlSelf->top__DOT__cache_dut__DOT__uncached));
        tracep->fullBit(oldp+473,(vlSelf->top__DOT__cache_dut__DOT__diffAddr));
        tracep->fullBit(oldp+474,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+475,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+476,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+477,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+478,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+479,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+487,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+488,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN));
        tracep->fullBit(oldp+489,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+490,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)))));
        tracep->fullBit(oldp+491,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+492,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+493,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN));
        tracep->fullBit(oldp+494,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+495,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)))));
        tracep->fullBit(oldp+496,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+497,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+498,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+500,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp492[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp492[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp492[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+501,(__Vtemp492),96);
        tracep->fullWData(oldp+504,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+507,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+508,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+509,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+510,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+511,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullBit(oldp+512,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U)))));
        tracep->fullQData(oldp+513,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+515,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+516,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+517,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+518,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+519,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+520,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullBit(oldp+521,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__fence_id))));
        tracep->fullWData(oldp+522,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),316);
        tracep->fullQData(oldp+532,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+534,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+536,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp494, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp495, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp496, __Vtemp494, __Vtemp495);
        VL_EXTEND_WI(65,1, __Vtemp497, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp498, __Vtemp496, __Vtemp497);
        tracep->fullBit(oldp+538,((1U & ((0x4000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp498[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+539,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+540,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+542,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+543,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+545,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+547,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+548,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullCData(oldp+549,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x17U))),3);
        tracep->fullQData(oldp+550,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp501, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp502, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp503, __Vtemp501, __Vtemp502);
        VL_EXTEND_WI(65,1, __Vtemp504, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp505, __Vtemp503, __Vtemp504);
        tracep->fullBit(oldp+552,((1U & __Vtemp505[2U])));
        tracep->fullBit(oldp+553,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+554,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+556,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+558,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+560,(((0x10U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? ((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((4U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                          : ((4U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                                      : ((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((4U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                          : ((4U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullCData(oldp+562,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x17U))),4);
        tracep->fullBit(oldp+563,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+564,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+565,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+567,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+569,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+571,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+573,(((0x8000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+575,(((0x8000000U & 
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
        tracep->fullQData(oldp+577,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+579,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 8U))),3);
        tracep->fullQData(oldp+580,(((((QData)((IData)(
                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                        << 4U) | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                  >> 0x1cU))) 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU))))),64);
        tracep->fullQData(oldp+582,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU))))),64);
        tracep->fullBit(oldp+584,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+585,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+586,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+587,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+589,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+591,((1U & ((0x400U & 
                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                          ? ((0x200U 
                                              & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                              ? ((0x100U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                  ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                              : ((0x100U 
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
                                                 >> 9U)) 
                                             & ((0x100U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                 ? 
                                                (0U 
                                                 != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)))))))));
        tracep->fullBit(oldp+592,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+593,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+594,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullQData(oldp+595,(vlSelf->top__DOT__ls_u__DOT__csr_wr_data),64);
        tracep->fullBit(oldp+597,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
        tracep->fullBit(oldp+598,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
        tracep->fullBit(oldp+599,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
        tracep->fullBit(oldp+600,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
        tracep->fullBit(oldp+601,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
        tracep->fullQData(oldp+602,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullBit(oldp+604,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn));
        tracep->fullBit(oldp+605,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn));
        tracep->fullBit(oldp+606,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren));
        tracep->fullIData(oldp+607,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+608,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+609,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+610,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 4U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1cU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 2U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1eU)))))));
        tracep->fullIData(oldp+611,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+612,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+613,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+614,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+615,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp509, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp516[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp516[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp516[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp516[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp516[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp509[0U])
                               : 0U);
            __Vtemp516[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp509[1U])
                               : 0U);
            __Vtemp516[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp509[2U])
                               : 0U);
            __Vtemp516[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp509[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+616,(__Vtemp516),128);
        VL_EXTEND_WQ(128,64, __Vtemp519, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp526[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp526[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp526[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp526[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp526[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp519[0U])
                               : 0U);
            __Vtemp526[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp519[1U])
                               : 0U);
            __Vtemp526[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp519[2U])
                               : 0U);
            __Vtemp526[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp519[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+620,(__Vtemp526),128);
        tracep->fullBit(oldp+624,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+625,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+626,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+627,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+628,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+630,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+631,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+632,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+633,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+634,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+635,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+636,((((QData)((IData)(
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
        tracep->fullCData(oldp+638,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+639,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+647,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+648,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullBit(oldp+650,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+651,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+652,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+654,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+655,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp529, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp538[0U] = 0xffffffffU;
            __Vtemp538[1U] = 0xffffffffU;
            __Vtemp538[2U] = 0xffffffffU;
            __Vtemp538[3U] = 0xffffffffU;
        } else {
            __Vtemp538[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp529[0U])
                                   : 0U) : 0U);
            __Vtemp538[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp529[1U])
                                   : 0U) : 0U);
            __Vtemp538[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp529[2U])
                                   : 0U) : 0U);
            __Vtemp538[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp529[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+657,(__Vtemp538),128);
        VL_EXTEND_WQ(128,64, __Vtemp541, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp550[0U] = 0xffffffffU;
            __Vtemp550[1U] = 0xffffffffU;
            __Vtemp550[2U] = 0xffffffffU;
            __Vtemp550[3U] = 0xffffffffU;
        } else {
            __Vtemp550[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp541[0U])
                                   : 0U) : 0U);
            __Vtemp550[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp541[1U])
                                   : 0U) : 0U);
            __Vtemp550[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp541[2U])
                                   : 0U) : 0U);
            __Vtemp550[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp541[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+661,(__Vtemp550),128);
        tracep->fullBit(oldp+665,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+666,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+667,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullIData(oldp+668,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
        tracep->fullBit(oldp+669,((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullCData(oldp+670,(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt),7);
        tracep->fullBit(oldp+671,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        VL_EXTEND_WQ(128,64, __Vtemp553, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp563[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp553[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp563[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp553[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp563[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp553[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp563[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp553[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+672,(__Vtemp563),128);
        VL_EXTEND_WQ(128,64, __Vtemp566, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp576[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp566[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp576[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp566[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp576[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp566[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp576[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp566[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+676,(__Vtemp576),128);
        tracep->fullBit(oldp+680,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+681,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+682,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+692,((1U & ((IData)(vlSelf->top__DOT__fence_id) 
                                         | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullBit(oldp+693,((1U & (~ (((((((IData)(vlSelf->top__DOT__fence_id) 
                                                 | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                               | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+694,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+695,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+696,((1U & (~ ((((((((
                                                   (0U 
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
                                             | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                                            | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))))));
        tracep->fullBit(oldp+697,((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                             & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                         & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                        | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                       | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                                   | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))));
        tracep->fullBit(oldp+698,((1U & (~ ((((((((
                                                   (0U 
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
                                             | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
                                            | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))))));
        tracep->fullBit(oldp+699,((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                             & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                         & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                        | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                       | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
                                   | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))));
        tracep->fullQData(oldp+700,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+702,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp581[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           << 0x1cU) | (((IData)(vlSelf->top__DOT__aluctr_id) 
                                         << 0x17U) 
                                        | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                             & (IData)(vlSelf->top__DOT__is_jalr_id)) 
                                            << 0x16U) 
                                           | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                & (IData)(vlSelf->top__DOT__is_jal_id)) 
                                               << 0x15U) 
                                              | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                   & (IData)(vlSelf->top__DOT__is_brc_id)) 
                                                  << 0x14U) 
                                                 | (((IData)(vlSelf->top__DOT__src1sel_id) 
                                                     << 0x13U) 
                                                    | (((IData)(vlSelf->top__DOT__src2sel_id) 
                                                        << 0x11U) 
                                                       | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                            & (IData)(vlSelf->top__DOT__wben_id)) 
                                                           << 0x10U) 
                                                          | (((IData)(vlSelf->top__DOT__rs1_idx_id) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT__rs2_idx_id) 
                                                                 << 6U) 
                                                                | (((IData)(vlSelf->top__DOT__DivEn_id) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__DivSel_id) 
                                                                       << 2U) 
                                                                      | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                           & (IData)(vlSelf->top__DOT__trap_id)) 
                                                                          << 1U) 
                                                                         | ((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                            & (IData)(vlSelf->top__DOT__fence_id)))))))))))))));
        __Vtemp581[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 4U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp581[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1cU));
        __Vtemp581[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp581[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1cU));
        __Vtemp581[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp581[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1cU));
        __Vtemp581[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 4U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1cU));
        __Vtemp581[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                           >> 4U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                                ? 0ULL
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp581[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 4U);
        tracep->fullWData(oldp+704,(__Vtemp581),316);
        tracep->fullBit(oldp+714,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+715,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+717,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+718,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+719,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+720,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+721,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+723,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+724,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+725,(vlSelf->top__DOT__ls_addr_ok_i));
        tracep->fullBit(oldp+726,((1U & (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))));
        tracep->fullBit(oldp+727,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+728,(vlSelf->top__DOT__dataNotOk));
        tracep->fullQData(oldp+729,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+731,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+732,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+733,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+734,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+735,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+737,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+738,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+739,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__A),6);
        tracep->fullCData(oldp+740,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+741,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__A),6);
        tracep->fullCData(oldp+742,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+743,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullBit(oldp+744,(vlSelf->top__DOT__ls_u__DOT__csr_stall_n));
        tracep->fullCData(oldp+745,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+746,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+747,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullCData(oldp+748,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
        tracep->fullBit(oldp+749,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+750,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+751,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+752,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+753,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+754,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+764,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+766,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+768,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+770,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+772,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+774,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+776,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+778,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+780,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+782,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+784,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+786,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+788,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+790,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+792,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+794,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+796,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+798,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+800,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+802,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+804,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+806,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+808,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+810,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+812,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+814,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+816,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+818,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+820,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+822,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+824,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+826,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+828,(vlSelf->clk));
        tracep->fullBit(oldp+829,(vlSelf->rst_n));
        tracep->fullQData(oldp+830,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+832,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+834,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+835,(vlSelf->regA0),64);
        tracep->fullBit(oldp+837,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+838,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+839,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+840,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+842,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+843,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+844,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+845,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+846,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+847,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+848,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+849,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+850,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+851,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+852,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+853,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+854,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+855,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+857,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+858,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+859,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+860,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+861,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+862,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+864,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+865,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+866,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+867,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+868,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+869,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+870,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+871,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+872,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+873,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+874,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+875,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+876,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+878,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+879,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+880,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+881,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+882,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+883,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+884,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+885,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+886,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+887,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
        tracep->fullBit(oldp+888,(((0xaU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU))))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                    : ((2U == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)
                                        : (IData)(vlSelf->axi_aw_ready_i)))));
        tracep->fullBit(oldp+889,(((0xaU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU))))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                    : ((2U == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid)
                                        : (IData)(vlSelf->axi_b_valid_i)))));
        tracep->fullCData(oldp+890,(((0xaU == (0xfU 
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
        tracep->fullCData(oldp+891,(((0xaU == (0xfU 
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
        tracep->fullBit(oldp+892,((1U & ((0xaU == (0xfU 
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
        tracep->fullBit(oldp+893,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+894,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
        VL_EXTEND_WW(227,226, __Vtemp582, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp583, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp584, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp585, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->fullQData(oldp+895,(((((((((- (QData)((IData)(
                                                              ((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & (__Vtemp582[4U] 
                                                                    >> 3U))) 
                                                               & (0U 
                                                                  == 
                                                                  (7U 
                                                                   & (__Vtemp583[4U] 
                                                                      >> 0xfU))))))) 
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
                                                                   & (__Vtemp584[4U] 
                                                                      >> 3U))) 
                                                                 & (4U 
                                                                    == 
                                                                    (7U 
                                                                     & (__Vtemp585[4U] 
                                                                        >> 0xfU))))))) 
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
        tracep->fullCData(oldp+897,(((0xaU == (0xfU 
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
        tracep->fullBit(oldp+898,((1U & ((0xaU == (0xfU 
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
        tracep->fullBit(oldp+899,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+900,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+901,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+902,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+903,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+905,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+907,((IData)(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                              ? vlSelf->top__DOT__Dcache_u__DOT__cleanWrAddr
                                              : (QData)((IData)(
                                                                ((6U 
                                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                                  ? 
                                                                 ((IData)(
                                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                           >> 3U)) 
                                                                  << 3U)
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
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
                                                                         << 5U)))))))))),32);
        tracep->fullBit(oldp+908,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+909,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+910,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+911,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+912,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+914,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+916,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
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
        tracep->fullIData(oldp+917,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullIData(oldp+918,(0x40U),32);
        tracep->fullIData(oldp+919,(4U),32);
        tracep->fullIData(oldp+920,(8U),32);
        tracep->fullIData(oldp+921,(1U),32);
        tracep->fullCData(oldp+922,(0U),3);
        tracep->fullBit(oldp+923,(0U));
        tracep->fullBit(oldp+924,(0U));
        tracep->fullCData(oldp+925,(0U),4);
        tracep->fullBit(oldp+926,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+927,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+928,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+929,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+930,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+931,(1U),2);
        tracep->fullCData(oldp+932,(2U),4);
        tracep->fullCData(oldp+933,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+934,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+935,(1U),4);
        tracep->fullCData(oldp+936,(0xfU),4);
        tracep->fullCData(oldp+937,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+938,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+939,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+941,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+942,(1U));
        tracep->fullBit(oldp+943,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+944,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullBit(oldp+945,(0U));
        tracep->fullQData(oldp+946,(0ULL),64);
        tracep->fullCData(oldp+948,(0U),8);
        tracep->fullCData(oldp+949,(1U),3);
        tracep->fullCData(oldp+950,(2U),3);
        tracep->fullCData(oldp+951,(3U),3);
        tracep->fullCData(oldp+952,(7U),3);
        tracep->fullCData(oldp+953,(6U),3);
        tracep->fullBit(oldp+954,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+955,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+956,(0x80U),32);
        tracep->fullIData(oldp+957,(6U),32);
        __Vtemp586[0U] = 0U;
        __Vtemp586[1U] = 0U;
        __Vtemp586[2U] = 0U;
        __Vtemp586[3U] = 0U;
        tracep->fullWData(oldp+958,(__Vtemp586),128);
        __Vtemp587[0U] = 0xffffffffU;
        __Vtemp587[1U] = 0xffffffffU;
        __Vtemp587[2U] = 0xffffffffU;
        __Vtemp587[3U] = 0xffffffffU;
        tracep->fullWData(oldp+962,(__Vtemp587),128);
        tracep->fullCData(oldp+966,(0U),2);
        tracep->fullCData(oldp+967,(3U),2);
        tracep->fullCData(oldp+968,(2U),2);
        tracep->fullIData(oldp+969,(3U),32);
        tracep->fullIData(oldp+970,(0x60U),32);
        tracep->fullIData(oldp+971,(0U),32);
        tracep->fullIData(oldp+972,(0x13cU),32);
        tracep->fullBit(oldp+973,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+974,(0xe2U),32);
        tracep->fullCData(oldp+975,(4U),3);
        tracep->fullBit(oldp+976,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+977,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+978,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullCData(oldp+979,(3U),8);
        tracep->fullIData(oldp+980,(0x121U),32);
        tracep->fullIData(oldp+981,(0x40U),32);
        tracep->fullIData(oldp+982,(3U),32);
        tracep->fullIData(oldp+983,(1U),32);
        tracep->fullQData(oldp+984,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+986,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
