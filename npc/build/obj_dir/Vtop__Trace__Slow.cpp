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
        tracep->declBit(c+658,"clk", false,-1);
        tracep->declBit(c+659,"rst_n", false,-1);
        tracep->declQuad(c+660,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+662,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+664,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+665,"regA0", false,-1, 63,0);
        tracep->declBit(c+667,"stall_n_diff", false,-1);
        tracep->declBit(c+668,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+669,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+670,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+672,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+673,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+674,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+675,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+676,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+677,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+678,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+679,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+680,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+681,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+682,"axi_r_ready_o", false,-1);
        tracep->declBit(c+683,"axi_r_valid_i", false,-1);
        tracep->declBus(c+684,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+685,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+687,"axi_r_last_i", false,-1);
        tracep->declBus(c+688,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+689,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+690,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+691,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+692,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+694,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+695,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+696,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+697,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+698,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+699,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+700,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+701,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+702,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+703,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+704,"axi_w_ready_i", false,-1);
        tracep->declBit(c+705,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+706,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+708,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+709,"axi_w_last_o", false,-1);
        tracep->declBus(c+710,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+711,"axi_b_ready_o", false,-1);
        tracep->declBit(c+712,"axi_b_valid_i", false,-1);
        tracep->declBus(c+713,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+714,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+715,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+716,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+717,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+718,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+720,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+721,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+722,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+723,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+724,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+725,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+726,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+727,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+728,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+729,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+730,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+731,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+732,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+733,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+735,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+736,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+737,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+738,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+739,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+740,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+742,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+743,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+744,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+745,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+746,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+747,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+748,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+749,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+750,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+751,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+752,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+753,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+754,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+756,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+757,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+758,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+759,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+760,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+761,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+762,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+763,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+805,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+806,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+807,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+808,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+658,"top clk", false,-1);
        tracep->declBit(c+659,"top rst_n", false,-1);
        tracep->declQuad(c+660,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+662,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+664,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+665,"top regA0", false,-1, 63,0);
        tracep->declBit(c+667,"top stall_n_diff", false,-1);
        tracep->declBit(c+668,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+669,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+670,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+672,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+673,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+674,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+675,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+676,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+677,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+678,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+679,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+680,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+681,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+682,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+683,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+684,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+685,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+687,"top axi_r_last_i", false,-1);
        tracep->declBus(c+688,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+689,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+690,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+691,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+692,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+694,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+695,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+696,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+697,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+698,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+699,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+700,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+701,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+702,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+703,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+704,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+705,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+706,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+708,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+709,"top axi_w_last_o", false,-1);
        tracep->declBus(c+710,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+711,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+712,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+713,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+714,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+715,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+716,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+717,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+718,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+720,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+721,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+722,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+723,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+724,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+725,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+726,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+727,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+728,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+729,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+730,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+731,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+732,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+733,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+735,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+736,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+737,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+738,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+739,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+740,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+742,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+743,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+744,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+745,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+746,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+747,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+748,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+749,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+750,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+751,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+752,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+753,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+754,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+756,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+757,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+758,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+759,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+760,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+761,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+762,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+763,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+2,"top instr_fetching", false,-1);
        tracep->declBit(c+764,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+3,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+4,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+809,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+810,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+811,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+812,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+813,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+814,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+815,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+816,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+810,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+817,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+211,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+765,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+212,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+214,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+215,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+818,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+766,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+232,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+136,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+809,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+819,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+811,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+7,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+614,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+814,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+815,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+820,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+810,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+810,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+216,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+233,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+234,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+615,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+236,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+811,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+237,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+767,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+768,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+769,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+770,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+771,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+8,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+9,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+809,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+819,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+811,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+812,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+813,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+814,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+815,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+816,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+810,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+821,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+11,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+217,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+772,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+218,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+220,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+215,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+822,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+823,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+238,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+240,"top is_jump", false,-1);
        tracep->declQuad(c+241,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+515,"top pc_stall_n", false,-1);
        tracep->declBit(c+616,"top if_stall_n", false,-1);
        tracep->declBit(c+243,"top if_instr_valid", false,-1);
        tracep->declBit(c+825,"top sram_data_valid", false,-1);
        tracep->declQuad(c+244,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+246,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+826,"top sram_ren", false,-1);
        tracep->declBit(c+248,"top sram_addr_valid", false,-1);
        tracep->declBit(c+122,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+123,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+249,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+250,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+252,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+501,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+503,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+253,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+255,"top src1sel_id", false,-1);
        tracep->declBus(c+256,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+257,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+258,"top is_brc_id", false,-1);
        tracep->declBit(c+259,"top is_jal_id", false,-1);
        tracep->declBit(c+260,"top is_jalr_id", false,-1);
        tracep->declBit(c+261,"top wben_id", false,-1);
        tracep->declBus(c+262,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+263,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+515,"top id_stall_n", false,-1);
        tracep->declBit(c+264,"top DivEn_id", false,-1);
        tracep->declBus(c+265,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+266,"top in_trap_id", false,-1);
        tracep->declBit(c+267,"top out_trap_id", false,-1);
        tracep->declBit(c+268,"top trap_id", false,-1);
        tracep->declBit(c+269,"top ld_use_hazard", false,-1);
        tracep->declBit(c+270,"top id_flush", false,-1);
        tracep->declQuad(c+271,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+273,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+274,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+276,"top src1sel_ex", false,-1);
        tracep->declBus(c+277,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+278,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+280,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+282,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+284,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+286,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+287,"top is_brc_ex", false,-1);
        tracep->declBit(c+288,"top is_jal_ex", false,-1);
        tracep->declBit(c+289,"top is_jalr_ex", false,-1);
        tracep->declBit(c+290,"top wben_ex", false,-1);
        tracep->declBit(c+291,"top DivEn_ex", false,-1);
        tracep->declBus(c+292,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+293,"top trap_ex", false,-1);
        tracep->declBit(c+516,"top ex_stall_n", false,-1);
        tracep->declQuad(c+12,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+294,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+295,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+296,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+297,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+298,"top ex_flush", false,-1);
        tracep->declBit(c+299,"top rden_ls", false,-1);
        tracep->declBit(c+300,"top wren_ls", false,-1);
        tracep->declBit(c+617,"top ls_addr_ok_i", false,-1);
        tracep->declQuad(c+14,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+18,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+20,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+773,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+21,"top wben_ls", false,-1);
        tracep->declQuad(c+22,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+26,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+28,"top trap_ls", false,-1);
        tracep->declBit(c+618,"top ls_stall_n", false,-1);
        tracep->declBit(c+619,"top ls_not_ok", false,-1);
        tracep->declQuad(c+18,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+29,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+30,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+124,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+31,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+827,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+828,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+620,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+32,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+813,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+301,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+303,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+305,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+307,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+308,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+310,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+311,"top wben_wb", false,-1);
        tracep->declQuad(c+312,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+618,"top wb_stall_n", false,-1);
        tracep->declBit(c+314,"top rw_valid_i", false,-1);
        tracep->declBit(c+33,"top rw_ready_o", false,-1);
        tracep->declBus(c+829,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+214,"top rdLast_o", false,-1);
        tracep->declBus(c+34,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+212,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+221,"top dataValid_o", false,-1);
        tracep->declBit(c+775,"top dataNotOk", false,-1);
        tracep->declBit(c+622,"top DcacheRdValid", false,-1);
        tracep->declBit(c+315,"top DcacheWrValid", false,-1);
        tracep->declBit(c+35,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+830,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+220,"top lsRdLast", false,-1);
        tracep->declQuad(c+316,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+623,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+218,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+222,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+318,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+776,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+625,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+517,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+614,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+805,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+806,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+807,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+808,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+2,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+764,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+3,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+4,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+812,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+813,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+815,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+816,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+817,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+6,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+211,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+765,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+212,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+214,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+215,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+766,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+232,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+136,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+819,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+7,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+614,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+815,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+820,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+216,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+233,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+234,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+615,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+236,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+811,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+237,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+767,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+768,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+769,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+770,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+771,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+8,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+9,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+819,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+812,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+813,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+815,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+816,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+821,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+11,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+217,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+772,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+218,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+220,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+215,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+690,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+691,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+692,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+694,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+695,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+696,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+697,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+698,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+699,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+700,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+701,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+702,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+703,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+704,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+705,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+706,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+708,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+709,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+710,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+711,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+712,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+713,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+714,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+715,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+668,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+669,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+670,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+672,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+673,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+674,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+675,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+676,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+677,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+678,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+679,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+680,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+681,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+682,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+683,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+684,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+685,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+687,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+688,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+689,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+738,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+739,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+740,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+742,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+743,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+744,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+745,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+746,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+747,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+748,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+749,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+750,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+751,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+752,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+753,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+754,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+756,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+757,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+758,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+759,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+760,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+761,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+762,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+763,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+716,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+717,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+718,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+720,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+721,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+722,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+723,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+724,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+725,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+726,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+727,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+728,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+729,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+730,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+731,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+732,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+733,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+735,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+736,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+737,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+766,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+232,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+136,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+819,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+7,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+614,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+815,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+820,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+216,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+233,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+234,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+615,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+236,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+811,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+237,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+767,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+768,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+769,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+770,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+223,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+36,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+37,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+39,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+812,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+813,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+831,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+816,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+40,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+41,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+224,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+784,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+225,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+227,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+215,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+785,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+658,"top IF_u clk", false,-1);
        tracep->declBit(c+659,"top IF_u rst_n", false,-1);
        tracep->declBit(c+240,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+241,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+26,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+266,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+267,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+616,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+238,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+249,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+243,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+244,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+825,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+122,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+123,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+246,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+826,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+248,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+246,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+658,"top cache_dut clk", false,-1);
        tracep->declBit(c+659,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+319,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+248,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+815,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+832,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+834,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+616,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+122,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+126,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+123,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+244,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+314,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+33,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+829,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+214,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+34,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+212,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+221,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+809,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+835,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+836,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+813,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+837,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+320,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+228,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+42,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+43,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+44,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+138,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+142,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+146,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+150,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+321,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+325,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+321,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+325,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+329,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+330,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+331,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+45,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+47,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+48,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+49,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+50,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+52,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+54,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+55,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+786,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+787,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+788,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+789,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+56,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+57,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+838,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+839,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+332,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+154,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+162,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+790,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+792,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+333,"top cache_dut missEn", false,-1);
        tracep->declBit(c+334,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+58,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+60,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+335,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+336,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+344,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+840,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+138,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+658,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+345,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+346,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+842,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+626,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+321,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+347,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+329,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+846,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+840,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+142,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+658,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+345,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+346,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+842,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+626,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+325,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+347,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+329,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+846,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+840,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+146,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+658,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+348,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+349,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+842,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+627,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+321,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+350,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+330,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+846,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+840,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+150,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+658,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+348,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+349,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+842,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+627,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+325,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+350,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+330,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+846,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+805,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+806,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+807,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+808,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+658,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+659,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+314,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+33,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+212,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+61,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+829,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+214,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+221,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+764,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+3,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+4,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+812,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+813,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+815,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+816,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+817,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+211,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+765,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+212,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+214,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+215,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+850,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+814,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+851,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+852,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+63,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+229,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+3,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+6,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+4,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+853,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+810,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+815,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+812,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+813,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+658,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+659,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+238,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+249,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+515,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+270,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+250,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+252,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+351,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+353,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+854,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+855,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+658,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+659,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+515,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+354,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+357,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+658,"top ID_u clk", false,-1);
        tracep->declBit(c+659,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+250,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+301,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+307,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+252,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+308,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+310,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+311,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+503,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+501,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+253,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+255,"top ID_u src1sel", false,-1);
        tracep->declBus(c+256,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+257,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+260,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+259,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+258,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+261,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+262,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+263,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+665,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+264,"top ID_u DivEn", false,-1);
        tracep->declBus(c+265,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+268,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+266,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+267,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+360,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+253,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+503,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+501,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+250,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+252,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+262,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+263,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+360,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+255,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+256,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+257,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+260,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+259,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+258,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+261,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+264,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+265,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+268,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+266,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+267,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+361,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+362,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+363,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+364,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+360,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+253,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+658,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+301,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+307,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+262,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+503,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+263,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+501,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+310,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+308,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+311,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+665,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+549+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+252,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+273,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+269,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+658,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+659,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+516,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+298,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+250,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+252,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+253,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+501,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+503,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+257,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+260,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+259,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+258,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+255,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+256,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+261,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+262,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+263,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+264,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+265,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+268,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+271,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+273,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+278,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+280,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+282,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+286,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+289,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+288,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+287,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+276,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+277,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+290,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+296,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+297,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+291,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+292,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+293,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+365,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+367,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+368,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+369,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+370,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+371,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+372,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+856,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+855,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+658,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+659,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+516,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+505,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+373,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+286,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+280,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+278,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+282,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+271,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+273,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+289,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+288,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+287,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+276,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+277,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+294,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+295,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+18,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+308,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+291,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+292,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+274,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+241,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+284,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+240,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+628,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+299,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+300,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+617,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+383,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+385,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+387,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+284,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+286,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+383,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+385,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+291,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+292,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+274,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+389,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+390,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+391,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+393,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+394,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+396,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+398,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+398,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+399,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+400,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+401,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+403,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+404,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+405,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+407,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+409,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+411,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+383,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+394,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+393,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+396,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+403,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+390,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+404,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+413,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+400,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+398,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+399,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+393,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+398,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+414,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+383,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+415,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+399,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+398,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+401,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+416,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+418,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+420,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+422,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+424,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+426,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+428,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+383,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+385,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+292,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+411,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+387,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+284,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+289,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+288,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+287,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+430,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+282,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+271,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+241,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+240,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+431,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+433,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+857,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+435,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+436,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+437,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+438,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+440,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+442,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+658,"top forwarding_u clk", false,-1);
        tracep->declBit(c+659,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+296,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+297,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+64,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+310,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+21,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+311,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+308,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+618,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+294,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+295,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+12,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+12,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+65,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+66,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+127,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+443,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+128,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+129,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+444,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+130,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+658,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+659,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+271,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+284,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+273,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+274,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+290,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+293,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+618,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+14,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+16,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+20,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+18,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+21,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+28,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+858,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+855,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+658,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+659,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+618,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+445,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+67,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+658,"top ls_u clk", false,-1);
        tracep->declBit(c+659,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+14,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+18,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+20,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+303,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+307,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+305,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+773,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+26,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+619,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+18,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+29,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+30,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+124,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+31,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+32,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+813,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+775,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+775,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+620,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+30,"top ls_u wren", false,-1);
        tracep->declBit(c+29,"top ls_u rden", false,-1);
        tracep->declBus(c+75,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+124,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+453,"top ls_u wren_last", false,-1);
        tracep->declBit(c+658,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+659,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+30,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+29,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+75,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+124,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+18,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+303,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+453,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+773,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+619,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+18,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+29,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+30,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+124,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+31,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+32,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+813,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+775,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+775,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+620,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+620,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+76,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+77,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+78,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+79,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+80,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+81,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+82,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+813,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+629,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+630,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+631,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+32,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+31,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+83,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+84,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+85,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+86,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+20,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+307,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+305,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+30,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+29,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+75,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+124,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+131,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+658,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+659,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+14,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+20,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+18,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+22,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+26,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+87,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+88,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+89,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+90,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+91,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+92,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+93,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+94,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+95,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+18,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+96,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+98,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+100,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+26,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+102,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+104,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+106,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+658,"top Dcache_u clk", false,-1);
        tracep->declBit(c+659,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+454,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+455,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+108,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+456,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+124,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+31,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+618,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+617,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+632,"top Dcache_u data_ok_o", false,-1);
        tracep->declBit(c+775,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+620,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+622,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+35,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+830,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+220,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+457,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+794,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declQuad(c+218,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+222,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+318,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+315,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+776,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+625,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+517,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+614,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+809,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+835,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+836,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+813,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+837,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+859,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+633,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+795,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+634,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+458,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+459,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+170,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+174,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+178,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+182,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+518,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+522,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+518,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+522,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+635,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+636,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+637,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+638,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+460,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+462,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+463,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+464,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+109,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+111,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+132,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+133,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+796,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+797,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+798,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+799,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+134,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+135,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+860,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+861,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+113,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBit(c+114,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+639,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+186,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+194,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+800,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+802,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+640,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+641,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+465,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+613,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+114,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+467,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+468,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+642,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+115,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+116,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+476,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+117,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+478,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+480,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+482,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+483,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+484,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+486,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+487,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+526,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+530,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+526,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+530,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+534,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+535,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+118,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+804,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+315,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+119,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+315,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+794,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+643,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+536,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+489,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBus(c+840,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+170,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+658,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+537,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+644,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+538,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+645,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+518,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+542,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+635,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+526,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+840,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+174,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+658,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+537,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+644,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+543,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+645,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+522,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+542,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+635,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+530,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+840,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+178,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+658,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+547,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+646,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+538,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+647,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+518,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+548,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+636,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+526,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+840,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+182,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+658,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+547,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+646,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+543,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+647,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+522,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+548,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+636,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+530,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+805,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+806,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+807,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+808,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+658,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+659,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+622,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+35,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+218,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+316,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+830,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+220,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+222,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+315,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+318,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+776,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+625,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+614,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+517,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+623,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+766,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+232,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+136,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+819,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+7,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+614,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+815,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+820,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+216,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+233,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+234,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+615,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+236,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+811,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+237,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+767,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+768,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+769,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+770,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+771,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+8,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+9,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+819,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+812,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+813,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+815,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+816,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+821,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+11,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+217,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+772,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+218,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+220,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+215,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+850,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+814,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+851,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+852,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+490,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+230,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+232,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+233,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+237,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+862,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+236,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+136,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+202,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+120,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+7,"top axi_ls_u lenthReg", false,-1, 7,0);
        tracep->declBus(c+850,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+814,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+851,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+852,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+121,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+231,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+8,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+11,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+9,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+853,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+819,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+815,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+812,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+813,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+210,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+658,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+659,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+14,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+20,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+18,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+773,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+21,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+22,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+618,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+301,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+307,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+303,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+305,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+311,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+312,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+863,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+855,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+658,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+659,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+618,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+648,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+491,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+301,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+307,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+303,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+305,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+312,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+310,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+308,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+658,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+659,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+269,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+240,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+266,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+267,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+243,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+619,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+616,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+515,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+515,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+516,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+618,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+618,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+270,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+298,"top pipline_ctrl_u ex_flush", false,-1);
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

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp256;
    VlWide<4>/*127:0*/ __Vtemp257;
    VlWide<3>/*95:0*/ __Vtemp258;
    VlWide<3>/*95:0*/ __Vtemp260;
    VlWide<3>/*95:0*/ __Vtemp261;
    VlWide<3>/*95:0*/ __Vtemp262;
    VlWide<3>/*95:0*/ __Vtemp263;
    VlWide<3>/*95:0*/ __Vtemp264;
    VlWide<3>/*95:0*/ __Vtemp267;
    VlWide<3>/*95:0*/ __Vtemp268;
    VlWide<3>/*95:0*/ __Vtemp269;
    VlWide<3>/*95:0*/ __Vtemp270;
    VlWide<3>/*95:0*/ __Vtemp271;
    VlWide<8>/*255:0*/ __Vtemp276;
    VlWide<10>/*319:0*/ __Vtemp281;
    VlWide<4>/*127:0*/ __Vtemp284;
    VlWide<4>/*127:0*/ __Vtemp291;
    VlWide<4>/*127:0*/ __Vtemp294;
    VlWide<4>/*127:0*/ __Vtemp301;
    VlWide<4>/*127:0*/ __Vtemp304;
    VlWide<4>/*127:0*/ __Vtemp313;
    VlWide<4>/*127:0*/ __Vtemp316;
    VlWide<4>/*127:0*/ __Vtemp325;
    VlWide<4>/*127:0*/ __Vtemp328;
    VlWide<4>/*127:0*/ __Vtemp338;
    VlWide<4>/*127:0*/ __Vtemp341;
    VlWide<4>/*127:0*/ __Vtemp351;
    VlWide<8>/*255:0*/ __Vtemp352;
    VlWide<8>/*255:0*/ __Vtemp355;
    VlWide<4>/*127:0*/ __Vtemp356;
    VlWide<4>/*127:0*/ __Vtemp357;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullBit(oldp+2,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+3,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+6,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__axi_ls_u__DOT__lenthReg),8);
        tracep->fullBit(oldp+8,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
        tracep->fullBit(oldp+11,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+14,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+16,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+18,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullIData(oldp+20,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1eU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U))),32);
        tracep->fullBit(oldp+21,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+28,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+29,((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))));
        tracep->fullBit(oldp+30,((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))));
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+33,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullIData(oldp+34,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                              >> 0xbU)) 
                                     << 0xbU) | (0x7e0U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U)) 
                                                    << 5U)))),32);
        tracep->fullBit(oldp+35,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+39,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U)),4);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+47,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+48,((0x3fU & (IData)(
                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                     >> 5U)))),6);
        tracep->fullIData(oldp+49,((0x1fffffU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))),21);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+54,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullBit(oldp+55,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullIData(oldp+56,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullIData(oldp+57,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullQData(oldp+58,((((QData)((IData)(
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
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullQData(oldp+61,((QData)((IData)(
                                                   (((IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 0xbU)) 
                                                     << 0xbU) 
                                                    | (0x7e0U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                   >> 5U)) 
                                                          << 5U)))))),64);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullCData(oldp+64,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))),5);
        tracep->fullBit(oldp+65,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+67,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+75,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                          >> 0xeU))),3);
        tracep->fullBit(oldp+76,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+77,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (4U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+78,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+79,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (5U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+80,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+81,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (6U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+82,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+83,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+84,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+85,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+86,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+87,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+88,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+89,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+90,((0x1cU == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 4U)))));
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+96,(((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U))) 
                                    | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+98,(((~ (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                              >> 2U)))) 
                                    & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+104,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullBit(oldp+108,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+113,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+117,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullCData(oldp+120,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullBit(oldp+122,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+123,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullQData(oldp+124,((((0U == (0x1fU 
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
        tracep->fullBit(oldp+126,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullBit(oldp+127,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+128,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+129,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+130,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+131,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+132,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+133,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+134,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+135,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullWData(oldp+138,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+142,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+146,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+150,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+154,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+162,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullWData(oldp+170,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+174,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+178,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+182,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+186,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+194,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullWData(oldp+202,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+210,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullBit(oldp+211,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+212,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+214,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+215,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+216,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+217,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+218,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+220,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+221,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+222,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+227,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+228,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+229,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullCData(oldp+230,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+231,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullBit(oldp+232,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+233,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+237,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+241,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+248,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+249,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+250,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+252,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+256,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+257,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+262,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+263,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+265,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+267,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+268,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+269,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+271,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+273,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+276,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+277,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+278,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+280,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+282,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+286,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+287,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+288,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+289,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+290,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+291,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+292,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+293,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullCData(oldp+294,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+295,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+296,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+297,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+298,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+299,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+300,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullQData(oldp+301,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+303,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+305,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+307,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+310,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+311,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+312,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+314,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+315,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullBit(oldp+318,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullIData(oldp+319,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullCData(oldp+320,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        __Vtemp256[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp256[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp256[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp256[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+321,(__Vtemp256),128);
        __Vtemp257[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp257[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp257[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp257[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+325,(__Vtemp257),128);
        tracep->fullBit(oldp+329,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+330,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+331,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+332,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+333,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+334,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+335,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+336,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+344,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+345,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+346,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+347,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+349,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+350,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+351,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+353,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp258[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp258[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp258[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+354,(__Vtemp258),96);
        tracep->fullWData(oldp+357,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+360,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+361,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+362,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+363,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+364,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+365,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+367,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+368,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+369,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+370,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+371,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+372,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+373,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+385,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+387,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp260, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp261, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp262, __Vtemp260, __Vtemp261);
        VL_EXTEND_WI(65,1, __Vtemp263, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp264, __Vtemp262, __Vtemp263);
        tracep->fullBit(oldp+389,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp264[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+390,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+391,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+393,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+398,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+399,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+400,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+401,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp267, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp268, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp269, __Vtemp267, __Vtemp268);
        VL_EXTEND_WI(65,1, __Vtemp270, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp271, __Vtemp269, __Vtemp270);
        tracep->fullBit(oldp+403,((1U & __Vtemp271[2U])));
        tracep->fullBit(oldp+404,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+405,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+407,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+409,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+411,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+413,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+414,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+415,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+420,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+422,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+424,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+426,(((0x4000000U & 
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
        tracep->fullQData(oldp+428,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+430,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+431,(((((QData)((IData)(
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
        tracep->fullQData(oldp+433,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+435,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+436,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+437,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+440,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+442,((1U & ((0x200U & 
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
        tracep->fullBit(oldp+443,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+444,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        __Vtemp276[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xeU)) 
                                     | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp276[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__alures_ex 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp276[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                             << 2U));
        __Vtemp276[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp276[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp276[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp276[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp276[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+445,(__Vtemp276),226);
        tracep->fullBit(oldp+453,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullIData(oldp+454,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+455,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+456,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullIData(oldp+457,((((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullBit(oldp+458,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+459,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        tracep->fullQData(oldp+460,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+462,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+463,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+464,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+465,((((QData)((IData)(
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
        tracep->fullCData(oldp+467,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+468,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullQData(oldp+476,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+480,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+482,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+483,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+484,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+486,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+487,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        tracep->fullBit(oldp+489,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+490,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+491,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+501,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+503,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp281[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp281[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp281[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp281[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp281[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp281[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp281[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp281[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp281[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp281[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+505,(__Vtemp281),315);
        tracep->fullBit(oldp+515,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+516,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullCData(oldp+517,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        VL_EXTEND_WQ(128,64, __Vtemp284, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp291[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp291[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp291[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp291[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp291[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp284[0U])
                               : 0U);
            __Vtemp291[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp284[1U])
                               : 0U);
            __Vtemp291[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp284[2U])
                               : 0U);
            __Vtemp291[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp284[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+518,(__Vtemp291),128);
        VL_EXTEND_WQ(128,64, __Vtemp294, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp301[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp301[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp301[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp301[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp301[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp294[0U])
                               : 0U);
            __Vtemp301[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp294[1U])
                               : 0U);
            __Vtemp301[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp294[2U])
                               : 0U);
            __Vtemp301[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp294[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+522,(__Vtemp301),128);
        VL_EXTEND_WQ(128,64, __Vtemp304, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp313[0U] = 0xffffffffU;
            __Vtemp313[1U] = 0xffffffffU;
            __Vtemp313[2U] = 0xffffffffU;
            __Vtemp313[3U] = 0xffffffffU;
        } else {
            __Vtemp313[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp304[0U])
                                   : 0U) : 0U);
            __Vtemp313[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp304[1U])
                                   : 0U) : 0U);
            __Vtemp313[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp304[2U])
                                   : 0U) : 0U);
            __Vtemp313[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp304[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+526,(__Vtemp313),128);
        VL_EXTEND_WQ(128,64, __Vtemp316, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp325[0U] = 0xffffffffU;
            __Vtemp325[1U] = 0xffffffffU;
            __Vtemp325[2U] = 0xffffffffU;
            __Vtemp325[3U] = 0xffffffffU;
        } else {
            __Vtemp325[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp316[0U])
                                   : 0U) : 0U);
            __Vtemp325[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp316[1U])
                                   : 0U) : 0U);
            __Vtemp325[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp316[2U])
                                   : 0U) : 0U);
            __Vtemp325[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp316[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+530,(__Vtemp325),128);
        tracep->fullBit(oldp+534,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+535,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+536,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                              >> 0x20U)))));
        tracep->fullBit(oldp+537,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))));
        VL_EXTEND_WQ(128,64, __Vtemp328, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp338[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp328[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp338[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp328[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp338[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp328[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp338[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp328[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+538,(__Vtemp338),128);
        tracep->fullBit(oldp+542,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
        VL_EXTEND_WQ(128,64, __Vtemp341, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp351[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp341[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp351[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp341[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp351[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp341[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp351[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp341[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+543,(__Vtemp351),128);
        tracep->fullBit(oldp+547,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
        tracep->fullBit(oldp+548,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
        tracep->fullQData(oldp+549,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+551,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+553,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+555,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+557,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+561,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+563,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+565,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+567,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+569,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+571,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+573,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+575,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+577,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+579,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+581,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+583,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+585,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+587,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+589,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+591,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+593,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+595,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+597,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+599,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+601,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+603,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+605,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+607,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+609,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+611,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+613,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullCData(oldp+614,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),3);
        tracep->fullCData(oldp+615,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+616,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+617,(((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+618,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+619,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullQData(oldp+620,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+622,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullQData(oldp+623,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullCData(oldp+625,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+626,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+627,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+628,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            | ((1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))))));
        tracep->fullCData(oldp+629,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+630,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+631,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+632,(((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))));
        tracep->fullCData(oldp+633,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+634,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+635,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+636,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+637,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+638,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+639,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+640,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+641,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+642,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+643,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+644,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        tracep->fullCData(oldp+645,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+646,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+647,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullWData(oldp+648,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullBit(oldp+658,(vlSelf->clk));
        tracep->fullBit(oldp+659,(vlSelf->rst_n));
        tracep->fullQData(oldp+660,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+662,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+664,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+665,(vlSelf->regA0),64);
        tracep->fullBit(oldp+667,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+668,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+669,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+670,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+672,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+673,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+674,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+675,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+676,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+677,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+678,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+679,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+680,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+681,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+682,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+683,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+684,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+685,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+687,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+688,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+689,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+690,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+691,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+692,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+694,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+695,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+696,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+697,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+698,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+699,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+700,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+701,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+702,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+703,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+704,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+705,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+706,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+708,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+709,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+710,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+711,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+712,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+713,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+714,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+715,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+716,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+717,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+718,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+720,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+721,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+722,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+723,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+724,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+725,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+726,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+727,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+728,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+729,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+730,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+731,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+732,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+733,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+735,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+736,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+737,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+738,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+739,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+740,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+742,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+743,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+744,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+745,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+746,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+747,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+748,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+749,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+750,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+751,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+752,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+753,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+754,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+756,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+757,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+758,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+759,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+760,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+761,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+762,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+763,(vlSelf->axi_mmio_b_user_i));
        tracep->fullBit(oldp+764,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+765,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+766,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+767,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+768,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+769,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+770,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+771,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+772,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullQData(oldp+773,(((((((((- (QData)((IData)(
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
                                         | ((- (QData)((IData)(
                                                               ((3U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                     >> 2U))) 
                                                                & (1U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                       >> 0xeU))))))) 
                                            & (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h) 
                                                                       >> 0xfU))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
                                        | ((- (QData)((IData)(
                                                              ((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                    >> 2U))) 
                                                               & (5U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                      >> 0xeU))))))) 
                                           & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                       | ((- (QData)((IData)(
                                                             ((3U 
                                                               == 
                                                               (0x7fU 
                                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                   >> 2U))) 
                                                              & (2U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                     >> 0xeU))))))) 
                                          & (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                                      | ((- (QData)((IData)(
                                                            ((3U 
                                                              == 
                                                              (0x7fU 
                                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                  >> 2U))) 
                                                             & (6U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                    >> 0xeU))))))) 
                                         & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                                     | ((- (QData)((IData)(
                                                           ((3U 
                                                             == 
                                                             (0x7fU 
                                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                 >> 2U))) 
                                                            & (3U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                   >> 0xeU))))))) 
                                        & vlSelf->top__DOT__ls_sram_rd_data))),64);
        tracep->fullBit(oldp+775,((((((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        VL_EXTEND_WQ(256,64, __Vtemp352, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp355[0U] = __Vtemp352[0U];
            __Vtemp355[1U] = __Vtemp352[1U];
            __Vtemp355[2U] = __Vtemp352[2U];
            __Vtemp355[3U] = __Vtemp352[3U];
            __Vtemp355[4U] = __Vtemp352[4U];
            __Vtemp355[5U] = __Vtemp352[5U];
            __Vtemp355[6U] = __Vtemp352[6U];
            __Vtemp355[7U] = __Vtemp352[7U];
        } else {
            __Vtemp355[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]);
            __Vtemp355[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]);
            __Vtemp355[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]);
            __Vtemp355[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]);
            __Vtemp355[4U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]);
            __Vtemp355[5U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]);
            __Vtemp355[6U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]);
            __Vtemp355[7U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]);
        }
        tracep->fullWData(oldp+776,(__Vtemp355),256);
        tracep->fullCData(oldp+784,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+785,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullBit(oldp+786,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+787,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+788,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+789,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+790,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+792,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+794,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullCData(oldp+795,(((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? ((2U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                          ? ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg)
                                                  ? 7U
                                                  : 1U)
                                              : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk)
                                                  ? 0U
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
                                                      (((IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 0x20U)) 
                                                        & (IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg))
                                                        ? 1U
                                                        : 2U)))
                                                     : 
                                                    (((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                                                      & (IData)(vlSelf->top__DOT__ls_stall_n))
                                                      ? 1U
                                                      : 0U))))),3);
        tracep->fullBit(oldp+796,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+797,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+798,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+799,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                      ? (0x1fffffU 
                                         & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                             ? (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0xbU))
                                             : vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))]))
                                      : 0U)),21);
        tracep->fullQData(oldp+800,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+802,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+804,(((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U))) 
                                    | ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
                                                                    >> 5U))))))))) 
                                   | ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
                                                                   >> 5U)))))))))));
        tracep->fullIData(oldp+805,(0x40U),32);
        tracep->fullIData(oldp+806,(4U),32);
        tracep->fullIData(oldp+807,(8U),32);
        tracep->fullIData(oldp+808,(1U),32);
        tracep->fullCData(oldp+809,(0U),3);
        tracep->fullCData(oldp+810,(0U),4);
        tracep->fullBit(oldp+811,(0U));
        tracep->fullCData(oldp+812,(3U),8);
        tracep->fullCData(oldp+813,(3U),3);
        tracep->fullCData(oldp+814,(1U),2);
        tracep->fullBit(oldp+815,(0U));
        tracep->fullCData(oldp+816,(2U),4);
        tracep->fullCData(oldp+817,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+818,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+819,(1U),4);
        tracep->fullCData(oldp+820,(0xfU),4);
        tracep->fullCData(oldp+821,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+822,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+823,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+825,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+826,(1U));
        tracep->fullBit(oldp+827,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+828,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullCData(oldp+829,(vlSelf->top__DOT__fetchLenth),8);
        tracep->fullCData(oldp+830,(vlSelf->top__DOT__lsFetchLenth),8);
        tracep->fullBit(oldp+831,(0U));
        tracep->fullQData(oldp+832,(0ULL),64);
        tracep->fullCData(oldp+834,(0U),8);
        tracep->fullCData(oldp+835,(1U),3);
        tracep->fullCData(oldp+836,(2U),3);
        tracep->fullCData(oldp+837,(7U),3);
        tracep->fullBit(oldp+838,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+839,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+840,(0x80U),32);
        tracep->fullIData(oldp+841,(6U),32);
        __Vtemp356[0U] = 0U;
        __Vtemp356[1U] = 0U;
        __Vtemp356[2U] = 0U;
        __Vtemp356[3U] = 0U;
        tracep->fullWData(oldp+842,(__Vtemp356),128);
        __Vtemp357[0U] = 0xffffffffU;
        __Vtemp357[1U] = 0xffffffffU;
        __Vtemp357[2U] = 0xffffffffU;
        __Vtemp357[3U] = 0xffffffffU;
        tracep->fullWData(oldp+846,(__Vtemp357),128);
        tracep->fullCData(oldp+850,(0U),2);
        tracep->fullCData(oldp+851,(3U),2);
        tracep->fullCData(oldp+852,(2U),2);
        tracep->fullIData(oldp+853,(3U),32);
        tracep->fullIData(oldp+854,(0x60U),32);
        tracep->fullIData(oldp+855,(0U),32);
        tracep->fullIData(oldp+856,(0x13bU),32);
        tracep->fullBit(oldp+857,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+858,(0xe2U),32);
        tracep->fullCData(oldp+859,(6U),3);
        tracep->fullBit(oldp+860,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+861,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+862,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullIData(oldp+863,(0x121U),32);
    }
}
