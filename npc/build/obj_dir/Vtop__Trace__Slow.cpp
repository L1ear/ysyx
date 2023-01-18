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
        tracep->declBit(c+661,"clk", false,-1);
        tracep->declBit(c+662,"rst_n", false,-1);
        tracep->declQuad(c+663,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+665,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+667,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+668,"regA0", false,-1, 63,0);
        tracep->declBit(c+670,"stall_n_diff", false,-1);
        tracep->declBit(c+671,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+672,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+673,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+675,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+676,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+677,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+678,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+679,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+680,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+681,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+682,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+683,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+684,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+685,"axi_r_ready_o", false,-1);
        tracep->declBit(c+686,"axi_r_valid_i", false,-1);
        tracep->declBus(c+687,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+688,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+690,"axi_r_last_i", false,-1);
        tracep->declBus(c+691,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+692,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+693,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+694,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+695,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+697,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+698,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+699,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+700,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+701,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+702,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+703,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+704,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+705,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+706,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+707,"axi_w_ready_i", false,-1);
        tracep->declBit(c+708,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+709,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+711,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+712,"axi_w_last_o", false,-1);
        tracep->declBus(c+713,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+714,"axi_b_ready_o", false,-1);
        tracep->declBit(c+715,"axi_b_valid_i", false,-1);
        tracep->declBus(c+716,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+717,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+718,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+719,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+720,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+721,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+723,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+724,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+725,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+726,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+727,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+728,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+729,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+730,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+731,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+732,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+733,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+734,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+735,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+736,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+738,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+739,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+740,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+741,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+742,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+743,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+745,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+746,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+747,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+748,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+749,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+750,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+751,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+752,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+753,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+754,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+755,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+756,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+757,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+759,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+760,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+761,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+762,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+763,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+764,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+765,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+766,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+777,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+777,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+777,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+777,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+778,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+779,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+780,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+661,"top clk", false,-1);
        tracep->declBit(c+662,"top rst_n", false,-1);
        tracep->declQuad(c+663,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+665,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+667,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+668,"top regA0", false,-1, 63,0);
        tracep->declBit(c+670,"top stall_n_diff", false,-1);
        tracep->declBit(c+671,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+672,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+673,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+675,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+676,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+677,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+678,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+679,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+680,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+681,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+682,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+683,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+684,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+685,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+686,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+687,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+688,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+690,"top axi_r_last_i", false,-1);
        tracep->declBus(c+691,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+692,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+693,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+694,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+695,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+697,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+698,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+699,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+700,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+701,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+702,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+703,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+704,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+705,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+706,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+707,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+708,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+709,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+711,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+712,"top axi_w_last_o", false,-1);
        tracep->declBus(c+713,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+714,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+715,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+716,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+717,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+718,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+719,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+720,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+721,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+723,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+724,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+725,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+726,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+727,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+728,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+729,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+730,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+731,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+732,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+733,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+734,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+735,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+736,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+738,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+739,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+740,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+741,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+742,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+743,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+745,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+746,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+747,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+748,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+749,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+750,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+751,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+752,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+753,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+754,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+755,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+756,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+757,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+759,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+760,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+761,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+762,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+763,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+764,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+765,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+766,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+111,"top instr_fetching", false,-1);
        tracep->declBit(c+560,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+112,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+113,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+781,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+782,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+783,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+784,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+785,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+786,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+787,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+788,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+782,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+789,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+115,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+580,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+767,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+581,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+583,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+584,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+790,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+3,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+116,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+117,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+781,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+791,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+783,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+792,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+119,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+786,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+787,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+793,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+782,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+782,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+4,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+120,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+121,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+123,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+120,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+783,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+124,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+5,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+6,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+794,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+795,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+7,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+125,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+117,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+781,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+791,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+783,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+792,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+785,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+786,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+787,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+788,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+782,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+796,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+126,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+8,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+9,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+10,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+797,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+798,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+799,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+800,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+127,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+129,"top is_jump", false,-1);
        tracep->declQuad(c+130,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+132,"top pc_stall_n", false,-1);
        tracep->declBit(c+133,"top if_stall_n", false,-1);
        tracep->declBit(c+134,"top if_instr_valid", false,-1);
        tracep->declBit(c+802,"top sram_data_valid", false,-1);
        tracep->declQuad(c+135,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+137,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+803,"top sram_ren", false,-1);
        tracep->declBit(c+139,"top sram_addr_valid", false,-1);
        tracep->declBit(c+140,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+141,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+142,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+143,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+145,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+566,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+568,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+146,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+148,"top src1sel_id", false,-1);
        tracep->declBus(c+149,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+150,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+151,"top is_brc_id", false,-1);
        tracep->declBit(c+152,"top is_jal_id", false,-1);
        tracep->declBit(c+153,"top is_jalr_id", false,-1);
        tracep->declBit(c+154,"top wben_id", false,-1);
        tracep->declBus(c+155,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+156,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+132,"top id_stall_n", false,-1);
        tracep->declBit(c+157,"top DivEn_id", false,-1);
        tracep->declBus(c+158,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+159,"top in_trap_id", false,-1);
        tracep->declBit(c+160,"top out_trap_id", false,-1);
        tracep->declBit(c+161,"top trap_id", false,-1);
        tracep->declBit(c+162,"top ld_use_hazard", false,-1);
        tracep->declBit(c+163,"top id_flush", false,-1);
        tracep->declQuad(c+164,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+166,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+167,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+169,"top src1sel_ex", false,-1);
        tracep->declBus(c+170,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+171,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+173,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+175,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+177,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+179,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+180,"top is_brc_ex", false,-1);
        tracep->declBit(c+181,"top is_jal_ex", false,-1);
        tracep->declBit(c+182,"top is_jalr_ex", false,-1);
        tracep->declBit(c+183,"top wben_ex", false,-1);
        tracep->declBit(c+184,"top DivEn_ex", false,-1);
        tracep->declBus(c+185,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+186,"top trap_ex", false,-1);
        tracep->declBit(c+187,"top ex_stall_n", false,-1);
        tracep->declQuad(c+188,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+190,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+191,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+192,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+193,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+194,"top ex_flush", false,-1);
        tracep->declBit(c+195,"top rden_ls", false,-1);
        tracep->declBit(c+196,"top wren_ls", false,-1);
        tracep->declBit(c+197,"top ls_addr_ok_i", false,-1);
        tracep->declQuad(c+198,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+200,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+117,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+202,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+203,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+205,"top wben_ls", false,-1);
        tracep->declQuad(c+206,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+208,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+210,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+212,"top trap_ls", false,-1);
        tracep->declBit(c+187,"top ls_stall_n", false,-1);
        tracep->declBit(c+213,"top ls_not_ok", false,-1);
        tracep->declQuad(c+117,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+214,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+215,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+216,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+218,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+97,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+98,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+219,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+119,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+785,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+221,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+223,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+225,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+227,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+228,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+230,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+231,"top wben_wb", false,-1);
        tracep->declQuad(c+232,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+234,"top wb_stall_n", false,-1);
        tracep->declBit(c+235,"top rw_valid_i", false,-1);
        tracep->declBit(c+236,"top rw_ready_o", false,-1);
        tracep->declBus(c+804,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+583,"top rdLast_o", false,-1);
        tracep->declBus(c+237,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+581,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+585,"top dataValid_o", false,-1);
        tracep->declBus(c+777,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+777,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+777,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+777,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+778,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+779,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+780,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+111,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+560,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+112,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+113,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+781,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+782,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+783,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+784,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+785,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+786,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+787,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+788,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+782,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+789,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+115,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+580,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+767,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+581,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+583,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+584,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+790,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+768,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+805,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+806,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+808,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+809,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+811,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+812,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+813,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+814,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+815,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+816,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+817,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+769,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+818,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+819,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+821,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+822,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+823,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+824,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+770,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+771,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+772,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+773,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+561,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+825,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+826,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+828,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+829,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+830,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+831,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+832,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+833,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+834,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+835,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+836,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+838,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+586,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+774,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+587,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+589,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+584,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+839,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+693,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+694,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+695,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+697,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+698,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+699,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+700,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+701,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+702,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+703,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+704,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+705,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+706,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+707,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+708,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+709,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+711,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+712,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+713,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+714,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+715,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+716,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+717,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+718,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+671,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+672,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+673,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+675,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+676,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+677,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+678,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+679,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+680,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+681,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+682,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+683,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+684,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+685,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+686,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+687,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+688,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+690,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+691,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+692,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+741,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+742,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+743,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+745,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+746,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+747,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+748,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+749,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+750,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+751,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+752,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+753,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+754,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+755,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+756,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+757,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+759,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+760,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+761,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+762,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+763,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+764,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+765,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+766,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+719,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+720,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+721,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+723,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+724,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+725,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+726,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+727,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+728,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+729,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+730,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+731,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+732,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+733,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+734,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+735,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+736,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+738,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+739,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+740,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+768,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+805,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+806,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+808,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+809,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+811,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+812,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+813,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+814,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+815,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+816,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+817,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+769,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+818,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+819,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+821,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+822,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+823,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+824,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+770,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+771,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+772,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+773,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+590,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+238,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+239,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+241,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+242,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+243,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+244,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+245,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+246,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+247,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+248,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+249,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+250,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+251,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+591,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+775,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+592,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+594,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+584,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+776,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+661,"top IF_u clk", false,-1);
        tracep->declBit(c+662,"top IF_u rst_n", false,-1);
        tracep->declBit(c+129,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+130,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+208,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+210,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+159,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+160,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+133,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+127,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+142,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+134,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+135,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+802,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+140,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+141,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+137,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+803,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+139,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+137,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+661,"top cache_dut clk", false,-1);
        tracep->declBit(c+662,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+252,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+139,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+787,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+840,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+792,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+133,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+140,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+253,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+141,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+135,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+235,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+236,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+804,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+583,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+237,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+581,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+585,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+781,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+842,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+843,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+785,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+844,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+254,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+595,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+255,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+256,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+257,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+12,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+16,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+20,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+24,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+258,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+262,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+258,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+262,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+266,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+267,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+268,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+269,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+271,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+272,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+273,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+274,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+276,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+278,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+279,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+562,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+563,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+564,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+565,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+280,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+281,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+845,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+846,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+282,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+28,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+36,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+99,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+101,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+283,"top cache_dut missEn", false,-1);
        tracep->declBit(c+284,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+285,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+287,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+288,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+289,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+297,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+847,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+777,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+848,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+847,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+12,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+661,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+298,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+299,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+849,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+300,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+258,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+301,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+266,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+853,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+847,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+777,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+848,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+847,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+16,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+661,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+298,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+299,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+849,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+300,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+262,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+301,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+266,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+853,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+847,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+777,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+848,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+847,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+20,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+661,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+302,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+303,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+849,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+304,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+258,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+305,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+267,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+853,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+847,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+777,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+848,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+847,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+24,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+661,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+302,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+303,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+849,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+304,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+262,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+305,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+267,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+853,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+777,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+777,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+777,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+777,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+778,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+779,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+780,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+661,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+662,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+235,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+236,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+581,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+306,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+804,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+583,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+585,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+111,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+560,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+112,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+113,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+781,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+782,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+783,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+784,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+785,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+786,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+787,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+788,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+782,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+789,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+115,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+580,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+767,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+581,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+583,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+584,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+790,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+857,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+786,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+858,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+859,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+308,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+596,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+112,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+115,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+113,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+860,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+782,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+787,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+784,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+785,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+661,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+662,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+127,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+142,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+132,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+163,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+143,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+145,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+309,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+311,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+861,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+862,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+661,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+662,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+132,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+312,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+315,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+661,"top ID_u clk", false,-1);
        tracep->declBit(c+662,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+143,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+221,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+227,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+145,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+228,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+230,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+231,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+568,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+566,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+146,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+148,"top ID_u src1sel", false,-1);
        tracep->declBus(c+149,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+150,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+153,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+152,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+151,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+154,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+155,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+156,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+668,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+157,"top ID_u DivEn", false,-1);
        tracep->declBus(c+158,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+161,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+159,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+160,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+318,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+146,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+568,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+566,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+143,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+145,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+155,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+156,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+318,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+148,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+149,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+150,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+153,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+152,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+151,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+154,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+157,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+158,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+161,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+159,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+160,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+319,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+320,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+321,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+322,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+318,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+146,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+661,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+221,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+227,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+155,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+568,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+156,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+566,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+230,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+228,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+231,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+668,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+597+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+145,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+166,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+162,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+661,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+662,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+187,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+194,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+143,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+145,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+146,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+566,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+568,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+150,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+153,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+152,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+151,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+148,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+149,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+154,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+155,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+156,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+157,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+158,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+161,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+164,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+166,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+171,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+173,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+175,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+179,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+182,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+181,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+180,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+169,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+170,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+183,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+192,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+193,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+184,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+185,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+186,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+323,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+325,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+326,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+327,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+328,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+329,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+330,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+863,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+862,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+661,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+662,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+187,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+570,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+331,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+179,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+173,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+171,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+175,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+164,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+166,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+182,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+181,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+180,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+169,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+170,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+190,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+191,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+117,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+228,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+188,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+184,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+185,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+167,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+130,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+177,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+129,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+341,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+195,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+196,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+197,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+342,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+344,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+346,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+177,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+179,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+342,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+344,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+184,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+185,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+167,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+348,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+349,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+350,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+352,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+353,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+355,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+357,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+357,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+358,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+359,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+360,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+362,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+363,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+364,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+366,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+368,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+370,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+342,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+353,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+352,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+355,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+362,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+349,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+363,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+372,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+359,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+357,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+358,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+352,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+357,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+373,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+342,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+374,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+358,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+357,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+360,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+375,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+377,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+379,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+381,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+383,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+385,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+387,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+342,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+344,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+185,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+370,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+346,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+177,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+182,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+181,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+180,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+389,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+175,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+164,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+130,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+129,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+390,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+392,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+864,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+394,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+395,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+396,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+397,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+399,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+401,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+661,"top forwarding_u clk", false,-1);
        tracep->declBit(c+662,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+192,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+193,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+402,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+230,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+205,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+231,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+228,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+234,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+190,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+191,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+188,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+188,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+403,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+404,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+405,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+406,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+407,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+408,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+409,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+410,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+661,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+662,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+164,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+177,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+166,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+167,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+183,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+186,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+187,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+198,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+200,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+202,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+117,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+205,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+212,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+865,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+862,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+661,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+662,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+187,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+411,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+419,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+661,"top ls_u clk", false,-1);
        tracep->declBit(c+662,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+198,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+117,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+200,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+202,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+223,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+227,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+225,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+212,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+203,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+206,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+208,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+210,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+213,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+117,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+214,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+215,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+216,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+218,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+119,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+785,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+97,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+98,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+219,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+215,"top ls_u wren", false,-1);
        tracep->declBit(c+214,"top ls_u rden", false,-1);
        tracep->declBus(c+427,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+216,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+428,"top ls_u wren_last", false,-1);
        tracep->declBit(c+661,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+662,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+215,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+214,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+427,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+216,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+117,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+198,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+223,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+428,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+203,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+213,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+117,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+214,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+215,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+216,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+218,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+119,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+785,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+97,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+98,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+219,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+219,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+429,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+430,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+431,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+432,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+433,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+434,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+435,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+785,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+436,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+437,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+438,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+119,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+218,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+439,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+440,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+441,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+442,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+202,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+227,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+200,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+225,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+215,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+214,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+427,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+216,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+443,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+661,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+662,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+198,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+202,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+117,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+212,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+206,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+208,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+210,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+444,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+445,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+446,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+447,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+448,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+449,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+450,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+451,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+452,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+117,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+453,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+455,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+457,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+210,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+208,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+459,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+461,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+463,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+661,"top Dcache_u clk", false,-1);
        tracep->declBit(c+662,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+465,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+466,"top Dcache_u valid_i", false,-1);
        tracep->declBit(c+467,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+866,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+868,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+869,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+197,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+468,"top Dcache_u data_ok_o", false,-1);
        tracep->declBit(c+469,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+470,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+472,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+870,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+871,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+872,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+473,"top Dcache_u cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+873,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+875,"top Dcache_u dataValid_i", false,-1);
        tracep->declBus(c+781,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+842,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+843,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+785,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+844,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+474,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+475,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+476,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+477,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+478,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+44,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+48,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+52,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+56,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+479,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+483,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+479,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+483,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+487,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+488,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+489,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+490,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+492,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+493,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+494,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+495,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+497,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+499,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+500,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+501,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+502,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+503,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+504,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+505,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+506,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+876,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+877,"top Dcache_u validWay2_q", false,-1);
        tracep->declBit(c+507,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+60,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+68,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+103,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+105,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+508,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+509,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+510,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBus(c+2,"top Dcache_u randomBit", false,-1, 31,0);
        tracep->declBit(c+512,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+513,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+514,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+522,"top Dcache_u replaceEn", false,-1);
        tracep->declBus(c+847,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+777,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+848,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+847,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+44,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+661,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+523,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+524,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+849,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+525,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+479,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+526,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+487,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+853,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+847,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+777,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+848,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+847,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+48,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+661,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+527,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+524,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+849,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+528,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+483,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+529,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+487,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+853,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+847,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+777,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+848,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+847,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+52,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+661,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+530,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+531,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+849,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+532,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+479,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+533,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+488,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+853,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+847,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+777,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+848,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+847,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+56,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+661,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+534,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+531,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+849,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+535,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+483,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+536,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+488,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+853,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+777,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+777,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+777,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+777,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+778,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+779,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+780,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+661,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+662,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+215,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+214,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+98,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+97,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+219,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+216,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+218,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+117,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+119,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+785,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+3,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+116,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+117,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+781,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+791,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+783,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+792,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+119,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+786,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+787,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+793,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+782,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+782,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+4,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+120,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+121,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+123,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+120,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+783,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+124,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+5,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+6,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+794,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+795,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+7,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+125,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+117,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+781,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+791,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+783,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+792,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+785,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+786,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+787,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+788,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+782,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+796,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+126,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+8,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+9,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+10,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+797,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+798,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+799,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+857,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+786,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+858,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+859,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+537,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+107,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+116,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+120,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+124,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+76,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+857,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+786,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+858,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+859,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+538,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+108,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+125,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+126,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+878,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+77,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+79,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+81,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+82,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+860,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+791,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+787,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+792,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+785,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+539,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+661,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+662,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+198,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+202,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+117,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+203,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+205,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+206,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+234,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+221,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+227,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+223,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+225,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+231,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+232,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+879,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+862,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+661,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+662,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+234,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+540,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+550,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+221,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+227,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+223,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+225,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+232,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+230,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+228,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+661,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+662,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+162,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+129,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+159,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+160,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+134,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+213,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+133,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+132,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+132,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+187,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+187,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+234,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+163,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+194,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+880,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+880,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+785,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+119,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+661,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+662,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+117,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+781,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+116,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+3,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+121,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+123,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+120,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+4,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+6,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+5,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+124,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+117,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+781,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+125,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+10,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+9,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+8,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+126,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+84,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+3,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+4,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+6,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+5,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+86,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+10,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+9,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+8,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+881,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+882,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+88,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+90,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+92,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+94,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+109,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+110,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+883,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+885,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+96,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp101;
    VlWide<4>/*127:0*/ __Vtemp102;
    VlWide<3>/*95:0*/ __Vtemp103;
    VlWide<3>/*95:0*/ __Vtemp105;
    VlWide<3>/*95:0*/ __Vtemp106;
    VlWide<3>/*95:0*/ __Vtemp107;
    VlWide<3>/*95:0*/ __Vtemp108;
    VlWide<3>/*95:0*/ __Vtemp109;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<3>/*95:0*/ __Vtemp113;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<3>/*95:0*/ __Vtemp115;
    VlWide<3>/*95:0*/ __Vtemp116;
    VlWide<8>/*255:0*/ __Vtemp121;
    VlWide<4>/*127:0*/ __Vtemp122;
    VlWide<4>/*127:0*/ __Vtemp123;
    VlWide<10>/*319:0*/ __Vtemp128;
    VlWide<4>/*127:0*/ __Vtemp129;
    VlWide<4>/*127:0*/ __Vtemp130;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullIData(oldp+2,(vlSelf->top__DOT__Dcache_u__DOT__randomBit),32);
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+10,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullWData(oldp+12,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+16,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+20,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+24,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+28,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+36,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullWData(oldp+44,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+48,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+52,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+56,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+60,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+68,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullBit(oldp+97,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
                                   >> 1U) & ((~ (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)) 
                                             & (((((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                      << 0x1eU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                        >> 2U))) 
                                                 == vlSelf->top__DOT__axi_ls_u__DOT__addr_reg) 
                                                & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg))))));
        tracep->fullBit(oldp+98,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
                                   >> 1U) & ((~ (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
                                             & ((~ 
                                                 (((((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     << 0x3eU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                        << 0x1eU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                          >> 2U))) 
                                                   != vlSelf->top__DOT__axi_ls_u__DOT__addr_reg) 
                                                  | (vlSelf->top__DOT__ls_u__DOT__wr_data 
                                                     != vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg))) 
                                                & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok))))));
        tracep->fullQData(oldp+99,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+101,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+103,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                      | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 4U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                              : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                              : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
        tracep->fullQData(oldp+105,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                      | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 4U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                              : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                              : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
        tracep->fullCData(oldp+107,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                          ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)
                                              ? 2U : 3U)
                                          : ((8U == 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))
                                              ? (((
                                                   ((((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      << 0x3eU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                         << 0x1eU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                           >> 2U))) 
                                                    != vlSelf->top__DOT__axi_ls_u__DOT__addr_reg) 
                                                   | (vlSelf->top__DOT__ls_u__DOT__wr_data 
                                                      != vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg)) 
                                                  & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok))
                                                  ? 1U
                                                  : 2U)
                                              : 0U))
                                      : ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                          ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                              ? 3U : 1U)
                                          : ((8U == 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))
                                              ? 1U : 0U)))),2);
        tracep->fullCData(oldp+108,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)
                                              ? 2U : 3U)
                                          : ((3U == 
                                              (0x7fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))
                                              ? (((
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 2U))) 
                                                  != vlSelf->top__DOT__axi_ls_u__DOT__addr_reg)
                                                  ? 1U
                                                  : 2U)
                                              : 0U))
                                      : ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready)
                                              ? 3U : 1U)
                                          : ((3U == 
                                              (0x7fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))
                                              ? 1U : 0U)))),2);
        tracep->fullBit(oldp+109,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+110,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))));
        tracep->fullBit(oldp+111,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+112,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+115,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+117,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U)))),64);
        tracep->fullCData(oldp+119,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+121,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                     << (0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                  << 1U)))),64);
        tracep->fullCData(oldp+123,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                              << (7U 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                     >> 2U))))),8);
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+130,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+132,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+139,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+140,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+141,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+142,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+143,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+145,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+148,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+149,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+150,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+151,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+152,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+153,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+154,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+155,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+156,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+158,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+159,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+160,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+161,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+162,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+163,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+164,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+166,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+169,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+170,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+171,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+173,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+175,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+179,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+180,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+181,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+182,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+183,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+184,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+185,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+186,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+187,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+190,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+191,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+192,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+193,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+194,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+195,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+196,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullBit(oldp+197,(((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullQData(oldp+198,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+200,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+202,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+203,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+205,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+212,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+213,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+214,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+215,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+218,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+221,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+223,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+225,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+227,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+230,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+231,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+232,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+236,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullIData(oldp+237,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+241,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
        tracep->fullCData(oldp+242,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
        tracep->fullCData(oldp+244,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
        tracep->fullCData(oldp+245,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullCData(oldp+246,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
        tracep->fullCData(oldp+248,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
        tracep->fullCData(oldp+249,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
        tracep->fullCData(oldp+250,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullIData(oldp+252,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+253,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+254,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        __Vtemp101[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp101[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp101[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp101[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+258,(__Vtemp101),128);
        __Vtemp102[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp102[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp102[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp102[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+262,(__Vtemp102),128);
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+267,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+268,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+271,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+272,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+273,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+276,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+278,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+279,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+280,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+281,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+282,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+283,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+284,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+285,((((QData)((IData)(
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
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullCData(oldp+288,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+289,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+297,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+298,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullCData(oldp+300,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+301,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+302,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+303,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullCData(oldp+304,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+305,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+306,((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 0xbU)) 
                                                      << 0xbU) 
                                                     | (0x7e0U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                    >> 5U)) 
                                                           << 5U)))))),64);
        tracep->fullCData(oldp+308,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullQData(oldp+309,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+311,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp103[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp103[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp103[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+312,(__Vtemp103),96);
        tracep->fullWData(oldp+315,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+318,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+319,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+320,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+321,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+322,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+323,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+325,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+326,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+327,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+328,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+329,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+330,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+331,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullBit(oldp+341,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            | ((1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))))));
        tracep->fullQData(oldp+342,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+344,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+346,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp105, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp106, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp107, __Vtemp105, __Vtemp106);
        VL_EXTEND_WI(65,1, __Vtemp108, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp109, __Vtemp107, __Vtemp108);
        tracep->fullBit(oldp+348,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp109[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+349,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+350,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+352,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+353,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+355,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+357,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+358,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+359,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+360,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp112, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp113, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp114, __Vtemp112, __Vtemp113);
        VL_EXTEND_WI(65,1, __Vtemp115, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp116, __Vtemp114, __Vtemp115);
        tracep->fullBit(oldp+362,((1U & __Vtemp116[2U])));
        tracep->fullBit(oldp+363,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+364,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+366,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+368,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+370,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+372,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+373,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+374,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+377,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+379,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+381,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+383,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+385,(((0x4000000U & 
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
        tracep->fullQData(oldp+387,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+389,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+390,(((((QData)((IData)(
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
        tracep->fullQData(oldp+392,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+394,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+395,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+396,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+397,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+399,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+401,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+402,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+403,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+404,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+405,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+406,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+407,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+408,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+409,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+410,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        __Vtemp121[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xeU)) 
                                     | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp121[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__alures_ex 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp121[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                             << 2U));
        __Vtemp121[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp121[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp121[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp121[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp121[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+411,(__Vtemp121),226);
        tracep->fullWData(oldp+419,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+427,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+428,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+429,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+430,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+431,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+432,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+433,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+434,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+435,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+436,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+437,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+438,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+439,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+440,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+441,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+442,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+443,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+444,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+445,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+446,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+447,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+448,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+449,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+450,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+451,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+452,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+453,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+455,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+457,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+459,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+461,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+463,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullIData(oldp+465,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+466,(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i));
        tracep->fullBit(oldp+467,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullBit(oldp+468,(((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))));
        tracep->fullBit(oldp+469,((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))));
        tracep->fullQData(oldp+470,(vlSelf->top__DOT__Dcache_u__DOT__rd_data_o),64);
        tracep->fullBit(oldp+472,(((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__axiRdReady))));
        tracep->fullIData(oldp+473,((((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullCData(oldp+474,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullCData(oldp+475,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
        tracep->fullBit(oldp+476,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+477,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+478,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        __Vtemp122[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
        __Vtemp122[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
        __Vtemp122[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
        __Vtemp122[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+479,(__Vtemp122),128);
        __Vtemp123[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
        __Vtemp123[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
        __Vtemp123[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
        __Vtemp123[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+483,(__Vtemp123),128);
        tracep->fullBit(oldp+487,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+488,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+489,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+490,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+492,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+493,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+494,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+495,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+497,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullBit(oldp+499,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+500,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+501,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i)) 
                                   & vlSelf->top__DOT__Dcache_u__DOT__randomBit)));
        tracep->fullBit(oldp+502,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i)) 
                                   & (~ vlSelf->top__DOT__Dcache_u__DOT__randomBit))));
        tracep->fullIData(oldp+503,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i))
                                      ? ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+504,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i))
                                      ? ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullIData(oldp+505,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+506,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+507,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+508,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+509,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+510,((((QData)((IData)(
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
        tracep->fullBit(oldp+512,(vlSelf->top__DOT__Dcache_u__DOT__missFlag));
        tracep->fullCData(oldp+513,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+514,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+522,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+523,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_1__CEN));
        tracep->fullBit(oldp+524,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        tracep->fullCData(oldp+525,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_1__A),6);
        tracep->fullBit(oldp+526,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_1__CEN)))));
        tracep->fullBit(oldp+527,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullCData(oldp+528,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+529,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+530,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_1__CEN));
        tracep->fullBit(oldp+531,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+532,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_1__A),6);
        tracep->fullBit(oldp+533,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_1__CEN)))));
        tracep->fullBit(oldp+534,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullCData(oldp+535,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+536,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullCData(oldp+537,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+538,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+539,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+540,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+550,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+560,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullBit(oldp+561,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullBit(oldp+562,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+563,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+564,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+565,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+566,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+568,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp128[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp128[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp128[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp128[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp128[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp128[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp128[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp128[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp128[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp128[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+570,(__Vtemp128),315);
        tracep->fullBit(oldp+580,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+581,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+583,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+584,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+585,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+586,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+587,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+589,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last))
                                    : 0U)));
        tracep->fullBit(oldp+590,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+591,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+592,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+594,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+595,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+596,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullQData(oldp+597,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+599,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+601,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+603,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+605,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+607,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+609,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+611,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+613,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+615,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+617,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+619,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+621,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+623,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+625,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+627,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+629,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+631,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+633,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+635,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+637,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+639,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+641,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+643,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+645,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+647,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+649,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+651,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+653,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+655,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+657,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+659,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+661,(vlSelf->clk));
        tracep->fullBit(oldp+662,(vlSelf->rst_n));
        tracep->fullQData(oldp+663,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+665,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+667,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+668,(vlSelf->regA0),64);
        tracep->fullBit(oldp+670,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+671,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+672,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+673,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+675,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+676,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+677,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+678,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+679,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+680,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+681,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+682,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+683,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+684,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+685,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+686,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+687,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+688,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+690,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+691,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+692,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+693,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+694,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+695,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+697,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+698,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+699,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+700,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+701,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+702,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+703,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+704,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+705,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+706,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+707,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+708,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+709,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+711,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+712,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+713,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+714,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+715,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+716,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+717,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+718,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+719,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+720,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+721,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+723,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+724,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+725,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+726,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+727,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+728,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+729,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+730,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+731,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+732,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+733,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+734,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+735,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+736,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+738,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+739,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+740,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+741,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+742,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+743,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+745,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+746,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+747,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+748,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+749,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+750,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+751,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+752,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+753,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+754,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+755,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+756,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+757,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+759,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+760,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+761,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+762,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+763,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+764,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+765,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+766,(vlSelf->axi_mmio_b_user_i));
        tracep->fullCData(oldp+767,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+768,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+769,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                    : (IData)(vlSelf->axi_w_ready_i))));
        tracep->fullBit(oldp+770,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+771,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+772,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+773,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullCData(oldp+774,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullCData(oldp+775,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+776,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullIData(oldp+777,(0x40U),32);
        tracep->fullIData(oldp+778,(4U),32);
        tracep->fullIData(oldp+779,(8U),32);
        tracep->fullIData(oldp+780,(1U),32);
        tracep->fullCData(oldp+781,(0U),3);
        tracep->fullCData(oldp+782,(0U),4);
        tracep->fullBit(oldp+783,(0U));
        tracep->fullCData(oldp+784,(3U),8);
        tracep->fullCData(oldp+785,(3U),3);
        tracep->fullCData(oldp+786,(1U),2);
        tracep->fullBit(oldp+787,(0U));
        tracep->fullCData(oldp+788,(2U),4);
        tracep->fullCData(oldp+789,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+790,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+791,(1U),4);
        tracep->fullCData(oldp+792,(0U),8);
        tracep->fullCData(oldp+793,(0xfU),4);
        tracep->fullCData(oldp+794,(vlSelf->top__DOT__ls_axi_b_id_i),4);
        tracep->fullBit(oldp+795,(vlSelf->top__DOT__ls_axi_b_user_i));
        tracep->fullCData(oldp+796,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+797,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullCData(oldp+798,(vlSelf->top__DOT__ls_axi_r_id_i),4);
        tracep->fullBit(oldp+799,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+800,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+802,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+803,(1U));
        tracep->fullCData(oldp+804,(vlSelf->top__DOT__fetchLenth),8);
        tracep->fullBit(oldp+805,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_valid_i));
        tracep->fullQData(oldp+806,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i),64);
        tracep->fullCData(oldp+808,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_prot_i),3);
        tracep->fullCData(oldp+809,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_id_i),4);
        tracep->fullBit(oldp+810,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_user_i));
        tracep->fullCData(oldp+811,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_len_i),8);
        tracep->fullCData(oldp+812,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_size_i),3);
        tracep->fullCData(oldp+813,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_burst_i),2);
        tracep->fullBit(oldp+814,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_lock_i));
        tracep->fullCData(oldp+815,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_cache_i),4);
        tracep->fullCData(oldp+816,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_qos_i),4);
        tracep->fullCData(oldp+817,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_region_i),4);
        tracep->fullBit(oldp+818,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_valid_i));
        tracep->fullQData(oldp+819,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_data_i),64);
        tracep->fullCData(oldp+821,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_strb_i),8);
        tracep->fullBit(oldp+822,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_last_i));
        tracep->fullBit(oldp+823,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_user_i));
        tracep->fullBit(oldp+824,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_b_ready_i));
        tracep->fullBit(oldp+825,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_valid_i));
        tracep->fullQData(oldp+826,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_addr_i),64);
        tracep->fullCData(oldp+828,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_prot_i),3);
        tracep->fullCData(oldp+829,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_id_i),4);
        tracep->fullBit(oldp+830,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_user_i));
        tracep->fullCData(oldp+831,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_len_i),8);
        tracep->fullCData(oldp+832,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_size_i),3);
        tracep->fullCData(oldp+833,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_burst_i),2);
        tracep->fullBit(oldp+834,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_lock_i));
        tracep->fullCData(oldp+835,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_cache_i),4);
        tracep->fullCData(oldp+836,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_qos_i),4);
        tracep->fullCData(oldp+837,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_region_i),4);
        tracep->fullBit(oldp+838,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_ready_i));
        tracep->fullBit(oldp+839,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_user_o));
        tracep->fullQData(oldp+840,(0ULL),64);
        tracep->fullCData(oldp+842,(1U),3);
        tracep->fullCData(oldp+843,(2U),3);
        tracep->fullCData(oldp+844,(7U),3);
        tracep->fullBit(oldp+845,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+846,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+847,(0x80U),32);
        tracep->fullIData(oldp+848,(6U),32);
        __Vtemp129[0U] = 0U;
        __Vtemp129[1U] = 0U;
        __Vtemp129[2U] = 0U;
        __Vtemp129[3U] = 0U;
        tracep->fullWData(oldp+849,(__Vtemp129),128);
        __Vtemp130[0U] = 0xffffffffU;
        __Vtemp130[1U] = 0xffffffffU;
        __Vtemp130[2U] = 0xffffffffU;
        __Vtemp130[3U] = 0xffffffffU;
        tracep->fullWData(oldp+853,(__Vtemp130),128);
        tracep->fullCData(oldp+857,(0U),2);
        tracep->fullCData(oldp+858,(3U),2);
        tracep->fullCData(oldp+859,(2U),2);
        tracep->fullIData(oldp+860,(3U),32);
        tracep->fullIData(oldp+861,(0x60U),32);
        tracep->fullIData(oldp+862,(0U),32);
        tracep->fullIData(oldp+863,(0x13bU),32);
        tracep->fullBit(oldp+864,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+865,(0xe2U),32);
        tracep->fullQData(oldp+866,(vlSelf->top__DOT__Dcache_u__DOT__wr_data_i),64);
        tracep->fullCData(oldp+868,(vlSelf->top__DOT__Dcache_u__DOT__wr_mask_i),8);
        tracep->fullBit(oldp+869,(vlSelf->top__DOT__Dcache_u__DOT__stall_n));
        tracep->fullBit(oldp+870,(vlSelf->top__DOT__Dcache_u__DOT__axiRdReady));
        tracep->fullCData(oldp+871,(vlSelf->top__DOT__Dcache_u__DOT__fetchLenth),8);
        tracep->fullBit(oldp+872,(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i));
        tracep->fullQData(oldp+873,(vlSelf->top__DOT__Dcache_u__DOT__rdData_i),64);
        tracep->fullBit(oldp+875,(vlSelf->top__DOT__Dcache_u__DOT__dataValid_i));
        tracep->fullBit(oldp+876,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+877,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+878,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+879,(0x121U),32);
        tracep->fullIData(oldp+880,(0x40U),32);
        tracep->fullIData(oldp+881,(3U),32);
        tracep->fullIData(oldp+882,(1U),32);
        tracep->fullQData(oldp+883,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+885,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
