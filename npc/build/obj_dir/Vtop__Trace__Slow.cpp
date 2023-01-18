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
        tracep->declBit(c+699,"clk", false,-1);
        tracep->declBit(c+700,"rst_n", false,-1);
        tracep->declQuad(c+701,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+703,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+705,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+706,"regA0", false,-1, 63,0);
        tracep->declBit(c+708,"stall_n_diff", false,-1);
        tracep->declBit(c+709,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+710,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+711,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+713,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+714,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+715,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+716,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+717,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+718,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+719,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+720,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+721,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+722,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+723,"axi_r_ready_o", false,-1);
        tracep->declBit(c+724,"axi_r_valid_i", false,-1);
        tracep->declBus(c+725,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+726,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+728,"axi_r_last_i", false,-1);
        tracep->declBus(c+729,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+730,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+731,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+732,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+733,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+735,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+736,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+737,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+738,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+739,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+740,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+741,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+742,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+743,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+744,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+745,"axi_w_ready_i", false,-1);
        tracep->declBit(c+746,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+747,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+749,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+750,"axi_w_last_o", false,-1);
        tracep->declBus(c+751,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+752,"axi_b_ready_o", false,-1);
        tracep->declBit(c+753,"axi_b_valid_i", false,-1);
        tracep->declBus(c+754,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+755,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+756,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+757,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+758,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+759,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+761,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+762,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+763,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+764,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+765,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+766,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+767,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+768,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+769,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+770,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+771,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+772,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+773,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+774,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+776,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+777,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+778,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+779,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+780,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+781,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+783,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+784,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+785,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+786,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+787,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+788,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+789,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+790,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+791,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+792,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+793,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+794,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+795,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+797,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+798,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+799,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+800,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+801,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+802,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+803,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+804,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+815,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+817,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+699,"top clk", false,-1);
        tracep->declBit(c+700,"top rst_n", false,-1);
        tracep->declQuad(c+701,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+703,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+705,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+706,"top regA0", false,-1, 63,0);
        tracep->declBit(c+708,"top stall_n_diff", false,-1);
        tracep->declBit(c+709,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+710,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+711,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+713,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+714,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+715,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+716,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+717,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+718,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+719,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+720,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+721,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+722,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+723,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+724,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+725,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+726,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+728,"top axi_r_last_i", false,-1);
        tracep->declBus(c+729,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+730,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+731,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+732,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+733,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+735,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+736,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+737,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+738,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+739,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+740,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+741,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+742,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+743,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+744,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+745,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+746,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+747,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+749,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+750,"top axi_w_last_o", false,-1);
        tracep->declBus(c+751,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+752,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+753,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+754,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+755,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+756,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+757,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+758,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+759,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+761,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+762,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+763,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+764,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+765,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+766,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+767,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+768,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+769,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+770,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+771,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+772,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+773,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+774,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+776,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+777,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+778,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+779,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+780,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+781,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+783,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+784,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+785,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+786,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+787,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+788,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+789,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+790,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+791,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+792,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+793,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+794,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+795,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+797,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+798,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+799,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+800,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+801,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+802,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+803,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+119,"top instr_fetching", false,-1);
        tracep->declBit(c+598,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+120,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+121,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+820,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+821,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+822,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+823,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+824,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+825,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+826,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+827,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+123,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+618,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+805,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+619,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+621,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+622,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+828,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+3,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+124,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+125,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+829,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+821,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+830,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+127,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+824,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+825,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+831,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+820,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+4,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+128,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+129,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+131,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+128,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+821,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+132,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+5,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+6,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+832,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+833,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+7,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+133,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+125,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+829,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+821,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+830,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+823,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+824,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+825,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+826,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+834,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+134,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+8,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+9,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+10,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+835,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+836,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+837,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+838,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+135,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+137,"top is_jump", false,-1);
        tracep->declQuad(c+138,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+140,"top pc_stall_n", false,-1);
        tracep->declBit(c+141,"top if_stall_n", false,-1);
        tracep->declBit(c+142,"top if_instr_valid", false,-1);
        tracep->declBit(c+840,"top sram_data_valid", false,-1);
        tracep->declQuad(c+143,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+145,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+841,"top sram_ren", false,-1);
        tracep->declBit(c+147,"top sram_addr_valid", false,-1);
        tracep->declBit(c+148,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+149,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+150,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+151,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+153,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+604,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+606,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+154,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+156,"top src1sel_id", false,-1);
        tracep->declBus(c+157,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+158,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+159,"top is_brc_id", false,-1);
        tracep->declBit(c+160,"top is_jal_id", false,-1);
        tracep->declBit(c+161,"top is_jalr_id", false,-1);
        tracep->declBit(c+162,"top wben_id", false,-1);
        tracep->declBus(c+163,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+164,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+140,"top id_stall_n", false,-1);
        tracep->declBit(c+165,"top DivEn_id", false,-1);
        tracep->declBus(c+166,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+167,"top in_trap_id", false,-1);
        tracep->declBit(c+168,"top out_trap_id", false,-1);
        tracep->declBit(c+169,"top trap_id", false,-1);
        tracep->declBit(c+170,"top ld_use_hazard", false,-1);
        tracep->declBit(c+171,"top id_flush", false,-1);
        tracep->declQuad(c+172,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+174,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+175,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+177,"top src1sel_ex", false,-1);
        tracep->declBus(c+178,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+179,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+181,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+183,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+185,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+187,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+188,"top is_brc_ex", false,-1);
        tracep->declBit(c+189,"top is_jal_ex", false,-1);
        tracep->declBit(c+190,"top is_jalr_ex", false,-1);
        tracep->declBit(c+191,"top wben_ex", false,-1);
        tracep->declBit(c+192,"top DivEn_ex", false,-1);
        tracep->declBus(c+193,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+194,"top trap_ex", false,-1);
        tracep->declBit(c+195,"top ex_stall_n", false,-1);
        tracep->declQuad(c+196,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+198,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+199,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+200,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+201,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+202,"top ex_flush", false,-1);
        tracep->declBit(c+203,"top rden_ls", false,-1);
        tracep->declBit(c+204,"top wren_ls", false,-1);
        tracep->declBit(c+205,"top ls_addr_ok_i", false,-1);
        tracep->declQuad(c+206,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+208,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+125,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+210,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+211,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+213,"top wben_ls", false,-1);
        tracep->declQuad(c+214,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+216,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+218,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+220,"top trap_ls", false,-1);
        tracep->declBit(c+195,"top ls_stall_n", false,-1);
        tracep->declBit(c+221,"top ls_not_ok", false,-1);
        tracep->declQuad(c+125,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+222,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+223,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+224,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+226,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+97,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+98,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+227,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+127,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+823,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+229,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+231,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+233,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+235,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+236,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+238,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+239,"top wben_wb", false,-1);
        tracep->declQuad(c+240,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+242,"top wb_stall_n", false,-1);
        tracep->declBit(c+243,"top rw_valid_i", false,-1);
        tracep->declBit(c+244,"top rw_ready_o", false,-1);
        tracep->declBus(c+842,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+621,"top rdLast_o", false,-1);
        tracep->declBus(c+245,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+619,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+623,"top dataValid_o", false,-1);
        tracep->declBus(c+815,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+817,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+119,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+598,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+120,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+121,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+820,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+821,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+822,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+823,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+824,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+825,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+826,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+827,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+123,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+618,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+805,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+619,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+621,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+622,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+828,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+806,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+843,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+844,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+846,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+847,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+848,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+849,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+850,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+851,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+852,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+853,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+854,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+855,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+807,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+856,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+857,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+859,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+860,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+861,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+862,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+808,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+809,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+810,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+599,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+863,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+864,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+866,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+867,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+868,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+869,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+870,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+871,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+872,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+873,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+874,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+875,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+876,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+624,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+812,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+625,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+627,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+622,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+877,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+731,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+732,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+733,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+735,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+736,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+737,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+738,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+739,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+740,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+741,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+742,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+743,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+744,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+745,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+746,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+747,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+749,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+750,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+751,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+752,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+753,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+754,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+755,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+756,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+709,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+710,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+711,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+713,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+714,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+715,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+716,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+717,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+718,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+719,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+720,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+721,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+722,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+723,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+724,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+725,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+726,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+728,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+729,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+730,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+779,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+780,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+781,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+783,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+784,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+785,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+786,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+787,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+788,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+789,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+790,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+791,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+792,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+793,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+794,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+795,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+797,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+798,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+799,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+800,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+801,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+802,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+803,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+757,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+758,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+759,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+761,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+762,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+763,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+764,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+765,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+766,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+767,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+768,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+769,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+770,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+771,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+772,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+773,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+774,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+776,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+777,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+778,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+806,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+843,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+844,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+846,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+847,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+848,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+849,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+850,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+851,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+852,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+853,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+854,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+855,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+807,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+856,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+857,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+859,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+860,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+861,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+862,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+808,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+809,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+810,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+628,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+246,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+247,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+249,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+250,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+251,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+252,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+253,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+254,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+255,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+256,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+257,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+258,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+259,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+629,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+813,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+630,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+632,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+622,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+814,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+699,"top IF_u clk", false,-1);
        tracep->declBit(c+700,"top IF_u rst_n", false,-1);
        tracep->declBit(c+137,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+138,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+216,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+218,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+167,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+168,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+141,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+135,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+150,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+142,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+143,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+840,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+148,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+149,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+145,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+841,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+147,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+145,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+699,"top cache_dut clk", false,-1);
        tracep->declBit(c+700,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+260,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+147,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+825,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+878,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+830,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+141,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+148,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+261,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+149,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+143,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+243,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+244,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+842,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+621,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+245,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+619,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+623,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+819,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+880,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+881,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+823,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+882,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+262,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+633,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+263,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+264,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+265,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+12,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+16,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+20,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+24,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+266,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+270,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+266,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+270,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+274,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+275,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+276,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+277,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+279,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+280,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+281,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+282,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+284,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+286,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+287,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+600,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+601,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+602,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+603,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+288,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+289,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+883,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+884,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+290,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+28,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+36,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+99,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+101,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+291,"top cache_dut missEn", false,-1);
        tracep->declBit(c+292,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+293,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+295,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+296,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+297,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+305,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+885,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+886,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+885,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+12,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+699,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+306,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+307,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+887,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+308,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+266,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+309,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+274,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+891,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+885,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+886,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+885,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+16,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+699,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+306,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+307,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+887,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+308,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+270,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+309,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+274,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+891,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+885,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+886,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+885,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+20,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+699,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+310,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+311,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+887,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+312,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+266,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+313,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+275,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+891,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+885,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+886,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+885,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+24,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+699,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+310,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+311,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+887,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+312,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+270,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+313,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+275,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+891,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+815,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+817,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+699,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+700,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+243,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+244,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+619,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+314,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+842,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+621,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+623,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+119,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+598,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+120,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+121,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+820,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+821,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+822,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+823,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+824,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+825,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+826,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+827,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+123,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+618,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+805,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+619,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+621,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+622,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+828,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+895,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+824,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+896,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+897,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+316,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+634,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+120,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+123,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+121,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+898,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+820,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+822,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+823,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+699,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+700,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+135,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+150,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+140,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+171,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+151,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+153,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+317,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+319,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+899,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+900,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+699,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+700,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+140,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+320,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+323,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+699,"top ID_u clk", false,-1);
        tracep->declBit(c+700,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+151,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+229,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+235,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+153,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+236,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+238,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+239,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+606,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+604,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+154,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+156,"top ID_u src1sel", false,-1);
        tracep->declBus(c+157,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+158,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+161,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+160,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+159,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+162,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+163,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+164,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+706,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+165,"top ID_u DivEn", false,-1);
        tracep->declBus(c+166,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+169,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+167,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+168,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+326,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+154,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+606,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+604,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+151,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+153,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+163,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+164,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+326,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+156,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+157,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+158,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+161,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+160,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+159,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+162,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+165,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+166,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+169,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+167,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+168,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+327,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+328,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+329,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+330,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+326,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+154,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+699,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+229,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+235,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+163,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+606,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+164,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+604,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+238,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+236,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+239,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+706,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+635+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+153,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+174,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+170,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+699,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+700,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+195,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+202,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+151,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+153,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+154,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+604,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+606,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+158,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+161,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+160,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+159,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+156,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+157,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+162,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+163,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+164,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+165,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+166,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+169,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+172,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+174,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+179,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+181,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+183,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+187,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+190,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+189,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+188,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+177,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+178,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+191,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+200,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+201,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+192,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+193,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+194,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+331,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+333,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+334,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+335,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+336,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+337,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+338,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+901,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+900,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+699,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+700,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+195,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+608,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+339,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+187,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+181,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+179,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+183,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+172,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+174,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+190,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+189,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+188,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+177,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+178,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+198,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+199,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+125,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+236,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+196,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+192,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+193,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+175,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+138,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+185,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+137,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+349,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+203,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+204,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+205,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+350,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+352,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+354,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+185,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+187,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+350,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+352,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+192,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+193,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+175,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+356,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+357,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+358,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+360,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+361,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+363,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+365,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+365,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+366,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+367,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+368,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+370,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+371,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+372,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+374,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+376,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+378,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+350,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+361,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+360,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+363,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+370,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+357,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+371,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+380,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+367,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+365,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+366,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+360,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+365,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+381,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+350,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+382,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+366,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+365,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+368,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+383,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+385,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+387,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+389,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+391,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+393,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+395,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+350,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+352,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+193,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+378,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+354,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+185,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+190,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+189,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+188,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+397,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+183,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+172,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+138,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+137,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+398,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+400,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+902,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+402,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+403,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+404,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+405,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+407,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+409,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+699,"top forwarding_u clk", false,-1);
        tracep->declBit(c+700,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+200,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+201,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+410,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+238,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+213,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+239,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+236,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+242,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+198,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+199,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+196,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+196,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+411,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+412,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+413,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+414,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+415,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+416,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+417,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+418,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+699,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+700,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+172,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+185,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+174,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+175,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+191,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+194,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+195,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+206,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+208,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+210,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+125,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+213,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+220,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+903,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+900,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+699,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+700,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+195,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+419,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+427,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+699,"top ls_u clk", false,-1);
        tracep->declBit(c+700,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+206,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+125,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+208,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+210,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+231,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+235,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+233,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+220,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+211,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+214,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+216,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+218,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+221,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+125,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+222,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+223,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+224,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+226,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+127,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+823,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+97,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+98,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+227,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+223,"top ls_u wren", false,-1);
        tracep->declBit(c+222,"top ls_u rden", false,-1);
        tracep->declBus(c+435,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+224,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+436,"top ls_u wren_last", false,-1);
        tracep->declBit(c+699,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+700,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+223,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+222,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+435,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+224,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+125,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+206,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+231,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+436,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+211,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+221,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+125,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+222,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+223,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+224,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+226,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+127,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+823,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+97,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+98,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+227,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+227,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+437,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+438,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+439,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+440,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+441,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+442,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+443,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+823,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+444,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+445,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+446,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+127,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+226,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+447,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+448,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+449,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+450,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+210,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+235,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+208,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+233,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+223,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+222,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+435,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+224,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+451,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+699,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+700,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+206,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+210,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+125,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+220,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+214,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+216,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+218,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+452,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+453,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+454,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+455,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+456,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+457,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+458,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+459,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+460,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+125,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+461,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+463,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+465,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+218,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+216,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+467,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+469,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+471,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+699,"top Dcache_u clk", false,-1);
        tracep->declBit(c+700,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+473,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+474,"top Dcache_u valid_i", false,-1);
        tracep->declBit(c+475,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+224,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+226,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+904,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+205,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+476,"top Dcache_u data_ok_o", false,-1);
        tracep->declBit(c+477,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+478,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+480,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+905,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+906,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+907,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+481,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+482,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declQuad(c+908,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+910,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+911,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+483,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+103,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+912,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+819,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+880,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+881,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+823,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+882,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+484,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+485,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+486,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+487,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+488,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+44,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+48,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+52,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+56,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+489,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+493,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+489,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+493,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+497,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+498,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+499,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+500,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+502,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+503,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+504,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+505,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+507,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+509,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+510,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+511,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+512,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+513,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+514,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+515,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+516,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+913,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+914,"top Dcache_u validWay2_q", false,-1);
        tracep->declBit(c+517,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+60,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+68,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+111,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+113,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+518,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+519,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+520,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBus(c+2,"top Dcache_u randomBit", false,-1, 31,0);
        tracep->declBit(c+522,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+523,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+524,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+532,"top Dcache_u replaceEn", false,-1);
        tracep->declQuad(c+533,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+535,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+536,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+538,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+540,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+541,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+542,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declQuad(c+544,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+546,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+550,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+546,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+550,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+554,"top Dcache_u wrMiss", false,-1);
        tracep->declBus(c+818,"top Dcache_u randomBit2", false,-1, 31,0);
        tracep->declBit(c+555,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+556,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+483,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+825,"top Dcache_u uncache", false,-1);
        tracep->declBus(c+482,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBus(c+885,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+886,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+885,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+44,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+699,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+557,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+558,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+559,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+563,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+489,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+564,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+497,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+546,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+885,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+886,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+885,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+48,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+699,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+557,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+558,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+565,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+569,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+493,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+564,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+497,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+550,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+885,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+886,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+885,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+52,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+699,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+570,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+571,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+559,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+572,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+489,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+573,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+498,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+546,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+885,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+886,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+885,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+56,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+699,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+570,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+571,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+565,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+574,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+493,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+573,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+498,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+550,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+815,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+817,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+699,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+700,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+223,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+222,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+98,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+97,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+227,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+224,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+226,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+125,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+127,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+823,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+3,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+124,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+125,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+829,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+821,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+830,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+127,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+824,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+825,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+831,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+4,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+128,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+129,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+131,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+128,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+821,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+132,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+5,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+6,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+832,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+833,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+7,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+133,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+125,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+829,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+821,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+830,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+823,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+824,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+825,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+826,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+834,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+134,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+8,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+9,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+10,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+835,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+836,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+895,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+824,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+896,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+897,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+575,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+115,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+124,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+128,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+132,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+76,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+895,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+824,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+896,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+897,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+576,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+116,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+133,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+134,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+915,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+77,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+79,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+81,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+82,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+898,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+829,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+830,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+823,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+577,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+699,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+700,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+206,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+210,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+125,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+211,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+213,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+214,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+242,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+229,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+235,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+231,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+233,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+239,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+240,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+916,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+900,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+699,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+700,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+242,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+578,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+588,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+229,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+235,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+231,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+233,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+240,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+238,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+236,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+699,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+700,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+170,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+137,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+167,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+168,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+142,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+221,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+141,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+140,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+140,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+195,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+195,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+242,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+171,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+202,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+917,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+917,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+823,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+127,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+699,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+700,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+125,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+819,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+124,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+3,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+129,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+131,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+128,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+4,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+6,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+5,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+132,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+125,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+819,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+133,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+10,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+9,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+8,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+134,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
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
        tracep->declBus(c+918,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+919,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+88,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+90,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+92,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+94,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+117,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+118,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+920,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+922,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
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
    VlWide<8>/*255:0*/ __Vtemp217;
    VlWide<4>/*127:0*/ __Vtemp218;
    VlWide<4>/*127:0*/ __Vtemp219;
    VlWide<3>/*95:0*/ __Vtemp220;
    VlWide<3>/*95:0*/ __Vtemp222;
    VlWide<3>/*95:0*/ __Vtemp223;
    VlWide<3>/*95:0*/ __Vtemp224;
    VlWide<3>/*95:0*/ __Vtemp225;
    VlWide<3>/*95:0*/ __Vtemp226;
    VlWide<3>/*95:0*/ __Vtemp229;
    VlWide<3>/*95:0*/ __Vtemp230;
    VlWide<3>/*95:0*/ __Vtemp231;
    VlWide<3>/*95:0*/ __Vtemp232;
    VlWide<3>/*95:0*/ __Vtemp233;
    VlWide<8>/*255:0*/ __Vtemp238;
    VlWide<4>/*127:0*/ __Vtemp240;
    VlWide<4>/*127:0*/ __Vtemp245;
    VlWide<4>/*127:0*/ __Vtemp247;
    VlWide<4>/*127:0*/ __Vtemp252;
    VlWide<4>/*127:0*/ __Vtemp254;
    VlWide<4>/*127:0*/ __Vtemp261;
    VlWide<4>/*127:0*/ __Vtemp263;
    VlWide<4>/*127:0*/ __Vtemp270;
    VlWide<4>/*127:0*/ __Vtemp272;
    VlWide<4>/*127:0*/ __Vtemp280;
    VlWide<4>/*127:0*/ __Vtemp282;
    VlWide<4>/*127:0*/ __Vtemp290;
    VlWide<10>/*319:0*/ __Vtemp295;
    VlWide<4>/*127:0*/ __Vtemp296;
    VlWide<4>/*127:0*/ __Vtemp297;
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
        if (vlSelf->top__DOT__Dcache_u__DOT__replaceWay) {
            __Vtemp217[0U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U];
            __Vtemp217[1U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U];
            __Vtemp217[2U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U];
            __Vtemp217[3U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U];
            __Vtemp217[4U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U];
            __Vtemp217[5U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U];
            __Vtemp217[6U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U];
            __Vtemp217[7U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U];
        } else {
            __Vtemp217[0U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U];
            __Vtemp217[1U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U];
            __Vtemp217[2U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U];
            __Vtemp217[3U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U];
            __Vtemp217[4U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U];
            __Vtemp217[5U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U];
            __Vtemp217[6U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U];
            __Vtemp217[7U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U];
        }
        tracep->fullWData(oldp+103,(__Vtemp217),256);
        tracep->fullQData(oldp+111,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+113,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullCData(oldp+115,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
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
        tracep->fullCData(oldp+116,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
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
        tracep->fullBit(oldp+117,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+118,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))));
        tracep->fullBit(oldp+119,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+120,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+123,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+125,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U)))),64);
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+129,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                     << (0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                  << 1U)))),64);
        tracep->fullCData(oldp+131,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                              << (7U 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                     >> 2U))))),8);
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+138,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+140,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+147,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+148,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+149,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+150,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+151,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+153,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+157,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+158,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+159,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+160,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+161,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+162,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+163,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+164,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+165,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+166,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+167,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+168,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+169,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+170,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+171,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+172,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+174,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+177,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+178,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+179,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+181,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+183,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+187,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+188,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+189,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+190,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+191,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+192,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+193,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+194,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+195,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+198,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+199,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+200,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+201,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+202,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+203,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+204,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullBit(oldp+205,(((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullQData(oldp+206,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+208,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+210,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+211,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+213,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+220,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+221,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+222,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+223,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+226,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+229,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+231,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+233,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+235,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+238,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+239,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+240,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+244,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullIData(oldp+245,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+249,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
        tracep->fullCData(oldp+250,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
        tracep->fullCData(oldp+252,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
        tracep->fullCData(oldp+253,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullCData(oldp+254,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
        tracep->fullCData(oldp+256,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
        tracep->fullCData(oldp+257,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
        tracep->fullCData(oldp+258,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullIData(oldp+260,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+261,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+262,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+265,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        __Vtemp218[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp218[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp218[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp218[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+266,(__Vtemp218),128);
        __Vtemp219[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp219[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp219[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp219[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+270,(__Vtemp219),128);
        tracep->fullBit(oldp+274,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+275,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+276,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+279,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+280,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+281,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+286,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+287,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+288,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+289,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+290,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+291,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+292,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+293,((((QData)((IData)(
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
        tracep->fullBit(oldp+295,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullCData(oldp+296,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+297,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+305,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+306,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+307,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullCData(oldp+308,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+309,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+310,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+311,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullCData(oldp+312,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+313,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+314,((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 0xbU)) 
                                                      << 0xbU) 
                                                     | (0x7e0U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                    >> 5U)) 
                                                           << 5U)))))),64);
        tracep->fullCData(oldp+316,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullQData(oldp+317,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+319,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp220[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp220[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp220[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+320,(__Vtemp220),96);
        tracep->fullWData(oldp+323,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+326,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+327,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+328,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+329,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+330,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+331,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+333,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+334,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+335,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+336,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+337,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+338,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+339,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullBit(oldp+349,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            | ((1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))))));
        tracep->fullQData(oldp+350,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+352,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+354,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp222, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp223, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp224, __Vtemp222, __Vtemp223);
        VL_EXTEND_WI(65,1, __Vtemp225, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp226, __Vtemp224, __Vtemp225);
        tracep->fullBit(oldp+356,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp226[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+357,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+358,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+361,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+363,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+365,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+366,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+367,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+368,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp229, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp230, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp231, __Vtemp229, __Vtemp230);
        VL_EXTEND_WI(65,1, __Vtemp232, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp233, __Vtemp231, __Vtemp232);
        tracep->fullBit(oldp+370,((1U & __Vtemp233[2U])));
        tracep->fullBit(oldp+371,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+372,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+374,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+376,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+378,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+380,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+381,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+382,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+385,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+387,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+389,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+391,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+393,(((0x4000000U & 
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
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+397,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+398,(((((QData)((IData)(
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
        tracep->fullQData(oldp+400,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+402,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+403,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+404,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+407,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+409,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+410,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+411,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+412,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+413,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+414,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+415,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+416,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+417,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+418,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        __Vtemp238[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xeU)) 
                                     | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp238[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__alures_ex 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp238[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                             << 2U));
        __Vtemp238[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp238[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp238[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp238[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp238[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+419,(__Vtemp238),226);
        tracep->fullWData(oldp+427,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+435,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+436,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+437,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+438,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+439,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+440,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+441,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+442,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+443,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+444,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+445,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+446,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+447,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+448,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+449,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+450,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+451,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+452,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+453,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+454,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+455,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+456,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+457,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+458,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+459,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+460,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+461,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+463,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+465,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+467,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+469,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+471,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullIData(oldp+473,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+474,(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i));
        tracep->fullBit(oldp+475,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullBit(oldp+476,(((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))));
        tracep->fullBit(oldp+477,((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))));
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__Dcache_u__DOT__rd_data_o),64);
        tracep->fullBit(oldp+480,(((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__axiRdReady))));
        tracep->fullIData(oldp+481,((((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullIData(oldp+482,(((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceWay)
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
        tracep->fullBit(oldp+483,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullCData(oldp+484,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullCData(oldp+485,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
        tracep->fullBit(oldp+486,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+487,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+488,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp240, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                           >> 0x20U)))) {
            __Vtemp245[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? 0U : __Vtemp240[0U]);
            __Vtemp245[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? 0U : __Vtemp240[1U]);
            __Vtemp245[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                               : __Vtemp240[2U]);
            __Vtemp245[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                          >> 0x20U))
                               : __Vtemp240[3U]);
        } else {
            __Vtemp245[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp245[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp245[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp245[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        }
        tracep->fullWData(oldp+489,(__Vtemp245),128);
        VL_EXTEND_WQ(128,64, __Vtemp247, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                           >> 0x20U)))) {
            __Vtemp252[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? 0U : __Vtemp247[0U]);
            __Vtemp252[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? 0U : __Vtemp247[1U]);
            __Vtemp252[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                               : __Vtemp247[2U]);
            __Vtemp252[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 3U)))
                               ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                          >> 0x20U))
                               : __Vtemp247[3U]);
        } else {
            __Vtemp252[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp252[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp252[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp252[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        }
        tracep->fullWData(oldp+493,(__Vtemp252),128);
        tracep->fullBit(oldp+497,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+498,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+499,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+500,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+502,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+503,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+504,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullBit(oldp+509,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+510,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+511,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i)) 
                                   & vlSelf->top__DOT__Dcache_u__DOT__randomBit)));
        tracep->fullBit(oldp+512,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i)) 
                                   & (~ vlSelf->top__DOT__Dcache_u__DOT__randomBit))));
        tracep->fullIData(oldp+513,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i))
                                      ? ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+514,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i))
                                      ? ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullIData(oldp+515,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+516,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+517,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+518,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+519,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+520,((((QData)((IData)(
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
        tracep->fullBit(oldp+522,(vlSelf->top__DOT__Dcache_u__DOT__missFlag));
        tracep->fullCData(oldp+523,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+524,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+532,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+533,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullCData(oldp+535,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+536,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+538,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+540,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+541,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+542,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullQData(oldp+544,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp254, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                           >> 0x20U)))) {
            __Vtemp261[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp254[0U])
                               : 0U);
            __Vtemp261[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp254[1U])
                               : 0U);
            __Vtemp261[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                   : __Vtemp254[2U])
                               : 0U);
            __Vtemp261[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                              >> 0x20U))
                                   : __Vtemp254[3U])
                               : 0U);
        } else {
            __Vtemp261[0U] = 1U;
            __Vtemp261[1U] = 0U;
            __Vtemp261[2U] = 0U;
            __Vtemp261[3U] = 0U;
        }
        tracep->fullWData(oldp+546,(__Vtemp261),128);
        VL_EXTEND_WQ(128,64, __Vtemp263, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                           >> 0x20U)))) {
            __Vtemp270[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp263[0U])
                               : 0U);
            __Vtemp270[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp263[1U])
                               : 0U);
            __Vtemp270[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                   : __Vtemp263[2U])
                               : 0U);
            __Vtemp270[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                              >> 0x20U))
                                   : __Vtemp263[3U])
                               : 0U);
        } else {
            __Vtemp270[0U] = 1U;
            __Vtemp270[1U] = 0U;
            __Vtemp270[2U] = 0U;
            __Vtemp270[3U] = 0U;
        }
        tracep->fullWData(oldp+550,(__Vtemp270),128);
        tracep->fullBit(oldp+554,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+555,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+556,(((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+557,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))));
        tracep->fullBit(oldp+558,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        VL_EXTEND_WQ(128,64, __Vtemp272, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp280[0U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? 0U : __Vtemp272[0U])
                                  : 0U) : 1U));
        __Vtemp280[1U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? 0U : __Vtemp272[1U])
                                  : 0U) : 0U));
        __Vtemp280[2U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                      : __Vtemp272[2U])
                                  : 0U) : 0U));
        __Vtemp280[3U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                 >> 0x20U))
                                      : __Vtemp272[3U])
                                  : 0U) : 0U));
        tracep->fullWData(oldp+559,(__Vtemp280),128);
        tracep->fullCData(oldp+563,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_1__A),6);
        tracep->fullBit(oldp+564,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
        VL_EXTEND_WQ(128,64, __Vtemp282, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp290[0U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? 0U : __Vtemp282[0U])
                                  : 0U) : 1U));
        __Vtemp290[1U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? 0U : __Vtemp282[1U])
                                  : 0U) : 0U));
        __Vtemp290[2U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                      : __Vtemp282[2U])
                                  : 0U) : 0U));
        __Vtemp290[3U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 0x20U)))
                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                  ? ((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)))
                                      ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                 >> 0x20U))
                                      : __Vtemp282[3U])
                                  : 0U) : 0U));
        tracep->fullWData(oldp+565,(__Vtemp290),128);
        tracep->fullCData(oldp+569,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+570,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
        tracep->fullBit(oldp+571,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+572,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_1__A),6);
        tracep->fullBit(oldp+573,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
        tracep->fullCData(oldp+574,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+575,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+576,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+577,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+578,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+588,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+598,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullBit(oldp+599,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullBit(oldp+600,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+601,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+602,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+603,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+604,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+606,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp295[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp295[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp295[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp295[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp295[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp295[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp295[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp295[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp295[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp295[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+608,(__Vtemp295),315);
        tracep->fullBit(oldp+618,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+619,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+621,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+622,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+623,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+624,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+625,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+627,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last))
                                    : 0U)));
        tracep->fullBit(oldp+628,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+629,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+630,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+632,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+633,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+634,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullQData(oldp+635,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+637,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+639,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+641,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+643,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+645,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+647,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+649,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+651,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+653,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+655,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+657,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+659,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+661,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+663,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+665,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+667,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+669,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+671,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+673,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+675,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+677,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+679,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+681,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+683,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+685,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+687,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+689,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+691,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+693,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+695,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+697,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+699,(vlSelf->clk));
        tracep->fullBit(oldp+700,(vlSelf->rst_n));
        tracep->fullQData(oldp+701,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+703,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+705,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+706,(vlSelf->regA0),64);
        tracep->fullBit(oldp+708,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+709,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+710,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+711,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+713,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+714,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+715,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+716,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+717,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+718,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+719,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+720,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+721,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+722,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+723,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+724,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+725,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+726,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+728,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+729,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+730,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+731,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+732,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+733,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+735,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+736,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+737,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+738,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+739,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+740,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+741,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+742,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+743,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+744,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+745,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+746,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+747,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+749,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+750,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+751,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+752,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+753,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+754,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+755,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+756,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+757,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+758,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+759,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+761,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+762,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+763,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+764,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+765,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+766,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+767,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+768,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+769,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+770,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+771,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+772,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+773,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+774,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+776,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+777,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+778,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+779,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+780,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+781,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+783,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+784,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+785,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+786,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+787,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+788,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+789,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+790,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+791,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+792,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+793,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+794,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+795,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+797,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+798,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+799,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+800,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+801,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+802,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+803,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+804,(vlSelf->axi_mmio_b_user_i));
        tracep->fullCData(oldp+805,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+806,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+807,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                    : (IData)(vlSelf->axi_w_ready_i))));
        tracep->fullBit(oldp+808,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+809,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+810,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+811,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullCData(oldp+812,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullCData(oldp+813,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+814,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullIData(oldp+815,(0x40U),32);
        tracep->fullIData(oldp+816,(4U),32);
        tracep->fullIData(oldp+817,(8U),32);
        tracep->fullIData(oldp+818,(1U),32);
        tracep->fullCData(oldp+819,(0U),3);
        tracep->fullCData(oldp+820,(0U),4);
        tracep->fullBit(oldp+821,(0U));
        tracep->fullCData(oldp+822,(3U),8);
        tracep->fullCData(oldp+823,(3U),3);
        tracep->fullCData(oldp+824,(1U),2);
        tracep->fullBit(oldp+825,(0U));
        tracep->fullCData(oldp+826,(2U),4);
        tracep->fullCData(oldp+827,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+828,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+829,(1U),4);
        tracep->fullCData(oldp+830,(0U),8);
        tracep->fullCData(oldp+831,(0xfU),4);
        tracep->fullCData(oldp+832,(vlSelf->top__DOT__ls_axi_b_id_i),4);
        tracep->fullBit(oldp+833,(vlSelf->top__DOT__ls_axi_b_user_i));
        tracep->fullCData(oldp+834,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+835,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullCData(oldp+836,(vlSelf->top__DOT__ls_axi_r_id_i),4);
        tracep->fullBit(oldp+837,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+838,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+840,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+841,(1U));
        tracep->fullCData(oldp+842,(vlSelf->top__DOT__fetchLenth),8);
        tracep->fullBit(oldp+843,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_valid_i));
        tracep->fullQData(oldp+844,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i),64);
        tracep->fullCData(oldp+846,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_prot_i),3);
        tracep->fullCData(oldp+847,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_id_i),4);
        tracep->fullBit(oldp+848,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_user_i));
        tracep->fullCData(oldp+849,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_len_i),8);
        tracep->fullCData(oldp+850,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_size_i),3);
        tracep->fullCData(oldp+851,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_burst_i),2);
        tracep->fullBit(oldp+852,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_lock_i));
        tracep->fullCData(oldp+853,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_cache_i),4);
        tracep->fullCData(oldp+854,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_qos_i),4);
        tracep->fullCData(oldp+855,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_region_i),4);
        tracep->fullBit(oldp+856,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_valid_i));
        tracep->fullQData(oldp+857,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_data_i),64);
        tracep->fullCData(oldp+859,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_strb_i),8);
        tracep->fullBit(oldp+860,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_last_i));
        tracep->fullBit(oldp+861,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_user_i));
        tracep->fullBit(oldp+862,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_b_ready_i));
        tracep->fullBit(oldp+863,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_valid_i));
        tracep->fullQData(oldp+864,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_addr_i),64);
        tracep->fullCData(oldp+866,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_prot_i),3);
        tracep->fullCData(oldp+867,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_id_i),4);
        tracep->fullBit(oldp+868,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_user_i));
        tracep->fullCData(oldp+869,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_len_i),8);
        tracep->fullCData(oldp+870,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_size_i),3);
        tracep->fullCData(oldp+871,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_burst_i),2);
        tracep->fullBit(oldp+872,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_lock_i));
        tracep->fullCData(oldp+873,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_cache_i),4);
        tracep->fullCData(oldp+874,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_qos_i),4);
        tracep->fullCData(oldp+875,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_region_i),4);
        tracep->fullBit(oldp+876,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_ready_i));
        tracep->fullBit(oldp+877,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_user_o));
        tracep->fullQData(oldp+878,(0ULL),64);
        tracep->fullCData(oldp+880,(1U),3);
        tracep->fullCData(oldp+881,(2U),3);
        tracep->fullCData(oldp+882,(7U),3);
        tracep->fullBit(oldp+883,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+884,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+885,(0x80U),32);
        tracep->fullIData(oldp+886,(6U),32);
        __Vtemp296[0U] = 0U;
        __Vtemp296[1U] = 0U;
        __Vtemp296[2U] = 0U;
        __Vtemp296[3U] = 0U;
        tracep->fullWData(oldp+887,(__Vtemp296),128);
        __Vtemp297[0U] = 0xffffffffU;
        __Vtemp297[1U] = 0xffffffffU;
        __Vtemp297[2U] = 0xffffffffU;
        __Vtemp297[3U] = 0xffffffffU;
        tracep->fullWData(oldp+891,(__Vtemp297),128);
        tracep->fullCData(oldp+895,(0U),2);
        tracep->fullCData(oldp+896,(3U),2);
        tracep->fullCData(oldp+897,(2U),2);
        tracep->fullIData(oldp+898,(3U),32);
        tracep->fullIData(oldp+899,(0x60U),32);
        tracep->fullIData(oldp+900,(0U),32);
        tracep->fullIData(oldp+901,(0x13bU),32);
        tracep->fullBit(oldp+902,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+903,(0xe2U),32);
        tracep->fullBit(oldp+904,(vlSelf->top__DOT__Dcache_u__DOT__stall_n));
        tracep->fullBit(oldp+905,(vlSelf->top__DOT__Dcache_u__DOT__axiRdReady));
        tracep->fullCData(oldp+906,(vlSelf->top__DOT__Dcache_u__DOT__fetchLenth),8);
        tracep->fullBit(oldp+907,(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i));
        tracep->fullQData(oldp+908,(vlSelf->top__DOT__Dcache_u__DOT__rdData_i),64);
        tracep->fullBit(oldp+910,(vlSelf->top__DOT__Dcache_u__DOT__dataValid_i));
        tracep->fullBit(oldp+911,(vlSelf->top__DOT__Dcache_u__DOT__axiWrReady));
        tracep->fullCData(oldp+912,(4U),8);
        tracep->fullBit(oldp+913,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+914,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+915,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+916,(0x121U),32);
        tracep->fullIData(oldp+917,(0x40U),32);
        tracep->fullIData(oldp+918,(3U),32);
        tracep->fullIData(oldp+919,(1U),32);
        tracep->fullQData(oldp+920,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+922,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
