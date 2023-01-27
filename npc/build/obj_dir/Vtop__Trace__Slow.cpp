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
        tracep->declBit(c+663,"clk", false,-1);
        tracep->declBit(c+664,"rst_n", false,-1);
        tracep->declQuad(c+665,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+667,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+669,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+670,"regA0", false,-1, 63,0);
        tracep->declBit(c+672,"stall_n_diff", false,-1);
        tracep->declBit(c+673,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+674,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+675,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+677,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+678,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+679,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+680,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+681,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+682,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+683,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+684,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+685,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+686,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+687,"axi_r_ready_o", false,-1);
        tracep->declBit(c+688,"axi_r_valid_i", false,-1);
        tracep->declBus(c+689,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+690,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+692,"axi_r_last_i", false,-1);
        tracep->declBus(c+693,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+694,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+695,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+696,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+697,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+699,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+700,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+701,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+702,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+703,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+704,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+705,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+706,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+707,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+708,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+709,"axi_w_ready_i", false,-1);
        tracep->declBit(c+710,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+711,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+713,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+714,"axi_w_last_o", false,-1);
        tracep->declBus(c+715,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+716,"axi_b_ready_o", false,-1);
        tracep->declBit(c+717,"axi_b_valid_i", false,-1);
        tracep->declBus(c+718,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+719,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+720,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+721,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+722,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+723,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+725,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+726,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+727,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+728,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+729,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+730,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+731,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+732,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+733,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+734,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+735,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+736,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+737,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+738,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+740,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+741,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+742,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+743,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+744,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+745,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+747,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+748,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+749,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+750,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+751,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+752,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+753,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+754,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+755,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+756,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+757,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+758,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+759,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+761,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+762,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+763,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+764,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+765,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+766,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+767,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+768,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+798,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+799,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+800,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+663,"top clk", false,-1);
        tracep->declBit(c+664,"top rst_n", false,-1);
        tracep->declQuad(c+665,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+667,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+669,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+670,"top regA0", false,-1, 63,0);
        tracep->declBit(c+672,"top stall_n_diff", false,-1);
        tracep->declBit(c+673,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+674,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+675,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+677,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+678,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+679,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+680,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+681,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+682,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+683,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+684,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+685,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+686,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+687,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+688,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+689,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+690,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+692,"top axi_r_last_i", false,-1);
        tracep->declBus(c+693,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+694,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+695,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+696,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+697,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+699,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+700,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+701,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+702,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+703,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+704,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+705,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+706,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+707,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+708,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+709,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+710,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+711,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+713,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+714,"top axi_w_last_o", false,-1);
        tracep->declBus(c+715,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+716,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+717,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+718,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+719,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+720,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+721,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+722,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+723,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+725,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+726,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+727,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+728,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+729,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+730,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+731,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+732,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+733,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+734,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+735,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+736,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+737,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+738,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+740,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+741,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+742,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+743,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+744,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+745,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+747,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+748,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+749,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+750,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+751,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+752,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+753,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+754,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+755,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+756,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+757,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+758,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+759,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+761,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+762,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+763,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+764,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+765,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+766,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+767,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+768,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+2,"top instr_fetching", false,-1);
        tracep->declBit(c+769,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+3,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+4,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+802,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+803,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+804,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+805,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+806,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+807,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+808,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+809,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+803,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+810,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+227,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+770,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+228,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+230,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+231,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+811,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+771,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+250,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+144,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+802,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+812,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+804,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+805,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+806,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+807,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+808,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+813,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+803,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+803,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+232,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+251,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+252,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+814,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+7,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+804,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+233,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+234,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+772,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+773,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+774,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+775,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+8,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+9,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+802,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+812,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+804,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+805,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+806,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+807,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+808,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+809,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+803,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+815,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+11,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+235,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+776,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+236,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+238,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+231,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+816,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+817,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+254,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+256,"top is_jump", false,-1);
        tracep->declQuad(c+257,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+259,"top pc_stall_n", false,-1);
        tracep->declBit(c+260,"top if_stall_n", false,-1);
        tracep->declBit(c+261,"top if_instr_valid", false,-1);
        tracep->declBit(c+819,"top sram_data_valid", false,-1);
        tracep->declQuad(c+262,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+264,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+820,"top sram_ren", false,-1);
        tracep->declBit(c+266,"top sram_addr_valid", false,-1);
        tracep->declBit(c+129,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+130,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+267,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+268,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+270,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+585,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+587,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+271,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+273,"top src1sel_id", false,-1);
        tracep->declBus(c+274,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+275,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+276,"top is_brc_id", false,-1);
        tracep->declBit(c+277,"top is_jal_id", false,-1);
        tracep->declBit(c+278,"top is_jalr_id", false,-1);
        tracep->declBit(c+279,"top wben_id", false,-1);
        tracep->declBus(c+280,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+281,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+259,"top id_stall_n", false,-1);
        tracep->declBit(c+282,"top DivEn_id", false,-1);
        tracep->declBus(c+283,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+284,"top in_trap_id", false,-1);
        tracep->declBit(c+285,"top out_trap_id", false,-1);
        tracep->declBit(c+286,"top trap_id", false,-1);
        tracep->declBit(c+287,"top ld_use_hazard", false,-1);
        tracep->declBit(c+288,"top id_flush", false,-1);
        tracep->declQuad(c+289,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+291,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+292,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+294,"top src1sel_ex", false,-1);
        tracep->declBus(c+295,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+296,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+298,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+300,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+302,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+304,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+305,"top is_brc_ex", false,-1);
        tracep->declBit(c+306,"top is_jal_ex", false,-1);
        tracep->declBit(c+307,"top is_jalr_ex", false,-1);
        tracep->declBit(c+308,"top wben_ex", false,-1);
        tracep->declBit(c+309,"top DivEn_ex", false,-1);
        tracep->declBus(c+310,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+311,"top trap_ex", false,-1);
        tracep->declBit(c+312,"top ex_stall_n", false,-1);
        tracep->declQuad(c+12,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+313,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+314,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+315,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+316,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+317,"top ex_flush", false,-1);
        tracep->declBit(c+318,"top rden_ls", false,-1);
        tracep->declBit(c+319,"top wren_ls", false,-1);
        tracep->declBit(c+320,"top ls_addr_ok_i", false,-1);
        tracep->declQuad(c+14,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+18,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+20,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+131,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+21,"top wben_ls", false,-1);
        tracep->declQuad(c+22,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+26,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+28,"top trap_ls", false,-1);
        tracep->declBit(c+321,"top ls_stall_n", false,-1);
        tracep->declBit(c+322,"top ls_not_ok", false,-1);
        tracep->declQuad(c+18,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+29,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+30,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+323,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+31,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+821,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+822,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+325,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+32,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+806,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+327,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+329,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+331,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+333,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+334,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+336,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+337,"top wben_wb", false,-1);
        tracep->declQuad(c+338,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+321,"top wb_stall_n", false,-1);
        tracep->declBit(c+340,"top rw_valid_i", false,-1);
        tracep->declBit(c+33,"top rw_ready_o", false,-1);
        tracep->declBus(c+823,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+230,"top rdLast_o", false,-1);
        tracep->declBus(c+34,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+228,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+239,"top dataValid_o", false,-1);
        tracep->declBit(c+341,"top dataNotOk", false,-1);
        tracep->declBit(c+342,"top DcacheRdValid", false,-1);
        tracep->declBit(c+343,"top DcacheWrValid", false,-1);
        tracep->declBit(c+35,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+824,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+238,"top lsRdLast", false,-1);
        tracep->declQuad(c+344,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+346,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+236,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+240,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+348,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+146,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+825,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+798,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+799,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+800,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+2,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+769,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+3,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+4,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+802,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+803,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+805,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+806,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+807,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+808,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+809,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+803,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+6,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+227,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+770,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+228,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+230,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+231,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+771,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+250,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+144,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+802,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+812,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+805,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+806,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+807,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+808,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+813,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+803,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+803,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+232,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+251,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+252,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+814,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+7,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+804,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+233,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+234,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+772,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+773,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+774,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+775,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+8,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+9,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+802,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+812,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+805,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+806,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+807,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+808,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+809,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+803,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+815,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+11,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+235,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+776,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+236,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+238,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+231,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+816,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+695,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+696,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+697,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+699,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+700,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+701,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+702,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+703,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+704,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+705,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+706,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+707,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+708,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+709,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+710,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+711,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+713,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+714,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+715,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+716,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+717,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+718,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+719,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+720,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+673,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+674,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+675,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+677,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+678,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+679,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+680,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+681,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+682,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+683,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+684,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+685,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+686,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+687,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+688,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+689,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+690,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+692,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+693,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+694,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+743,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+744,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+745,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+747,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+748,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+749,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+750,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+751,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+752,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+753,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+754,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+755,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+756,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+757,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+758,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+759,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+761,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+762,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+763,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+764,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+765,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+766,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+767,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+768,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+721,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+722,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+723,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+725,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+726,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+727,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+728,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+729,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+730,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+731,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+732,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+733,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+734,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+735,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+736,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+737,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+738,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+740,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+741,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+742,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+771,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+250,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+144,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+802,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+812,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+805,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+806,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+807,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+808,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+813,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+803,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+803,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+232,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+251,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+252,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+814,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+7,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+804,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+233,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+234,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+772,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+773,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+774,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+241,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+36,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+37,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+802,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+39,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+805,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+806,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+807,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+826,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+809,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+803,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+40,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+41,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+242,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+777,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+243,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+245,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+231,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+778,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+663,"top IF_u clk", false,-1);
        tracep->declBit(c+664,"top IF_u rst_n", false,-1);
        tracep->declBit(c+256,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+257,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+26,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+284,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+285,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+260,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+254,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+267,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+261,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+262,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+819,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+129,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+130,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+264,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+820,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+266,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+264,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+663,"top cache_dut clk", false,-1);
        tracep->declBit(c+664,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+349,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+266,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+808,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+827,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+829,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+260,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+129,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+133,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+130,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+262,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+340,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+33,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+823,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+230,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+34,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+228,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+239,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+802,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+830,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+831,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+806,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+832,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+350,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+246,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+42,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+43,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+44,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+154,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+158,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+162,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+166,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+351,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+355,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+351,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+355,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+359,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+360,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+361,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+45,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+47,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+48,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+49,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+50,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+52,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+54,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+55,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+779,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+780,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+781,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+782,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+56,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+57,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+833,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+834,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+362,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+170,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+178,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+783,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+785,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+363,"top cache_dut missEn", false,-1);
        tracep->declBit(c+364,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+58,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+60,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+365,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+366,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+374,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+835,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+798,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+836,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+835,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+154,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+663,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+375,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+376,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+837,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+377,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+351,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+378,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+359,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+841,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+835,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+798,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+836,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+835,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+158,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+663,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+375,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+376,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+837,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+377,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+355,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+378,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+359,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+841,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+835,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+798,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+836,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+835,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+162,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+663,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+379,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+380,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+837,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+381,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+351,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+382,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+360,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+841,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+835,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+798,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+836,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+835,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+166,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+663,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+379,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+380,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+837,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+381,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+355,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+382,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+360,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+841,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+798,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+799,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+800,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+663,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+664,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+340,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+33,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+228,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+61,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+823,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+230,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+239,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+769,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+3,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+4,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+802,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+803,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+805,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+806,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+807,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+808,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+809,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+803,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+810,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+227,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+770,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+228,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+230,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+231,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+845,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+807,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+846,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+847,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+63,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+247,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+3,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+6,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+4,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+848,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+803,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+808,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+805,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+806,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+663,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+664,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+254,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+267,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+259,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+288,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+268,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+270,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+383,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+385,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+849,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+850,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+663,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+664,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+259,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+386,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+389,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+663,"top ID_u clk", false,-1);
        tracep->declBit(c+664,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+268,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+327,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+333,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+270,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+334,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+336,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+337,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+587,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+585,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+271,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+273,"top ID_u src1sel", false,-1);
        tracep->declBus(c+274,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+275,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+278,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+277,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+276,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+279,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+280,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+281,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+670,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+282,"top ID_u DivEn", false,-1);
        tracep->declBus(c+283,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+286,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+284,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+285,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+392,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+271,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+587,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+585,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+268,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+270,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+280,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+281,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+392,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+273,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+274,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+275,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+278,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+277,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+276,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+279,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+282,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+283,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+286,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+284,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+285,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+393,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+394,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+395,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+396,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+392,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+271,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+663,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+327,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+333,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+280,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+587,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+281,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+585,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+336,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+334,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+337,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+670,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+599+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+270,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+291,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+287,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+663,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+664,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+312,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+317,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+268,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+270,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+271,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+585,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+587,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+275,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+278,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+277,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+276,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+273,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+274,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+279,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+280,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+281,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+282,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+283,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+286,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+289,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+291,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+296,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+298,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+300,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+304,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+307,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+306,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+305,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+294,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+295,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+308,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+315,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+316,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+309,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+310,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+311,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+397,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+399,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+400,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+401,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+402,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+403,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+404,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+851,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+850,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+663,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+664,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+312,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+589,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+405,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+304,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+298,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+296,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+300,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+289,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+291,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+307,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+306,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+305,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+294,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+295,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+313,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+314,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+18,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+334,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+309,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+310,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+292,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+257,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+302,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+256,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+415,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+318,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+319,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+320,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+416,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+418,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+420,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+302,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+304,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+416,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+418,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+309,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+310,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+292,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+422,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+423,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+424,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+426,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+427,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+429,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+431,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+431,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+432,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+433,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+434,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+436,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+437,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+438,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+440,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+442,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+444,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+416,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+427,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+426,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+429,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+436,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+423,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+437,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+446,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+433,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+431,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+432,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+426,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+431,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+447,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+416,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+448,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+432,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+431,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+434,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+449,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+451,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+453,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+455,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+457,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+459,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+461,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+416,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+418,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+310,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+444,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+420,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+302,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+307,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+306,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+305,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+463,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+300,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+289,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+257,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+256,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+464,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+466,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+852,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+468,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+469,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+470,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+471,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+473,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+475,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+663,"top forwarding_u clk", false,-1);
        tracep->declBit(c+664,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+315,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+316,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+64,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+336,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+21,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+337,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+334,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+321,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+313,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+314,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+12,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+12,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+65,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+66,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+134,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+476,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+135,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+136,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+477,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+137,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+663,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+664,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+289,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+302,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+291,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+292,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+308,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+311,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+321,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+14,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+16,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+20,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+18,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+21,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+28,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+853,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+850,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+663,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+664,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+321,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+478,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+67,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+663,"top ls_u clk", false,-1);
        tracep->declBit(c+664,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+14,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+18,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+20,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+329,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+333,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+331,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+131,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+26,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+322,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+18,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+29,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+30,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+323,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+31,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+32,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+806,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+341,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+341,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+325,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+30,"top ls_u wren", false,-1);
        tracep->declBit(c+29,"top ls_u rden", false,-1);
        tracep->declBus(c+75,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+323,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+486,"top ls_u wren_last", false,-1);
        tracep->declBit(c+663,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+664,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+30,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+29,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+75,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+323,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+18,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+329,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+486,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+131,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+322,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+18,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+29,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+30,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+323,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+31,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+32,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+806,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+341,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+341,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+325,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+325,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+76,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+77,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+78,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+79,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+80,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+81,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+82,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+806,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+487,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+488,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+489,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+32,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+31,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+83,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+84,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+85,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+86,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+20,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+333,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+331,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+30,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+29,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+75,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+323,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+138,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+663,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+664,"top ls_u CSR_u rst_n", false,-1);
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
        tracep->declBit(c+663,"top Dcache_u clk", false,-1);
        tracep->declBit(c+664,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+490,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+491,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+108,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+492,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+323,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+31,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+321,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+320,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+493,"top Dcache_u data_ok_o", false,-1);
        tracep->declBit(c+341,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+325,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+342,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+35,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+824,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+238,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+494,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+787,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declQuad(c+236,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+240,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+348,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+343,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+146,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+825,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+802,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+830,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+831,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+806,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+832,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+495,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+788,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+496,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+497,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+498,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+186,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+190,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+194,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+198,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+499,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+503,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+499,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+503,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+507,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+508,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+139,"top Dcache_u reqCancel", false,-1);
        tracep->declBit(c+109,"top Dcache_u validFlag", false,-1);
        tracep->declBit(c+509,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+510,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+512,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+513,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+514,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+110,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+112,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+140,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+141,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+789,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+790,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+791,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+792,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+142,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+143,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+854,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+855,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+114,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBit(c+115,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+515,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+202,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+210,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+793,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+795,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+516,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+517,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+518,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBus(c+218,"top Dcache_u randomBit", false,-1, 31,0);
        tracep->declBit(c+116,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+520,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+521,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+529,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+117,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+118,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+119,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+121,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+122,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+124,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+530,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+531,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+532,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+534,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+535,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+537,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+541,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+537,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+541,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+545,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+546,"top Dcache_u rdMiss", false,-1);
        tracep->declBus(c+801,"top Dcache_u randomBit2", false,-1, 31,0);
        tracep->declBit(c+126,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+797,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+343,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+808,"top Dcache_u uncache", false,-1);
        tracep->declBus(c+787,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBus(c+835,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+798,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+836,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+835,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+186,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+663,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+547,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+548,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+549,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+553,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+499,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+554,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+507,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+537,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+835,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+798,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+836,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+835,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+190,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+663,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+547,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+548,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+555,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+553,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+503,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+554,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+507,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+541,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+835,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+798,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+836,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+835,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+194,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+663,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+559,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+560,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+549,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+561,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+499,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+562,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+508,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+537,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+835,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+798,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+836,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+835,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+198,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+663,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+559,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+560,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+555,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+561,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+503,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+562,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+508,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+541,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+798,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+799,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+800,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+663,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+664,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+342,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+35,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+236,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+344,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+824,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+238,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+240,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+343,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+348,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+146,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+825,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+814,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+346,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+771,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+250,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+144,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+802,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+812,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+805,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+806,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+807,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+808,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+813,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+803,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+803,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+232,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+251,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+252,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+814,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+7,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+804,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+233,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+234,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+772,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+773,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+774,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+775,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+8,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+9,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+802,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+812,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+805,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+806,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+807,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+808,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+809,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+803,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+815,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+11,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+235,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+776,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+236,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+238,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+231,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+816,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+845,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+807,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+846,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+847,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+563,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+248,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+250,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+251,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+233,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+856,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+7,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+144,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+219,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+127,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+845,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+807,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+846,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+847,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+128,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+249,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+8,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+11,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+9,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+848,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+812,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+808,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+805,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+806,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+564,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+663,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+664,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+14,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+20,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+18,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+131,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+21,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+22,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+321,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+327,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+333,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+329,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+331,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+337,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+338,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+857,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+850,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+663,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+664,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+321,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+565,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+575,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+327,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+333,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+329,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+331,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+338,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+336,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+334,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+663,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+664,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+287,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+256,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+284,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+285,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+261,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+322,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+260,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+259,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+259,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+312,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+321,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+321,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+288,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+317,"top pipline_ctrl_u ex_flush", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp257;
    VlWide<4>/*127:0*/ __Vtemp258;
    VlWide<3>/*95:0*/ __Vtemp259;
    VlWide<3>/*95:0*/ __Vtemp261;
    VlWide<3>/*95:0*/ __Vtemp262;
    VlWide<3>/*95:0*/ __Vtemp263;
    VlWide<3>/*95:0*/ __Vtemp264;
    VlWide<3>/*95:0*/ __Vtemp265;
    VlWide<3>/*95:0*/ __Vtemp268;
    VlWide<3>/*95:0*/ __Vtemp269;
    VlWide<3>/*95:0*/ __Vtemp270;
    VlWide<3>/*95:0*/ __Vtemp271;
    VlWide<3>/*95:0*/ __Vtemp272;
    VlWide<8>/*255:0*/ __Vtemp277;
    VlWide<4>/*127:0*/ __Vtemp280;
    VlWide<4>/*127:0*/ __Vtemp287;
    VlWide<4>/*127:0*/ __Vtemp290;
    VlWide<4>/*127:0*/ __Vtemp297;
    VlWide<4>/*127:0*/ __Vtemp300;
    VlWide<4>/*127:0*/ __Vtemp309;
    VlWide<4>/*127:0*/ __Vtemp312;
    VlWide<4>/*127:0*/ __Vtemp321;
    VlWide<4>/*127:0*/ __Vtemp324;
    VlWide<4>/*127:0*/ __Vtemp334;
    VlWide<4>/*127:0*/ __Vtemp337;
    VlWide<4>/*127:0*/ __Vtemp347;
    VlWide<10>/*319:0*/ __Vtemp352;
    VlWide<4>/*127:0*/ __Vtemp353;
    VlWide<4>/*127:0*/ __Vtemp354;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullBit(oldp+2,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+3,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+6,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+7,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt))));
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
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__Dcache_u__DOT__validFlag));
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+114,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__Dcache_u__DOT__missFlag));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+128,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullBit(oldp+129,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+130,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullQData(oldp+131,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+133,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullBit(oldp+134,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+135,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+136,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+137,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+138,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+139,(((((IData)(vlSelf->top__DOT__Dcache_u__DOT__validFlag) 
                                     & (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    & (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))) 
                                   & (IData)(vlSelf->top__DOT__ls_stall_n))));
        tracep->fullBit(oldp+140,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+141,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+142,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+143,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        if ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)) {
            __Vtemp256[0U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U];
            __Vtemp256[1U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U];
            __Vtemp256[2U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U];
            __Vtemp256[3U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U];
            __Vtemp256[4U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U];
            __Vtemp256[5U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U];
            __Vtemp256[6U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U];
            __Vtemp256[7U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U];
        } else {
            __Vtemp256[0U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U];
            __Vtemp256[1U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U];
            __Vtemp256[2U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U];
            __Vtemp256[3U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U];
            __Vtemp256[4U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U];
            __Vtemp256[5U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U];
            __Vtemp256[6U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U];
            __Vtemp256[7U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U];
        }
        tracep->fullWData(oldp+146,(__Vtemp256),256);
        tracep->fullWData(oldp+154,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+158,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+162,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+166,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+170,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+178,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullWData(oldp+186,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+190,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+194,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+198,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+202,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+210,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullIData(oldp+218,(vlSelf->top__DOT__Dcache_u__DOT__randomBit),32);
        tracep->fullWData(oldp+219,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullBit(oldp+227,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+228,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+230,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+231,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+232,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+233,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_b_valid));
        tracep->fullBit(oldp+235,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+236,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+239,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+246,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+247,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullCData(oldp+248,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+249,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullBit(oldp+250,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+251,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+257,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+259,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+266,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+267,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+268,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+270,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+273,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+274,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+275,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+276,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+279,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+280,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+281,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+282,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+283,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+284,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+285,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+289,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+291,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+294,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+295,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+296,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+298,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+300,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+304,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+305,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+306,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+307,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+308,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+309,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+310,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+311,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+312,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullCData(oldp+313,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+314,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+315,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+316,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+317,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+318,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+319,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullBit(oldp+320,(((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+321,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+322,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+327,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+329,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+331,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+333,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+334,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+336,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+337,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+338,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+340,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+341,((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))));
        tracep->fullBit(oldp+342,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+343,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullQData(oldp+344,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+346,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+348,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullIData(oldp+349,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullCData(oldp+350,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        __Vtemp257[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp257[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp257[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp257[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+351,(__Vtemp257),128);
        __Vtemp258[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp258[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp258[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp258[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+355,(__Vtemp258),128);
        tracep->fullBit(oldp+359,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+361,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+362,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+363,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+364,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+365,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+366,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+374,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+375,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+376,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullCData(oldp+377,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+378,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+379,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+380,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullCData(oldp+381,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+382,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+383,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+385,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp259[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp259[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp259[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+386,(__Vtemp259),96);
        tracep->fullWData(oldp+389,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+392,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+393,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+394,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+395,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+396,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+397,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+399,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+400,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+401,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+402,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+403,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+404,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+405,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullBit(oldp+415,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            | ((1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))))));
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+420,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp261, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp262, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp263, __Vtemp261, __Vtemp262);
        VL_EXTEND_WI(65,1, __Vtemp264, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp265, __Vtemp263, __Vtemp264);
        tracep->fullBit(oldp+422,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp265[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+423,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+424,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+426,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+427,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+429,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+431,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+432,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+433,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+434,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp268, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp269, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp270, __Vtemp268, __Vtemp269);
        VL_EXTEND_WI(65,1, __Vtemp271, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp272, __Vtemp270, __Vtemp271);
        tracep->fullBit(oldp+436,((1U & __Vtemp272[2U])));
        tracep->fullBit(oldp+437,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+438,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+440,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+442,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+444,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+446,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+447,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+448,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+449,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+451,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+453,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+455,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+457,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+459,(((0x4000000U & 
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
        tracep->fullQData(oldp+461,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+463,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+464,(((((QData)((IData)(
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
        tracep->fullQData(oldp+466,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+468,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+469,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+470,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+471,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+473,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+475,((1U & ((0x200U & 
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
        tracep->fullBit(oldp+476,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+477,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        __Vtemp277[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xeU)) 
                                     | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp277[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__alures_ex 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp277[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                             << 2U));
        __Vtemp277[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp277[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp277[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp277[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp277[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+478,(__Vtemp277),226);
        tracep->fullBit(oldp+486,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullCData(oldp+487,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+488,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+489,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullIData(oldp+490,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+491,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+492,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullBit(oldp+493,(((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))));
        tracep->fullIData(oldp+494,((((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullCData(oldp+495,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+496,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+497,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+498,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp280, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp287[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp287[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp287[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp287[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp287[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp280[0U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U]);
            __Vtemp287[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp280[1U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U]);
            __Vtemp287[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp280[2U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U]);
            __Vtemp287[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp280[3U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U]);
        }
        tracep->fullWData(oldp+499,(__Vtemp287),128);
        VL_EXTEND_WQ(128,64, __Vtemp290, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp297[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp297[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp297[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp297[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp297[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp290[0U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U]);
            __Vtemp297[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp290[1U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U]);
            __Vtemp297[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp290[2U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U]);
            __Vtemp297[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp290[3U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U]);
        }
        tracep->fullWData(oldp+503,(__Vtemp297),128);
        tracep->fullBit(oldp+507,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+508,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+509,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+512,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+513,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+514,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+515,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+516,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+517,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+518,((((QData)((IData)(
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
        tracep->fullCData(oldp+520,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+521,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+529,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+530,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+531,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+532,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+534,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+535,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp300, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp309[0U] = 0xffffffffU;
            __Vtemp309[1U] = 0xffffffffU;
            __Vtemp309[2U] = 0xffffffffU;
            __Vtemp309[3U] = 0xffffffffU;
        } else {
            __Vtemp309[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp300[0U])
                                   : 0U) : 0xffffffffU);
            __Vtemp309[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp300[1U])
                                   : 0U) : 0xffffffffU);
            __Vtemp309[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp300[2U])
                                   : 0U) : 0xffffffffU);
            __Vtemp309[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp300[3U])
                                   : 0U) : 0xffffffffU);
        }
        tracep->fullWData(oldp+537,(__Vtemp309),128);
        VL_EXTEND_WQ(128,64, __Vtemp312, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp321[0U] = 0xffffffffU;
            __Vtemp321[1U] = 0xffffffffU;
            __Vtemp321[2U] = 0xffffffffU;
            __Vtemp321[3U] = 0xffffffffU;
        } else {
            __Vtemp321[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp312[0U])
                                   : 0U) : 0xffffffffU);
            __Vtemp321[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp312[1U])
                                   : 0U) : 0xffffffffU);
            __Vtemp321[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp312[2U])
                                   : 0U) : 0xffffffffU);
            __Vtemp321[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp312[3U])
                                   : 0U) : 0xffffffffU);
        }
        tracep->fullWData(oldp+541,(__Vtemp321),128);
        tracep->fullBit(oldp+545,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+546,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+547,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))));
        tracep->fullBit(oldp+548,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        VL_EXTEND_WQ(128,64, __Vtemp324, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp334[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp324[0U])
                                                    : 0U)
                                                : 0xffffffffU)));
        __Vtemp334[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp324[1U])
                                                    : 0U)
                                                : 0xffffffffU)));
        __Vtemp334[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp324[2U])
                                                    : 0U)
                                                : 0xffffffffU)));
        __Vtemp334[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp324[3U])
                                                    : 0U)
                                                : 0xffffffffU)));
        tracep->fullWData(oldp+549,(__Vtemp334),128);
        tracep->fullCData(oldp+553,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+554,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
        VL_EXTEND_WQ(128,64, __Vtemp337, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp347[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp337[0U])
                                                    : 0U)
                                                : 0xffffffffU)));
        __Vtemp347[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp337[1U])
                                                    : 0U)
                                                : 0xffffffffU)));
        __Vtemp347[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp337[2U])
                                                    : 0U)
                                                : 0xffffffffU)));
        __Vtemp347[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp337[3U])
                                                    : 0U)
                                                : 0xffffffffU)));
        tracep->fullWData(oldp+555,(__Vtemp347),128);
        tracep->fullBit(oldp+559,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
        tracep->fullBit(oldp+560,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+561,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+562,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
        tracep->fullCData(oldp+563,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+564,((0x38U & ((IData)(vlSelf->top__DOT__DcacheRdAddr) 
                                              << 3U))),6);
        tracep->fullWData(oldp+565,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+575,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+585,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+587,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp352[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp352[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp352[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp352[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp352[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp352[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp352[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp352[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp352[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp352[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+589,(__Vtemp352),315);
        tracep->fullQData(oldp+599,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+601,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+603,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+605,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+607,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+609,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+611,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+613,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+615,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+617,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+619,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+621,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+623,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+625,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+627,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+629,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+631,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+633,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+635,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+637,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+639,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+641,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+643,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+645,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+647,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+649,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+651,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+653,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+655,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+657,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+659,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+661,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+663,(vlSelf->clk));
        tracep->fullBit(oldp+664,(vlSelf->rst_n));
        tracep->fullQData(oldp+665,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+667,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+669,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+670,(vlSelf->regA0),64);
        tracep->fullBit(oldp+672,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+673,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+674,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+675,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+677,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+678,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+679,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+680,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+681,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+682,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+683,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+684,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+685,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+686,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+687,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+688,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+689,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+690,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+692,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+693,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+694,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+695,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+696,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+697,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+699,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+700,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+701,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+702,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+703,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+704,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+705,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+706,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+707,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+708,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+709,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+710,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+711,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+713,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+714,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+715,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+716,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+717,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+718,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+719,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+720,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+721,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+722,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+723,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+725,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+726,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+727,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+728,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+729,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+730,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+731,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+732,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+733,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+734,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+735,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+736,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+737,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+738,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+740,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+741,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+742,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+743,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+744,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+745,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+747,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+748,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+749,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+750,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+751,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+752,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+753,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+754,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+755,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+756,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+757,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+758,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+759,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+761,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+762,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+763,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+764,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+765,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+766,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+767,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+768,(vlSelf->axi_mmio_b_user_i));
        tracep->fullBit(oldp+769,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+770,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+771,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullCData(oldp+772,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+773,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+774,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+775,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+776,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullCData(oldp+777,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+778,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullBit(oldp+779,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+780,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+781,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+782,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+783,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+785,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+787,(((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
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
        tracep->fullCData(oldp+788,(((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? ((2U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                          ? ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg)
                                                  ? 7U
                                                  : 1U)
                                              : 0U)
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
                                                    (((((IData)(vlSelf->top__DOT__Dcache_u__DOT__validFlag) 
                                                        & (1U 
                                                           == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                       & (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))) 
                                                      & (IData)(vlSelf->top__DOT__ls_stall_n))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)
                                                       ? 
                                                      ((((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                                                         & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                                        | ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
                                                           & (~ (IData)(
                                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                         >> 0x20U)))))
                                                        ? 1U
                                                        : 0U)
                                                       : 2U))
                                                     : 
                                                    (((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                                                      & (IData)(vlSelf->top__DOT__ls_stall_n))
                                                      ? 1U
                                                      : 0U))))),3);
        tracep->fullBit(oldp+789,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+790,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & (vlSelf->top__DOT__Dcache_u__DOT__randomBit 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+791,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                      ? (0x1fffffU 
                                         & ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                             ? vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))]
                                             : (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0xbU))))
                                      : 0U)),21);
        tracep->fullIData(oldp+792,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                      ? (0x1fffffU 
                                         & ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                             ? (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0xbU))
                                             : vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))]))
                                      : 0U)),21);
        tracep->fullQData(oldp+793,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+795,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
                                      : 7ULL)),64);
        tracep->fullBit(oldp+797,((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U))) 
                                     & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                    & (((~ vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                        & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 5U)))))) 
                                       | (vlSelf->top__DOT__Dcache_u__DOT__randomBit 
                                          & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                     >> 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 5U)))))))) 
                                   | ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (~ (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 0x20U)))) 
                                       & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                      & (((~ vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                     >> 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 5U)))))) 
                                         | (vlSelf->top__DOT__Dcache_u__DOT__randomBit 
                                            & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                       >> 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                   >> 5U)))))))))));
        tracep->fullIData(oldp+798,(0x40U),32);
        tracep->fullIData(oldp+799,(4U),32);
        tracep->fullIData(oldp+800,(8U),32);
        tracep->fullIData(oldp+801,(1U),32);
        tracep->fullCData(oldp+802,(0U),3);
        tracep->fullCData(oldp+803,(0U),4);
        tracep->fullBit(oldp+804,(0U));
        tracep->fullCData(oldp+805,(3U),8);
        tracep->fullCData(oldp+806,(3U),3);
        tracep->fullCData(oldp+807,(1U),2);
        tracep->fullBit(oldp+808,(0U));
        tracep->fullCData(oldp+809,(2U),4);
        tracep->fullCData(oldp+810,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+811,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+812,(1U),4);
        tracep->fullCData(oldp+813,(0xfU),4);
        tracep->fullCData(oldp+814,(0xffU),8);
        tracep->fullCData(oldp+815,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+816,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+817,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+819,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+820,(1U));
        tracep->fullBit(oldp+821,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+822,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullCData(oldp+823,(vlSelf->top__DOT__fetchLenth),8);
        tracep->fullCData(oldp+824,(vlSelf->top__DOT__lsFetchLenth),8);
        tracep->fullCData(oldp+825,(4U),8);
        tracep->fullBit(oldp+826,(0U));
        tracep->fullQData(oldp+827,(0ULL),64);
        tracep->fullCData(oldp+829,(0U),8);
        tracep->fullCData(oldp+830,(1U),3);
        tracep->fullCData(oldp+831,(2U),3);
        tracep->fullCData(oldp+832,(7U),3);
        tracep->fullBit(oldp+833,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+834,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+835,(0x80U),32);
        tracep->fullIData(oldp+836,(6U),32);
        __Vtemp353[0U] = 0U;
        __Vtemp353[1U] = 0U;
        __Vtemp353[2U] = 0U;
        __Vtemp353[3U] = 0U;
        tracep->fullWData(oldp+837,(__Vtemp353),128);
        __Vtemp354[0U] = 0xffffffffU;
        __Vtemp354[1U] = 0xffffffffU;
        __Vtemp354[2U] = 0xffffffffU;
        __Vtemp354[3U] = 0xffffffffU;
        tracep->fullWData(oldp+841,(__Vtemp354),128);
        tracep->fullCData(oldp+845,(0U),2);
        tracep->fullCData(oldp+846,(3U),2);
        tracep->fullCData(oldp+847,(2U),2);
        tracep->fullIData(oldp+848,(3U),32);
        tracep->fullIData(oldp+849,(0x60U),32);
        tracep->fullIData(oldp+850,(0U),32);
        tracep->fullIData(oldp+851,(0x13bU),32);
        tracep->fullBit(oldp+852,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+853,(0xe2U),32);
        tracep->fullBit(oldp+854,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+855,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+856,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullIData(oldp+857,(0x121U),32);
    }
}
