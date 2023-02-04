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
        tracep->declBit(c+666,"clk", false,-1);
        tracep->declBit(c+667,"rst_n", false,-1);
        tracep->declQuad(c+668,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+670,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+672,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+673,"regA0", false,-1, 63,0);
        tracep->declBit(c+675,"stall_n_diff", false,-1);
        tracep->declBit(c+676,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+677,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+678,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+680,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+681,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+682,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+683,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+684,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+685,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+686,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+687,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+688,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+689,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+690,"axi_r_ready_o", false,-1);
        tracep->declBit(c+691,"axi_r_valid_i", false,-1);
        tracep->declBus(c+692,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+693,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+695,"axi_r_last_i", false,-1);
        tracep->declBus(c+696,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+697,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+698,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+699,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+700,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+702,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+703,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+704,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+705,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+706,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+707,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+708,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+709,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+710,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+711,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+712,"axi_w_ready_i", false,-1);
        tracep->declBit(c+713,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+714,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+716,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+717,"axi_w_last_o", false,-1);
        tracep->declBus(c+718,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+719,"axi_b_ready_o", false,-1);
        tracep->declBit(c+720,"axi_b_valid_i", false,-1);
        tracep->declBus(c+721,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+722,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+723,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+724,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+725,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+726,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+728,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+729,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+730,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+731,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+732,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+733,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+734,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+735,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+736,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+737,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+738,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+739,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+740,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+741,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+743,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+744,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+745,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+746,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+747,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+748,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+750,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+751,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+752,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+753,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+754,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+755,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+756,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+757,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+758,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+759,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+760,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+761,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+762,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+764,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+765,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+766,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+767,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+768,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+769,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+770,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+771,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+805,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+806,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+807,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+808,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+666,"top clk", false,-1);
        tracep->declBit(c+667,"top rst_n", false,-1);
        tracep->declQuad(c+668,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+670,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+672,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+673,"top regA0", false,-1, 63,0);
        tracep->declBit(c+675,"top stall_n_diff", false,-1);
        tracep->declBit(c+676,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+677,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+678,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+680,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+681,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+682,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+683,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+684,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+685,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+686,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+687,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+688,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+689,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+690,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+691,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+692,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+693,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+695,"top axi_r_last_i", false,-1);
        tracep->declBus(c+696,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+697,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+698,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+699,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+700,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+702,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+703,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+704,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+705,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+706,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+707,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+708,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+709,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+710,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+711,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+712,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+713,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+714,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+716,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+717,"top axi_w_last_o", false,-1);
        tracep->declBus(c+718,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+719,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+720,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+721,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+722,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+723,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+724,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+725,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+726,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+728,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+729,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+730,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+731,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+732,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+733,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+734,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+735,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+736,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+737,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+738,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+739,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+740,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+741,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+743,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+744,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+745,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+746,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+747,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+748,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+750,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+751,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+752,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+753,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+754,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+755,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+756,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+757,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+758,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+759,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+760,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+761,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+762,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+764,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+765,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+766,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+767,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+768,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+769,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+770,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+771,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+2,"top instr_fetching", false,-1);
        tracep->declBit(c+772,"top if_axi_ar_ready_i", false,-1);
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
        tracep->declBit(c+225,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+773,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+226,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+228,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+229,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+818,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+774,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+246,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+139,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+809,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+819,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+811,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+820,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+809,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+814,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+815,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+821,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+810,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+810,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+230,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+247,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+141,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+143,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+248,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+811,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+249,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+775,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+776,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+777,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+778,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+779,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+7,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+8,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+809,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+819,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+811,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+812,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+813,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+814,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+815,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+816,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+810,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+822,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+10,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+231,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+780,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+232,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+234,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+229,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+823,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+824,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+250,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+252,"top is_jump", false,-1);
        tracep->declQuad(c+253,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+255,"top pc_stall_n", false,-1);
        tracep->declBit(c+256,"top if_stall_n", false,-1);
        tracep->declBit(c+257,"top if_instr_valid", false,-1);
        tracep->declBit(c+826,"top sram_data_valid", false,-1);
        tracep->declQuad(c+258,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+260,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+827,"top sram_ren", false,-1);
        tracep->declBit(c+262,"top sram_addr_valid", false,-1);
        tracep->declBit(c+122,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+123,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+263,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+264,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+266,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+578,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+580,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+267,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+269,"top src1sel_id", false,-1);
        tracep->declBus(c+270,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+271,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+272,"top is_brc_id", false,-1);
        tracep->declBit(c+273,"top is_jal_id", false,-1);
        tracep->declBit(c+274,"top is_jalr_id", false,-1);
        tracep->declBit(c+275,"top wben_id", false,-1);
        tracep->declBus(c+276,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+277,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+255,"top id_stall_n", false,-1);
        tracep->declBit(c+278,"top DivEn_id", false,-1);
        tracep->declBus(c+279,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+280,"top in_trap_id", false,-1);
        tracep->declBit(c+281,"top out_trap_id", false,-1);
        tracep->declBit(c+282,"top trap_id", false,-1);
        tracep->declBit(c+283,"top ld_use_hazard", false,-1);
        tracep->declBit(c+284,"top id_flush", false,-1);
        tracep->declQuad(c+285,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+287,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+288,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+290,"top src1sel_ex", false,-1);
        tracep->declBus(c+291,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+292,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+294,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+296,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+298,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+300,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+301,"top is_brc_ex", false,-1);
        tracep->declBit(c+302,"top is_jal_ex", false,-1);
        tracep->declBit(c+303,"top is_jalr_ex", false,-1);
        tracep->declBit(c+304,"top wben_ex", false,-1);
        tracep->declBit(c+305,"top DivEn_ex", false,-1);
        tracep->declBus(c+306,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+307,"top trap_ex", false,-1);
        tracep->declBit(c+308,"top ex_stall_n", false,-1);
        tracep->declQuad(c+11,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+309,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+310,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+311,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+312,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+313,"top ex_flush", false,-1);
        tracep->declBit(c+314,"top rden_ls", false,-1);
        tracep->declBit(c+315,"top wren_ls", false,-1);
        tracep->declBit(c+316,"top ls_addr_ok_i", false,-1);
        tracep->declQuad(c+13,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+15,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+17,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+19,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+124,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+20,"top wben_ls", false,-1);
        tracep->declQuad(c+21,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+23,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+25,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+27,"top trap_ls", false,-1);
        tracep->declBit(c+317,"top ls_stall_n", false,-1);
        tracep->declBit(c+318,"top ls_not_ok", false,-1);
        tracep->declQuad(c+17,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+29,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+126,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+30,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+828,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+829,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+319,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+31,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+813,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+321,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+323,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+325,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+327,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+328,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+330,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+331,"top wben_wb", false,-1);
        tracep->declQuad(c+332,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+317,"top wb_stall_n", false,-1);
        tracep->declBit(c+334,"top rw_valid_i", false,-1);
        tracep->declBit(c+32,"top rw_ready_o", false,-1);
        tracep->declBus(c+830,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+228,"top rdLast_o", false,-1);
        tracep->declBus(c+33,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+226,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+235,"top dataValid_o", false,-1);
        tracep->declBit(c+128,"top dataNotOk", false,-1);
        tracep->declBit(c+335,"top DcacheRdValid", false,-1);
        tracep->declBit(c+336,"top DcacheWrValid", false,-1);
        tracep->declBit(c+34,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+831,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+234,"top lsRdLast", false,-1);
        tracep->declQuad(c+337,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+658,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+232,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+236,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+339,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+217,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+340,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+805,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+806,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+807,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+808,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+2,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+772,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
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
        tracep->declBit(c+225,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+773,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+226,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+228,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+229,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+774,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+246,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+139,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+819,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+820,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+809,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+815,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+821,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+230,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+247,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+141,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+143,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+248,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+811,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+249,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+775,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+776,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+777,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+778,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+779,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+7,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+8,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+819,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+812,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+813,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+815,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+816,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+10,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+231,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+780,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+232,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+234,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+229,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+698,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+699,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+700,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+702,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+703,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+704,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+705,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+706,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+707,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+708,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+709,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+710,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+711,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+712,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+713,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+714,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+716,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+717,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+718,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+719,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+720,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+721,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+722,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+723,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+676,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+677,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+678,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+680,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+681,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+682,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+683,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+684,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+685,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+686,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+687,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+688,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+689,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+690,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+691,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+692,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+693,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+695,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+696,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+697,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+746,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+747,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+748,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+750,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+751,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+752,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+753,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+754,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+755,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+756,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+757,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+758,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+759,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+760,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+761,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+762,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+764,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+765,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+766,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+767,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+768,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+769,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+770,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+771,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+724,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+725,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+726,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+728,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+729,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+730,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+731,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+732,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+733,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+734,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+735,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+736,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+737,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+738,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+739,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+740,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+741,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+743,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+744,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+745,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+774,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+246,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+139,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+819,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+820,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+809,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+815,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+821,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+230,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+247,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+141,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+143,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+248,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+811,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+249,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+775,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+776,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+777,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+778,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+237,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+35,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+36,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+812,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+813,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+832,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+816,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+39,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+40,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+238,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+781,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+239,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+241,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+229,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+782,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+666,"top IF_u clk", false,-1);
        tracep->declBit(c+667,"top IF_u rst_n", false,-1);
        tracep->declBit(c+252,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+253,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+23,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+25,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+280,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+281,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+256,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+250,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+263,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+257,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+258,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+826,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+122,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+123,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+260,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+827,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+262,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+260,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+666,"top cache_dut clk", false,-1);
        tracep->declBit(c+667,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+341,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+262,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+815,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+833,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+820,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+256,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+122,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+129,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+123,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+258,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+334,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+32,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+830,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+228,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+33,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+226,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+235,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+809,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+835,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+836,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+813,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+837,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+342,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+242,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+41,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+42,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+43,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+144,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+148,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+152,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+156,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+343,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+347,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+343,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+347,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+351,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+352,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+353,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+44,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+46,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+47,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+48,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+49,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+51,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+53,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+54,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+783,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+784,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+785,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+786,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+55,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+56,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+838,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+839,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+354,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+160,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+168,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+787,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+789,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+355,"top cache_dut missEn", false,-1);
        tracep->declBit(c+356,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+57,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+59,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+357,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+358,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+366,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+840,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+144,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+666,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+367,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+368,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+842,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+369,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+343,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+370,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+351,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+846,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+840,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+148,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+666,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+367,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+368,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+842,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+369,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+347,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+370,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+351,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+846,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+840,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+152,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+666,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+371,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+372,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+842,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+373,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+343,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+374,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+352,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+846,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+840,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+156,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+666,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+371,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+372,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+842,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+373,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+347,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+374,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+352,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+846,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+805,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+806,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+807,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+808,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+666,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+667,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+334,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+32,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+226,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+60,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+830,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+228,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+235,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+772,"top axi_icache_dut axi_ar_ready_i", false,-1);
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
        tracep->declBit(c+225,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+773,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+226,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+228,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+229,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+850,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+814,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+851,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+852,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+62,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+243,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+3,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+6,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+4,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+853,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+810,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+815,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+812,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+813,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+666,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+667,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+250,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+263,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+255,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+284,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+264,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+266,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+375,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+377,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+854,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+855,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+666,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+667,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+255,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+378,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+381,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+666,"top ID_u clk", false,-1);
        tracep->declBit(c+667,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+264,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+321,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+327,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+266,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+328,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+330,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+331,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+580,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+578,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+267,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+269,"top ID_u src1sel", false,-1);
        tracep->declBus(c+270,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+271,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+274,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+273,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+272,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+275,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+276,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+277,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+673,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+278,"top ID_u DivEn", false,-1);
        tracep->declBus(c+279,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+282,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+280,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+281,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+384,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+267,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+580,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+578,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+264,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+266,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+276,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+277,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+384,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+269,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+270,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+271,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+274,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+273,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+272,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+275,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+278,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+279,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+282,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+280,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+281,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+385,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+386,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+387,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+388,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+384,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+267,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+666,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+321,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+327,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+276,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+580,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+277,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+578,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+330,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+328,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+331,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+673,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+593+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+266,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+287,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+283,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+666,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+667,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+308,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+313,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+264,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+266,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+267,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+578,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+580,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+271,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+274,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+273,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+272,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+269,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+270,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+275,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+276,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+277,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+278,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+279,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+282,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+285,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+287,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+292,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+294,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+296,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+300,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+303,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+302,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+301,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+290,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+291,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+304,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+311,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+312,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+305,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+306,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+307,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+389,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+391,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+392,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+393,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+394,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+395,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+396,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+856,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+855,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+666,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+667,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+308,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+582,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+397,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+300,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+294,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+292,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+296,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+285,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+287,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+303,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+302,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+301,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+290,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+291,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+309,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+310,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+17,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+328,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+11,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+305,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+306,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+288,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+253,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+298,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+252,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+407,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+314,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+315,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+316,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+408,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+410,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+412,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+298,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+300,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+408,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+410,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+305,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+306,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+288,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+414,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+415,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+416,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+418,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+419,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+421,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+423,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+423,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+424,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+425,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+426,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+428,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+429,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+430,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+432,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+434,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+436,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+408,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+419,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+418,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+421,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+428,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+415,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+429,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+438,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+425,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+423,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+424,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+418,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+423,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+439,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+408,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+440,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+424,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+423,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+426,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+441,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+443,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+445,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+447,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+449,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+451,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+453,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+408,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+410,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+306,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+436,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+412,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+298,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+303,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+302,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+301,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+455,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+296,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+285,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+253,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+252,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+456,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+458,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+857,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+460,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+461,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+462,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+463,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+465,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+467,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+666,"top forwarding_u clk", false,-1);
        tracep->declBit(c+667,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+311,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+312,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+63,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+330,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+20,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+331,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+328,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+317,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+309,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+310,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+11,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+11,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+64,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+65,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+130,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+468,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+131,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+132,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+469,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+133,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+666,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+667,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+285,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+298,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+287,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+288,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+304,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+307,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+317,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+13,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+15,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+19,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+17,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+20,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+27,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+858,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+855,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+666,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+667,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+317,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+470,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+66,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+666,"top ls_u clk", false,-1);
        tracep->declBit(c+667,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+13,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+17,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+15,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+19,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+323,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+327,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+325,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+124,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+21,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+23,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+25,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+318,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+17,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+29,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+126,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+30,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+31,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+813,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+128,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+128,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+319,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+29,"top ls_u wren", false,-1);
        tracep->declBit(c+28,"top ls_u rden", false,-1);
        tracep->declBus(c+74,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+126,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+478,"top ls_u wren_last", false,-1);
        tracep->declBit(c+666,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+667,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+29,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+74,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+126,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+17,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+13,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+323,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+478,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+124,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+318,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+17,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+29,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+126,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+30,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+31,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+813,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+128,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+128,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+319,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+319,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+75,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+76,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+77,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+78,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+79,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+80,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+81,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+813,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+479,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+480,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+481,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+31,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+30,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+82,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+83,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+84,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+85,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+19,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+327,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+15,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+325,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+29,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+28,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+74,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+126,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+134,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+666,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+667,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+13,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+19,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+17,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+21,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+23,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+25,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+86,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+87,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+88,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+89,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+90,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+91,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+92,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+93,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+94,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+17,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+95,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+97,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+99,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+25,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+23,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+101,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+103,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+105,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+666,"top Dcache_u clk", false,-1);
        tracep->declBit(c+667,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+482,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+483,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+107,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+484,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+126,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+30,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+317,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+316,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+485,"top Dcache_u data_ok_o", false,-1);
        tracep->declBit(c+128,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+319,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+335,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+34,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+831,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+234,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+486,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+791,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declQuad(c+232,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+236,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+339,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+336,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+217,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+340,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+487,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+488,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+809,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+835,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+836,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+813,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+837,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+859,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+489,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+792,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+490,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+491,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+492,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+176,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+180,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+184,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+188,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+493,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+497,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+493,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+497,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+660,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+661,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+501,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+502,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+503,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+505,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+506,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+507,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+108,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+110,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+135,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+136,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+793,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+794,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+795,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+796,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+137,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+138,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+860,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+861,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+112,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBit(c+113,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+508,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+192,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+200,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+797,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+799,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+509,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+510,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+511,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+657,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+113,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+513,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+514,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+522,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+114,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+115,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+523,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+116,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+525,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+527,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+529,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+530,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+531,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+533,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+534,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+536,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+540,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+536,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+540,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+544,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+545,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+117,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+592,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+336,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+118,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+336,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+791,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+546,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+547,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+548,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBus(c+840,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+176,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+666,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+801,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+662,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+549,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+663,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+493,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+802,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+660,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+536,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+840,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+180,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+666,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+801,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+662,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+553,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+663,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+497,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+802,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+660,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+540,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+840,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+184,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+666,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+803,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+664,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+549,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+665,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+493,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+804,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+661,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+536,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+840,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+805,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+840,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+188,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+666,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+803,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+664,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+553,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+665,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+497,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+804,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+661,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+540,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+805,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+805,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+806,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+807,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+808,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+666,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+667,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+335,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+34,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+232,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+337,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+831,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+234,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+236,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+336,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+339,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+217,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+340,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+862,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+658,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+774,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+246,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+139,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+819,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+820,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+809,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+815,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+821,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+230,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+247,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+141,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+143,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+248,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+811,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+249,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+775,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+776,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+777,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+778,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+779,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+7,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+8,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+809,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+819,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+812,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+813,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+814,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+815,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+816,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+10,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+231,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+780,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+232,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+234,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+229,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+850,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+814,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+851,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+852,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+557,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+244,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+246,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+247,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+249,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+863,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+248,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+139,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+208,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+119,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+120,"top axi_ls_u lenthReg", false,-1, 7,0);
        tracep->declBus(c+850,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+814,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+851,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+852,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+121,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+245,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+7,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+10,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+8,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+853,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+819,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+815,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+812,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+813,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+216,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+666,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+667,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+13,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+19,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+17,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+124,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+20,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+21,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+317,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+321,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+327,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+323,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+325,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+331,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+332,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+864,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+855,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+666,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+667,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+317,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+558,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+568,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+321,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+327,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+323,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+325,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+332,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+330,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+328,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+666,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+667,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+283,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+252,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+280,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+281,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+257,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+318,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+256,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+255,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+255,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+308,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+317,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+317,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+284,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+313,"top pipline_ctrl_u ex_flush", false,-1);
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
    VlWide<8>/*255:0*/ __Vtemp256;
    VlWide<8>/*255:0*/ __Vtemp259;
    VlWide<4>/*127:0*/ __Vtemp260;
    VlWide<4>/*127:0*/ __Vtemp261;
    VlWide<3>/*95:0*/ __Vtemp262;
    VlWide<3>/*95:0*/ __Vtemp264;
    VlWide<3>/*95:0*/ __Vtemp265;
    VlWide<3>/*95:0*/ __Vtemp266;
    VlWide<3>/*95:0*/ __Vtemp267;
    VlWide<3>/*95:0*/ __Vtemp268;
    VlWide<3>/*95:0*/ __Vtemp271;
    VlWide<3>/*95:0*/ __Vtemp272;
    VlWide<3>/*95:0*/ __Vtemp273;
    VlWide<3>/*95:0*/ __Vtemp274;
    VlWide<3>/*95:0*/ __Vtemp275;
    VlWide<8>/*255:0*/ __Vtemp280;
    VlWide<4>/*127:0*/ __Vtemp283;
    VlWide<4>/*127:0*/ __Vtemp290;
    VlWide<4>/*127:0*/ __Vtemp293;
    VlWide<4>/*127:0*/ __Vtemp300;
    VlWide<4>/*127:0*/ __Vtemp303;
    VlWide<4>/*127:0*/ __Vtemp312;
    VlWide<4>/*127:0*/ __Vtemp315;
    VlWide<4>/*127:0*/ __Vtemp324;
    VlWide<4>/*127:0*/ __Vtemp327;
    VlWide<4>/*127:0*/ __Vtemp337;
    VlWide<4>/*127:0*/ __Vtemp340;
    VlWide<4>/*127:0*/ __Vtemp350;
    VlWide<10>/*319:0*/ __Vtemp355;
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
        tracep->fullBit(oldp+7,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
        tracep->fullBit(oldp+10,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+13,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+15,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+17,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullIData(oldp+19,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1eU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U))),32);
        tracep->fullBit(oldp+20,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+27,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+28,((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))));
        tracep->fullBit(oldp+29,((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))));
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+32,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullIData(oldp+33,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                              >> 0xbU)) 
                                     << 0xbU) | (0x7e0U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U)) 
                                                    << 5U)))),32);
        tracep->fullBit(oldp+34,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+38,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U)),4);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+46,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+47,((0x3fU & (IData)(
                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                     >> 5U)))),6);
        tracep->fullIData(oldp+48,((0x1fffffU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))),21);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+53,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullBit(oldp+54,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullIData(oldp+55,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullIData(oldp+56,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullQData(oldp+57,((((QData)((IData)(
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
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullQData(oldp+60,((QData)((IData)(
                                                   (((IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 0xbU)) 
                                                     << 0xbU) 
                                                    | (0x7e0U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                   >> 5U)) 
                                                          << 5U)))))),64);
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullCData(oldp+63,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))),5);
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+66,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+74,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                          >> 0xeU))),3);
        tracep->fullBit(oldp+75,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+76,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (4U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+77,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+78,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (5U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+79,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+80,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (6U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+81,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+82,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+83,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+84,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+85,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+86,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+87,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+88,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+89,((0x1cU == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 4U)))));
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+95,(((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U))) 
                                    | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+97,(((~ (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                              >> 2U)))) 
                                    & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+103,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullBit(oldp+107,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+112,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+116,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullCData(oldp+119,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+120,(vlSelf->top__DOT__axi_ls_u__DOT__lenthReg),8);
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullBit(oldp+122,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+123,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullQData(oldp+124,(((((((((- (QData)((IData)(
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
        tracep->fullQData(oldp+126,((((0U == (0x1fU 
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
        tracep->fullBit(oldp+128,(((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
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
        tracep->fullBit(oldp+129,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullBit(oldp+130,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+131,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+132,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+133,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+134,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+135,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+136,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+137,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+138,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullWData(oldp+144,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+148,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+152,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+156,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+160,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+168,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullWData(oldp+176,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+180,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+184,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+188,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+192,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+200,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullWData(oldp+208,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+216,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        VL_EXTEND_WQ(256,64, __Vtemp256, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp259[0U] = __Vtemp256[0U];
            __Vtemp259[1U] = __Vtemp256[1U];
            __Vtemp259[2U] = __Vtemp256[2U];
            __Vtemp259[3U] = __Vtemp256[3U];
            __Vtemp259[4U] = __Vtemp256[4U];
            __Vtemp259[5U] = __Vtemp256[5U];
            __Vtemp259[6U] = __Vtemp256[6U];
            __Vtemp259[7U] = __Vtemp256[7U];
        } else {
            __Vtemp259[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]);
            __Vtemp259[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]);
            __Vtemp259[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]);
            __Vtemp259[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]);
            __Vtemp259[4U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]);
            __Vtemp259[5U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]);
            __Vtemp259[6U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]);
            __Vtemp259[7U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]);
        }
        tracep->fullWData(oldp+217,(__Vtemp259),256);
        tracep->fullBit(oldp+225,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+226,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+228,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+229,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+230,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+231,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+232,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+237,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+242,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+243,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullCData(oldp+244,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+245,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullBit(oldp+246,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+247,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+248,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+249,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+253,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+255,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+262,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+263,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+264,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+266,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+269,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+270,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+271,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+273,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+274,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+275,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+276,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+277,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+279,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+280,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+281,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+282,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+283,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+284,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+285,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+287,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+290,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+291,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+292,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+294,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+296,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+300,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+301,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+302,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+303,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+304,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+305,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+306,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+307,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+308,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullCData(oldp+309,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+310,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+311,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+312,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+313,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+314,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+315,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullBit(oldp+316,(((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+317,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+318,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+321,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+323,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+325,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+327,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+330,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+331,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+332,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+335,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullBit(oldp+339,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+340,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullIData(oldp+341,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullCData(oldp+342,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        __Vtemp260[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp260[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp260[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp260[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+343,(__Vtemp260),128);
        __Vtemp261[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp261[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp261[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp261[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+347,(__Vtemp261),128);
        tracep->fullBit(oldp+351,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+352,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+353,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+354,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+355,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+356,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+357,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+358,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+366,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+367,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+368,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullCData(oldp+369,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+370,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+371,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+372,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullCData(oldp+373,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+374,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+375,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+377,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp262[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp262[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp262[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+378,(__Vtemp262),96);
        tracep->fullWData(oldp+381,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+384,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+385,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+386,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+387,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+388,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+389,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+391,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+392,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+393,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+394,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+395,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+396,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+397,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullBit(oldp+407,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            | ((1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))))));
        tracep->fullQData(oldp+408,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+410,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+412,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp264, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp265, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp266, __Vtemp264, __Vtemp265);
        VL_EXTEND_WI(65,1, __Vtemp267, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp268, __Vtemp266, __Vtemp267);
        tracep->fullBit(oldp+414,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp268[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+415,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+418,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+419,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+421,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+423,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+424,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+425,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+426,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp271, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp272, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp273, __Vtemp271, __Vtemp272);
        VL_EXTEND_WI(65,1, __Vtemp274, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp275, __Vtemp273, __Vtemp274);
        tracep->fullBit(oldp+428,((1U & __Vtemp275[2U])));
        tracep->fullBit(oldp+429,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+430,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+432,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+434,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+436,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+438,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+439,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+440,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+445,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+447,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+449,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+451,(((0x4000000U & 
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
        tracep->fullQData(oldp+453,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+455,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+456,(((((QData)((IData)(
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
        tracep->fullQData(oldp+458,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+460,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+461,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+462,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+463,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+465,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+467,((1U & ((0x200U & 
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
        tracep->fullBit(oldp+468,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+469,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        __Vtemp280[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xeU)) 
                                     | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp280[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__alures_ex 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp280[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                             << 2U));
        __Vtemp280[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp280[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp280[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp280[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp280[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+470,(__Vtemp280),226);
        tracep->fullBit(oldp+478,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullCData(oldp+479,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+480,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+481,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullIData(oldp+482,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+483,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+484,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullBit(oldp+485,(((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))));
        tracep->fullIData(oldp+486,((((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullCData(oldp+487,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullCData(oldp+488,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),3);
        tracep->fullCData(oldp+489,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+490,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+491,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+492,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp283, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp290[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp290[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp290[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp290[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp290[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp283[0U])
                               : 0U);
            __Vtemp290[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp283[1U])
                               : 0U);
            __Vtemp290[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp283[2U])
                               : 0U);
            __Vtemp290[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp283[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+493,(__Vtemp290),128);
        VL_EXTEND_WQ(128,64, __Vtemp293, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp300[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp300[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp300[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp300[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp300[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp293[0U])
                               : 0U);
            __Vtemp300[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp293[1U])
                               : 0U);
            __Vtemp300[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp293[2U])
                               : 0U);
            __Vtemp300[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp293[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+497,(__Vtemp300),128);
        tracep->fullBit(oldp+501,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+502,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+505,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+506,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+507,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+508,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+509,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+510,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+511,((((QData)((IData)(
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
        tracep->fullCData(oldp+513,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+514,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+522,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullQData(oldp+525,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+527,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+529,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+530,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+533,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+534,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp303, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp312[0U] = 0xffffffffU;
            __Vtemp312[1U] = 0xffffffffU;
            __Vtemp312[2U] = 0xffffffffU;
            __Vtemp312[3U] = 0xffffffffU;
        } else {
            __Vtemp312[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp303[0U])
                                   : 0U) : 0U);
            __Vtemp312[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp303[1U])
                                   : 0U) : 0U);
            __Vtemp312[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp303[2U])
                                   : 0U) : 0U);
            __Vtemp312[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp303[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+536,(__Vtemp312),128);
        VL_EXTEND_WQ(128,64, __Vtemp315, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp324[0U] = 0xffffffffU;
            __Vtemp324[1U] = 0xffffffffU;
            __Vtemp324[2U] = 0xffffffffU;
            __Vtemp324[3U] = 0xffffffffU;
        } else {
            __Vtemp324[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp315[0U])
                                   : 0U) : 0U);
            __Vtemp324[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp315[1U])
                                   : 0U) : 0U);
            __Vtemp324[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp315[2U])
                                   : 0U) : 0U);
            __Vtemp324[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp315[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+540,(__Vtemp324),128);
        tracep->fullBit(oldp+544,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+545,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+546,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+547,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                              >> 0x20U)))));
        tracep->fullBit(oldp+548,(((IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg) 
                                   & (0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)))));
        VL_EXTEND_WQ(128,64, __Vtemp327, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp337[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp327[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp337[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp327[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp337[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp327[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp337[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp327[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+549,(__Vtemp337),128);
        VL_EXTEND_WQ(128,64, __Vtemp340, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp350[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp340[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp350[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp340[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp350[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp340[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp350[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp340[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+553,(__Vtemp350),128);
        tracep->fullCData(oldp+557,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+558,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+568,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+578,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+580,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp355[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp355[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp355[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp355[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp355[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp355[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp355[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp355[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp355[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp355[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+582,(__Vtemp355),315);
        tracep->fullBit(oldp+592,(((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+593,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+595,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+597,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+599,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+601,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+603,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+605,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+607,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+609,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+611,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+613,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+615,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+617,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+619,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+621,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+623,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+625,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+627,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+629,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+631,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+633,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+635,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+637,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+639,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+641,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+643,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+645,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+647,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+649,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+651,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+653,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+655,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+657,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullQData(oldp+658,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+660,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+661,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+662,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        tracep->fullCData(oldp+663,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+664,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+665,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+666,(vlSelf->clk));
        tracep->fullBit(oldp+667,(vlSelf->rst_n));
        tracep->fullQData(oldp+668,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+670,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+672,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+673,(vlSelf->regA0),64);
        tracep->fullBit(oldp+675,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+676,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+677,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+678,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+680,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+681,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+682,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+683,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+684,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+685,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+686,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+687,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+688,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+689,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+690,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+691,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+692,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+693,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+695,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+696,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+697,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+698,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+699,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+700,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+702,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+703,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+704,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+705,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+706,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+707,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+708,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+709,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+710,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+711,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+712,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+713,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+714,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+716,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+717,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+718,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+719,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+720,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+721,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+722,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+723,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+724,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+725,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+726,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+728,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+729,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+730,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+731,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+732,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+733,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+734,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+735,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+736,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+737,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+738,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+739,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+740,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+741,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+743,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+744,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+745,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+746,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+747,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+748,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+750,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+751,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+752,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+753,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+754,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+755,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+756,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+757,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+758,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+759,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+760,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+761,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+762,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+764,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+765,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+766,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+767,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+768,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+769,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+770,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+771,(vlSelf->axi_mmio_b_user_i));
        tracep->fullBit(oldp+772,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+773,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+774,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+775,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+776,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+777,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+778,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+779,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+780,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullCData(oldp+781,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+782,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullBit(oldp+783,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+784,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+785,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+786,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+787,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+789,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+791,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullCData(oldp+792,(((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? ((2U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                          ? ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg)
                                                  ? 7U
                                                  : 1U)
                                              : (((IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg) 
                                                  & (0U 
                                                     == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)))
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
        tracep->fullBit(oldp+793,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+794,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+795,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+796,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+797,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+799,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+801,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))));
        tracep->fullBit(oldp+802,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
        tracep->fullBit(oldp+803,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
        tracep->fullBit(oldp+804,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
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
        tracep->fullCData(oldp+820,(0U),8);
        tracep->fullCData(oldp+821,(0xfU),4);
        tracep->fullCData(oldp+822,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+823,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+824,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+826,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+827,(1U));
        tracep->fullBit(oldp+828,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+829,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullCData(oldp+830,(vlSelf->top__DOT__fetchLenth),8);
        tracep->fullCData(oldp+831,(vlSelf->top__DOT__lsFetchLenth),8);
        tracep->fullBit(oldp+832,(0U));
        tracep->fullQData(oldp+833,(0ULL),64);
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
        tracep->fullCData(oldp+862,(1U),8);
        tracep->fullBit(oldp+863,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullIData(oldp+864,(0x121U),32);
    }
}
