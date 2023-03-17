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
        tracep->declBit(c+760,"clk", false,-1);
        tracep->declBit(c+761,"rst_n", false,-1);
        tracep->declQuad(c+762,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+764,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+766,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+767,"regA0", false,-1, 63,0);
        tracep->declBit(c+769,"stall_n_diff", false,-1);
        tracep->declBit(c+770,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+771,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+772,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+774,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+775,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+776,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+777,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+778,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+779,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+780,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+781,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+782,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+783,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+784,"axi_r_ready_o", false,-1);
        tracep->declBit(c+785,"axi_r_valid_i", false,-1);
        tracep->declBus(c+786,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+787,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+789,"axi_r_last_i", false,-1);
        tracep->declBus(c+790,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+791,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+792,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+793,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+794,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+796,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+797,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+798,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+799,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+800,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+801,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+802,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+803,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+804,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+805,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+806,"axi_w_ready_i", false,-1);
        tracep->declBit(c+807,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+808,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+810,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+811,"axi_w_last_o", false,-1);
        tracep->declBus(c+812,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+813,"axi_b_ready_o", false,-1);
        tracep->declBit(c+814,"axi_b_valid_i", false,-1);
        tracep->declBus(c+815,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+816,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+817,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+858,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+858,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+858,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+858,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+859,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+860,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+861,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+760,"top clk", false,-1);
        tracep->declBit(c+761,"top rst_n", false,-1);
        tracep->declQuad(c+762,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+764,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+766,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+767,"top regA0", false,-1, 63,0);
        tracep->declBit(c+769,"top stall_n_diff", false,-1);
        tracep->declBit(c+770,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+771,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+772,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+774,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+775,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+776,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+777,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+778,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+779,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+780,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+781,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+782,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+783,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+784,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+785,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+786,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+787,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+789,"top axi_r_last_i", false,-1);
        tracep->declBus(c+790,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+791,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+792,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+793,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+794,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+796,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+797,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+798,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+799,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+800,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+801,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+802,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+803,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+805,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+806,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+807,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+808,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+810,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+811,"top axi_w_last_o", false,-1);
        tracep->declBus(c+812,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+813,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+814,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+815,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+816,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+817,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+151,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+290,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+291,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+862,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+131,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+132,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+293,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+294,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+864,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+295,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+133,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+296,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+152,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+153,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+154,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+866,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+867,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+868,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+156,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+297,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+157,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+862,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+159,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+276,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+160,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+161,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+864,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+162,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+163,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+298,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+277,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+164,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+279,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+863,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+299,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+165,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+166,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+869,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+870,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top instr_fetching", false,-1);
        tracep->declBit(c+818,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+862,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+865,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+863,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+300,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+301,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+871,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+864,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+872,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+865,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+873,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+643,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+819,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+644,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+646,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+647,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+874,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+820,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+302,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+167,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+862,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+875,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+863,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+303,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+169,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+871,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+864,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+876,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+865,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+865,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+648,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+304,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+305,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+170,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+307,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+863,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+308,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+821,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+822,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+823,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+824,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+825,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+862,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+875,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+863,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+303,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+134,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+871,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+864,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+872,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+865,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+877,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+649,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+826,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+650,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+652,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+647,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+878,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+879,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+309,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+311,"top is_jump", false,-1);
        tracep->declQuad(c+312,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+827,"top pc_stall_n", false,-1);
        tracep->declBit(c+653,"top if_stall_n", false,-1);
        tracep->declBit(c+314,"top if_instr_valid", false,-1);
        tracep->declBit(c+881,"top sram_data_valid", false,-1);
        tracep->declQuad(c+315,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+317,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+882,"top sram_ren", false,-1);
        tracep->declBit(c+319,"top sram_addr_valid", false,-1);
        tracep->declBit(c+320,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+321,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+322,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+323,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+325,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+628,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+630,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+326,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+328,"top src1sel_id", false,-1);
        tracep->declBus(c+329,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+330,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+331,"top is_brc_id", false,-1);
        tracep->declBit(c+332,"top is_jal_id", false,-1);
        tracep->declBit(c+333,"top is_jalr_id", false,-1);
        tracep->declBit(c+334,"top wben_id", false,-1);
        tracep->declBus(c+335,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+336,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+827,"top id_stall_n", false,-1);
        tracep->declBit(c+337,"top DivEn_id", false,-1);
        tracep->declBus(c+338,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+339,"top in_trap_id", false,-1);
        tracep->declBit(c+340,"top out_trap_id", false,-1);
        tracep->declBit(c+341,"top trap_id", false,-1);
        tracep->declBit(c+342,"top ld_use_hazard", false,-1);
        tracep->declBit(c+343,"top id_flush", false,-1);
        tracep->declQuad(c+344,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+346,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+347,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+349,"top src1sel_ex", false,-1);
        tracep->declBus(c+350,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+351,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+353,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+355,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+357,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+359,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+360,"top is_brc_ex", false,-1);
        tracep->declBit(c+361,"top is_jal_ex", false,-1);
        tracep->declBit(c+362,"top is_jalr_ex", false,-1);
        tracep->declBit(c+363,"top wben_ex", false,-1);
        tracep->declBit(c+364,"top DivEn_ex", false,-1);
        tracep->declBus(c+365,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+366,"top trap_ex", false,-1);
        tracep->declBit(c+828,"top ex_stall_n", false,-1);
        tracep->declQuad(c+10,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+367,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+368,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+369,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+370,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+371,"top ex_flush", false,-1);
        tracep->declBit(c+372,"top rden_ls", false,-1);
        tracep->declBit(c+373,"top wren_ls", false,-1);
        tracep->declBit(c+654,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+655,"top ex_not_ok", false,-1);
        tracep->declQuad(c+12,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+18,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+829,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+19,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+26,"top trap_ls", false,-1);
        tracep->declBit(c+656,"top ls_stall_n", false,-1);
        tracep->declBit(c+657,"top ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+135,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+883,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+884,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+658,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+30,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+374,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+375,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+377,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+379,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+381,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+382,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+384,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+385,"top wben_wb", false,-1);
        tracep->declQuad(c+386,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+656,"top wb_stall_n", false,-1);
        tracep->declBit(c+388,"top rw_valid_i", false,-1);
        tracep->declBit(c+31,"top rw_ready_o", false,-1);
        tracep->declBus(c+300,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+646,"top rdLast_o", false,-1);
        tracep->declBus(c+137,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+644,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+660,"top dataValid_o", false,-1);
        tracep->declBit(c+885,"top ls_flush", false,-1);
        tracep->declBit(c+32,"top in_intr_ls", false,-1);
        tracep->declBit(c+831,"top dataNotOk", false,-1);
        tracep->declBit(c+389,"top DcacheRdValid", false,-1);
        tracep->declBit(c+390,"top DcacheWrValid", false,-1);
        tracep->declBit(c+33,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+303,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+652,"top lsRdLast", false,-1);
        tracep->declQuad(c+391,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+754,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+650,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+661,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+393,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+282,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+303,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+394,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+395,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+134,"top lsLoadSize", false,-1, 2,0);
        tracep->declBus(c+858,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+858,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+858,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+858,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+859,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+860,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+861,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+818,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+862,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+865,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+300,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+301,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+871,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+864,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+872,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+873,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+643,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+819,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+644,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+646,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+647,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+874,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+820,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+302,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+167,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+862,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+875,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+303,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+169,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+871,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+864,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+876,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+648,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+304,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+305,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+170,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+307,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+863,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+308,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+821,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+822,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+823,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+824,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+825,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+6,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+7,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+862,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+875,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+303,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+134,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+871,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+864,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+872,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+877,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+649,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+826,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+650,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+652,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+647,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+878,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+792,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+793,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+794,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+796,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+797,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+798,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+799,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+800,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+801,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+802,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+803,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+805,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+806,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+807,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+808,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+810,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+811,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+812,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+813,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+814,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+815,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+816,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+817,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+770,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+771,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+772,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+774,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+775,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+776,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+777,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+778,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+779,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+780,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+781,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+782,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+783,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+784,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+785,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+786,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+787,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+789,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+790,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+791,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+156,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+297,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+157,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+862,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+159,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+276,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+160,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+161,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+864,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+162,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+163,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+298,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+277,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+164,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+279,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+863,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+299,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+165,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+166,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+875,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+870,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+151,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+290,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+291,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+862,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+131,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+132,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+293,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+294,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+864,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+295,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+133,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+296,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+152,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+153,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+154,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+152,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+875,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+868,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+820,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+302,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+167,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+862,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+875,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+303,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+169,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+871,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+864,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+876,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+648,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+304,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+305,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+170,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+307,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+863,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+308,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+821,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+822,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+823,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+824,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+662,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+34,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+396,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+862,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+35,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+138,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+398,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+871,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+886,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+872,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+36,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+399,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+663,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+832,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+664,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+666,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+647,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+833,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+760,"top IF_u clk", false,-1);
        tracep->declBit(c+761,"top IF_u rst_n", false,-1);
        tracep->declBit(c+311,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+312,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+339,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+340,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+653,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+309,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+322,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+314,"top IF_u if_instr_valid", false,-1);
        tracep->declBit(c+32,"top IF_u in_intr_ls", false,-1);
        tracep->declQuad(c+315,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+881,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+320,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+321,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+317,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+882,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+319,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+317,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+760,"top cache_dut clk", false,-1);
        tracep->declBit(c+761,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+400,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+319,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+864,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+887,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+889,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+653,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+320,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+401,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+321,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+315,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+388,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+31,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+300,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+646,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+137,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+644,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+660,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+862,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+890,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+891,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+892,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+893,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+894,"top cache_dut unCacheOp", false,-1, 2,0);
        tracep->declBus(c+402,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+667,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+403,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+37,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+38,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+171,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+175,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+179,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+183,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+404,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+408,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+404,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+408,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+412,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+413,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+414,"top cache_dut uncached", false,-1);
        tracep->declBit(c+39,"top cache_dut uncachedOk", false,-1);
        tracep->declBit(c+415,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+40,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+42,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+43,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+44,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+45,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+47,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+49,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+50,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+834,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+835,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+836,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+837,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+51,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+52,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+895,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+896,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+416,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+187,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+195,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+838,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+840,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+417,"top cache_dut missEn", false,-1);
        tracep->declBit(c+418,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+53,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+203,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+55,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+419,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+420,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+428,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+897,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+858,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+898,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+897,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+171,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+760,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+429,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+430,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+899,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+668,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+404,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+431,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+412,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+903,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+897,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+858,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+898,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+897,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+175,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+760,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+429,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+430,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+899,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+668,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+408,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+431,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+412,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+903,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+897,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+858,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+898,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+897,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+179,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+760,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+432,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+433,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+899,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+669,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+404,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+434,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+413,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+903,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+897,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+858,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+898,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+897,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+183,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+760,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+432,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+433,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+899,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+669,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+408,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+434,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+413,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+903,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+858,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+858,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+858,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+858,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+859,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+860,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+861,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+760,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+761,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+388,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+31,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+644,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+139,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+300,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+646,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+660,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+1,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+818,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+862,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+865,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+300,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+301,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+871,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+864,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+872,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+873,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+643,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+819,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+644,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+646,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+647,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+874,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+907,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+871,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+908,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+909,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+56,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+670,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+2,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+5,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+910,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+865,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+864,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+300,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+301,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+760,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+761,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+309,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+322,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+827,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+343,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+323,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+325,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+435,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+437,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+911,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+912,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+760,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+761,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+827,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+438,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+441,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+760,"top ID_u clk", false,-1);
        tracep->declBit(c+761,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+323,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+375,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+381,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+325,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+382,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+384,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+385,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+630,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+628,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+326,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+328,"top ID_u src1sel", false,-1);
        tracep->declBus(c+329,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+330,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+333,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+332,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+331,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+334,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+335,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+336,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+767,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+337,"top ID_u DivEn", false,-1);
        tracep->declBus(c+338,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+341,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+339,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+340,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+444,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+326,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+630,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+628,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+323,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+325,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+335,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+336,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+444,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+328,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+329,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+330,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+333,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+332,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+331,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+334,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+337,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+338,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+341,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+339,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+340,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+445,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+446,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+447,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+448,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+444,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+326,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+760,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+375,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+381,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+335,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+630,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+336,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+628,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+384,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+382,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+385,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+767,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+689+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+325,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+346,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+342,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+760,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+761,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+828,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+371,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+323,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+325,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+326,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+628,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+630,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+330,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+333,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+332,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+331,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+328,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+329,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+334,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+335,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+336,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+337,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+338,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+341,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+344,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+346,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+351,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+353,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+355,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+359,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+362,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+361,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+360,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+349,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+350,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+363,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+369,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+370,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+364,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+365,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+366,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+449,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+451,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+452,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+453,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+454,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+455,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+456,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+913,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+912,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+760,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+761,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+828,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+632,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+457,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+359,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+353,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+351,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+355,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+344,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+346,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+362,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+361,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+360,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+349,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+350,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+367,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+368,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+16,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+382,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+364,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+365,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+347,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+312,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+357,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+311,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+655,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+372,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+373,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+654,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+467,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+469,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+471,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+357,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+359,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+467,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+469,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+364,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+365,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+347,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+473,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+474,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+475,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+477,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+478,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+480,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+482,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+482,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+483,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+484,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+485,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+487,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+488,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+489,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+491,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+493,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+495,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+467,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+478,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+477,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+480,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+487,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+474,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+488,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+497,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+484,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+482,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+483,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+477,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+482,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+498,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+467,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+499,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+483,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+482,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+485,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+500,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+502,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+504,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+506,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+508,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+510,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+512,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+467,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+469,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+365,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+495,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+471,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+357,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+362,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+361,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+360,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+514,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+355,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+344,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+312,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+311,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+515,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+517,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+914,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+519,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+520,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+521,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+522,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+524,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+526,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+760,"top forwarding_u clk", false,-1);
        tracep->declBit(c+761,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+369,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+370,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+57,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+384,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+19,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+385,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+382,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+656,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+367,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+368,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+10,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+10,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+58,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+59,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+141,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+527,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+142,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+143,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+528,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+144,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+760,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+761,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+344,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+357,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+346,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+347,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+363,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+366,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+656,"top L_S_reg_u stall_n", false,-1);
        tracep->declBit(c+885,"top L_S_reg_u flush_i", false,-1);
        tracep->declQuad(c+12,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+18,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+16,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+19,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+26,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declArray(c+529,"top L_S_reg_u bundle", false,-1, 225,0);
        tracep->declBus(c+915,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+912,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+760,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+761,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+656,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+529,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+60,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+760,"top ls_u clk", false,-1);
        tracep->declBit(c+761,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+377,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+381,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+379,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+656,"top ls_u stall_n", false,-1);
        tracep->declQuad(c+829,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+657,"top ls_u ls_not_ok", false,-1);
        tracep->declBit(c+32,"top ls_u in_intr_ls", false,-1);
        tracep->declQuad(c+16,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+135,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+30,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+374,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+831,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+831,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+658,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u rden", false,-1);
        tracep->declBus(c+68,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+135,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+537,"top ls_u wren_last", false,-1);
        tracep->declBit(c+69,"top ls_u timr_int", false,-1);
        tracep->declBit(c+760,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+761,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+68,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+135,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+377,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+537,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+829,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+657,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+135,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+30,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+374,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+831,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+831,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+658,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+658,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+70,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+71,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+538,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+539,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+540,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+541,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+542,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+374,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+671,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+672,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+673,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+30,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+72,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+73,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+74,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+75,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+18,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+381,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+379,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+68,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+135,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+145,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+760,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+761,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+656,"top ls_u CSR_u stall_n", false,-1);
        tracep->declBit(c+69,"top ls_u CSR_u timer_int_i", false,-1);
        tracep->declBit(c+32,"top ls_u CSR_u in_intr_ls", false,-1);
        tracep->declQuad(c+20,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+76,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+77,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+78,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+79,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+80,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+81,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+82,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+83,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+84,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declBit(c+85,"top ls_u CSR_u sel_mie", false,-1);
        tracep->declBit(c+86,"top ls_u CSR_u sel_mip", false,-1);
        tracep->declQuad(c+16,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+87,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+89,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+91,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+93,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declBit(c+95,"top ls_u CSR_u mstatus_MIE", false,-1);
        tracep->declQuad(c+96,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+98,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declQuad(c+100,"top ls_u CSR_u mie", false,-1, 63,0);
        tracep->declBit(c+102,"top ls_u CSR_u mie_MTIE", false,-1);
        tracep->declQuad(c+103,"top ls_u CSR_u mip", false,-1, 63,0);
        tracep->declBit(c+105,"top ls_u CSR_u mie_MTIP", false,-1);
        tracep->declBit(c+760,"top ls_u clint_u clk", false,-1);
        tracep->declBit(c+761,"top ls_u clint_u rst_n", false,-1);
        tracep->declQuad(c+916,"top ls_u clint_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+918,"top ls_u clint_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+919,"top ls_u clint_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+920,"top ls_u clint_u clint_axi_arready", false,-1);
        tracep->declBus(c+921,"top ls_u clint_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+842,"top ls_u clint_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+922,"top ls_u clint_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+923,"top ls_u clint_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+924,"top ls_u clint_u clint_axi_rready", false,-1);
        tracep->declBus(c+925,"top ls_u clint_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+926,"top ls_u clint_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+928,"top ls_u clint_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+929,"top ls_u clint_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+930,"top ls_u clint_u clint_axi_awready", false,-1);
        tracep->declQuad(c+931,"top ls_u clint_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+933,"top ls_u clint_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+934,"top ls_u clint_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+935,"top ls_u clint_u clint_axi_wready", false,-1);
        tracep->declBus(c+936,"top ls_u clint_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+937,"top ls_u clint_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+938,"top ls_u clint_u clint_axi_bready", false,-1);
        tracep->declBit(c+69,"top ls_u clint_u hart0_time_int_o", false,-1);
        tracep->declQuad(c+204,"top ls_u clint_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+206,"top ls_u clint_u axi_awready", false,-1);
        tracep->declBit(c+207,"top ls_u clint_u axi_wready", false,-1);
        tracep->declBus(c+208,"top ls_u clint_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+209,"top ls_u clint_u axi_bvalid", false,-1);
        tracep->declQuad(c+210,"top ls_u clint_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+212,"top ls_u clint_u axi_arready", false,-1);
        tracep->declBus(c+213,"top ls_u clint_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+214,"top ls_u clint_u axi_rvalid", false,-1);
        tracep->declBit(c+215,"top ls_u clint_u aw_en", false,-1);
        tracep->declQuad(c+842,"top ls_u clint_u reg_data_out", false,-1, 63,0);
        tracep->declQuad(c+106,"top ls_u clint_u mtime", false,-1, 63,0);
        tracep->declQuad(c+108,"top ls_u clint_u mtimecmp", false,-1, 63,0);
        tracep->declBit(c+216,"top ls_u clint_u mtimeWrEn", false,-1);
        tracep->declBit(c+217,"top ls_u clint_u mtimecmpWrEn", false,-1);
        tracep->declBit(c+218,"top ls_u clint_u slv_reg_wren", false,-1);
        tracep->declBit(c+219,"top ls_u clint_u slv_reg_rden", false,-1);
        tracep->declBus(c+110,"top ls_u clint_u byte_index", false,-1, 31,0);
        tracep->declBit(c+111,"top ls_u clint_u time_int_intern", false,-1);
        tracep->declBit(c+112,"top ls_u clint_u time_int_intern_0", false,-1);
        tracep->declBit(c+113,"top ls_u clint_u time_int_intern_1", false,-1);
        tracep->declBit(c+760,"top Dcache_u clk", false,-1);
        tracep->declBit(c+761,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+543,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+544,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+545,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+546,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+135,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+29,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+656,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+654,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+831,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+658,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBus(c+30,"top Dcache_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+374,"top Dcache_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+389,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+33,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+303,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+652,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+547,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+844,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declBus(c+134,"top Dcache_u cacheRdSize_o", false,-1, 2,0);
        tracep->declQuad(c+650,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+661,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+393,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+390,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+282,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+303,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+394,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+395,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+862,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+890,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+891,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+892,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+893,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+894,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+548,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+845,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+549,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+550,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+551,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+220,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+224,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+228,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+232,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+552,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+556,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+552,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+556,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+756,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+757,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+560,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+561,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+562,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+564,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+565,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+566,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+114,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+116,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+146,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+147,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+846,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+847,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+848,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+849,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+148,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+149,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+939,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+940,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+118,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+119,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+120,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+567,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+236,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+244,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+850,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+852,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+568,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+569,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+570,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+753,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+120,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+572,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+573,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+581,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+121,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+122,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+582,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+123,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+584,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+586,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+588,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+589,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+590,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+592,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+593,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+595,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+599,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+595,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+599,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+603,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+604,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+124,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+642,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+390,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+125,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+390,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+844,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+605,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+606,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+674,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+150,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+126,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+607,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+608,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+127,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBus(c+897,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+858,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+898,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+897,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+220,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+760,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+854,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+758,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+609,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+675,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+552,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+855,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+756,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+595,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+897,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+858,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+898,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+897,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+224,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+760,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+854,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+758,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+613,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+675,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+556,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+855,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+756,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+599,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+897,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+858,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+898,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+897,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+228,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+760,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+856,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+759,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+609,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+676,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+552,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+857,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+757,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+595,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+897,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+858,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+898,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+897,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+232,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+760,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+856,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+759,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+613,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+676,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+556,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+857,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+757,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+599,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+858,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+858,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+858,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+858,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+859,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+860,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+861,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+760,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+761,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+389,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+33,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+650,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+391,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+303,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+652,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+661,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+390,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+393,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+282,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+303,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+395,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+134,"top axi_ls_u loadSize", false,-1, 2,0);
        tracep->declBus(c+394,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+754,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+820,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+302,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+167,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+862,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+875,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+303,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+169,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+871,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+864,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+876,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+648,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+304,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+305,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+170,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+307,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+863,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+308,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+821,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+822,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+823,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+824,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+825,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+862,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+875,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+863,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+303,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+134,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+871,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+864,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+872,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+877,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+649,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+826,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+650,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+652,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+647,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+878,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+907,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+871,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+908,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+909,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+617,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+677,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+302,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+304,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+308,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+941,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+307,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+167,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+252,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+260,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+169,"top axi_ls_u wrSize_reg", false,-1, 2,0);
        tracep->declBus(c+261,"top axi_ls_u storeLenth_reg", false,-1, 7,0);
        tracep->declBus(c+129,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+907,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+871,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+908,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+909,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+130,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+678,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+6,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+9,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+910,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+875,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+864,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+942,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+892,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+262,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+760,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+761,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+829,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+19,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+656,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+375,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+381,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+377,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+379,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+385,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+386,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+943,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+912,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+760,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+761,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+656,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+679,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+618,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+375,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+381,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+377,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+379,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+386,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+384,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+382,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+760,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+761,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+342,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+311,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+339,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+340,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+314,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+655,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+657,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+885,"top pipline_ctrl_u in_intr_ls", false,-1);
        tracep->declBit(c+653,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+827,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+827,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+828,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+656,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+656,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+343,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+371,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBit(c+885,"top pipline_ctrl_u ls_flush", false,-1);
        tracep->declBus(c+944,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+944,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+293,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+160,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+760,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+761,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+157,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+862,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+297,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+156,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+277,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+164,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+298,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+163,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+166,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+165,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+299,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+291,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+862,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+290,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+151,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+154,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+153,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+152,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+296,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+263,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+156,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+163,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+166,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+165,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+265,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+151,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+154,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+153,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+152,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+945,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+946,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+267,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+269,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+271,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+273,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+280,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+281,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+947,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+949,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+275,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<8>/*255:0*/ __Vtemp258;
    VlWide<8>/*255:0*/ __Vtemp261;
    VlWide<4>/*127:0*/ __Vtemp262;
    VlWide<4>/*127:0*/ __Vtemp263;
    VlWide<3>/*95:0*/ __Vtemp264;
    VlWide<3>/*95:0*/ __Vtemp266;
    VlWide<3>/*95:0*/ __Vtemp267;
    VlWide<3>/*95:0*/ __Vtemp268;
    VlWide<3>/*95:0*/ __Vtemp269;
    VlWide<3>/*95:0*/ __Vtemp270;
    VlWide<3>/*95:0*/ __Vtemp273;
    VlWide<3>/*95:0*/ __Vtemp274;
    VlWide<3>/*95:0*/ __Vtemp275;
    VlWide<3>/*95:0*/ __Vtemp276;
    VlWide<3>/*95:0*/ __Vtemp277;
    VlWide<8>/*255:0*/ __Vtemp283;
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
        tracep->fullBit(oldp+31,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__in_intr_ls));
        tracep->fullBit(oldp+33,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullCData(oldp+35,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U)),4);
        tracep->fullCData(oldp+36,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                     : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))),4);
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__cache_dut__DOT__uncachedOk));
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+42,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+43,((0x3fU & (IData)(
                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                     >> 5U)))),6);
        tracep->fullIData(oldp+44,((0x1fffffU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))),21);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+49,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullBit(oldp+50,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullIData(oldp+51,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullIData(oldp+52,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullQData(oldp+53,((((QData)((IData)(
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
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullCData(oldp+57,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))),5);
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+60,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+68,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                          >> 0xeU))),3);
        tracep->fullBit(oldp+69,(((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__time_int_intern_0) 
                                  & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__time_int_intern_1)))));
        tracep->fullBit(oldp+70,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+71,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (4U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+72,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+73,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+74,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+75,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+76,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+77,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+78,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+79,((0x1cU == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 4U)))));
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullBit(oldp+85,(((0x304U == (0xfffU 
                                              & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                  << 0xaU) 
                                                 | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 0x16U)))) 
                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullBit(oldp+86,(((0x344U == (0xfffU 
                                              & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                  << 0xaU) 
                                                 | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 0x16U)))) 
                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullQData(oldp+87,(((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U))) 
                                    | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+89,(((~ (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                              >> 2U)))) 
                                    & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullBit(oldp+95,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                >> 3U)))));
        tracep->fullQData(oldp+96,(((0x1cU == (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))
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
        tracep->fullBit(oldp+111,((vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                                   >= vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp)));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__time_int_intern_0));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__time_int_intern_1));
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+118,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullIData(oldp+119,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [0x23U]),21);
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+123,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
        tracep->fullCData(oldp+129,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+130,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+131,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                          ? 0U : 1U)
                                      : 0U)),4);
        tracep->fullCData(oldp+132,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (0xffU & ((0U 
                                                   != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                    ? 0U
                                                    : 3U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                    ? 0U
                                                    : 3U)))
                                      : 0U)),8);
        tracep->fullCData(oldp+133,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (0xfU & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                                  : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o)))
                                      : 0U)),4);
        tracep->fullCData(oldp+134,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                      : 3U)),3);
        tracep->fullQData(oldp+135,((((0U == (0x1fU 
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
                                      : (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                               >> 2U))))),64);
        tracep->fullIData(oldp+137,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
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
        tracep->fullBit(oldp+145,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+146,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+147,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+148,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+149,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+150,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullBit(oldp+151,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+152,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+153,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+157,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullCData(oldp+159,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 1U : 0U)),4);
        tracep->fullCData(oldp+160,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                      : 0U)),3);
        tracep->fullCData(oldp+161,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 1U : 0U)),2);
        tracep->fullCData(oldp+162,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 0xfU : 0U)),4);
        tracep->fullBit(oldp+163,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+164,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o))
                                      : 0U)),8);
        tracep->fullBit(oldp+165,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+166,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+169,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
        tracep->fullCData(oldp+170,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullWData(oldp+171,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+175,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+179,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+183,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+187,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+195,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullIData(oldp+203,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr),64);
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready));
        tracep->fullBit(oldp+207,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready));
        tracep->fullCData(oldp+208,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+209,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid));
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr),64);
        tracep->fullBit(oldp+212,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready));
        tracep->fullCData(oldp+213,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp),2);
        tracep->fullBit(oldp+214,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid));
        tracep->fullBit(oldp+215,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en));
        tracep->fullBit(oldp+216,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn));
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn));
        tracep->fullBit(oldp+218,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren));
        tracep->fullBit(oldp+219,((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_arvalid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))));
        tracep->fullWData(oldp+220,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+224,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+228,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+232,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+236,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+244,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullWData(oldp+252,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+260,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+261,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
        tracep->fullCData(oldp+262,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+275,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullCData(oldp+276,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                          ? 0U : 3U)
                                      : 0U)),8);
        tracep->fullQData(oldp+277,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__ls_axi_w_data_o
                                      : 0ULL)),64);
        tracep->fullBit(oldp+279,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast))
                                    : 0U)));
        tracep->fullBit(oldp+280,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+281,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        VL_EXTEND_WQ(256,64, __Vtemp258, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp261[0U] = __Vtemp258[0U];
            __Vtemp261[1U] = __Vtemp258[1U];
            __Vtemp261[2U] = __Vtemp258[2U];
            __Vtemp261[3U] = __Vtemp258[3U];
            __Vtemp261[4U] = __Vtemp258[4U];
            __Vtemp261[5U] = __Vtemp258[5U];
            __Vtemp261[6U] = __Vtemp258[6U];
            __Vtemp261[7U] = __Vtemp258[7U];
        } else {
            __Vtemp261[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]);
            __Vtemp261[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]);
            __Vtemp261[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]);
            __Vtemp261[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]);
            __Vtemp261[4U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]);
            __Vtemp261[5U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]);
            __Vtemp261[6U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]);
            __Vtemp261[7U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]);
        }
        tracep->fullWData(oldp+282,(__Vtemp261),256);
        tracep->fullBit(oldp+290,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+291,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullCData(oldp+293,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                      : 0U)),3);
        tracep->fullCData(oldp+294,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? 1U : 0U)),2);
        tracep->fullCData(oldp+295,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? 2U : 0U)),4);
        tracep->fullBit(oldp+296,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+297,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+298,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+299,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullCData(oldp+300,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+301,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                              ? 0U : 3U))
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+302,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+303,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+304,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+307,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+308,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+311,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+312,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+314,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+319,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+320,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+321,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+322,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+323,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+325,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+328,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+329,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+330,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+331,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+332,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+335,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+336,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+338,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+340,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+341,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+342,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+343,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+344,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+346,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+349,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+350,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+351,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+353,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+355,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+357,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+359,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+360,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+361,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+362,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+363,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+364,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+365,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+366,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullCData(oldp+367,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+368,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+369,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+370,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+371,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+372,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+373,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullCData(oldp+374,(((((1U & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                              | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                       | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                      | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                     | (3U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld)))))),3);
        tracep->fullQData(oldp+375,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+377,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+379,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+381,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+382,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+384,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+385,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+386,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+388,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+389,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+390,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullQData(oldp+391,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullBit(oldp+393,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+394,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullCData(oldp+395,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+398,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullBit(oldp+399,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullIData(oldp+400,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+401,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+402,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+403,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        __Vtemp262[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp262[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp262[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp262[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+404,(__Vtemp262),128);
        __Vtemp263[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp263[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp263[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp263[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+408,(__Vtemp263),128);
        tracep->fullBit(oldp+412,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+413,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+414,(vlSelf->top__DOT__cache_dut__DOT__uncached));
        tracep->fullBit(oldp+415,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+416,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+417,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+418,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+419,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+420,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+428,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+429,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+430,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+431,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+432,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+433,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+434,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+435,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+437,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp264[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp264[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp264[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+438,(__Vtemp264),96);
        tracep->fullWData(oldp+441,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+444,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+445,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+446,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+447,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+448,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+449,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+451,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+452,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+453,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+454,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+455,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+456,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+457,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+467,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+469,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+471,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp266, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp267, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp268, __Vtemp266, __Vtemp267);
        VL_EXTEND_WI(65,1, __Vtemp269, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp270, __Vtemp268, __Vtemp269);
        tracep->fullBit(oldp+473,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp270[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+474,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+475,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+477,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+480,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+482,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+483,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+484,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+485,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp273, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp274, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp275, __Vtemp273, __Vtemp274);
        VL_EXTEND_WI(65,1, __Vtemp276, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp277, __Vtemp275, __Vtemp276);
        tracep->fullBit(oldp+487,((1U & __Vtemp277[2U])));
        tracep->fullBit(oldp+488,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+489,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+491,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+493,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+495,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+497,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+498,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+499,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+500,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+504,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+506,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+508,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+510,(((0x4000000U & 
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
        tracep->fullQData(oldp+512,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+514,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+515,(((((QData)((IData)(
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
        tracep->fullQData(oldp+517,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+519,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+520,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+521,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+522,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+524,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+526,((1U & ((0x200U & 
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
        tracep->fullBit(oldp+527,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+528,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        if (vlSelf->top__DOT__pipline_ctrl_u__DOT__in_intr_ls) {
            __Vtemp283[0U] = Vtop__ConstPool__CONST_1e22d3d3_0[0U];
            __Vtemp283[1U] = Vtop__ConstPool__CONST_1e22d3d3_0[1U];
            __Vtemp283[2U] = Vtop__ConstPool__CONST_1e22d3d3_0[2U];
            __Vtemp283[3U] = Vtop__ConstPool__CONST_1e22d3d3_0[3U];
            __Vtemp283[4U] = Vtop__ConstPool__CONST_1e22d3d3_0[4U];
            __Vtemp283[5U] = Vtop__ConstPool__CONST_1e22d3d3_0[5U];
            __Vtemp283[6U] = Vtop__ConstPool__CONST_1e22d3d3_0[6U];
            __Vtemp283[7U] = Vtop__ConstPool__CONST_1e22d3d3_0[7U];
        } else {
            __Vtemp283[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp283[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1eU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 2U));
            __Vtemp283[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1eU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 2U));
            __Vtemp283[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1eU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 2U));
            __Vtemp283[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1eU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x7cU 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp283[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp283[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp283[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
        }
        tracep->fullWData(oldp+529,(__Vtemp283),226);
        tracep->fullBit(oldp+537,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+538,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
        tracep->fullBit(oldp+539,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
        tracep->fullBit(oldp+540,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
        tracep->fullBit(oldp+541,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
        tracep->fullBit(oldp+542,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
        tracep->fullIData(oldp+543,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+544,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+545,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+546,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullIData(oldp+547,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+548,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+549,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+550,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+551,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
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
        tracep->fullWData(oldp+552,(__Vtemp293),128);
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
        tracep->fullWData(oldp+556,(__Vtemp303),128);
        tracep->fullBit(oldp+560,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+561,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+562,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+564,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+565,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+566,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+567,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+568,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+569,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+570,((((QData)((IData)(
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
        tracep->fullCData(oldp+572,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+573,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+581,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+582,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullQData(oldp+584,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+586,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+588,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+589,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+590,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+592,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+593,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
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
        tracep->fullWData(oldp+595,(__Vtemp315),128);
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
        tracep->fullWData(oldp+599,(__Vtemp327),128);
        tracep->fullBit(oldp+603,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+604,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+605,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+606,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        tracep->fullBit(oldp+607,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullIData(oldp+608,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
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
        tracep->fullWData(oldp+609,(__Vtemp340),128);
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
        tracep->fullWData(oldp+613,(__Vtemp353),128);
        tracep->fullCData(oldp+617,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+618,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+628,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+630,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
        tracep->fullWData(oldp+632,(__Vtemp358),315);
        tracep->fullBit(oldp+642,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
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
        tracep->fullBit(oldp+643,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+644,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+646,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+647,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+648,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+649,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+650,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+652,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+653,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+654,(vlSelf->top__DOT__ls_addr_ok_i));
        tracep->fullBit(oldp+655,((1U & (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))));
        tracep->fullBit(oldp+656,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+657,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullQData(oldp+658,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+660,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+661,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+662,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+663,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+664,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+666,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+667,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+668,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+669,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+670,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullCData(oldp+671,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+672,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+673,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+674,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+675,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+676,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+677,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+678,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+679,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+689,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+691,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+693,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+695,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+697,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+699,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+701,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+703,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+705,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+707,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+709,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+711,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+713,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+715,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+717,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+719,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+721,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+723,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+725,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+727,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+729,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+731,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+733,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+735,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+737,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+739,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+741,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+743,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+745,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+747,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+749,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+751,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+753,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullQData(oldp+754,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+756,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+757,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+758,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        tracep->fullBit(oldp+759,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullBit(oldp+760,(vlSelf->clk));
        tracep->fullBit(oldp+761,(vlSelf->rst_n));
        tracep->fullQData(oldp+762,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+764,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+766,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+767,(vlSelf->regA0),64);
        tracep->fullBit(oldp+769,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+770,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+771,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+772,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+774,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+775,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+776,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+777,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+778,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+779,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+780,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+781,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+782,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+783,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+784,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+785,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+786,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+787,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+789,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+790,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+791,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+792,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+793,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+794,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+796,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+797,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+798,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+799,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+800,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+801,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+802,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+803,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+804,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+805,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+806,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+807,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+808,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+810,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+811,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+812,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+813,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+814,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+815,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+816,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+817,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+818,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+819,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+820,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+821,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+822,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+823,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 1U : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+824,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+825,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+826,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullBit(oldp+827,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+828,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullQData(oldp+829,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+831,((((((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullCData(oldp+832,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+833,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullBit(oldp+834,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+835,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+836,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+837,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+838,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+840,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+842,(((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                       & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_arvalid)) 
                                      & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))
                                      ? ((0x4000U == 
                                          (0xffffU 
                                           & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr)))
                                          ? vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime
                                          : ((0xbff8U 
                                              == (0xffffU 
                                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr)))
                                              ? vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp
                                              : 0ULL))
                                      : 0ULL)),64);
        tracep->fullIData(oldp+844,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullCData(oldp+845,(((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullBit(oldp+846,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+847,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+848,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+849,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+850,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+852,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+854,((1U & (~ ((((((((0U 
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
        tracep->fullBit(oldp+855,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
        tracep->fullBit(oldp+856,((1U & (~ ((((((((0U 
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
        tracep->fullBit(oldp+857,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
        tracep->fullIData(oldp+858,(0x40U),32);
        tracep->fullIData(oldp+859,(4U),32);
        tracep->fullIData(oldp+860,(8U),32);
        tracep->fullIData(oldp+861,(1U),32);
        tracep->fullCData(oldp+862,(0U),3);
        tracep->fullBit(oldp+863,(0U));
        tracep->fullBit(oldp+864,(0U));
        tracep->fullCData(oldp+865,(0U),4);
        tracep->fullBit(oldp+866,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+867,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+868,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+869,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+870,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+871,(1U),2);
        tracep->fullCData(oldp+872,(2U),4);
        tracep->fullCData(oldp+873,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+874,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+875,(1U),4);
        tracep->fullCData(oldp+876,(0xfU),4);
        tracep->fullCData(oldp+877,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+878,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+879,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+881,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+882,(1U));
        tracep->fullBit(oldp+883,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+884,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullBit(oldp+885,(vlSelf->top__DOT__pipline_ctrl_u__DOT__in_intr_ls));
        tracep->fullBit(oldp+886,(0U));
        tracep->fullQData(oldp+887,(0ULL),64);
        tracep->fullCData(oldp+889,(0U),8);
        tracep->fullCData(oldp+890,(1U),3);
        tracep->fullCData(oldp+891,(2U),3);
        tracep->fullCData(oldp+892,(3U),3);
        tracep->fullCData(oldp+893,(7U),3);
        tracep->fullCData(oldp+894,(6U),3);
        tracep->fullBit(oldp+895,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+896,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+897,(0x80U),32);
        tracep->fullIData(oldp+898,(6U),32);
        __Vtemp359[0U] = 0U;
        __Vtemp359[1U] = 0U;
        __Vtemp359[2U] = 0U;
        __Vtemp359[3U] = 0U;
        tracep->fullWData(oldp+899,(__Vtemp359),128);
        __Vtemp360[0U] = 0xffffffffU;
        __Vtemp360[1U] = 0xffffffffU;
        __Vtemp360[2U] = 0xffffffffU;
        __Vtemp360[3U] = 0xffffffffU;
        tracep->fullWData(oldp+903,(__Vtemp360),128);
        tracep->fullCData(oldp+907,(0U),2);
        tracep->fullCData(oldp+908,(3U),2);
        tracep->fullCData(oldp+909,(2U),2);
        tracep->fullIData(oldp+910,(3U),32);
        tracep->fullIData(oldp+911,(0x60U),32);
        tracep->fullIData(oldp+912,(0U),32);
        tracep->fullIData(oldp+913,(0x13bU),32);
        tracep->fullBit(oldp+914,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+915,(0xe2U),32);
        tracep->fullQData(oldp+916,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_araddr),64);
        tracep->fullCData(oldp+918,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_arprot),3);
        tracep->fullBit(oldp+919,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_arvalid));
        tracep->fullBit(oldp+920,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_arready));
        tracep->fullCData(oldp+921,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_arsize),3);
        tracep->fullCData(oldp+922,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_rresp),2);
        tracep->fullBit(oldp+923,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_rvalid));
        tracep->fullBit(oldp+924,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_rready));
        tracep->fullCData(oldp+925,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_awsize),3);
        tracep->fullQData(oldp+926,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_awaddr),64);
        tracep->fullCData(oldp+928,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_awprot),3);
        tracep->fullBit(oldp+929,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_awvalid));
        tracep->fullBit(oldp+930,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_awready));
        tracep->fullQData(oldp+931,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_wdata),64);
        tracep->fullCData(oldp+933,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_wstrb),8);
        tracep->fullBit(oldp+934,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_wvalid));
        tracep->fullBit(oldp+935,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_wready));
        tracep->fullCData(oldp+936,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_bresp),2);
        tracep->fullBit(oldp+937,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_bvalid));
        tracep->fullBit(oldp+938,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__clint_axi_bready));
        tracep->fullBit(oldp+939,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+940,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+941,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullCData(oldp+942,(3U),8);
        tracep->fullIData(oldp+943,(0x121U),32);
        tracep->fullIData(oldp+944,(0x40U),32);
        tracep->fullIData(oldp+945,(3U),32);
        tracep->fullIData(oldp+946,(1U),32);
        tracep->fullQData(oldp+947,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+949,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
