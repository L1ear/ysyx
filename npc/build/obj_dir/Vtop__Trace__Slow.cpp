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
        tracep->declBus(c+796,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+796,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+796,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+796,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+797,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+799,"top AXI_USER_WIDTH", false,-1, 31,0);
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
        tracep->declBit(c+94,"top instr_fetching", false,-1);
        tracep->declBit(c+570,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+95,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+96,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+800,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+801,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+802,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+803,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+804,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+805,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+806,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+807,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+801,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+808,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+98,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+591,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+784,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+592,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+594,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+595,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+809,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+785,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+99,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+2,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+800,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+810,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+802,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+803,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+804,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+805,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+806,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+811,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+801,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+801,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+596,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+100,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+101,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+812,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+103,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+802,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+597,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+598,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+786,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+787,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+788,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+571,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+104,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+105,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+800,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+810,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+802,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+803,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+804,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+805,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+806,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+807,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+801,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+813,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+107,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+599,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+789,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+600,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+602,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+595,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+814,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+815,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+108,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+110,"top is_jump", false,-1);
        tracep->declQuad(c+111,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+113,"top pc_stall_n", false,-1);
        tracep->declBit(c+114,"top if_stall_n", false,-1);
        tracep->declBit(c+115,"top if_instr_valid", false,-1);
        tracep->declBit(c+817,"top sram_data_valid", false,-1);
        tracep->declQuad(c+116,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+118,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+818,"top sram_ren", false,-1);
        tracep->declBit(c+120,"top sram_addr_valid", false,-1);
        tracep->declBit(c+121,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+122,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+123,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+124,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+126,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+577,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+579,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+127,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+129,"top src1sel_id", false,-1);
        tracep->declBus(c+130,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+131,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+132,"top is_brc_id", false,-1);
        tracep->declBit(c+133,"top is_jal_id", false,-1);
        tracep->declBit(c+134,"top is_jalr_id", false,-1);
        tracep->declBit(c+135,"top wben_id", false,-1);
        tracep->declBus(c+136,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+137,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+113,"top id_stall_n", false,-1);
        tracep->declBit(c+138,"top DivEn_id", false,-1);
        tracep->declBus(c+139,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+140,"top in_trap_id", false,-1);
        tracep->declBit(c+141,"top out_trap_id", false,-1);
        tracep->declBit(c+142,"top trap_id", false,-1);
        tracep->declBit(c+143,"top ld_use_hazard", false,-1);
        tracep->declBit(c+144,"top id_flush", false,-1);
        tracep->declQuad(c+145,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+147,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+148,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+150,"top src1sel_ex", false,-1);
        tracep->declBus(c+151,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+152,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+154,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+156,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+158,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+160,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+161,"top is_brc_ex", false,-1);
        tracep->declBit(c+162,"top is_jal_ex", false,-1);
        tracep->declBit(c+163,"top is_jalr_ex", false,-1);
        tracep->declBit(c+164,"top wben_ex", false,-1);
        tracep->declBit(c+165,"top DivEn_ex", false,-1);
        tracep->declBus(c+166,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+167,"top trap_ex", false,-1);
        tracep->declBit(c+168,"top ex_stall_n", false,-1);
        tracep->declQuad(c+169,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+171,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+172,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+173,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+174,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+175,"top ex_flush", false,-1);
        tracep->declBit(c+176,"top rden_ls", false,-1);
        tracep->declBit(c+177,"top wren_ls", false,-1);
        tracep->declBit(c+178,"top ls_addr_ok_i", false,-1);
        tracep->declQuad(c+179,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+181,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+183,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+185,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+186,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+188,"top wben_ls", false,-1);
        tracep->declQuad(c+189,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+191,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+193,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+195,"top trap_ls", false,-1);
        tracep->declBit(c+196,"top ls_stall_n", false,-1);
        tracep->declBit(c+197,"top ls_not_ok", false,-1);
        tracep->declQuad(c+183,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+198,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+199,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+200,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+202,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+819,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+820,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+203,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+205,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+804,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+206,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+208,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+210,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+212,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+213,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+215,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+216,"top wben_wb", false,-1);
        tracep->declQuad(c+217,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+196,"top wb_stall_n", false,-1);
        tracep->declBit(c+219,"top rw_valid_i", false,-1);
        tracep->declBit(c+220,"top rw_ready_o", false,-1);
        tracep->declBus(c+821,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+594,"top rdLast_o", false,-1);
        tracep->declBus(c+221,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+592,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+603,"top dataValid_o", false,-1);
        tracep->declBit(c+222,"top dataNotOk", false,-1);
        tracep->declBit(c+223,"top DcacheRdValid", false,-1);
        tracep->declBit(c+224,"top DcacheWrValid", false,-1);
        tracep->declBit(c+225,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+822,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+602,"top lsRdLast", false,-1);
        tracep->declQuad(c+226,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+228,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+600,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+604,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+230,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+77,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+823,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+796,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+796,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+796,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+796,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+797,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+799,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+94,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+570,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+95,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+96,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+800,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+801,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+802,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+803,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+804,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+805,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+806,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+807,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+801,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+808,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+98,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+591,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+784,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+592,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+594,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+595,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+809,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+785,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+99,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+2,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+800,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+802,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+803,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+804,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+805,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+806,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+811,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+801,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+801,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+596,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+100,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+101,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+812,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+103,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+802,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+597,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+598,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+786,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+787,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+788,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+571,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+104,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+105,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+800,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+802,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+803,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+804,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+805,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+806,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+807,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+801,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+813,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+107,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+599,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+789,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+600,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+602,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+595,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+814,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
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
        tracep->declBit(c+99,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+2,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+800,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+802,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+803,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+804,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+805,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+806,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+811,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+801,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+801,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+596,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+100,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+101,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+812,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+103,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+802,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+597,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+598,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+786,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+787,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+788,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+605,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+231,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+232,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+800,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+234,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+802,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+803,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+804,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+805,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+824,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+807,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+801,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+235,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+236,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+606,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+790,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+607,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+609,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+595,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+791,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+678,"top IF_u clk", false,-1);
        tracep->declBit(c+679,"top IF_u rst_n", false,-1);
        tracep->declBit(c+110,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+111,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+191,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+193,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+140,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+141,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+114,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+108,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+123,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+115,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+116,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+817,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+121,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+122,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+118,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+818,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+120,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+118,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+678,"top cache_dut clk", false,-1);
        tracep->declBit(c+679,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+237,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+120,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+806,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+825,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+827,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+114,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+121,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+238,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+122,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+116,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+219,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+220,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+821,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+594,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+221,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+592,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+603,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+800,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+828,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+829,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+804,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+830,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+239,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+610,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+240,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+241,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+242,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+4,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+8,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+12,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+16,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+243,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+247,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+243,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+247,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+251,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+252,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+253,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+254,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+256,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+257,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+258,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+259,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+261,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+263,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+264,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+572,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+573,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+574,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+575,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+265,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+266,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+831,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+832,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+267,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+20,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+28,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+85,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+87,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+268,"top cache_dut missEn", false,-1);
        tracep->declBit(c+269,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+270,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+272,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+273,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+274,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+282,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+833,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+796,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+834,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+833,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+4,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+283,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+284,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+835,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+285,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+243,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+286,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+251,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+839,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+833,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+796,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+834,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+833,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+8,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+283,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+284,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+835,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+285,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+247,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+286,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+251,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+839,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+833,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+796,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+834,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+833,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+12,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+287,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+288,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+835,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+289,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+243,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+290,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+252,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+839,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+833,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+796,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+834,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+833,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+16,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+287,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+288,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+835,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+289,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+247,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+290,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+252,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+839,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+796,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+796,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+796,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+796,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+797,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+799,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+678,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+679,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+219,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+220,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+592,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+291,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+821,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+594,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+603,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+94,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+570,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+95,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+96,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+800,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+801,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+802,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+803,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+804,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+805,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+806,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+807,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+801,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+808,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+98,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+591,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+784,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+592,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+594,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+595,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+809,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+843,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+805,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+844,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+845,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+293,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+611,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+95,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+98,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+96,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+846,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+801,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+806,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+803,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+804,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+678,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+679,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+108,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+123,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+113,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+144,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+124,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+126,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+294,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+296,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+847,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+848,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+678,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+679,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+113,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+297,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+300,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+678,"top ID_u clk", false,-1);
        tracep->declBit(c+679,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+124,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+206,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+212,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+126,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+213,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+215,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+216,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+579,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+577,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+127,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+129,"top ID_u src1sel", false,-1);
        tracep->declBus(c+130,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+131,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+134,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+133,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+132,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+135,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+136,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+137,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+685,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+138,"top ID_u DivEn", false,-1);
        tracep->declBus(c+139,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+142,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+140,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+141,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+303,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+127,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+579,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+577,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+124,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+126,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+136,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+137,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+303,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+129,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+130,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+131,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+134,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+133,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+132,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+135,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+138,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+139,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+142,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+140,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+141,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+304,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+305,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+306,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+307,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+303,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+127,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+678,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+206,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+212,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+136,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+579,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+137,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+577,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+215,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+213,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+216,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+685,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+614+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+126,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+147,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+143,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+678,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+679,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+168,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+175,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+124,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+126,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+127,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+577,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+579,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+131,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+134,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+133,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+132,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+129,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+130,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+135,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+136,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+137,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+138,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+139,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+142,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+145,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+147,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+152,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+154,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+156,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+160,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+163,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+162,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+161,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+150,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+151,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+164,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+173,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+174,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+165,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+166,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+167,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+308,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+310,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+311,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+312,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+313,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+314,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+315,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+849,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+848,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+678,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+679,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+168,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+581,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+316,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+160,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+154,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+152,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+156,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+145,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+147,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+163,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+162,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+161,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+150,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+151,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+171,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+172,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+183,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+213,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+169,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+165,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+166,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+148,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+111,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+158,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+110,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+326,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+176,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+177,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+178,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+327,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+329,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+331,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+158,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+160,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+327,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+329,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+165,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+166,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+148,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+333,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+334,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+335,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+337,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+338,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+340,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+342,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+342,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+343,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+344,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+345,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+347,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+348,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+349,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+351,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+353,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+355,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+327,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+338,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+337,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+340,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+347,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+334,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+348,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+357,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+344,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+342,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+343,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+337,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+342,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+358,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+327,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+359,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+343,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+342,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+345,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+360,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+362,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+364,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+366,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+368,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+370,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+372,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+327,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+329,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+166,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+355,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+331,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+158,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+163,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+162,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+161,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+374,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+156,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+145,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+111,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+110,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+375,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+377,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+850,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+379,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+380,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+381,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+382,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+384,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+386,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+678,"top forwarding_u clk", false,-1);
        tracep->declBit(c+679,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+173,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+174,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+387,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+215,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+188,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+216,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+213,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+196,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+171,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+172,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+169,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+169,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+388,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+389,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+390,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+391,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+392,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+393,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+394,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+395,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+678,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+679,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+145,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+158,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+147,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+148,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+164,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+167,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+196,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+179,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+181,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+185,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+183,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+188,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+195,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+851,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+848,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+678,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+679,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+196,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+396,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+404,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+678,"top ls_u clk", false,-1);
        tracep->declBit(c+679,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+179,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+183,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+181,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+185,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+208,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+212,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+210,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+195,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+186,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+189,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+191,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+193,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+197,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+183,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+198,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+199,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+200,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+202,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+205,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+804,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+222,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+222,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+203,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+199,"top ls_u wren", false,-1);
        tracep->declBit(c+198,"top ls_u rden", false,-1);
        tracep->declBus(c+412,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+200,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+413,"top ls_u wren_last", false,-1);
        tracep->declBit(c+678,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+679,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+199,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+198,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+412,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+200,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+183,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+179,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+208,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+413,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+186,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+197,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+183,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+198,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+199,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+200,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+202,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+205,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+804,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+222,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+222,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+203,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+203,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+414,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+415,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+416,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+417,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+418,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+419,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+420,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+804,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+421,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+422,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+423,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+205,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+202,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+424,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+425,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+426,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+427,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+185,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+212,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+181,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+210,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+199,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+198,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+412,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+200,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+428,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+678,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+679,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+179,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+185,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+183,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+195,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+189,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+191,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+193,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+429,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+430,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+431,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+432,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+433,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+434,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+435,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+436,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+437,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+183,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+438,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+440,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+442,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+193,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+191,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+444,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+446,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+448,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+678,"top Dcache_u clk", false,-1);
        tracep->declBit(c+679,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+450,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+451,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+452,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+453,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+200,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+202,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+196,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+178,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+454,"top Dcache_u data_ok_o", false,-1);
        tracep->declBit(c+222,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+203,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+223,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+225,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+822,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+602,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+455,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+456,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declQuad(c+600,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+604,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+230,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+224,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+77,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+823,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+800,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+828,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+829,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+804,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+830,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+457,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+576,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+458,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+459,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+460,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+36,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+40,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+44,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+48,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+461,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+465,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+461,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+465,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+469,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+470,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+471,"top Dcache_u reqCancel", false,-1);
        tracep->declBit(c+472,"top Dcache_u validFlag", false,-1);
        tracep->declBit(c+473,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+474,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+476,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+477,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+478,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+479,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+481,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+483,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+484,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+792,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+793,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+794,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+795,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+485,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+486,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+852,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+853,"top Dcache_u validWay2_q", false,-1);
        tracep->declBit(c+487,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+52,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+60,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+89,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+91,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+488,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+489,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+490,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBus(c+68,"top Dcache_u randomBit", false,-1, 31,0);
        tracep->declBit(c+492,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+493,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+494,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+502,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+503,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+504,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+505,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+507,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+508,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+510,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+512,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+513,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+514,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+516,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+517,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+519,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+523,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+519,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+523,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+527,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+528,"top Dcache_u rdMiss", false,-1);
        tracep->declBus(c+799,"top Dcache_u randomBit2", false,-1, 31,0);
        tracep->declBit(c+529,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+93,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+224,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+806,"top Dcache_u uncache", false,-1);
        tracep->declBus(c+456,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBus(c+833,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+796,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+834,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+833,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+36,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+530,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+531,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+532,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+536,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+461,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+537,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+469,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+519,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+833,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+796,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+834,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+833,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+40,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+530,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+531,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+538,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+536,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+465,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+537,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+469,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+523,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+833,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+796,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+834,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+833,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+44,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+542,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+543,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+532,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+544,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+461,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+545,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+470,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+519,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+833,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+796,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+834,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+833,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+48,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+678,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+542,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+543,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+538,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+544,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+465,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+545,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+470,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+523,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+796,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+796,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+796,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+796,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+797,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+798,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+799,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+678,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+679,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+223,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+225,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+600,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+226,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+822,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+602,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+604,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+224,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+230,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+77,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+823,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+812,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+228,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+785,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+99,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+2,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+800,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+802,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+803,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+804,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+805,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+806,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+811,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+801,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+801,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+596,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+100,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+101,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+812,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+103,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+802,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+597,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+598,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+786,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+787,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+788,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+571,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+104,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+105,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+800,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+802,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+803,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+804,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+805,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+806,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+807,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+801,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+813,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+107,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+599,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+789,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+600,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+602,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+595,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+814,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+843,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+805,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+844,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+845,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+546,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+612,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+99,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+100,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+597,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+854,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+103,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+2,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+69,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+547,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+843,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+805,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+844,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+845,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+548,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+613,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+104,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+107,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+105,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+846,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+810,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+806,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+803,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+804,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+549,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+678,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+679,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+179,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+185,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+183,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+186,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+188,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+189,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+196,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+206,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+212,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+208,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+210,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+216,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+217,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+855,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+848,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+678,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+679,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+196,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+550,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+560,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+206,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+212,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+208,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+210,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+217,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+215,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+213,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+678,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+679,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+143,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+110,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+140,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+141,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+115,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+197,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+114,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+113,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+113,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+168,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+196,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+196,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+144,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+175,"top pipline_ctrl_u ex_flush", false,-1);
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
    VlWide<8>/*255:0*/ __Vtemp254;
    VlWide<4>/*127:0*/ __Vtemp255;
    VlWide<4>/*127:0*/ __Vtemp256;
    VlWide<3>/*95:0*/ __Vtemp257;
    VlWide<3>/*95:0*/ __Vtemp259;
    VlWide<3>/*95:0*/ __Vtemp260;
    VlWide<3>/*95:0*/ __Vtemp261;
    VlWide<3>/*95:0*/ __Vtemp262;
    VlWide<3>/*95:0*/ __Vtemp263;
    VlWide<3>/*95:0*/ __Vtemp266;
    VlWide<3>/*95:0*/ __Vtemp267;
    VlWide<3>/*95:0*/ __Vtemp268;
    VlWide<3>/*95:0*/ __Vtemp269;
    VlWide<3>/*95:0*/ __Vtemp270;
    VlWide<8>/*255:0*/ __Vtemp275;
    VlWide<4>/*127:0*/ __Vtemp278;
    VlWide<4>/*127:0*/ __Vtemp285;
    VlWide<4>/*127:0*/ __Vtemp288;
    VlWide<4>/*127:0*/ __Vtemp295;
    VlWide<4>/*127:0*/ __Vtemp298;
    VlWide<4>/*127:0*/ __Vtemp307;
    VlWide<4>/*127:0*/ __Vtemp310;
    VlWide<4>/*127:0*/ __Vtemp319;
    VlWide<4>/*127:0*/ __Vtemp322;
    VlWide<4>/*127:0*/ __Vtemp332;
    VlWide<4>/*127:0*/ __Vtemp335;
    VlWide<4>/*127:0*/ __Vtemp345;
    VlWide<10>/*319:0*/ __Vtemp350;
    VlWide<4>/*127:0*/ __Vtemp351;
    VlWide<4>/*127:0*/ __Vtemp352;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullQData(oldp+2,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullWData(oldp+4,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+8,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+12,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+16,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+20,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+28,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullWData(oldp+36,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+40,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+44,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+48,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+52,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+60,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullIData(oldp+68,(vlSelf->top__DOT__Dcache_u__DOT__randomBit),32);
        tracep->fullWData(oldp+69,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        if (vlSelf->top__DOT__Dcache_u__DOT__replaceWay) {
            __Vtemp254[0U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U];
            __Vtemp254[1U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U];
            __Vtemp254[2U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U];
            __Vtemp254[3U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U];
            __Vtemp254[4U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U];
            __Vtemp254[5U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U];
            __Vtemp254[6U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U];
            __Vtemp254[7U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U];
        } else {
            __Vtemp254[0U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U];
            __Vtemp254[1U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U];
            __Vtemp254[2U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U];
            __Vtemp254[3U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U];
            __Vtemp254[4U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U];
            __Vtemp254[5U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U];
            __Vtemp254[6U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U];
            __Vtemp254[7U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U];
        }
        tracep->fullWData(oldp+77,(__Vtemp254),256);
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
        tracep->fullQData(oldp+89,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+91,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+93,((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U))) 
                                    & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                   & (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceWay)) 
                                       & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)))))) 
                                      | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceWay) 
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
        tracep->fullBit(oldp+94,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+95,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+98,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+99,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+100,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+103,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt))));
        tracep->fullBit(oldp+104,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
        tracep->fullBit(oldp+107,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+111,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+113,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+120,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+121,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+122,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+123,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+124,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+126,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+130,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+131,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+136,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+137,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+139,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+145,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+147,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+150,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+151,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+152,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+154,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+156,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+160,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+161,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+162,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+163,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+164,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+165,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+166,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+167,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+168,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+171,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+172,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+173,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+174,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+175,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+176,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+177,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullBit(oldp+178,(((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullQData(oldp+179,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+181,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+183,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+185,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+186,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+188,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+195,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+196,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+197,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+198,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+199,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+202,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullCData(oldp+205,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+206,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+208,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+210,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+212,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+215,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+216,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+217,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+219,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+220,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullIData(oldp+221,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullBit(oldp+222,(((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                      | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (~ (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0x20U)))) 
                                      & (((IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit) 
                                          & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1)) 
                                         | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__way2Hit) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2)))))));
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+225,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+230,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+231,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+234,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+235,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullIData(oldp+237,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+238,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+239,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        __Vtemp255[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp255[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp255[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp255[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+243,(__Vtemp255),128);
        __Vtemp256[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp256[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp256[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp256[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+247,(__Vtemp256),128);
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+253,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+256,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+257,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+258,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+259,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+263,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+264,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+265,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+266,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+267,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+268,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+269,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+270,((((QData)((IData)(
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
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullCData(oldp+273,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+274,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+282,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+283,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+284,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullCData(oldp+285,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+286,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+288,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullCData(oldp+289,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+290,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+291,((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 0xbU)) 
                                                      << 0xbU) 
                                                     | (0x7e0U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                    >> 5U)) 
                                                           << 5U)))))),64);
        tracep->fullCData(oldp+293,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullQData(oldp+294,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+296,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp257[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp257[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp257[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+297,(__Vtemp257),96);
        tracep->fullWData(oldp+300,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+303,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+304,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+305,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+306,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+307,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+308,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+310,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+311,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+312,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+313,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+314,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+315,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+316,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullBit(oldp+326,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            | ((1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))))));
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp259, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp260, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp261, __Vtemp259, __Vtemp260);
        VL_EXTEND_WI(65,1, __Vtemp262, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp263, __Vtemp261, __Vtemp262);
        tracep->fullBit(oldp+333,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp263[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+338,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+340,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+342,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+343,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+344,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp266, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp267, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp268, __Vtemp266, __Vtemp267);
        VL_EXTEND_WI(65,1, __Vtemp269, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp270, __Vtemp268, __Vtemp269);
        tracep->fullBit(oldp+347,((1U & __Vtemp270[2U])));
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+349,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+351,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+353,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+355,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+357,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+358,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+359,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+360,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+362,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+364,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+366,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+368,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+370,(((0x4000000U & 
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
        tracep->fullQData(oldp+372,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+374,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+375,(((((QData)((IData)(
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
        tracep->fullQData(oldp+377,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+379,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+380,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+381,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+382,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+384,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+386,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+387,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+388,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+389,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+390,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+391,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+392,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+393,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+394,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+395,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        __Vtemp275[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xeU)) 
                                     | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp275[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__alures_ex 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp275[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                             << 2U));
        __Vtemp275[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp275[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp275[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp275[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp275[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+396,(__Vtemp275),226);
        tracep->fullWData(oldp+404,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+412,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+413,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+414,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+415,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+416,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+417,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+418,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+419,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+420,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+421,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+422,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+423,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+424,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+425,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+426,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+427,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+428,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+429,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+430,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+431,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+432,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+433,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+434,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+435,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+436,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+437,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+438,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+440,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+442,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+446,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+448,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullIData(oldp+450,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+451,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+452,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+453,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullBit(oldp+454,(((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))));
        tracep->fullIData(oldp+455,((((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullIData(oldp+456,(((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceWay)
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
        tracep->fullCData(oldp+457,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+458,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+459,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+460,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp278, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp285[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp285[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp285[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp285[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp285[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp278[0U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U]);
            __Vtemp285[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp278[1U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U]);
            __Vtemp285[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp278[2U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U]);
            __Vtemp285[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp278[3U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U]);
        }
        tracep->fullWData(oldp+461,(__Vtemp285),128);
        VL_EXTEND_WQ(128,64, __Vtemp288, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp295[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp295[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp295[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp295[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp295[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp288[0U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U]);
            __Vtemp295[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp288[1U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U]);
            __Vtemp295[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp288[2U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U]);
            __Vtemp295[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp288[3U])
                               : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U]);
        }
        tracep->fullWData(oldp+465,(__Vtemp295),128);
        tracep->fullBit(oldp+469,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+470,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+471,(((((IData)(vlSelf->top__DOT__Dcache_u__DOT__validFlag) 
                                     & (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    & (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))) 
                                   & (IData)(vlSelf->top__DOT__ls_stall_n))));
        tracep->fullBit(oldp+472,(vlSelf->top__DOT__Dcache_u__DOT__validFlag));
        tracep->fullBit(oldp+473,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+474,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+476,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+477,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+478,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+479,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+481,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullBit(oldp+483,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+484,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+485,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+486,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+487,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+488,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+489,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+490,((((QData)((IData)(
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
        tracep->fullBit(oldp+492,(vlSelf->top__DOT__Dcache_u__DOT__missFlag));
        tracep->fullCData(oldp+493,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+494,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+502,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+503,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+504,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullCData(oldp+507,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+508,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+512,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+513,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+514,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+516,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp298, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp307[0U] = 0xffffffffU;
            __Vtemp307[1U] = 0xffffffffU;
            __Vtemp307[2U] = 0xffffffffU;
            __Vtemp307[3U] = 0xffffffffU;
        } else {
            __Vtemp307[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp298[0U])
                                   : 0U) : 0xffffffffU);
            __Vtemp307[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp298[1U])
                                   : 0U) : 0xffffffffU);
            __Vtemp307[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp298[2U])
                                   : 0U) : 0xffffffffU);
            __Vtemp307[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp298[3U])
                                   : 0U) : 0xffffffffU);
        }
        tracep->fullWData(oldp+519,(__Vtemp307),128);
        VL_EXTEND_WQ(128,64, __Vtemp310, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp319[0U] = 0xffffffffU;
            __Vtemp319[1U] = 0xffffffffU;
            __Vtemp319[2U] = 0xffffffffU;
            __Vtemp319[3U] = 0xffffffffU;
        } else {
            __Vtemp319[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp310[0U])
                                   : 0U) : 0xffffffffU);
            __Vtemp319[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp310[1U])
                                   : 0U) : 0xffffffffU);
            __Vtemp319[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp310[2U])
                                   : 0U) : 0xffffffffU);
            __Vtemp319[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp310[3U])
                                   : 0U) : 0xffffffffU);
        }
        tracep->fullWData(oldp+523,(__Vtemp319),128);
        tracep->fullBit(oldp+527,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+528,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+529,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+530,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))));
        tracep->fullBit(oldp+531,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        VL_EXTEND_WQ(128,64, __Vtemp322, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp332[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp322[0U])
                                                    : 0U)
                                                : 0xffffffffU)));
        __Vtemp332[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp322[1U])
                                                    : 0U)
                                                : 0xffffffffU)));
        __Vtemp332[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp322[2U])
                                                    : 0U)
                                                : 0xffffffffU)));
        __Vtemp332[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp322[3U])
                                                    : 0U)
                                                : 0xffffffffU)));
        tracep->fullWData(oldp+532,(__Vtemp332),128);
        tracep->fullCData(oldp+536,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+537,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
        VL_EXTEND_WQ(128,64, __Vtemp335, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp345[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp335[0U])
                                                    : 0U)
                                                : 0xffffffffU)));
        __Vtemp345[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp335[1U])
                                                    : 0U)
                                                : 0xffffffffU)));
        __Vtemp345[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp335[2U])
                                                    : 0U)
                                                : 0xffffffffU)));
        __Vtemp345[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp335[3U])
                                                    : 0U)
                                                : 0xffffffffU)));
        tracep->fullWData(oldp+538,(__Vtemp345),128);
        tracep->fullBit(oldp+542,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
        tracep->fullBit(oldp+543,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+544,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+545,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
        tracep->fullCData(oldp+546,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+547,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+548,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+549,((0x38U & ((IData)(vlSelf->top__DOT__DcacheRdAddr) 
                                              << 3U))),6);
        tracep->fullWData(oldp+550,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+560,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+570,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullBit(oldp+571,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullBit(oldp+572,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+573,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+574,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+575,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullCData(oldp+576,(((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullQData(oldp+577,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+579,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp350[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp350[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp350[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp350[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp350[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp350[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp350[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp350[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp350[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp350[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+581,(__Vtemp350),315);
        tracep->fullBit(oldp+591,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+592,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+594,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+595,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+596,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+597,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+598,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_b_valid));
        tracep->fullBit(oldp+599,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+600,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+602,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+603,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+604,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+605,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+606,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+607,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+609,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+610,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+611,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
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
        tracep->fullBit(oldp+792,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & vlSelf->top__DOT__Dcache_u__DOT__randomBit)));
        tracep->fullBit(oldp+793,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__Dcache_u__DOT__randomBit))));
        tracep->fullIData(oldp+794,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+795,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullIData(oldp+796,(0x40U),32);
        tracep->fullIData(oldp+797,(4U),32);
        tracep->fullIData(oldp+798,(8U),32);
        tracep->fullIData(oldp+799,(1U),32);
        tracep->fullCData(oldp+800,(0U),3);
        tracep->fullCData(oldp+801,(0U),4);
        tracep->fullBit(oldp+802,(0U));
        tracep->fullCData(oldp+803,(3U),8);
        tracep->fullCData(oldp+804,(3U),3);
        tracep->fullCData(oldp+805,(1U),2);
        tracep->fullBit(oldp+806,(0U));
        tracep->fullCData(oldp+807,(2U),4);
        tracep->fullCData(oldp+808,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+809,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+810,(1U),4);
        tracep->fullCData(oldp+811,(0xfU),4);
        tracep->fullCData(oldp+812,(0xffU),8);
        tracep->fullCData(oldp+813,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+814,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+815,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+817,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+818,(1U));
        tracep->fullBit(oldp+819,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+820,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullCData(oldp+821,(vlSelf->top__DOT__fetchLenth),8);
        tracep->fullCData(oldp+822,(vlSelf->top__DOT__lsFetchLenth),8);
        tracep->fullCData(oldp+823,(4U),8);
        tracep->fullBit(oldp+824,(0U));
        tracep->fullQData(oldp+825,(0ULL),64);
        tracep->fullCData(oldp+827,(0U),8);
        tracep->fullCData(oldp+828,(1U),3);
        tracep->fullCData(oldp+829,(2U),3);
        tracep->fullCData(oldp+830,(7U),3);
        tracep->fullBit(oldp+831,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+832,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+833,(0x80U),32);
        tracep->fullIData(oldp+834,(6U),32);
        __Vtemp351[0U] = 0U;
        __Vtemp351[1U] = 0U;
        __Vtemp351[2U] = 0U;
        __Vtemp351[3U] = 0U;
        tracep->fullWData(oldp+835,(__Vtemp351),128);
        __Vtemp352[0U] = 0xffffffffU;
        __Vtemp352[1U] = 0xffffffffU;
        __Vtemp352[2U] = 0xffffffffU;
        __Vtemp352[3U] = 0xffffffffU;
        tracep->fullWData(oldp+839,(__Vtemp352),128);
        tracep->fullCData(oldp+843,(0U),2);
        tracep->fullCData(oldp+844,(3U),2);
        tracep->fullCData(oldp+845,(2U),2);
        tracep->fullIData(oldp+846,(3U),32);
        tracep->fullIData(oldp+847,(0x60U),32);
        tracep->fullIData(oldp+848,(0U),32);
        tracep->fullIData(oldp+849,(0x13bU),32);
        tracep->fullBit(oldp+850,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+851,(0xe2U),32);
        tracep->fullBit(oldp+852,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+853,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+854,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullIData(oldp+855,(0x121U),32);
    }
}
