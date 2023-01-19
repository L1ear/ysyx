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
        tracep->declBit(c+678,"clk", false,-1);
        tracep->declBit(c+679,"rst_n", false,-1);
        tracep->declQuad(c+680,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+682,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+684,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+685,"regA0", false,-1, 63,0);
        tracep->declBit(c+687,"stall_n_diff", false,-1);
        tracep->declBit(c+688,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+689,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+690,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+692,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+693,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+694,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+695,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+696,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+697,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+698,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+699,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+700,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+701,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+702,"axi_r_ready_o", false,-1);
        tracep->declBit(c+703,"axi_r_valid_i", false,-1);
        tracep->declBus(c+704,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+705,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+707,"axi_r_last_i", false,-1);
        tracep->declBus(c+708,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+709,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+710,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+711,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+712,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+714,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+715,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+716,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+717,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+718,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+719,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+720,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+721,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+722,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+723,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+724,"axi_w_ready_i", false,-1);
        tracep->declBit(c+725,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+726,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+728,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+729,"axi_w_last_o", false,-1);
        tracep->declBus(c+730,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+731,"axi_b_ready_o", false,-1);
        tracep->declBit(c+732,"axi_b_valid_i", false,-1);
        tracep->declBus(c+733,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+734,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+735,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+736,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+737,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+738,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+740,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+741,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+742,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+743,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+744,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+745,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+746,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+747,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+748,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+749,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+750,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+751,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+752,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+753,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+755,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+756,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+757,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+758,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+759,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+760,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+762,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+763,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+764,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+765,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+766,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+767,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+768,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+769,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+770,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+771,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+772,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+773,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+774,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+776,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+777,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+778,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+779,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+780,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+781,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+782,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+783,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+792,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+792,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+792,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+792,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+793,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+794,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+795,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+678,"top clk", false,-1);
        tracep->declBit(c+679,"top rst_n", false,-1);
        tracep->declQuad(c+680,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+682,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+684,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+685,"top regA0", false,-1, 63,0);
        tracep->declBit(c+687,"top stall_n_diff", false,-1);
        tracep->declBit(c+688,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+689,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+690,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+692,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+693,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+694,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+695,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+696,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+697,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+698,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+699,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+700,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+701,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+702,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+703,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+704,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+705,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+707,"top axi_r_last_i", false,-1);
        tracep->declBus(c+708,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+709,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+710,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+711,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+712,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+714,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+715,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+716,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+717,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+718,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+719,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+720,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+721,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+722,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+723,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+724,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+725,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+726,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+728,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+729,"top axi_w_last_o", false,-1);
        tracep->declBus(c+730,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+731,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+732,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+733,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+734,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+735,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+736,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+737,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+738,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+740,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+741,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+742,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+743,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+744,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+745,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+746,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+747,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+748,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+749,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+750,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+751,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+752,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+753,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+755,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+756,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+757,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+758,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+759,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+760,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+762,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+763,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+764,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+765,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+766,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+767,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+768,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+769,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+770,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+771,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+772,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+773,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+774,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+776,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+777,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+778,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+779,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+780,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+781,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+782,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+783,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+93,"top instr_fetching", false,-1);
        tracep->declBit(c+566,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+94,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+95,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+796,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+797,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+798,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+799,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+800,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+801,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+802,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+803,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+797,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+804,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+97,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+590,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+784,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+591,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+593,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+594,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+805,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+785,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+98,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+3,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+796,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+806,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+798,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+799,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+800,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+801,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+802,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+807,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+797,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+797,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+595,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+99,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+100,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+808,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+102,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+798,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+596,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+597,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+786,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+787,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+788,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+567,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+103,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+104,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+796,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+806,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+798,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+799,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+800,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+801,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+802,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+803,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+797,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+809,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+106,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+598,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+789,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+599,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+601,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+594,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+810,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+811,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+107,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+109,"top is_jump", false,-1);
        tracep->declQuad(c+110,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+112,"top pc_stall_n", false,-1);
        tracep->declBit(c+113,"top if_stall_n", false,-1);
        tracep->declBit(c+114,"top if_instr_valid", false,-1);
        tracep->declBit(c+813,"top sram_data_valid", false,-1);
        tracep->declQuad(c+115,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+814,"top sram_ren", false,-1);
        tracep->declBit(c+119,"top sram_addr_valid", false,-1);
        tracep->declBit(c+120,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+121,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+122,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+123,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+125,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+576,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+578,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+126,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+128,"top src1sel_id", false,-1);
        tracep->declBus(c+129,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+130,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+131,"top is_brc_id", false,-1);
        tracep->declBit(c+132,"top is_jal_id", false,-1);
        tracep->declBit(c+133,"top is_jalr_id", false,-1);
        tracep->declBit(c+134,"top wben_id", false,-1);
        tracep->declBus(c+135,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+136,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+112,"top id_stall_n", false,-1);
        tracep->declBit(c+137,"top DivEn_id", false,-1);
        tracep->declBus(c+138,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+139,"top in_trap_id", false,-1);
        tracep->declBit(c+140,"top out_trap_id", false,-1);
        tracep->declBit(c+141,"top trap_id", false,-1);
        tracep->declBit(c+142,"top ld_use_hazard", false,-1);
        tracep->declBit(c+143,"top id_flush", false,-1);
        tracep->declQuad(c+144,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+146,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+147,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+149,"top src1sel_ex", false,-1);
        tracep->declBus(c+150,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+151,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+153,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+155,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+157,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+159,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+160,"top is_brc_ex", false,-1);
        tracep->declBit(c+161,"top is_jal_ex", false,-1);
        tracep->declBit(c+162,"top is_jalr_ex", false,-1);
        tracep->declBit(c+163,"top wben_ex", false,-1);
        tracep->declBit(c+164,"top DivEn_ex", false,-1);
        tracep->declBus(c+165,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+166,"top trap_ex", false,-1);
        tracep->declBit(c+167,"top ex_stall_n", false,-1);
        tracep->declQuad(c+168,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+170,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+171,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+172,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+173,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+174,"top ex_flush", false,-1);
        tracep->declBit(c+175,"top rden_ls", false,-1);
        tracep->declBit(c+176,"top wren_ls", false,-1);
        tracep->declBit(c+177,"top ls_addr_ok_i", false,-1);
        tracep->declQuad(c+178,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+180,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+182,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+184,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+185,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+187,"top wben_ls", false,-1);
        tracep->declQuad(c+188,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+190,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+192,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+194,"top trap_ls", false,-1);
        tracep->declBit(c+195,"top ls_stall_n", false,-1);
        tracep->declBit(c+196,"top ls_not_ok", false,-1);
        tracep->declQuad(c+182,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+197,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+198,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+199,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+201,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+815,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+816,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+202,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+204,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+800,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+205,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+207,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+209,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+211,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+212,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+214,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+215,"top wben_wb", false,-1);
        tracep->declQuad(c+216,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+195,"top wb_stall_n", false,-1);
        tracep->declBit(c+218,"top rw_valid_i", false,-1);
        tracep->declBit(c+219,"top rw_ready_o", false,-1);
        tracep->declBus(c+817,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+593,"top rdLast_o", false,-1);
        tracep->declBus(c+220,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+591,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+602,"top dataValid_o", false,-1);
        tracep->declBit(c+221,"top dataNotOk", false,-1);
        tracep->declBit(c+222,"top DcacheRdValid", false,-1);
        tracep->declBit(c+223,"top DcacheWrValid", false,-1);
        tracep->declBit(c+224,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+818,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+601,"top lsRdLast", false,-1);
        tracep->declQuad(c+225,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+227,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+599,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+603,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+229,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+77,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+819,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+792,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+792,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+792,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+792,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+793,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+794,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+795,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+93,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+566,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+94,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+95,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+796,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+797,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+798,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+799,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+800,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+801,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+802,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+803,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+797,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+97,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+590,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+784,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+591,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+593,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+594,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+805,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+785,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+98,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+796,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+806,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+798,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+799,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+800,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+801,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+802,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+807,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+797,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+797,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+595,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+99,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+100,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+808,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+102,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+798,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+596,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+597,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+786,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+787,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+788,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+567,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+103,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+104,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+796,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+806,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+798,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+799,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+800,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+801,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+802,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+803,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+797,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+809,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+106,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+598,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+789,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+599,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+601,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+594,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+710,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+711,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+712,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+714,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+715,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+716,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+717,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+718,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+719,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+720,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+721,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+722,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+723,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+724,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+725,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+726,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+728,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+729,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+730,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+731,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+732,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+733,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+734,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+735,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+688,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+689,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+690,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+692,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+693,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+694,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+695,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+696,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+697,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+698,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+699,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+700,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+701,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+702,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+703,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+704,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+705,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+707,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+708,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+709,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+758,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+759,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+760,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+762,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+763,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+764,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+765,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+766,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+767,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+768,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+769,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+770,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+771,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+772,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+773,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+774,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+776,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+777,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+778,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+779,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+780,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+781,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+782,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+783,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+736,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+737,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+738,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+740,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+741,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+742,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+743,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+744,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+745,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+746,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+747,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+748,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+749,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+750,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+751,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+752,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+753,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+755,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+756,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+757,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+785,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+98,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+796,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+806,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+798,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+799,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+800,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+801,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+802,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+807,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+797,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+797,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+595,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+99,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+100,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+808,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+102,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+798,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+596,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+597,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+786,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+787,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+788,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+604,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+230,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+231,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+796,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+233,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+798,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+799,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+800,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+801,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+820,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+803,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+797,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+234,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+235,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+605,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+790,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+606,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+608,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+594,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+791,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+678,"top IF_u clk", false,-1);
        tracep->declBit(c+679,"top IF_u rst_n", false,-1);
        tracep->declBit(c+109,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+110,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+190,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+192,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+139,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+140,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+113,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+107,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+122,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+114,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+115,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+813,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+120,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+121,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+117,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+814,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+119,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+117,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+678,"top cache_dut clk", false,-1);
        tracep->declBit(c+679,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+236,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+119,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+802,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+821,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+823,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+113,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+120,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+237,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+121,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+115,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+218,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+219,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+817,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+593,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+220,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+591,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+602,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+796,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+824,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+825,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+800,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+826,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+238,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+609,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+239,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+240,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+241,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+5,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+9,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+13,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+17,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+242,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+246,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+242,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+246,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+250,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+251,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+252,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+253,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+255,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+256,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+257,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+258,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+260,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+262,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+263,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+568,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+569,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+570,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+571,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+264,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+265,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+827,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+828,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+266,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+21,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+29,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+85,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+87,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+267,"top cache_dut missEn", false,-1);
        tracep->declBit(c+268,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+269,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+271,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+272,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+273,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+281,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+829,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+792,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+830,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+829,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+5,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+282,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+283,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+831,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+284,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+242,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+285,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+250,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+835,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+829,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+792,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+830,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+829,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+9,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+282,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+283,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+831,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+284,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+246,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+285,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+250,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+835,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+829,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+792,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+830,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+829,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+13,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+286,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+287,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+831,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+288,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+242,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+289,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+251,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+835,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+829,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+792,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+830,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+829,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+17,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+286,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+287,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+831,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+288,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+246,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+289,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+251,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+835,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+792,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+792,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+792,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+792,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+793,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+794,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+795,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+678,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+679,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+218,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+219,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+591,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+290,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+817,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+593,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+602,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+93,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+566,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+94,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+95,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+796,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+797,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+798,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+799,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+800,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+801,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+802,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+803,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+797,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+97,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+590,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+784,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+591,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+593,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+594,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+805,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+839,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+801,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+840,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+841,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+292,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+610,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+94,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+97,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+95,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+842,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+797,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+802,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+799,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+800,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+678,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+679,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+107,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+122,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+112,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+143,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+123,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+125,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+293,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+295,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+843,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+844,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+678,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+679,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+112,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+296,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+299,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+678,"top ID_u clk", false,-1);
        tracep->declBit(c+679,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+123,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+205,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+211,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+125,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+212,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+214,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+215,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+578,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+576,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+126,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+128,"top ID_u src1sel", false,-1);
        tracep->declBus(c+129,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+130,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+133,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+132,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+131,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+134,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+135,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+136,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+685,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+137,"top ID_u DivEn", false,-1);
        tracep->declBus(c+138,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+141,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+139,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+140,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+302,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+126,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+578,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+576,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+123,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+125,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+135,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+136,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+302,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+128,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+129,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+130,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+133,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+132,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+131,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+134,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+137,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+138,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+141,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+139,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+140,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+303,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+304,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+305,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+306,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+302,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+126,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+678,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+205,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+211,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+135,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+578,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+136,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+576,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+214,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+212,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+215,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+685,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+614+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+125,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+146,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+142,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+678,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+679,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+167,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+174,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+123,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+125,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+126,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+576,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+578,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+130,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+133,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+132,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+131,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+128,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+129,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+134,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+135,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+136,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+137,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+138,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+141,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+144,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+146,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+151,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+153,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+155,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+159,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+162,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+161,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+160,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+149,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+150,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+163,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+172,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+173,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+164,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+165,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+166,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+307,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+309,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+310,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+311,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+312,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+313,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+314,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+845,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+844,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+678,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+679,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+167,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+580,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+315,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+159,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+153,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+151,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+155,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+144,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+146,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+162,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+161,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+160,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+149,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+150,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+170,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+171,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+182,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+212,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+168,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+164,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+165,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+147,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+110,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+157,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+109,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+325,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+175,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+176,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+177,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+326,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+328,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+330,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+157,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+159,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+326,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+328,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+164,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+165,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+147,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+332,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+333,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+334,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+336,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+337,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+339,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+341,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+341,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+342,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+343,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+344,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+346,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+347,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+348,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+350,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+352,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+354,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+326,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+337,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+336,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+339,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+346,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+333,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+347,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+356,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+343,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+341,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+342,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+336,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+341,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+357,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+326,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+358,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+342,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+341,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+344,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+359,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+361,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+363,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+365,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+367,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+369,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+371,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+326,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+328,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+165,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+354,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+330,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+157,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+162,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+161,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+160,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+373,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+155,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+144,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+110,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+109,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+374,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+376,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+846,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+378,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+379,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+380,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+381,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+383,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+385,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+678,"top forwarding_u clk", false,-1);
        tracep->declBit(c+679,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+172,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+173,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+386,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+214,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+187,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+215,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+212,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+195,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+170,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+171,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+168,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+168,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+387,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+388,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+389,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+390,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+391,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+392,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+393,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+394,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+678,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+679,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+144,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+157,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+146,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+147,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+163,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+166,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+195,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+178,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+180,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+184,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+182,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+187,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+194,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+847,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+844,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+678,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+679,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+195,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+395,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+403,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+678,"top ls_u clk", false,-1);
        tracep->declBit(c+679,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+178,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+182,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+180,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+184,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+207,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+211,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+209,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+194,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+185,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+188,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+190,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+192,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+196,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+182,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+197,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+198,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+199,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+201,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+204,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+800,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+221,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+221,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+202,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+198,"top ls_u wren", false,-1);
        tracep->declBit(c+197,"top ls_u rden", false,-1);
        tracep->declBus(c+411,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+199,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+412,"top ls_u wren_last", false,-1);
        tracep->declBit(c+678,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+679,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+198,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+197,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+411,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+199,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+182,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+178,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+207,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+412,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+185,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+196,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+182,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+197,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+198,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+199,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+201,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+204,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+800,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+221,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+221,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+202,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+202,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+413,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+414,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+415,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+416,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+417,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+418,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+419,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+800,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+420,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+421,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+422,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+204,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+201,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+423,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+424,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+425,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+426,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+184,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+211,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+180,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+209,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+198,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+197,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+411,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+199,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+427,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+678,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+679,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+178,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+184,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+182,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+194,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+188,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+190,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+192,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+428,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+429,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+430,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+431,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+432,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+433,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+434,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+435,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+436,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+182,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+437,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+439,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+441,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+192,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+190,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+443,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+445,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+447,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+678,"top Dcache_u clk", false,-1);
        tracep->declBit(c+679,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+449,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+450,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+451,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+452,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+199,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+201,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+195,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+177,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+453,"top Dcache_u data_ok_o", false,-1);
        tracep->declBit(c+221,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+202,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+222,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+224,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+818,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+601,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+454,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+455,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declQuad(c+599,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+603,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+229,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+223,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+77,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+819,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+796,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+824,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+825,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+800,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+826,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+456,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+611,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+457,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+458,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+459,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+37,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+41,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+45,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+49,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+460,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+464,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+460,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+464,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+468,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+469,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+470,"top Dcache_u reqCancel", false,-1);
        tracep->declBit(c+471,"top Dcache_u validFlag", false,-1);
        tracep->declBit(c+472,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+473,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+475,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+476,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+477,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+478,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+480,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+482,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+483,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+572,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+573,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+574,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+575,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+484,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+485,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+848,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+849,"top Dcache_u validWay2_q", false,-1);
        tracep->declBit(c+486,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+53,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+61,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+89,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+91,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+487,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+488,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+489,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBus(c+2,"top Dcache_u randomBit", false,-1, 31,0);
        tracep->declBit(c+491,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+492,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+493,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+501,"top Dcache_u replaceEn", false,-1);
        tracep->declQuad(c+502,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+504,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+505,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+507,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+509,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+510,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+511,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declQuad(c+513,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+515,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+519,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+515,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+519,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+523,"top Dcache_u wrMiss", false,-1);
        tracep->declBus(c+795,"top Dcache_u randomBit2", false,-1, 31,0);
        tracep->declBit(c+524,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+525,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+223,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+802,"top Dcache_u uncache", false,-1);
        tracep->declBus(c+455,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBus(c+829,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+792,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+830,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+829,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+37,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+526,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+527,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+528,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+532,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+460,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+533,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+468,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+515,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+829,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+792,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+830,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+829,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+41,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+526,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+527,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+534,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+532,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+464,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+533,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+468,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+519,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+829,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+792,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+830,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+829,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+45,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+538,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+539,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+528,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+540,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+460,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+541,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+469,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+515,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+829,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+792,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+830,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+829,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+49,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+538,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+539,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+534,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+540,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+464,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+541,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+469,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+519,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+792,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+792,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+792,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+792,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+793,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+794,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+795,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+678,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+679,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+222,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+224,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+599,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+225,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+818,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+601,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+603,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+223,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+229,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+77,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+819,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+808,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+227,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+785,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+98,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+796,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+806,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+798,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+799,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+800,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+801,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+802,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+807,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+797,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+797,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+595,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+99,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+100,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+808,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+102,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+798,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+596,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+597,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+786,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+787,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+788,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+567,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+103,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+104,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+796,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+806,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+798,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+799,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+800,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+801,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+802,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+803,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+797,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+809,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+106,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+598,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+789,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+599,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+601,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+594,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+839,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+801,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+840,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+841,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+542,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+612,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+98,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+99,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+596,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+850,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+102,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+3,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+69,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+543,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+839,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+801,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+840,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+841,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+544,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+613,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+103,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+106,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+104,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+842,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+806,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+802,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+799,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+800,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+545,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+678,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+679,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+178,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+184,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+182,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+185,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+187,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+188,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+195,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+205,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+211,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+207,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+209,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+215,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+216,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+851,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+844,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+678,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+679,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+195,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+546,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+556,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+205,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+211,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+207,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+209,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+216,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+214,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+212,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+678,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+679,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+142,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+109,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+139,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+140,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+114,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+196,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+113,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+112,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+112,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+167,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+195,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+195,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+143,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+174,"top pipline_ctrl_u ex_flush", false,-1);
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
    VlWide<8>/*255:0*/ __Vtemp218;
    VlWide<4>/*127:0*/ __Vtemp219;
    VlWide<4>/*127:0*/ __Vtemp220;
    VlWide<3>/*95:0*/ __Vtemp221;
    VlWide<3>/*95:0*/ __Vtemp223;
    VlWide<3>/*95:0*/ __Vtemp224;
    VlWide<3>/*95:0*/ __Vtemp225;
    VlWide<3>/*95:0*/ __Vtemp226;
    VlWide<3>/*95:0*/ __Vtemp227;
    VlWide<3>/*95:0*/ __Vtemp230;
    VlWide<3>/*95:0*/ __Vtemp231;
    VlWide<3>/*95:0*/ __Vtemp232;
    VlWide<3>/*95:0*/ __Vtemp233;
    VlWide<3>/*95:0*/ __Vtemp234;
    VlWide<8>/*255:0*/ __Vtemp239;
    VlWide<4>/*127:0*/ __Vtemp241;
    VlWide<4>/*127:0*/ __Vtemp246;
    VlWide<4>/*127:0*/ __Vtemp248;
    VlWide<4>/*127:0*/ __Vtemp253;
    VlWide<4>/*127:0*/ __Vtemp255;
    VlWide<4>/*127:0*/ __Vtemp262;
    VlWide<4>/*127:0*/ __Vtemp264;
    VlWide<4>/*127:0*/ __Vtemp271;
    VlWide<4>/*127:0*/ __Vtemp273;
    VlWide<4>/*127:0*/ __Vtemp281;
    VlWide<4>/*127:0*/ __Vtemp283;
    VlWide<4>/*127:0*/ __Vtemp291;
    VlWide<10>/*319:0*/ __Vtemp296;
    VlWide<4>/*127:0*/ __Vtemp297;
    VlWide<4>/*127:0*/ __Vtemp298;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullIData(oldp+2,(vlSelf->top__DOT__Dcache_u__DOT__randomBit),32);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullWData(oldp+5,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+9,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+13,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+17,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+21,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+29,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullWData(oldp+37,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+41,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+45,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+49,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+53,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+61,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullWData(oldp+69,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        if (vlSelf->top__DOT__Dcache_u__DOT__replaceWay) {
            __Vtemp218[0U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U];
            __Vtemp218[1U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U];
            __Vtemp218[2U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U];
            __Vtemp218[3U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U];
            __Vtemp218[4U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U];
            __Vtemp218[5U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U];
            __Vtemp218[6U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U];
            __Vtemp218[7U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U];
        } else {
            __Vtemp218[0U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U];
            __Vtemp218[1U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U];
            __Vtemp218[2U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U];
            __Vtemp218[3U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U];
            __Vtemp218[4U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U];
            __Vtemp218[5U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U];
            __Vtemp218[6U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U];
            __Vtemp218[7U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U];
        }
        tracep->fullWData(oldp+77,(__Vtemp218),256);
        tracep->fullQData(oldp+85,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+87,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+89,((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                      & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                     | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
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
        tracep->fullQData(oldp+91,((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                      & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                     | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
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
        tracep->fullBit(oldp+93,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+94,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+97,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+98,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+99,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+102,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt))));
        tracep->fullBit(oldp+103,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
        tracep->fullBit(oldp+106,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+110,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+112,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+119,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+120,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+121,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+122,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+123,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+125,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+129,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+130,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+135,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+136,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+138,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+139,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+144,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+146,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+149,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+150,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+151,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+153,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+155,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+159,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+160,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+161,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+162,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+163,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+164,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+165,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+166,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+167,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+170,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+171,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+172,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+173,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+174,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+175,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+176,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullBit(oldp+177,(((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullQData(oldp+178,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+180,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+182,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+184,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+185,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+187,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+194,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+195,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+196,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+197,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+198,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+201,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullCData(oldp+204,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+205,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+207,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+209,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+211,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+214,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+215,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+216,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+218,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+219,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullIData(oldp+220,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullBit(oldp+221,((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))));
        tracep->fullBit(oldp+222,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+224,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+229,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+230,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+233,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+234,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullIData(oldp+236,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+237,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+238,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+239,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        __Vtemp219[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp219[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp219[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp219[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+242,(__Vtemp219),128);
        __Vtemp220[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp220[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp220[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp220[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+246,(__Vtemp220),128);
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+252,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+255,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+256,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+257,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+262,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+263,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+264,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+265,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+266,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+267,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+268,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+269,((((QData)((IData)(
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
        tracep->fullBit(oldp+271,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullCData(oldp+272,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+273,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+281,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+282,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+283,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullCData(oldp+284,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+285,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+287,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullCData(oldp+288,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+289,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+290,((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 0xbU)) 
                                                      << 0xbU) 
                                                     | (0x7e0U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                    >> 5U)) 
                                                           << 5U)))))),64);
        tracep->fullCData(oldp+292,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullQData(oldp+293,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+295,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp221[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp221[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp221[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+296,(__Vtemp221),96);
        tracep->fullWData(oldp+299,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+302,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+303,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+304,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+305,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+306,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+307,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+309,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+310,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+311,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+312,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+313,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+314,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+315,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullBit(oldp+325,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            | ((1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))))));
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+330,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp223, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp224, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp225, __Vtemp223, __Vtemp224);
        VL_EXTEND_WI(65,1, __Vtemp226, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp227, __Vtemp225, __Vtemp226);
        tracep->fullBit(oldp+332,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp227[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+334,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+339,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+341,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+342,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+343,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+344,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp230, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp231, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp232, __Vtemp230, __Vtemp231);
        VL_EXTEND_WI(65,1, __Vtemp233, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp234, __Vtemp232, __Vtemp233);
        tracep->fullBit(oldp+346,((1U & __Vtemp234[2U])));
        tracep->fullBit(oldp+347,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+348,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+350,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+352,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+354,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+356,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+357,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+358,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+359,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+361,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+363,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+365,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+367,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+369,(((0x4000000U & 
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
        tracep->fullQData(oldp+371,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+373,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+374,(((((QData)((IData)(
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
        tracep->fullQData(oldp+376,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+378,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+379,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+380,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+381,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+383,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+385,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+386,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+387,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+388,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+389,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+390,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+391,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+392,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+393,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+394,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        __Vtemp239[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xeU)) 
                                     | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp239[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__alures_ex 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp239[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                             << 2U));
        __Vtemp239[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp239[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp239[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp239[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp239[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+395,(__Vtemp239),226);
        tracep->fullWData(oldp+403,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+411,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+412,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+413,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+414,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+415,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+416,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+417,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+418,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+419,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+420,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+421,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+422,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+423,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+424,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+425,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+426,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+427,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+428,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+429,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+430,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+431,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+432,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+433,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+434,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+435,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+436,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+437,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+439,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+445,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+447,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullIData(oldp+449,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+450,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+451,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   | (3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))))));
        tracep->fullBit(oldp+452,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullBit(oldp+453,(((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))));
        tracep->fullIData(oldp+454,((((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullIData(oldp+455,(((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceWay)
                                      ? ((vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                          [(0x3fU & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))] 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U)))
                                      : ((vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                          [(0x3fU & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))] 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+456,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+457,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+458,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+459,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp241, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                           >> 0x20U)))) {
            __Vtemp246[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? 0U : __Vtemp241[0U]);
            __Vtemp246[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? 0U : __Vtemp241[1U]);
            __Vtemp246[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                               : __Vtemp241[2U]);
            __Vtemp246[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                          >> 0x20U))
                               : __Vtemp241[3U]);
        } else {
            __Vtemp246[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp246[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp246[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp246[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        }
        tracep->fullWData(oldp+460,(__Vtemp246),128);
        VL_EXTEND_WQ(128,64, __Vtemp248, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                           >> 0x20U)))) {
            __Vtemp253[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? 0U : __Vtemp248[0U]);
            __Vtemp253[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? 0U : __Vtemp248[1U]);
            __Vtemp253[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                               : __Vtemp248[2U]);
            __Vtemp253[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                          >> 0x20U))
                               : __Vtemp248[3U]);
        } else {
            __Vtemp253[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp253[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp253[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp253[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        }
        tracep->fullWData(oldp+464,(__Vtemp253),128);
        tracep->fullBit(oldp+468,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+469,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+470,(((((IData)(vlSelf->top__DOT__Dcache_u__DOT__validFlag) 
                                     & (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    & (~ ((8U == (0x1fU 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 4U))) 
                                          | (3U == 
                                             (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U)))))) 
                                   & (IData)(vlSelf->top__DOT__ls_stall_n))));
        tracep->fullBit(oldp+471,(vlSelf->top__DOT__Dcache_u__DOT__validFlag));
        tracep->fullBit(oldp+472,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+473,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+475,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+476,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+477,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+480,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullBit(oldp+482,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+483,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+484,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+485,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+486,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+487,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+488,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+489,((((QData)((IData)(
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
        tracep->fullBit(oldp+491,(vlSelf->top__DOT__Dcache_u__DOT__missFlag));
        tracep->fullCData(oldp+492,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+493,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+501,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullCData(oldp+504,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+509,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+510,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+511,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullQData(oldp+513,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp255, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                           >> 0x20U)))) {
            __Vtemp262[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp255[0U])
                               : 0U);
            __Vtemp262[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp255[1U])
                               : 0U);
            __Vtemp262[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                   : __Vtemp255[2U])
                               : 0U);
            __Vtemp262[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                              >> 0x20U))
                                   : __Vtemp255[3U])
                               : 0U);
        } else {
            __Vtemp262[0U] = 0xffffffffU;
            __Vtemp262[1U] = 0xffffffffU;
            __Vtemp262[2U] = 0xffffffffU;
            __Vtemp262[3U] = 0xffffffffU;
        }
        tracep->fullWData(oldp+515,(__Vtemp262),128);
        VL_EXTEND_WQ(128,64, __Vtemp264, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                           >> 0x20U)))) {
            __Vtemp271[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp264[0U])
                               : 0U);
            __Vtemp271[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp264[1U])
                               : 0U);
            __Vtemp271[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                   : __Vtemp264[2U])
                               : 0U);
            __Vtemp271[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                              >> 0x20U))
                                   : __Vtemp264[3U])
                               : 0U);
        } else {
            __Vtemp271[0U] = 0xffffffffU;
            __Vtemp271[1U] = 0xffffffffU;
            __Vtemp271[2U] = 0xffffffffU;
            __Vtemp271[3U] = 0xffffffffU;
        }
        tracep->fullWData(oldp+519,(__Vtemp271),128);
        tracep->fullBit(oldp+523,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+524,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+525,(((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U))) 
                                    & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                   & ((IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                               >> (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U))))) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+526,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))));
        tracep->fullBit(oldp+527,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        VL_EXTEND_WQ(128,64, __Vtemp273, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp281[0U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? 0U : __Vtemp273[0U])
                                  : 0U) : 0xffffffffU));
        __Vtemp281[1U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? 0U : __Vtemp273[1U])
                                  : 0U) : 0xffffffffU));
        __Vtemp281[2U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                      : __Vtemp273[2U])
                                  : 0U) : 0xffffffffU));
        __Vtemp281[3U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                 >> 0x20U))
                                      : __Vtemp273[3U])
                                  : 0U) : 0xffffffffU));
        tracep->fullWData(oldp+528,(__Vtemp281),128);
        tracep->fullCData(oldp+532,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+533,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
        VL_EXTEND_WQ(128,64, __Vtemp283, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp291[0U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? 0U : __Vtemp283[0U])
                                  : 0U) : 0xffffffffU));
        __Vtemp291[1U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? 0U : __Vtemp283[1U])
                                  : 0U) : 0xffffffffU));
        __Vtemp291[2U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                      : __Vtemp283[2U])
                                  : 0U) : 0xffffffffU));
        __Vtemp291[3U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                 >> 0x20U))
                                      : __Vtemp283[3U])
                                  : 0U) : 0xffffffffU));
        tracep->fullWData(oldp+534,(__Vtemp291),128);
        tracep->fullBit(oldp+538,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
        tracep->fullBit(oldp+539,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+540,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+541,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
        tracep->fullCData(oldp+542,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+543,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+544,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+545,((0x38U & ((IData)(vlSelf->top__DOT__DcacheRdAddr) 
                                              << 3U))),6);
        tracep->fullWData(oldp+546,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+556,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+566,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullBit(oldp+567,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullBit(oldp+568,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+569,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+570,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+571,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullBit(oldp+572,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & vlSelf->top__DOT__Dcache_u__DOT__randomBit)));
        tracep->fullBit(oldp+573,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__Dcache_u__DOT__randomBit))));
        tracep->fullIData(oldp+574,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+575,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+576,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+578,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp296[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp296[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp296[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp296[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp296[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp296[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp296[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp296[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp296[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp296[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+580,(__Vtemp296),315);
        tracep->fullBit(oldp+590,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+591,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+593,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+594,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+595,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+596,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+597,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_b_valid));
        tracep->fullBit(oldp+598,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+599,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+601,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+602,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+603,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+604,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+605,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+606,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+608,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+609,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+610,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullCData(oldp+611,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
        tracep->fullCData(oldp+612,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+613,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullQData(oldp+614,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+616,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+618,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+620,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+622,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+624,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+626,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+628,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+630,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+632,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+634,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+636,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+638,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+640,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+642,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+644,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+646,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+648,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+650,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+652,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+654,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+656,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+658,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+660,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+662,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+664,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+666,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+668,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+670,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+672,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+674,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+676,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+678,(vlSelf->clk));
        tracep->fullBit(oldp+679,(vlSelf->rst_n));
        tracep->fullQData(oldp+680,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+682,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+684,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+685,(vlSelf->regA0),64);
        tracep->fullBit(oldp+687,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+688,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+689,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+690,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+692,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+693,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+694,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+695,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+696,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+697,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+698,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+699,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+700,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+701,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+702,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+703,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+704,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+705,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+707,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+708,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+709,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+710,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+711,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+712,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+714,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+715,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+716,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+717,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+718,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+719,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+720,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+721,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+722,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+723,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+724,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+725,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+726,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+728,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+729,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+730,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+731,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+732,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+733,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+734,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+735,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+736,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+737,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+738,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+740,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+741,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+742,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+743,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+744,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+745,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+746,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+747,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+748,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+749,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+750,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+751,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+752,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+753,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+755,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+756,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+757,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+758,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+759,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+760,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+762,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+763,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+764,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+765,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+766,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+767,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+768,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+769,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+770,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+771,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+772,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+773,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+774,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+776,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+777,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+778,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+779,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+780,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+781,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+782,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+783,(vlSelf->axi_mmio_b_user_i));
        tracep->fullCData(oldp+784,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+785,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullCData(oldp+786,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+787,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+788,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullCData(oldp+789,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullCData(oldp+790,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+791,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullIData(oldp+792,(0x40U),32);
        tracep->fullIData(oldp+793,(4U),32);
        tracep->fullIData(oldp+794,(8U),32);
        tracep->fullIData(oldp+795,(1U),32);
        tracep->fullCData(oldp+796,(0U),3);
        tracep->fullCData(oldp+797,(0U),4);
        tracep->fullBit(oldp+798,(0U));
        tracep->fullCData(oldp+799,(3U),8);
        tracep->fullCData(oldp+800,(3U),3);
        tracep->fullCData(oldp+801,(1U),2);
        tracep->fullBit(oldp+802,(0U));
        tracep->fullCData(oldp+803,(2U),4);
        tracep->fullCData(oldp+804,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+805,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+806,(1U),4);
        tracep->fullCData(oldp+807,(0xfU),4);
        tracep->fullCData(oldp+808,(0xffU),8);
        tracep->fullCData(oldp+809,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+810,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+811,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+813,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+814,(1U));
        tracep->fullBit(oldp+815,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+816,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullCData(oldp+817,(vlSelf->top__DOT__fetchLenth),8);
        tracep->fullCData(oldp+818,(vlSelf->top__DOT__lsFetchLenth),8);
        tracep->fullCData(oldp+819,(4U),8);
        tracep->fullBit(oldp+820,(0U));
        tracep->fullQData(oldp+821,(0ULL),64);
        tracep->fullCData(oldp+823,(0U),8);
        tracep->fullCData(oldp+824,(1U),3);
        tracep->fullCData(oldp+825,(2U),3);
        tracep->fullCData(oldp+826,(7U),3);
        tracep->fullBit(oldp+827,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+828,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+829,(0x80U),32);
        tracep->fullIData(oldp+830,(6U),32);
        __Vtemp297[0U] = 0U;
        __Vtemp297[1U] = 0U;
        __Vtemp297[2U] = 0U;
        __Vtemp297[3U] = 0U;
        tracep->fullWData(oldp+831,(__Vtemp297),128);
        __Vtemp298[0U] = 0xffffffffU;
        __Vtemp298[1U] = 0xffffffffU;
        __Vtemp298[2U] = 0xffffffffU;
        __Vtemp298[3U] = 0xffffffffU;
        tracep->fullWData(oldp+835,(__Vtemp298),128);
        tracep->fullCData(oldp+839,(0U),2);
        tracep->fullCData(oldp+840,(3U),2);
        tracep->fullCData(oldp+841,(2U),2);
        tracep->fullIData(oldp+842,(3U),32);
        tracep->fullIData(oldp+843,(0x60U),32);
        tracep->fullIData(oldp+844,(0U),32);
        tracep->fullIData(oldp+845,(0x13bU),32);
        tracep->fullBit(oldp+846,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+847,(0xe2U),32);
        tracep->fullBit(oldp+848,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+849,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+850,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullIData(oldp+851,(0x121U),32);
    }
}
