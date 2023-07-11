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
        tracep->declBit(c+819,"clk", false,-1);
        tracep->declBit(c+820,"rst_n", false,-1);
        tracep->declQuad(c+821,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+823,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+825,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+826,"regA0", false,-1, 63,0);
        tracep->declBit(c+828,"stall_n_diff", false,-1);
        tracep->declBit(c+829,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+830,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+831,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+833,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+834,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+836,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+837,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+838,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+839,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+840,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+841,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+842,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+843,"axi_r_ready_o", false,-1);
        tracep->declBit(c+844,"axi_r_valid_i", false,-1);
        tracep->declBus(c+845,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+846,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+848,"axi_r_last_i", false,-1);
        tracep->declBus(c+849,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+850,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+851,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+852,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+853,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+855,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+856,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+857,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+858,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+859,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+860,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+861,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+862,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+863,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+864,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+865,"axi_w_ready_i", false,-1);
        tracep->declBit(c+866,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+867,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+869,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+870,"axi_w_last_o", false,-1);
        tracep->declBus(c+871,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+872,"axi_b_ready_o", false,-1);
        tracep->declBit(c+873,"axi_b_valid_i", false,-1);
        tracep->declBus(c+874,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+875,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+876,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+909,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+909,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+909,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+909,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+910,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+912,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+819,"top clk", false,-1);
        tracep->declBit(c+820,"top rst_n", false,-1);
        tracep->declQuad(c+821,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+823,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+825,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+826,"top regA0", false,-1, 63,0);
        tracep->declBit(c+828,"top stall_n_diff", false,-1);
        tracep->declBit(c+829,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+830,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+831,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+833,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+834,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+836,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+837,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+838,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+839,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+840,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+841,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+842,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+843,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+844,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+845,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+846,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+848,"top axi_r_last_i", false,-1);
        tracep->declBus(c+849,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+850,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+851,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+852,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+853,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+855,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+856,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+857,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+858,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+859,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+860,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+861,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+862,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+864,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+865,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+866,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+867,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+869,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+870,"top axi_w_last_o", false,-1);
        tracep->declBus(c+871,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+872,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+873,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+874,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+875,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+876,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+171,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+322,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+323,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+136,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+914,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+137,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+325,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+326,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+915,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+327,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+138,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+328,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+172,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+173,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+174,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+917,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+918,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+919,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+176,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+329,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+177,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+179,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+914,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+299,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+180,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+181,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+915,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+182,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+183,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+330,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+300,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+184,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+302,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+914,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+331,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+185,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+186,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+920,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+921,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top instr_fetching", false,-1);
        tracep->declBit(c+877,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+913,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+916,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+914,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+332,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+333,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+922,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+915,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+923,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+916,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+924,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+705,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+878,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+706,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+708,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+709,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+925,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+879,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+334,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+187,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+913,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+926,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+914,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+335,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+189,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+922,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+915,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+927,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+916,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+916,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+710,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+336,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+337,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+190,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+339,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+914,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+340,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+880,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+881,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+882,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+883,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+884,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+913,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+926,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+914,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+335,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+139,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+922,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+915,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+923,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+916,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+928,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+711,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+885,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+712,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+714,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+709,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+929,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+930,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+341,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+343,"top is_jump", false,-1);
        tracep->declQuad(c+344,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+684,"top pc_stall_n", false,-1);
        tracep->declBit(c+715,"top if_stall_n", false,-1);
        tracep->declBit(c+346,"top if_instr_valid", false,-1);
        tracep->declBit(c+932,"top sram_data_valid", false,-1);
        tracep->declQuad(c+347,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+349,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+933,"top sram_ren", false,-1);
        tracep->declBit(c+351,"top sram_addr_valid", false,-1);
        tracep->declBit(c+352,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+353,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+354,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+355,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+357,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+691,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+693,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+358,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+360,"top src1sel_id", false,-1);
        tracep->declBus(c+361,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+362,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+363,"top is_brc_id", false,-1);
        tracep->declBit(c+364,"top is_jal_id", false,-1);
        tracep->declBit(c+365,"top is_jalr_id", false,-1);
        tracep->declBit(c+366,"top wben_id", false,-1);
        tracep->declBus(c+367,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+368,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+685,"top id_stall_n", false,-1);
        tracep->declBit(c+369,"top DivEn_id", false,-1);
        tracep->declBus(c+370,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+371,"top in_trap_id", false,-1);
        tracep->declBit(c+372,"top out_trap_id", false,-1);
        tracep->declBit(c+373,"top trap_id", false,-1);
        tracep->declBit(c+374,"top ld_use_hazard", false,-1);
        tracep->declBit(c+375,"top id_flush", false,-1);
        tracep->declQuad(c+376,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+378,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+379,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+381,"top src1sel_ex", false,-1);
        tracep->declBus(c+382,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+383,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+385,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+387,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+389,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+391,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+392,"top is_brc_ex", false,-1);
        tracep->declBit(c+393,"top is_jal_ex", false,-1);
        tracep->declBit(c+394,"top is_jalr_ex", false,-1);
        tracep->declBit(c+395,"top wben_ex", false,-1);
        tracep->declBit(c+396,"top DivEn_ex", false,-1);
        tracep->declBus(c+397,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+398,"top trap_ex", false,-1);
        tracep->declBit(c+686,"top ex_stall_n", false,-1);
        tracep->declQuad(c+10,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+399,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+400,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+401,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+402,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+403,"top ex_flush", false,-1);
        tracep->declBit(c+404,"top rden_ls", false,-1);
        tracep->declBit(c+405,"top wren_ls", false,-1);
        tracep->declBit(c+716,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+717,"top ex_not_ok", false,-1);
        tracep->declQuad(c+12,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+18,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+886,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+19,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+26,"top trap_ls", false,-1);
        tracep->declBit(c+718,"top ls_stall_n", false,-1);
        tracep->declBit(c+719,"top ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+140,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+934,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+935,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+720,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+30,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+406,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+407,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+409,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+411,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+413,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+414,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+416,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+417,"top wben_wb", false,-1);
        tracep->declQuad(c+418,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+718,"top wb_stall_n", false,-1);
        tracep->declQuad(c+420,"top clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+913,"top clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+422,"top clint_axi_arvalid", false,-1);
        tracep->declBit(c+191,"top clint_axi_arready", false,-1);
        tracep->declBus(c+423,"top clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+31,"top clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+192,"top clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+193,"top clint_axi_rvalid", false,-1);
        tracep->declBit(c+424,"top clint_axi_rready", false,-1);
        tracep->declBus(c+194,"top clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+195,"top clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+913,"top clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+425,"top clint_axi_awvalid", false,-1);
        tracep->declBit(c+197,"top clint_axi_awready", false,-1);
        tracep->declQuad(c+426,"top clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+198,"top clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+428,"top clint_axi_wvalid", false,-1);
        tracep->declBit(c+199,"top clint_axi_wready", false,-1);
        tracep->declBus(c+192,"top clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+200,"top clint_axi_bvalid", false,-1);
        tracep->declBit(c+429,"top clint_axi_bready", false,-1);
        tracep->declBit(c+430,"top rw_valid_i", false,-1);
        tracep->declBit(c+33,"top rw_ready_o", false,-1);
        tracep->declBus(c+332,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+708,"top rdLast_o", false,-1);
        tracep->declBus(c+142,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+706,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+722,"top dataValid_o", false,-1);
        tracep->declBit(c+431,"top fence_id", false,-1);
        tracep->declBit(c+432,"top fence_ex", false,-1);
        tracep->declBit(c+143,"top ld_csr_hazard", false,-1);
        tracep->declBit(c+34,"top ls_flush", false,-1);
        tracep->declBit(c+34,"top in_intr_ls", false,-1);
        tracep->declBit(c+719,"top dataNotOk", false,-1);
        tracep->declBit(c+35,"top fence_ls", false,-1);
        tracep->declBit(c+433,"top clear_Icache", false,-1);
        tracep->declBit(c+434,"top DcacheRdValid", false,-1);
        tracep->declBit(c+435,"top DcacheWrValid", false,-1);
        tracep->declBit(c+36,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+335,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+714,"top lsRdLast", false,-1);
        tracep->declQuad(c+436,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+438,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+712,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+723,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+440,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+303,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+335,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+441,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+442,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+139,"top lsLoadSize", false,-1, 2,0);
        tracep->declBus(c+909,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+909,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+909,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+909,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+910,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+912,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+877,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+916,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+914,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+332,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+333,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+922,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+915,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+923,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+924,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+705,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+878,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+706,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+708,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+709,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+879,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+334,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+187,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+926,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+914,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+335,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+189,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+922,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+915,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+927,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+710,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+336,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+337,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+190,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+339,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+914,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+340,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+880,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+881,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+882,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+883,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+884,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+6,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+7,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+926,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+914,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+335,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+139,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+922,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+915,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+923,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+928,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+711,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+885,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+712,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+714,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+709,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+929,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+851,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+852,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+853,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+855,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+856,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+857,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+858,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+859,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+860,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+861,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+862,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+864,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+865,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+866,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+867,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+869,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+870,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+871,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+872,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+873,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+874,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+875,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+876,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+829,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+830,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+831,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+833,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+834,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+836,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+837,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+838,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+839,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+840,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+841,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+842,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+843,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+844,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+845,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+846,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+848,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+849,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+850,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+176,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+329,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+177,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+179,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+914,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+299,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+180,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+181,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+915,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+182,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+183,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+330,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+300,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+184,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+302,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+914,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+331,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+185,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+186,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+926,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+921,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+171,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+322,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+323,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+136,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+914,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+137,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+325,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+326,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+915,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+327,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+138,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+328,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+172,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+173,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+174,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+172,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+926,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+919,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+420,"top axi_crossbar_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_crossbar_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+422,"top axi_crossbar_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+191,"top axi_crossbar_u clint_axi_arready", false,-1);
        tracep->declBus(c+423,"top axi_crossbar_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+31,"top axi_crossbar_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+192,"top axi_crossbar_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+193,"top axi_crossbar_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+424,"top axi_crossbar_u clint_axi_rready", false,-1);
        tracep->declBus(c+194,"top axi_crossbar_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+195,"top axi_crossbar_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_crossbar_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+425,"top axi_crossbar_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+197,"top axi_crossbar_u clint_axi_awready", false,-1);
        tracep->declQuad(c+426,"top axi_crossbar_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+198,"top axi_crossbar_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+428,"top axi_crossbar_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+199,"top axi_crossbar_u clint_axi_wready", false,-1);
        tracep->declBus(c+192,"top axi_crossbar_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+200,"top axi_crossbar_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+429,"top axi_crossbar_u clint_axi_bready", false,-1);
        tracep->declBit(c+879,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+334,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+187,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+926,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+914,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+335,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+189,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+922,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+915,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+927,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+710,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+336,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+337,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+190,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+339,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+914,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+340,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+880,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+881,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+882,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+883,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+724,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+37,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+443,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+914,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+144,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+445,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+922,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+936,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+923,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+39,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+446,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+725,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+888,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+726,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+728,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+709,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+889,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+447,"top axi_crossbar_u clint_r_trans", false,-1);
        tracep->declBit(c+201,"top axi_crossbar_u clint_w_trans", false,-1);
        tracep->declBit(c+448,"top axi_crossbar_u perip_r_trans", false,-1);
        tracep->declBit(c+202,"top axi_crossbar_u perip_w_trans", false,-1);
        tracep->declBit(c+819,"top IF_u clk", false,-1);
        tracep->declBit(c+820,"top IF_u rst_n", false,-1);
        tracep->declBit(c+343,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+344,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+371,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+372,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+715,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+341,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+354,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+346,"top IF_u if_instr_valid", false,-1);
        tracep->declBit(c+34,"top IF_u in_intr_ls", false,-1);
        tracep->declQuad(c+347,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+932,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+352,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+353,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+349,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+933,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+351,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+349,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+819,"top cache_dut clk", false,-1);
        tracep->declBit(c+820,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+449,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+351,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+915,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+937,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+939,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+715,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+352,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+450,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+353,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+347,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+433,"top cache_dut clrValid", false,-1);
        tracep->declBit(c+430,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+33,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+332,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+708,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+142,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+706,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+722,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+913,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+940,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+941,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+942,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+943,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+944,"top cache_dut unCacheOp", false,-1, 2,0);
        tracep->declBus(c+451,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+729,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+452,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+40,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+41,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+203,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+207,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+211,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+215,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+453,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+457,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+453,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+457,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+461,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+462,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+463,"top cache_dut uncached", false,-1);
        tracep->declBit(c+42,"top cache_dut uncachedOk", false,-1);
        tracep->declBit(c+464,"top cache_dut diffAddr", false,-1);
        tracep->declBit(c+465,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+43,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+45,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+46,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+47,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+48,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+50,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+52,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+53,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+890,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+891,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+892,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+893,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+54,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+55,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+945,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+946,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+466,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+219,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+227,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+894,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+896,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+467,"top cache_dut missEn", false,-1);
        tracep->declBit(c+468,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+56,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+235,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+58,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+469,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+470,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+478,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+947,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+909,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+948,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+947,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+203,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+819,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+479,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+480,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+949,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+730,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+453,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+481,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+461,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+953,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+947,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+909,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+948,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+947,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+207,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+819,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+482,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+480,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+949,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+731,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+457,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+483,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+461,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+953,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+947,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+909,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+948,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+947,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+211,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+819,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+484,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+485,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+949,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+732,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+453,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+486,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+462,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+953,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+947,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+909,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+948,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+947,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+215,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+819,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+487,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+485,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+949,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+733,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+457,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+488,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+462,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+953,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+909,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+909,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+909,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+909,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+910,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+912,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+819,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+820,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+430,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+33,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+706,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+145,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+332,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+708,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+722,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+1,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+877,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+916,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+914,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+332,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+333,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+922,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+915,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+923,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+924,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+705,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+878,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+706,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+708,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+709,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+925,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+957,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+922,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+958,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+959,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+59,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+734,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+2,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+5,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+960,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+916,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+915,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+332,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+333,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+819,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+820,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+341,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+354,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+685,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+375,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+355,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+357,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+489,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+491,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+961,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+962,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+819,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+820,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+685,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+492,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+495,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+819,"top ID_u clk", false,-1);
        tracep->declBit(c+820,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+355,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+407,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+413,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+357,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+414,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+416,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+417,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+693,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+691,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+358,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+360,"top ID_u src1sel", false,-1);
        tracep->declBus(c+361,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+362,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+365,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+364,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+363,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+366,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+367,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+368,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+826,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+369,"top ID_u DivEn", false,-1);
        tracep->declBus(c+370,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+373,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+371,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+372,"top ID_u out_trap_id", false,-1);
        tracep->declBit(c+431,"top ID_u fence_id", false,-1);
        tracep->declBus(c+498,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+358,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+693,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+691,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+355,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+357,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+367,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+368,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+498,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+360,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+361,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+362,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+365,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+364,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+363,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+366,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+369,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+370,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+373,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+371,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+372,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBit(c+431,"top ID_u decoder_u fence_id", false,-1);
        tracep->declBus(c+499,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+500,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+501,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+502,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+498,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+358,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+819,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+407,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+413,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+367,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+693,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+368,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+691,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+416,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+414,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+417,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+826,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+755+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+357,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+378,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBus(c+18,"top hazard_detect_u instr_ls_i", false,-1, 31,0);
        tracep->declBus(c+413,"top hazard_detect_u instr_wb_i", false,-1, 31,0);
        tracep->declBit(c+374,"top hazard_detect_u ld_use_hazard", false,-1);
        tracep->declBit(c+143,"top hazard_detect_u ld_csr_hazard", false,-1);
        tracep->declBit(c+503,"top hazard_detect_u wb_is_load", false,-1);
        tracep->declBit(c+60,"top hazard_detect_u ls_is_csropi", false,-1);
        tracep->declBit(c+819,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+820,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+686,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+403,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+355,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+357,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+358,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+691,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+693,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+362,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+365,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+364,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+363,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+360,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+361,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+366,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+367,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+368,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+369,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+370,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+373,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declBit(c+431,"top EX_reg_u fence_ex_reg_i", false,-1);
        tracep->declQuad(c+376,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+378,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+383,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+385,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+387,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+391,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+394,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+393,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+392,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+381,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+382,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+395,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+401,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+402,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+396,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+397,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+398,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declBit(c+432,"top EX_reg_u fence_ex_reg_o", false,-1);
        tracep->declQuad(c+504,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+506,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+507,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+508,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+509,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+510,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+511,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBit(c+512,"top EX_reg_u fence_ex_reg", false,-1);
        tracep->declBus(c+963,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+962,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+819,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+820,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+686,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+695,"top EX_reg_u ex_reg i_din", false,-1, 315,0);
        tracep->declArray(c+513,"top EX_reg_u ex_reg o_dout", false,-1, 315,0);
        tracep->declBus(c+391,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+385,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+383,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+387,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+376,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+378,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+394,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+393,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+392,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+381,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+382,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+399,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+400,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+16,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+414,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+396,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+397,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+379,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+344,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+389,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+343,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+717,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+404,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+405,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+716,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+523,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+525,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+527,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+389,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+391,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+523,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+525,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+396,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+397,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+379,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+529,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+530,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+531,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+533,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+534,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+536,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+538,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+538,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+539,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+540,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+541,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+543,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+544,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+545,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+547,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+549,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+551,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+523,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+534,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+533,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+536,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+543,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+530,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+544,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+553,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+540,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+538,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+539,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+533,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+538,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+554,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+523,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+555,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+539,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+538,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+541,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+556,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+558,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+560,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+562,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+564,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+566,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+568,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+523,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+525,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+397,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+551,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+527,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+389,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+394,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+393,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+392,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+570,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+387,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+376,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+344,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+343,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+571,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+573,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+964,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+575,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+576,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+577,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+578,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+580,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+582,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+819,"top forwarding_u clk", false,-1);
        tracep->declBit(c+820,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+401,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+402,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+61,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+416,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+19,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+417,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+414,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+718,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+399,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+400,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+10,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+10,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+62,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+63,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+147,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+583,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+148,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+149,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+584,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+150,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+819,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+820,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+376,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+389,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+378,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+379,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+395,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+398,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+718,"top L_S_reg_u stall_n", false,-1);
        tracep->declBit(c+34,"top L_S_reg_u flush_i", false,-1);
        tracep->declBit(c+432,"top L_S_reg_u fence_ls_reg_i", false,-1);
        tracep->declQuad(c+12,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+18,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+16,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+19,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+26,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBit(c+35,"top L_S_reg_u fence_ls_reg_o", false,-1);
        tracep->declArray(c+151,"top L_S_reg_u bundle", false,-1, 226,0);
        tracep->declBus(c+965,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+962,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+819,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+820,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+718,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+151,"top L_S_reg_u ls_reg i_din", false,-1, 226,0);
        tracep->declArray(c+64,"top L_S_reg_u ls_reg o_dout", false,-1, 226,0);
        tracep->declBit(c+819,"top ls_u clk", false,-1);
        tracep->declBit(c+820,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+409,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+413,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+411,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+418,"top ls_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+718,"top ls_u stall_n", false,-1);
        tracep->declBit(c+715,"top ls_u if_stall_n", false,-1);
        tracep->declQuad(c+886,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+719,"top ls_u ls_not_ok", false,-1);
        tracep->declBit(c+34,"top ls_u in_intr_ls", false,-1);
        tracep->declBit(c+143,"top ls_u ld_csr_hazard", false,-1);
        tracep->declQuad(c+407,"top ls_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+376,"top ls_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+355,"top ls_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+341,"top ls_u if_pc", false,-1, 63,0);
        tracep->declQuad(c+420,"top ls_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+913,"top ls_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+422,"top ls_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+191,"top ls_u clint_axi_arready", false,-1);
        tracep->declBus(c+423,"top ls_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+31,"top ls_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+192,"top ls_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+193,"top ls_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+424,"top ls_u clint_axi_rready", false,-1);
        tracep->declBus(c+194,"top ls_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+195,"top ls_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+913,"top ls_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+425,"top ls_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+197,"top ls_u clint_axi_awready", false,-1);
        tracep->declQuad(c+426,"top ls_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+198,"top ls_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+428,"top ls_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+199,"top ls_u clint_axi_wready", false,-1);
        tracep->declBus(c+192,"top ls_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+200,"top ls_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+429,"top ls_u clint_axi_bready", false,-1);
        tracep->declQuad(c+16,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+140,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+30,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+406,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+719,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+719,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+720,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u rden", false,-1);
        tracep->declBus(c+72,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+140,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+585,"top ls_u wren_last", false,-1);
        tracep->declQuad(c+586,"top ls_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+735,"top ls_u csr_stall_n", false,-1);
        tracep->declBit(c+73,"top ls_u timr_int", false,-1);
        tracep->declBit(c+819,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+820,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+72,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+140,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+409,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+585,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+886,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+719,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+140,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+30,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+406,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+719,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+719,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+720,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+720,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+74,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+75,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+588,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+589,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+590,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+591,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+592,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+406,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+736,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+737,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+738,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+30,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+76,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+77,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+78,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+79,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+18,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+413,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+411,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+418,"top ls_u ls_ctr_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+72,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+140,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+159,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+160,"top ls_u ls_ctr_u csr_st_en", false,-1);
        tracep->declBit(c+819,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+820,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+407,"top ls_u CSR_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+376,"top ls_u CSR_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+355,"top ls_u CSR_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+341,"top ls_u CSR_u if_pc", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+586,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+735,"top ls_u CSR_u stall_n", false,-1);
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
        tracep->declQuad(c+586,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+161,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+163,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+593,"top ls_u CSR_u wr_data", false,-1, 63,0);
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
        tracep->declBit(c+819,"top ls_u clint_u clk", false,-1);
        tracep->declBit(c+820,"top ls_u clint_u rst_n", false,-1);
        tracep->declQuad(c+420,"top ls_u clint_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+913,"top ls_u clint_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+422,"top ls_u clint_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+191,"top ls_u clint_u clint_axi_arready", false,-1);
        tracep->declBus(c+423,"top ls_u clint_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+31,"top ls_u clint_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+192,"top ls_u clint_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+193,"top ls_u clint_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+424,"top ls_u clint_u clint_axi_rready", false,-1);
        tracep->declBus(c+194,"top ls_u clint_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+195,"top ls_u clint_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+913,"top ls_u clint_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+425,"top ls_u clint_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+197,"top ls_u clint_u clint_axi_awready", false,-1);
        tracep->declQuad(c+426,"top ls_u clint_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+198,"top ls_u clint_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+428,"top ls_u clint_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+199,"top ls_u clint_u clint_axi_wready", false,-1);
        tracep->declBus(c+192,"top ls_u clint_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+200,"top ls_u clint_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+429,"top ls_u clint_u clint_axi_bready", false,-1);
        tracep->declBit(c+73,"top ls_u clint_u hart0_time_int_o", false,-1);
        tracep->declQuad(c+236,"top ls_u clint_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+197,"top ls_u clint_u axi_awready", false,-1);
        tracep->declBit(c+199,"top ls_u clint_u axi_wready", false,-1);
        tracep->declBus(c+238,"top ls_u clint_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+200,"top ls_u clint_u axi_bvalid", false,-1);
        tracep->declQuad(c+239,"top ls_u clint_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+191,"top ls_u clint_u axi_arready", false,-1);
        tracep->declBus(c+192,"top ls_u clint_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+193,"top ls_u clint_u axi_rvalid", false,-1);
        tracep->declBit(c+241,"top ls_u clint_u aw_en", false,-1);
        tracep->declQuad(c+31,"top ls_u clint_u reg_data_out", false,-1, 63,0);
        tracep->declQuad(c+106,"top ls_u clint_u mtime", false,-1, 63,0);
        tracep->declQuad(c+108,"top ls_u clint_u mtimecmp", false,-1, 63,0);
        tracep->declBit(c+595,"top ls_u clint_u mtimeWrEn", false,-1);
        tracep->declBit(c+596,"top ls_u clint_u mtimecmpWrEn", false,-1);
        tracep->declBit(c+597,"top ls_u clint_u slv_reg_wren", false,-1);
        tracep->declBit(c+311,"top ls_u clint_u slv_reg_rden", false,-1);
        tracep->declBus(c+110,"top ls_u clint_u byte_index", false,-1, 31,0);
        tracep->declBit(c+819,"top Dcache_u clk", false,-1);
        tracep->declBit(c+820,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+598,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+599,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+600,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+601,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+140,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+29,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+718,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+716,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+719,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+720,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBus(c+30,"top Dcache_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+406,"top Dcache_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+35,"top Dcache_u fence_clean", false,-1);
        tracep->declBit(c+433,"top Dcache_u clear_Icache", false,-1);
        tracep->declBit(c+434,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+36,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+335,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+714,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+602,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+898,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declBus(c+139,"top Dcache_u cacheRdSize_o", false,-1, 2,0);
        tracep->declQuad(c+712,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+723,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+440,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+435,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+303,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+335,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+441,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+442,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+913,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+940,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+941,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+942,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+943,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+944,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+966,"top Dcache_u clean", false,-1, 2,0);
        tracep->declBus(c+603,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+739,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+604,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+605,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+606,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+242,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+246,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+250,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+254,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+607,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+611,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+607,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+611,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+615,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+616,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+617,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+618,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+619,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+621,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+622,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+623,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+111,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+113,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+165,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+166,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+899,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+900,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+901,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+902,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+167,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+168,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+967,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+968,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+115,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+116,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+117,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+624,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+258,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+266,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+903,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+905,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+625,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+626,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+627,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+274,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+117,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+629,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+630,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+638,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+118,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+119,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+639,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+120,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+121,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+123,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+641,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+642,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+643,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+645,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+646,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+648,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+652,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+648,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+652,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+656,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+657,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+125,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+907,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+126,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+127,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+126,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+908,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+658,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+169,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+740,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+170,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+128,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+129,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+659,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+130,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBit(c+660,"top Dcache_u cleanEn", false,-1);
        tracep->declBit(c+433,"top Dcache_u clean_OK", false,-1);
        tracep->declBus(c+661,"top Dcache_u cleanCnt", false,-1, 6,0);
        tracep->declBit(c+132,"top Dcache_u cleanWrValid", false,-1);
        tracep->declBus(c+133,"top Dcache_u cleanWrAddr", false,-1, 31,0);
        tracep->declArray(c+312,"top Dcache_u cleanData", false,-1, 255,0);
        tracep->declBus(c+947,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+909,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+948,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+947,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+242,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+819,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+687,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+662,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+663,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+741,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+607,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+688,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+615,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+648,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+947,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+909,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+948,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+947,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+246,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+819,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+687,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+662,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+667,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+741,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+611,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+688,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+615,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+652,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+947,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+909,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+948,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+947,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+250,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+819,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+689,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+671,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+663,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+742,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+607,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+690,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+616,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+648,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+947,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+909,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+948,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+947,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+254,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+819,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+689,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+671,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+667,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+742,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+611,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+690,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+616,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+652,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+909,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+909,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+909,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+909,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+910,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+912,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+819,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+820,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+434,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+36,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+712,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+436,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+335,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+714,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+723,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+435,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+440,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+303,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+335,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+442,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+139,"top axi_ls_u loadSize", false,-1, 2,0);
        tracep->declBus(c+441,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+438,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+879,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+334,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+187,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+926,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+914,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+335,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+189,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+922,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+915,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+927,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+710,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+336,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+337,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+190,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+339,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+914,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+340,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+880,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+881,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+882,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+883,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+884,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+913,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+926,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+914,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+335,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+139,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+922,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+915,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+923,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+928,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+711,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+885,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+712,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+714,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+709,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+929,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+957,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+922,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+958,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+959,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+672,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+743,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+334,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+336,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+340,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+969,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+339,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+187,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+275,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+283,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+189,"top axi_ls_u wrSize_reg", false,-1, 2,0);
        tracep->declBus(c+284,"top axi_ls_u storeLenth_reg", false,-1, 7,0);
        tracep->declBus(c+134,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+957,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+922,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+958,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+959,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+135,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+744,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+6,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+9,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+960,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+926,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+915,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+970,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+942,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+285,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+819,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+820,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+886,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+19,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+718,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+407,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+413,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+409,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+411,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+417,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+418,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+971,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+962,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+819,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+820,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+718,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+745,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+673,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+407,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+413,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+409,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+411,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+418,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+416,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+414,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+819,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+820,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+374,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+343,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+371,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+372,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+346,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+717,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+719,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u in_intr_ls", false,-1);
        tracep->declBit(c+431,"top pipline_ctrl_u fence_id", false,-1);
        tracep->declBit(c+432,"top pipline_ctrl_u fence_ex", false,-1);
        tracep->declBit(c+35,"top pipline_ctrl_u fence_ls", false,-1);
        tracep->declBit(c+715,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+684,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+685,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+686,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+718,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+718,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+375,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+403,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u ls_flush", false,-1);
        tracep->declBit(c+683,"top pipline_ctrl_u fenceInPip", false,-1);
        tracep->declBus(c+972,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+972,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+325,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+180,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+819,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+820,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+177,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+913,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+329,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+176,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+300,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+184,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+330,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+183,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+186,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+185,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+331,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+323,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+913,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+322,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+171,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+174,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+173,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+172,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+328,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+286,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+176,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+183,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+186,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+185,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+288,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+171,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+174,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+173,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+172,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+973,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+974,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+290,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+292,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+294,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+296,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+320,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+321,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+975,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+977,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+298,"top lsAxiSlaveRam_u aw_en", false,-1);
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

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<8>/*255:0*/ __Vtemp268;
    VlWide<8>/*255:0*/ __Vtemp273;
    VlWide<8>/*255:0*/ __Vtemp278;
    VlWide<8>/*255:0*/ __Vtemp282;
    VlWide<4>/*127:0*/ __Vtemp283;
    VlWide<4>/*127:0*/ __Vtemp284;
    VlWide<3>/*95:0*/ __Vtemp285;
    VlWide<3>/*95:0*/ __Vtemp287;
    VlWide<3>/*95:0*/ __Vtemp288;
    VlWide<3>/*95:0*/ __Vtemp289;
    VlWide<3>/*95:0*/ __Vtemp290;
    VlWide<3>/*95:0*/ __Vtemp291;
    VlWide<3>/*95:0*/ __Vtemp294;
    VlWide<3>/*95:0*/ __Vtemp295;
    VlWide<3>/*95:0*/ __Vtemp296;
    VlWide<3>/*95:0*/ __Vtemp297;
    VlWide<3>/*95:0*/ __Vtemp298;
    VlWide<4>/*127:0*/ __Vtemp302;
    VlWide<4>/*127:0*/ __Vtemp309;
    VlWide<4>/*127:0*/ __Vtemp312;
    VlWide<4>/*127:0*/ __Vtemp319;
    VlWide<4>/*127:0*/ __Vtemp322;
    VlWide<4>/*127:0*/ __Vtemp331;
    VlWide<4>/*127:0*/ __Vtemp334;
    VlWide<4>/*127:0*/ __Vtemp343;
    VlWide<4>/*127:0*/ __Vtemp346;
    VlWide<4>/*127:0*/ __Vtemp356;
    VlWide<4>/*127:0*/ __Vtemp359;
    VlWide<4>/*127:0*/ __Vtemp369;
    VlWide<10>/*319:0*/ __Vtemp374;
    VlWide<4>/*127:0*/ __Vtemp375;
    VlWide<4>/*127:0*/ __Vtemp376;
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
                                     << 0x3dU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 3U)))),64);
        tracep->fullQData(oldp+14,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3dU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 3U)))),64);
        tracep->fullQData(oldp+16,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3dU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 3U)))),64);
        tracep->fullIData(oldp+18,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1dU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 3U))),32);
        tracep->fullBit(oldp+19,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 2U))));
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+26,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullBit(oldp+27,((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 3U)))));
        tracep->fullBit(oldp+28,((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 5U)))));
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out),64);
        tracep->fullBit(oldp+33,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__in_intr_ls));
        tracep->fullBit(oldp+35,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
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
        tracep->fullBit(oldp+60,(((0x73U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 3U))) 
                                  & (((1U == (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU))) 
                                      | (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU)))) 
                                     | (2U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xfU)))))));
        tracep->fullCData(oldp+61,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 0xaU))),5);
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+64,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),227);
        tracep->fullCData(oldp+72,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                          >> 0xfU))),3);
        tracep->fullBit(oldp+73,(vlSelf->top__DOT__ls_u__DOT__timr_int));
        tracep->fullBit(oldp+74,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 3U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xfU))))));
        tracep->fullBit(oldp+75,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 3U))) 
                                  & (4U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xfU))))));
        tracep->fullBit(oldp+76,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xfU))))));
        tracep->fullBit(oldp+77,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xfU))))));
        tracep->fullBit(oldp+78,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xfU))))));
        tracep->fullBit(oldp+79,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xfU))))));
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC),64);
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw));
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs));
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc));
        tracep->fullBit(oldp+85,((0x1cU == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 5U)))));
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullBit(oldp+91,(((0x304U == (0xfffU 
                                              & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                  << 9U) 
                                                 | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 0x17U)))) 
                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullBit(oldp+92,(((0x344U == (0xfffU 
                                              & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                  << 9U) 
                                                 | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 0x17U)))) 
                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullBit(oldp+95,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                >> 3U)))));
        tracep->fullQData(oldp+96,(((0x1cU == (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
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
        tracep->fullIData(oldp+133,(vlSelf->top__DOT__Dcache_u__DOT__cleanWrAddr),32);
        tracep->fullCData(oldp+134,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+135,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+136,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+137,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+138,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+139,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                      : 3U)),3);
        tracep->fullQData(oldp+140,((((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
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
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
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
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                 << 0x1dU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                   >> 3U)))))),64);
        tracep->fullIData(oldp+142,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullBit(oldp+143,((((3U == (0x7fU & 
                                            (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                             >> 1U))) 
                                    & ((0x73U == (0x7fU 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 3U))) 
                                       & (((1U == (7U 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 0xfU))) 
                                           | (3U == 
                                              (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xfU)))) 
                                          | (2U == 
                                             (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU)))))) 
                                   & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x12U))))));
        tracep->fullCData(oldp+144,((0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
        tracep->fullQData(oldp+145,((QData)((IData)(
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
        tracep->fullBit(oldp+147,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+148,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+149,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+150,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        if (vlSelf->top__DOT__in_intr_ls) {
            __Vtemp268[0U] = Vtop__ConstPool__CONST_d5724acc_0[0U];
            __Vtemp268[1U] = Vtop__ConstPool__CONST_d5724acc_0[1U];
            __Vtemp268[2U] = Vtop__ConstPool__CONST_d5724acc_0[2U];
            __Vtemp268[3U] = Vtop__ConstPool__CONST_d5724acc_0[3U];
            __Vtemp268[4U] = Vtop__ConstPool__CONST_d5724acc_0[4U];
            __Vtemp268[5U] = Vtop__ConstPool__CONST_d5724acc_0[5U];
            __Vtemp268[6U] = Vtop__ConstPool__CONST_d5724acc_0[6U];
            __Vtemp268[7U] = Vtop__ConstPool__CONST_d5724acc_0[7U];
        } else {
            __Vtemp268[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 3U) | ((4U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (3U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp268[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp268[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 3U));
            __Vtemp268[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp268[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp268[5U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp268[6U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp268[7U] = (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
        }
        tracep->fullWData(oldp+151,(__Vtemp268),227);
        tracep->fullBit(oldp+159,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x17U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+160,((((0x73U == (0x7fU 
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
                                                >> 0x17U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullQData(oldp+161,((vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                                     | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+163,(((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullBit(oldp+165,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+166,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+167,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+168,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+169,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        tracep->fullBit(oldp+170,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullBit(oldp+171,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+172,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+173,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+176,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+177,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg)),64);
        tracep->fullCData(oldp+179,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+180,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)))),3);
        tracep->fullCData(oldp+181,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+182,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 0xfU)),4);
        tracep->fullBit(oldp+183,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+184,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (0xffU 
                                              & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)))),8);
        tracep->fullBit(oldp+185,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+186,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+189,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
        tracep->fullCData(oldp+190,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+191,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready));
        tracep->fullCData(oldp+192,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp),2);
        tracep->fullBit(oldp+193,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+194,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                      : 0U)),3);
        tracep->fullQData(oldp+195,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+197,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready));
        tracep->fullCData(oldp+198,(vlSelf->top__DOT__clint_axi_wstrb),8);
        tracep->fullBit(oldp+199,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready));
        tracep->fullBit(oldp+200,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid));
        tracep->fullBit(oldp+201,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+202,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))));
        tracep->fullWData(oldp+203,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+207,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+211,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+215,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+219,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+227,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullIData(oldp+235,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr),64);
        tracep->fullCData(oldp+238,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr),64);
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en));
        tracep->fullWData(oldp+242,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+246,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+250,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+254,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+258,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+266,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullBit(oldp+274,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullWData(oldp+275,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+283,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+284,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
        tracep->fullCData(oldp+285,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+298,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullCData(oldp+299,((((0xaU != (0xfU 
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
        tracep->fullQData(oldp+300,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o)),64);
        tracep->fullBit(oldp+302,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))));
        VL_EXTEND_WQ(256,64, __Vtemp273, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp278[0U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U]);
            __Vtemp278[1U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U]);
            __Vtemp278[2U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U]);
            __Vtemp278[3U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U]);
            __Vtemp278[4U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U]);
            __Vtemp278[5U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U]);
            __Vtemp278[6U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U]);
            __Vtemp278[7U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U]);
        } else {
            __Vtemp278[0U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[0U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
            __Vtemp278[1U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[1U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
            __Vtemp278[2U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[2U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
            __Vtemp278[3U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[3U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
            __Vtemp278[4U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[4U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
            __Vtemp278[5U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[5U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
            __Vtemp278[6U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[6U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
            __Vtemp278[7U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[7U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
        }
        tracep->fullWData(oldp+303,(__Vtemp278),256);
        tracep->fullBit(oldp+311,((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))));
        if ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))) {
            __Vtemp282[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U];
            __Vtemp282[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U];
            __Vtemp282[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U];
            __Vtemp282[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U];
            __Vtemp282[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U];
            __Vtemp282[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U];
            __Vtemp282[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U];
            __Vtemp282[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U];
        } else {
            __Vtemp282[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U];
            __Vtemp282[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U];
            __Vtemp282[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U];
            __Vtemp282[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U];
            __Vtemp282[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U];
            __Vtemp282[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U];
            __Vtemp282[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U];
            __Vtemp282[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U];
        }
        tracep->fullWData(oldp+312,(__Vtemp282),256);
        tracep->fullBit(oldp+320,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+321,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        tracep->fullBit(oldp+322,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+323,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr)),64);
        tracep->fullCData(oldp+325,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)))),3);
        tracep->fullCData(oldp+326,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+327,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 2U)),4);
        tracep->fullBit(oldp+328,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))));
        tracep->fullBit(oldp+329,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+330,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+331,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullCData(oldp+332,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+333,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                              ? 0U : 3U))
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+334,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+335,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+336,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+340,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+343,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+344,(((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+346,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+349,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+351,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+352,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+353,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+354,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+355,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+357,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+358,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+361,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+362,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+363,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+365,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+366,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+367,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+368,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+369,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+370,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+371,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+372,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+373,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+374,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+375,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+376,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullIData(oldp+378,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1cU))),32);
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+381,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+382,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x11U))),2);
        tracep->fullQData(oldp+383,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+385,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+387,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+389,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+391,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x17U))),5);
        tracep->fullBit(oldp+392,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+393,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+394,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+395,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+396,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+397,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),3);
        tracep->fullBit(oldp+398,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullCData(oldp+399,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+400,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+401,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xbU))),5);
        tracep->fullCData(oldp+402,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 6U))),5);
        tracep->fullBit(oldp+403,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+404,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 4U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1cU))))));
        tracep->fullBit(oldp+405,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 2U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1eU))))));
        tracep->fullCData(oldp+406,(((((1U & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                              | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                       | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                      | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                     | (3U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld)))))),3);
        tracep->fullQData(oldp+407,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+409,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+411,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+413,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+416,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+417,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+418,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+420,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullBit(oldp+422,(vlSelf->top__DOT__clint_axi_arvalid));
        tracep->fullCData(oldp+423,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                      : 0U)),3);
        tracep->fullBit(oldp+424,(((2U == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+425,(vlSelf->top__DOT__clint_axi_awvalid));
        tracep->fullQData(oldp+426,(vlSelf->top__DOT__clint_axi_wdata),64);
        tracep->fullBit(oldp+428,(vlSelf->top__DOT__clint_axi_wvalid));
        tracep->fullBit(oldp+429,(vlSelf->top__DOT__clint_axi_bready));
        tracep->fullBit(oldp+430,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+431,(vlSelf->top__DOT__fence_id));
        tracep->fullBit(oldp+432,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+433,(vlSelf->top__DOT__Dcache_u__DOT__clean_OK));
        tracep->fullBit(oldp+434,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+435,(vlSelf->top__DOT__DcacheWrValid));
        tracep->fullQData(oldp+436,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+440,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+441,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullCData(oldp+442,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+445,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullBit(oldp+446,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+447,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+448,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))));
        tracep->fullIData(oldp+449,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+450,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+451,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+452,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        __Vtemp283[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp283[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp283[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp283[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+453,(__Vtemp283),128);
        __Vtemp284[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp284[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp284[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp284[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+457,(__Vtemp284),128);
        tracep->fullBit(oldp+461,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+462,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+463,(vlSelf->top__DOT__cache_dut__DOT__uncached));
        tracep->fullBit(oldp+464,(vlSelf->top__DOT__cache_dut__DOT__diffAddr));
        tracep->fullBit(oldp+465,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+466,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+467,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+468,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+469,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+470,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+478,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+479,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN));
        tracep->fullBit(oldp+480,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+481,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)))));
        tracep->fullBit(oldp+482,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+483,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+484,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN));
        tracep->fullBit(oldp+485,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+486,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)))));
        tracep->fullBit(oldp+487,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+488,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+489,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+491,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp285[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp285[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp285[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+492,(__Vtemp285),96);
        tracep->fullWData(oldp+495,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+498,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+499,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+500,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+501,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+502,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullBit(oldp+503,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U)))));
        tracep->fullQData(oldp+504,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+506,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+507,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+508,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+509,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+510,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+511,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullBit(oldp+512,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__fence_id))));
        tracep->fullWData(oldp+513,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),316);
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+525,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+527,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp287, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp288, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp289, __Vtemp287, __Vtemp288);
        VL_EXTEND_WI(65,1, __Vtemp290, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp291, __Vtemp289, __Vtemp290);
        tracep->fullBit(oldp+529,((1U & ((0x4000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp291[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+530,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+533,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+534,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+536,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+538,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+539,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullCData(oldp+540,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x17U))),3);
        tracep->fullQData(oldp+541,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp294, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp295, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp296, __Vtemp294, __Vtemp295);
        VL_EXTEND_WI(65,1, __Vtemp297, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp298, __Vtemp296, __Vtemp297);
        tracep->fullBit(oldp+543,((1U & __Vtemp298[2U])));
        tracep->fullBit(oldp+544,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+545,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+547,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+549,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+551,(((0x10U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+553,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x17U))),4);
        tracep->fullBit(oldp+554,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+555,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+556,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+558,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+560,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+562,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+564,(((0x8000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+566,(((0x8000000U & 
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
        tracep->fullQData(oldp+568,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+570,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 8U))),3);
        tracep->fullQData(oldp+571,(((((QData)((IData)(
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
        tracep->fullQData(oldp+573,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU))))),64);
        tracep->fullBit(oldp+575,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+576,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+577,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+578,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+580,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+582,((1U & ((0x400U & 
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
        tracep->fullBit(oldp+583,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+584,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+585,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullQData(oldp+586,(vlSelf->top__DOT__ls_u__DOT__csr_wr_data),64);
        tracep->fullBit(oldp+588,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
        tracep->fullBit(oldp+589,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
        tracep->fullBit(oldp+590,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
        tracep->fullBit(oldp+591,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
        tracep->fullBit(oldp+592,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
        tracep->fullQData(oldp+593,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullBit(oldp+595,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn));
        tracep->fullBit(oldp+596,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn));
        tracep->fullBit(oldp+597,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren));
        tracep->fullIData(oldp+598,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+599,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+600,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+601,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 4U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1cU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 2U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1eU)))))));
        tracep->fullIData(oldp+602,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+603,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+604,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+605,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+606,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp302, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp309[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp309[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp309[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp309[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp309[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp302[0U])
                               : 0U);
            __Vtemp309[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp302[1U])
                               : 0U);
            __Vtemp309[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp302[2U])
                               : 0U);
            __Vtemp309[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp302[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+607,(__Vtemp309),128);
        VL_EXTEND_WQ(128,64, __Vtemp312, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp319[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp319[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp319[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp319[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp319[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp312[0U])
                               : 0U);
            __Vtemp319[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp312[1U])
                               : 0U);
            __Vtemp319[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp312[2U])
                               : 0U);
            __Vtemp319[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp312[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+611,(__Vtemp319),128);
        tracep->fullBit(oldp+615,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+616,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+617,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+618,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+619,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+621,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+622,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+623,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+624,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+625,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+626,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+627,((((QData)((IData)(
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
        tracep->fullCData(oldp+629,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+630,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+638,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+639,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullBit(oldp+641,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+642,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+643,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+645,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+646,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp322, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp331[0U] = 0xffffffffU;
            __Vtemp331[1U] = 0xffffffffU;
            __Vtemp331[2U] = 0xffffffffU;
            __Vtemp331[3U] = 0xffffffffU;
        } else {
            __Vtemp331[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp322[0U])
                                   : 0U) : 0U);
            __Vtemp331[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp322[1U])
                                   : 0U) : 0U);
            __Vtemp331[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp322[2U])
                                   : 0U) : 0U);
            __Vtemp331[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp322[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+648,(__Vtemp331),128);
        VL_EXTEND_WQ(128,64, __Vtemp334, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp343[0U] = 0xffffffffU;
            __Vtemp343[1U] = 0xffffffffU;
            __Vtemp343[2U] = 0xffffffffU;
            __Vtemp343[3U] = 0xffffffffU;
        } else {
            __Vtemp343[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp334[0U])
                                   : 0U) : 0U);
            __Vtemp343[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp334[1U])
                                   : 0U) : 0U);
            __Vtemp343[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp334[2U])
                                   : 0U) : 0U);
            __Vtemp343[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp334[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+652,(__Vtemp343),128);
        tracep->fullBit(oldp+656,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+657,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+658,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullIData(oldp+659,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
        tracep->fullBit(oldp+660,((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullCData(oldp+661,(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt),7);
        tracep->fullBit(oldp+662,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        VL_EXTEND_WQ(128,64, __Vtemp346, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp356[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp346[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp356[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp346[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp356[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp346[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp356[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp346[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+663,(__Vtemp356),128);
        VL_EXTEND_WQ(128,64, __Vtemp359, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp369[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp359[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp369[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp359[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp369[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp359[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp369[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp359[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+667,(__Vtemp369),128);
        tracep->fullBit(oldp+671,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+672,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+673,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+683,((1U & ((IData)(vlSelf->top__DOT__fence_id) 
                                         | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullBit(oldp+684,((1U & (~ (((((((IData)(vlSelf->top__DOT__fence_id) 
                                                 | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                               | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+685,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+686,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+687,((1U & (~ ((((((((
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
        tracep->fullBit(oldp+688,((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                             & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                         & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                        | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                       | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                                   | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))));
        tracep->fullBit(oldp+689,((1U & (~ ((((((((
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
        tracep->fullBit(oldp+690,((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                             & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                         & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                        | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                       | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
                                   | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))));
        tracep->fullQData(oldp+691,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+693,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp374[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp374[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 4U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp374[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1cU));
        __Vtemp374[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp374[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1cU));
        __Vtemp374[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp374[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1cU));
        __Vtemp374[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 4U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1cU));
        __Vtemp374[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp374[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 4U);
        tracep->fullWData(oldp+695,(__Vtemp374),316);
        tracep->fullBit(oldp+705,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+706,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+708,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+709,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+710,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+711,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+712,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+714,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+715,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+716,(vlSelf->top__DOT__ls_addr_ok_i));
        tracep->fullBit(oldp+717,((1U & (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))));
        tracep->fullBit(oldp+718,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+719,(vlSelf->top__DOT__dataNotOk));
        tracep->fullQData(oldp+720,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+722,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+723,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+724,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+725,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+726,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+728,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+729,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+730,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__A),6);
        tracep->fullCData(oldp+731,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+732,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__A),6);
        tracep->fullCData(oldp+733,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+734,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullBit(oldp+735,(vlSelf->top__DOT__ls_u__DOT__csr_stall_n));
        tracep->fullCData(oldp+736,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+737,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+738,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullCData(oldp+739,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
        tracep->fullBit(oldp+740,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+741,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+742,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+743,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+744,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+745,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+755,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+757,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+759,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+761,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+763,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+765,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+767,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+769,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+771,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+773,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+775,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+777,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+779,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+781,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+783,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+785,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+787,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+789,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+791,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+793,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+795,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+797,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+799,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+801,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+803,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+805,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+807,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+809,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+811,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+813,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+815,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+817,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+819,(vlSelf->clk));
        tracep->fullBit(oldp+820,(vlSelf->rst_n));
        tracep->fullQData(oldp+821,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+823,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+825,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+826,(vlSelf->regA0),64);
        tracep->fullBit(oldp+828,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+829,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+830,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+831,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+833,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+834,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+835,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+836,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+837,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+838,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+839,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+840,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+841,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+842,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+843,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+844,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+845,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+846,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+848,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+849,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+850,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+851,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+852,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+853,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+855,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+856,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+857,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+858,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+859,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+860,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+861,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+862,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+863,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+864,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+865,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+866,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+867,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+869,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+870,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+871,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+872,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+873,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+874,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+875,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+876,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+877,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+878,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
        tracep->fullBit(oldp+879,(((0xaU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU))))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                    : ((2U == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)
                                        : (IData)(vlSelf->axi_aw_ready_i)))));
        tracep->fullBit(oldp+880,(((0xaU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU))))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                    : ((2U == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid)
                                        : (IData)(vlSelf->axi_b_valid_i)))));
        tracep->fullCData(oldp+881,(((0xaU == (0xfU 
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
        tracep->fullCData(oldp+882,(((0xaU == (0xfU 
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
        tracep->fullBit(oldp+883,((1U & ((0xaU == (0xfU 
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
        tracep->fullBit(oldp+884,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+885,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
        tracep->fullQData(oldp+886,(((((((((- (QData)((IData)(
                                                              ((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                    >> 3U))) 
                                                               & (0U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
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
                                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                      >> 3U))) 
                                                                 & (4U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
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
        tracep->fullCData(oldp+888,(((0xaU == (0xfU 
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
        tracep->fullBit(oldp+889,((1U & ((0xaU == (0xfU 
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
        tracep->fullBit(oldp+890,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+891,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+892,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+893,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+894,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+896,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+898,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? vlSelf->top__DOT__Dcache_u__DOT__cleanWrAddr
                                      : ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                          ? ((IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 3U)) 
                                             << 3U)
                                          : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                              ? ((vlSelf->top__DOT__Dcache_u__DOT__tagArray2
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
                                              : ((vlSelf->top__DOT__Dcache_u__DOT__tagArray1
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
                                                       << 5U))))))),32);
        tracep->fullBit(oldp+899,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+900,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+901,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+902,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+903,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+905,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+907,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
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
        tracep->fullIData(oldp+908,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullIData(oldp+909,(0x40U),32);
        tracep->fullIData(oldp+910,(4U),32);
        tracep->fullIData(oldp+911,(8U),32);
        tracep->fullIData(oldp+912,(1U),32);
        tracep->fullCData(oldp+913,(0U),3);
        tracep->fullBit(oldp+914,(0U));
        tracep->fullBit(oldp+915,(0U));
        tracep->fullCData(oldp+916,(0U),4);
        tracep->fullBit(oldp+917,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+918,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+919,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+920,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+921,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+922,(1U),2);
        tracep->fullCData(oldp+923,(2U),4);
        tracep->fullCData(oldp+924,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+925,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+926,(1U),4);
        tracep->fullCData(oldp+927,(0xfU),4);
        tracep->fullCData(oldp+928,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+929,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+930,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+932,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+933,(1U));
        tracep->fullBit(oldp+934,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+935,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullBit(oldp+936,(0U));
        tracep->fullQData(oldp+937,(0ULL),64);
        tracep->fullCData(oldp+939,(0U),8);
        tracep->fullCData(oldp+940,(1U),3);
        tracep->fullCData(oldp+941,(2U),3);
        tracep->fullCData(oldp+942,(3U),3);
        tracep->fullCData(oldp+943,(7U),3);
        tracep->fullCData(oldp+944,(6U),3);
        tracep->fullBit(oldp+945,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+946,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+947,(0x80U),32);
        tracep->fullIData(oldp+948,(6U),32);
        __Vtemp375[0U] = 0U;
        __Vtemp375[1U] = 0U;
        __Vtemp375[2U] = 0U;
        __Vtemp375[3U] = 0U;
        tracep->fullWData(oldp+949,(__Vtemp375),128);
        __Vtemp376[0U] = 0xffffffffU;
        __Vtemp376[1U] = 0xffffffffU;
        __Vtemp376[2U] = 0xffffffffU;
        __Vtemp376[3U] = 0xffffffffU;
        tracep->fullWData(oldp+953,(__Vtemp376),128);
        tracep->fullCData(oldp+957,(0U),2);
        tracep->fullCData(oldp+958,(3U),2);
        tracep->fullCData(oldp+959,(2U),2);
        tracep->fullIData(oldp+960,(3U),32);
        tracep->fullIData(oldp+961,(0x60U),32);
        tracep->fullIData(oldp+962,(0U),32);
        tracep->fullIData(oldp+963,(0x13cU),32);
        tracep->fullBit(oldp+964,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+965,(0xe3U),32);
        tracep->fullCData(oldp+966,(4U),3);
        tracep->fullBit(oldp+967,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+968,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+969,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullCData(oldp+970,(3U),8);
        tracep->fullIData(oldp+971,(0x121U),32);
        tracep->fullIData(oldp+972,(0x40U),32);
        tracep->fullIData(oldp+973,(3U),32);
        tracep->fullIData(oldp+974,(1U),32);
        tracep->fullQData(oldp+975,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+977,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
