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
        tracep->declBit(c+670,"clk", false,-1);
        tracep->declBit(c+671,"rst_n", false,-1);
        tracep->declQuad(c+672,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+674,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+676,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+677,"regA0", false,-1, 63,0);
        tracep->declBit(c+679,"stall_n_diff", false,-1);
        tracep->declBit(c+680,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+681,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+682,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+684,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+685,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+686,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+687,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+688,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+689,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+690,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+691,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+692,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+693,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+694,"axi_r_ready_o", false,-1);
        tracep->declBit(c+695,"axi_r_valid_i", false,-1);
        tracep->declBus(c+696,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+697,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+699,"axi_r_last_i", false,-1);
        tracep->declBus(c+700,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+701,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+702,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+703,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+704,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+706,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+707,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+708,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+709,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+710,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+711,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+712,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+713,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+714,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+715,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+716,"axi_w_ready_i", false,-1);
        tracep->declBit(c+717,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+718,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+720,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+721,"axi_w_last_o", false,-1);
        tracep->declBus(c+722,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+723,"axi_b_ready_o", false,-1);
        tracep->declBit(c+724,"axi_b_valid_i", false,-1);
        tracep->declBus(c+725,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+726,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+727,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+728,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+729,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+730,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+732,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+733,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+734,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+735,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+736,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+737,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+738,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+739,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+740,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+741,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+742,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+743,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+744,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+745,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+747,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+748,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+749,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+750,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+751,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+752,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+754,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+755,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+756,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+757,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+758,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+759,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+760,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+761,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+762,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+763,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+764,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+765,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+766,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+768,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+769,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+770,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+771,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+772,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+773,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+774,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+775,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+801,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+802,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+803,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+804,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+670,"top clk", false,-1);
        tracep->declBit(c+671,"top rst_n", false,-1);
        tracep->declQuad(c+672,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+674,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+676,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+677,"top regA0", false,-1, 63,0);
        tracep->declBit(c+679,"top stall_n_diff", false,-1);
        tracep->declBit(c+680,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+681,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+682,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+684,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+685,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+686,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+687,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+688,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+689,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+690,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+691,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+692,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+693,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+694,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+695,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+696,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+697,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+699,"top axi_r_last_i", false,-1);
        tracep->declBus(c+700,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+701,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+702,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+703,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+704,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+706,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+707,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+708,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+709,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+710,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+711,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+712,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+713,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+714,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+715,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+716,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+717,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+718,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+720,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+721,"top axi_w_last_o", false,-1);
        tracep->declBus(c+722,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+723,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+724,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+725,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+726,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+727,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+728,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+729,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+730,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+732,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+733,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+734,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+735,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+736,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+737,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+738,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+739,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+740,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+741,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+742,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+743,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+744,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+745,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+747,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+748,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+749,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+750,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+751,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+752,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+754,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+755,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+756,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+757,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+758,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+759,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+760,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+761,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+762,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+763,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+764,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+765,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+766,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+768,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+769,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+770,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+771,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+772,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+773,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+774,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+775,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+84,"top instr_fetching", false,-1);
        tracep->declBit(c+553,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+85,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+86,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+805,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+806,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+807,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+808,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+809,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+810,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+811,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+812,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+806,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+813,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+88,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+576,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+776,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+577,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+579,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+580,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+814,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+777,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+89,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+2,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+805,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+815,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+807,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+816,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+805,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+810,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+811,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+817,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+806,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+806,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+581,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+90,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+91,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+93,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+94,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+807,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+95,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+778,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+779,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+780,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+781,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+554,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+96,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+97,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+805,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+815,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+807,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+808,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+809,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+810,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+811,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+812,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+806,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+818,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+99,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+582,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+782,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+583,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+585,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+580,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+819,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+820,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+100,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+102,"top is_jump", false,-1);
        tracep->declQuad(c+103,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+105,"top pc_stall_n", false,-1);
        tracep->declBit(c+106,"top if_stall_n", false,-1);
        tracep->declBit(c+107,"top if_instr_valid", false,-1);
        tracep->declBit(c+822,"top sram_data_valid", false,-1);
        tracep->declQuad(c+108,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+110,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+823,"top sram_ren", false,-1);
        tracep->declBit(c+112,"top sram_addr_valid", false,-1);
        tracep->declBit(c+113,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+114,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+115,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+116,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+118,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+560,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+562,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+119,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+121,"top src1sel_id", false,-1);
        tracep->declBus(c+122,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+123,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+124,"top is_brc_id", false,-1);
        tracep->declBit(c+125,"top is_jal_id", false,-1);
        tracep->declBit(c+126,"top is_jalr_id", false,-1);
        tracep->declBit(c+127,"top wben_id", false,-1);
        tracep->declBus(c+128,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+129,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+105,"top id_stall_n", false,-1);
        tracep->declBit(c+130,"top DivEn_id", false,-1);
        tracep->declBus(c+131,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+132,"top in_trap_id", false,-1);
        tracep->declBit(c+133,"top out_trap_id", false,-1);
        tracep->declBit(c+134,"top trap_id", false,-1);
        tracep->declBit(c+135,"top ld_use_hazard", false,-1);
        tracep->declBit(c+136,"top id_flush", false,-1);
        tracep->declQuad(c+137,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+139,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+140,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+142,"top src1sel_ex", false,-1);
        tracep->declBus(c+143,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+144,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+146,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+148,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+150,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+152,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+153,"top is_brc_ex", false,-1);
        tracep->declBit(c+154,"top is_jal_ex", false,-1);
        tracep->declBit(c+155,"top is_jalr_ex", false,-1);
        tracep->declBit(c+156,"top wben_ex", false,-1);
        tracep->declBit(c+157,"top DivEn_ex", false,-1);
        tracep->declBus(c+158,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+159,"top trap_ex", false,-1);
        tracep->declBit(c+160,"top ex_stall_n", false,-1);
        tracep->declQuad(c+161,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+163,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+164,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+165,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+166,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+167,"top ex_flush", false,-1);
        tracep->declBit(c+168,"top rden_ls", false,-1);
        tracep->declBit(c+169,"top wren_ls", false,-1);
        tracep->declBit(c+170,"top ls_addr_ok_i", false,-1);
        tracep->declQuad(c+171,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+173,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+175,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+177,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+178,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+180,"top wben_ls", false,-1);
        tracep->declQuad(c+181,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+183,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+185,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+187,"top trap_ls", false,-1);
        tracep->declBit(c+188,"top ls_stall_n", false,-1);
        tracep->declBit(c+189,"top ls_not_ok", false,-1);
        tracep->declQuad(c+175,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+190,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+191,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+192,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+194,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+824,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+825,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+195,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+197,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+809,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+198,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+200,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+202,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+204,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+205,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+207,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+208,"top wben_wb", false,-1);
        tracep->declQuad(c+209,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+188,"top wb_stall_n", false,-1);
        tracep->declBit(c+211,"top rw_valid_i", false,-1);
        tracep->declBit(c+212,"top rw_ready_o", false,-1);
        tracep->declBus(c+826,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+579,"top rdLast_o", false,-1);
        tracep->declBus(c+213,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+577,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+586,"top dataValid_o", false,-1);
        tracep->declBit(c+214,"top dataNotOk", false,-1);
        tracep->declBit(c+215,"top DcacheRdValid", false,-1);
        tracep->declBit(c+216,"top DcacheWrValid", false,-1);
        tracep->declBit(c+217,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+827,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+585,"top lsRdLast", false,-1);
        tracep->declQuad(c+218,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+662,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+583,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+587,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+220,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+76,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+221,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+801,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+802,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+803,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+804,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+84,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+553,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+85,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+86,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+805,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+806,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+807,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+808,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+809,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+811,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+812,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+806,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+813,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+88,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+576,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+776,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+577,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+579,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+580,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+814,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+777,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+89,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+2,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+805,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+815,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+807,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+816,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+805,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+811,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+817,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+806,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+806,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+581,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+90,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+91,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+93,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+94,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+807,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+95,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+778,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+779,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+780,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+781,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+554,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+96,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+97,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+805,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+815,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+807,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+808,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+809,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+811,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+812,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+806,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+99,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+582,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+782,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+583,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+585,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+580,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+819,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+702,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+703,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+704,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+706,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+707,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+708,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+709,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+710,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+711,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+712,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+713,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+714,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+715,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+716,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+717,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+718,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+720,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+721,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+722,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+723,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+724,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+725,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+726,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+727,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+680,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+681,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+682,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+684,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+685,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+686,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+687,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+688,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+689,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+690,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+691,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+692,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+693,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+694,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+695,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+696,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+697,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+699,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+700,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+701,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+750,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+751,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+752,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+754,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+755,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+756,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+757,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+758,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+759,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+760,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+761,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+762,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+763,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+764,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+765,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+766,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+768,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+769,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+770,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+771,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+772,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+773,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+774,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+775,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+728,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+729,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+730,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+732,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+733,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+734,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+735,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+736,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+737,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+738,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+739,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+740,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+741,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+742,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+743,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+744,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+745,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+747,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+748,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+749,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+777,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+89,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+2,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+805,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+815,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+807,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+816,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+805,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+811,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+817,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+806,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+806,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+581,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+90,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+91,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+93,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+94,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+807,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+95,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+778,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+779,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+780,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+781,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+588,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+222,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+223,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+805,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+225,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+807,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+808,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+809,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+828,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+812,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+806,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+226,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+227,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+589,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+783,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+590,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+592,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+580,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+784,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+670,"top IF_u clk", false,-1);
        tracep->declBit(c+671,"top IF_u rst_n", false,-1);
        tracep->declBit(c+102,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+103,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+183,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+185,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+132,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+133,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+106,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+100,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+115,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+107,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+108,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+822,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+113,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+114,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+110,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+823,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+112,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+110,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+670,"top cache_dut clk", false,-1);
        tracep->declBit(c+671,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+228,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+112,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+811,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+829,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+816,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+106,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+113,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+229,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+114,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+108,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+211,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+212,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+826,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+579,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+213,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+577,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+586,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+805,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+831,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+832,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+809,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+833,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+230,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+593,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+231,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+232,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+233,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+4,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+8,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+12,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+16,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+234,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+238,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+234,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+238,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+242,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+243,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+244,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+245,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+247,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+248,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+249,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+250,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+252,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+254,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+255,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+555,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+556,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+557,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+558,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+256,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+257,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+834,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+835,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+258,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+20,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+28,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+785,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+787,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+259,"top cache_dut missEn", false,-1);
        tracep->declBit(c+260,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+261,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+263,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+264,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+265,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+273,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+836,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+801,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+837,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+836,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+4,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+670,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+274,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+275,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+838,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+276,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+234,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+277,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+242,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+842,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+836,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+801,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+837,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+836,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+8,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+670,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+274,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+275,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+838,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+276,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+238,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+277,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+242,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+842,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+836,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+801,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+837,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+836,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+12,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+670,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+278,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+279,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+838,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+280,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+234,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+281,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+243,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+842,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+836,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+801,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+837,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+836,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+16,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+670,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+278,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+279,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+838,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+280,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+238,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+281,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+243,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+842,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+801,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+802,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+803,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+804,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+670,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+671,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+211,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+212,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+577,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+282,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+826,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+579,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+586,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+84,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+553,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+85,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+86,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+805,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+806,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+807,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+808,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+809,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+811,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+812,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+806,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+813,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+88,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+576,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+776,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+577,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+579,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+580,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+814,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+846,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+810,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+847,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+848,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+284,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+594,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+85,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+88,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+86,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+849,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+806,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+808,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+809,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+670,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+671,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+100,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+115,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+105,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+136,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+116,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+118,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+285,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+287,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+850,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+851,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+670,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+671,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+105,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+288,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+291,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+670,"top ID_u clk", false,-1);
        tracep->declBit(c+671,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+116,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+198,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+204,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+118,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+205,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+207,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+208,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+562,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+560,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+119,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+121,"top ID_u src1sel", false,-1);
        tracep->declBus(c+122,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+123,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+126,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+125,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+124,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+127,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+128,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+129,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+677,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+130,"top ID_u DivEn", false,-1);
        tracep->declBus(c+131,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+134,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+132,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+133,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+294,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+119,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+562,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+560,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+116,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+118,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+128,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+129,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+294,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+121,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+122,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+123,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+126,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+125,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+124,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+127,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+130,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+131,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+134,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+132,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+133,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+295,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+296,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+297,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+298,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+294,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+119,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+670,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+198,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+204,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+128,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+562,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+129,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+560,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+207,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+205,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+208,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+677,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+597+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+118,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+139,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+135,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+670,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+671,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+160,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+167,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+116,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+118,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+119,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+560,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+562,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+123,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+126,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+125,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+124,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+121,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+122,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+127,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+128,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+129,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+130,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+131,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+134,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+137,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+139,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+144,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+146,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+148,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+152,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+155,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+154,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+153,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+142,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+143,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+156,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+165,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+166,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+157,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+158,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+159,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+299,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+301,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+302,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+303,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+304,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+305,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+306,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+852,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+851,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+670,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+671,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+160,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+564,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+307,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+152,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+146,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+144,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+148,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+137,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+139,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+155,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+154,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+153,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+142,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+143,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+163,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+164,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+175,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+205,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+161,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+157,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+158,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+140,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+103,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+150,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+102,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+317,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+168,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+169,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+170,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+318,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+320,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+322,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+150,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+152,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+318,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+320,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+157,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+158,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+140,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+324,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+325,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+326,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+328,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+329,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+331,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+333,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+333,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+334,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+335,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+336,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+338,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+339,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+340,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+342,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+344,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+346,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+318,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+329,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+328,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+331,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+338,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+325,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+339,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+348,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+335,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+333,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+334,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+328,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+333,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+349,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+318,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+350,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+334,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+333,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+336,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+351,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+353,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+355,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+357,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+359,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+361,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+363,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+318,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+320,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+158,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+346,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+322,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+150,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+155,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+154,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+153,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+365,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+148,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+137,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+103,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+102,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+366,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+368,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+853,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+370,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+371,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+372,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+373,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+375,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+377,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+670,"top forwarding_u clk", false,-1);
        tracep->declBit(c+671,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+165,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+166,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+378,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+207,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+180,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+208,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+205,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+188,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+163,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+164,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+161,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+161,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+379,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+380,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+381,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+382,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+383,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+384,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+385,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+386,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+670,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+671,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+137,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+150,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+139,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+140,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+156,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+159,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+188,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+171,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+173,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+177,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+175,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+180,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+187,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+854,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+851,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+670,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+671,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+188,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+387,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+395,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+670,"top ls_u clk", false,-1);
        tracep->declBit(c+671,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+171,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+175,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+173,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+177,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+200,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+204,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+202,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+187,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+178,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+181,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+183,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+185,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+189,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+175,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+190,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+191,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+192,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+194,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+197,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+809,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+214,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+214,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+195,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+191,"top ls_u wren", false,-1);
        tracep->declBit(c+190,"top ls_u rden", false,-1);
        tracep->declBus(c+403,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+192,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+404,"top ls_u wren_last", false,-1);
        tracep->declBit(c+670,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+671,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+191,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+190,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+403,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+192,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+175,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+171,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+200,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+404,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+178,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+189,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+175,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+190,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+191,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+192,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+194,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+197,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+809,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+214,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+214,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+195,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+195,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+405,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+406,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+407,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+408,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+409,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+410,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+411,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+809,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+412,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+413,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+414,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+197,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+194,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+415,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+416,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+417,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+418,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+177,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+204,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+173,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+202,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+191,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+190,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+403,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+192,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+419,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+670,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+671,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+171,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+177,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+175,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+187,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+181,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+183,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+185,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+420,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+421,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+422,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+423,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+424,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+425,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+426,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+427,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+428,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+175,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+429,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+431,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+433,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+185,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+183,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+435,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+437,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+439,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+670,"top Dcache_u clk", false,-1);
        tracep->declBit(c+671,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+441,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+442,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+443,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+444,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+192,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+194,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+188,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+170,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+445,"top Dcache_u data_ok_o", false,-1);
        tracep->declBit(c+214,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+195,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+215,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+217,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+827,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+585,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+446,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+574,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declQuad(c+583,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+587,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+220,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+216,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+76,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+221,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+805,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+831,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+832,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+809,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+833,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+447,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+559,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+448,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+449,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+450,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+36,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+40,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+44,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+48,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+451,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+455,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+451,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+455,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+664,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+665,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+459,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+460,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+461,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+463,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+464,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+465,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+466,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+468,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+470,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+471,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+789,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+790,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+791,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+792,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+472,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+473,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+855,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+856,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+474,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBit(c+475,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+476,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+52,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+60,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+793,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+795,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+477,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+478,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+479,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+661,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+475,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+481,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+482,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+490,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+491,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+492,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+493,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+495,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+496,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+498,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+500,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+501,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+502,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+504,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+505,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+507,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+511,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+507,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+511,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+515,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+516,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+517,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+575,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+518,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+519,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+518,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+574,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBus(c+836,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+801,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+837,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+836,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+36,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+670,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+797,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+666,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+520,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+667,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+451,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+798,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+664,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+507,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+836,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+801,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+837,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+836,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+40,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+670,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+797,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+666,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+524,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+667,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+455,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+798,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+664,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+511,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+836,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+801,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+837,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+836,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+44,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+670,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+799,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+668,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+520,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+669,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+451,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+800,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+665,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+507,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+836,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+801,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+837,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+836,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+48,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+670,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+799,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+668,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+524,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+669,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+455,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+800,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+665,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+511,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+801,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+801,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+802,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+803,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+804,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+670,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+671,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+215,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+217,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+583,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+218,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+827,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+585,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+587,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+216,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+220,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+76,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+221,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+857,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+662,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+777,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+89,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+2,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+805,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+815,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+807,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+816,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+805,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+811,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+817,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+806,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+806,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+581,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+90,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+91,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+93,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+94,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+807,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+95,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+778,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+779,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+780,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+781,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+554,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+96,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+97,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+805,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+815,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+807,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+808,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+809,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+810,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+811,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+812,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+806,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+99,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+582,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+782,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+583,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+585,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+580,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+819,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+846,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+810,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+847,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+848,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+528,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+595,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+89,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+90,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+95,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+858,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+94,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+2,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+68,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+529,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+530,"top axi_ls_u lenthReg", false,-1, 7,0);
        tracep->declBus(c+846,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+810,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+847,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+848,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+531,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+596,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+96,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+99,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+97,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+849,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+811,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+808,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+809,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+532,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+670,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+671,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+171,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+177,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+175,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+178,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+180,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+181,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+188,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+198,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+204,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+200,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+202,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+208,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+209,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+859,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+851,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+670,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+671,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+188,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+533,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+543,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+198,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+204,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+200,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+202,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+209,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+207,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+205,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+670,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+671,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+135,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+102,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+132,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+133,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+107,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+189,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+106,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+105,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+105,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+160,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+188,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+188,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+136,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+167,"top pipline_ctrl_u ex_flush", false,-1);
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
    VlWide<8>/*255:0*/ __Vtemp255;
    VlWide<8>/*255:0*/ __Vtemp257;
    VlWide<4>/*127:0*/ __Vtemp258;
    VlWide<4>/*127:0*/ __Vtemp259;
    VlWide<3>/*95:0*/ __Vtemp260;
    VlWide<3>/*95:0*/ __Vtemp262;
    VlWide<3>/*95:0*/ __Vtemp263;
    VlWide<3>/*95:0*/ __Vtemp264;
    VlWide<3>/*95:0*/ __Vtemp265;
    VlWide<3>/*95:0*/ __Vtemp266;
    VlWide<3>/*95:0*/ __Vtemp269;
    VlWide<3>/*95:0*/ __Vtemp270;
    VlWide<3>/*95:0*/ __Vtemp271;
    VlWide<3>/*95:0*/ __Vtemp272;
    VlWide<3>/*95:0*/ __Vtemp273;
    VlWide<8>/*255:0*/ __Vtemp278;
    VlWide<4>/*127:0*/ __Vtemp281;
    VlWide<4>/*127:0*/ __Vtemp288;
    VlWide<4>/*127:0*/ __Vtemp291;
    VlWide<4>/*127:0*/ __Vtemp298;
    VlWide<4>/*127:0*/ __Vtemp301;
    VlWide<4>/*127:0*/ __Vtemp310;
    VlWide<4>/*127:0*/ __Vtemp313;
    VlWide<4>/*127:0*/ __Vtemp322;
    VlWide<4>/*127:0*/ __Vtemp325;
    VlWide<4>/*127:0*/ __Vtemp335;
    VlWide<4>/*127:0*/ __Vtemp338;
    VlWide<4>/*127:0*/ __Vtemp348;
    VlWide<10>/*319:0*/ __Vtemp353;
    VlWide<4>/*127:0*/ __Vtemp354;
    VlWide<4>/*127:0*/ __Vtemp355;
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
        tracep->fullWData(oldp+68,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        VL_EXTEND_WQ(256,64, __Vtemp255, vlSelf->top__DOT__ls_u__DOT__wr_data);
        if (vlSelf->top__DOT__Dcache_u__DOT__uncache) {
            __Vtemp257[0U] = __Vtemp255[0U];
            __Vtemp257[1U] = __Vtemp255[1U];
            __Vtemp257[2U] = __Vtemp255[2U];
            __Vtemp257[3U] = __Vtemp255[3U];
            __Vtemp257[4U] = __Vtemp255[4U];
            __Vtemp257[5U] = __Vtemp255[5U];
            __Vtemp257[6U] = __Vtemp255[6U];
            __Vtemp257[7U] = __Vtemp255[7U];
        } else {
            __Vtemp257[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]);
            __Vtemp257[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]);
            __Vtemp257[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]);
            __Vtemp257[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]);
            __Vtemp257[4U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]);
            __Vtemp257[5U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]);
            __Vtemp257[6U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]);
            __Vtemp257[7U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]);
        }
        tracep->fullWData(oldp+76,(__Vtemp257),256);
        tracep->fullBit(oldp+84,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+85,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+88,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+89,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+90,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullCData(oldp+93,((0xffU & ((IData)(1U) 
                                             << (7U 
                                                 & (IData)(vlSelf->top__DOT__DcacheRdAddr))))),8);
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+95,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+96,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
        tracep->fullBit(oldp+99,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+103,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+105,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+112,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+113,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+114,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+115,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+116,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+118,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+122,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+123,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+128,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+129,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+130,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+131,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+137,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+139,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+142,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+143,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+144,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+146,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+148,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+152,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+153,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+154,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+155,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+156,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+157,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+158,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+159,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+160,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+163,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+164,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+165,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+166,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+167,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+168,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+169,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullBit(oldp+170,(((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullQData(oldp+171,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+173,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+175,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+177,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+178,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+180,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+187,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+188,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+189,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+190,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+191,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+194,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullCData(oldp+197,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+198,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+200,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+202,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+204,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+207,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+208,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+209,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+211,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+212,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullIData(oldp+213,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullBit(oldp+214,(((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+215,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+216,(vlSelf->top__DOT__DcacheWrValid));
        tracep->fullBit(oldp+217,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullBit(oldp+220,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+221,(((IData)(vlSelf->top__DOT__Dcache_u__DOT__uncache)
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+222,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+225,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+226,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+227,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullIData(oldp+228,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+229,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+230,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+231,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+232,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+233,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        __Vtemp258[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp258[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp258[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp258[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+234,(__Vtemp258),128);
        __Vtemp259[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp259[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp259[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp259[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+238,(__Vtemp259),128);
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+244,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+247,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+248,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+249,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+254,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+255,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+256,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+257,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+258,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+259,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+260,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+261,((((QData)((IData)(
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
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullCData(oldp+264,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+265,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+273,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+274,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+275,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullCData(oldp+276,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+277,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+279,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullCData(oldp+280,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+281,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+282,((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 0xbU)) 
                                                      << 0xbU) 
                                                     | (0x7e0U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                    >> 5U)) 
                                                           << 5U)))))),64);
        tracep->fullCData(oldp+284,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullQData(oldp+285,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+287,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp260[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp260[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp260[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+288,(__Vtemp260),96);
        tracep->fullWData(oldp+291,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+294,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+295,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+296,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+297,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+298,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+299,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+301,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+302,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+303,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+304,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+305,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+306,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+307,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullBit(oldp+317,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            | ((1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))))));
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp262, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp263, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp264, __Vtemp262, __Vtemp263);
        VL_EXTEND_WI(65,1, __Vtemp265, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp266, __Vtemp264, __Vtemp265);
        tracep->fullBit(oldp+324,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp266[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+325,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+328,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+333,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+334,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+335,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+336,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp269, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp270, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp271, __Vtemp269, __Vtemp270);
        VL_EXTEND_WI(65,1, __Vtemp272, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp273, __Vtemp271, __Vtemp272);
        tracep->fullBit(oldp+338,((1U & __Vtemp273[2U])));
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+340,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+342,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+344,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+346,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+348,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+349,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+350,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+353,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+355,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+357,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+359,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+361,(((0x4000000U & 
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
        tracep->fullQData(oldp+363,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+365,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+366,(((((QData)((IData)(
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
        tracep->fullQData(oldp+368,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+370,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+371,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+372,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+373,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+375,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+377,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+378,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+379,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+380,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+381,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+382,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+383,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+384,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+385,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+386,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        __Vtemp278[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xeU)) 
                                     | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp278[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__alures_ex 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp278[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                             << 2U));
        __Vtemp278[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp278[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp278[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp278[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp278[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+387,(__Vtemp278),226);
        tracep->fullWData(oldp+395,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+403,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+404,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+405,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+406,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+407,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+408,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+409,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+410,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+411,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+412,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+413,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+414,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+415,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+416,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+417,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+418,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+419,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+420,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+421,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+422,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+423,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+424,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+425,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+426,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+427,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+428,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+429,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+431,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+435,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+437,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+439,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullIData(oldp+441,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+442,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+443,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+444,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullBit(oldp+445,(((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))));
        tracep->fullIData(oldp+446,((((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullCData(oldp+447,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+448,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+449,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+450,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp281, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp288[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp288[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp288[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp288[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp288[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp281[0U])
                               : 0U);
            __Vtemp288[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp281[1U])
                               : 0U);
            __Vtemp288[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp281[2U])
                               : 0U);
            __Vtemp288[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp281[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+451,(__Vtemp288),128);
        VL_EXTEND_WQ(128,64, __Vtemp291, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp298[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp298[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp298[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp298[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp298[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp291[0U])
                               : 0U);
            __Vtemp298[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp291[1U])
                               : 0U);
            __Vtemp298[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp291[2U])
                               : 0U);
            __Vtemp298[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp291[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+455,(__Vtemp298),128);
        tracep->fullBit(oldp+459,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+460,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+461,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+463,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+464,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+465,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+466,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+468,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullBit(oldp+470,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+471,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+472,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+473,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+474,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullBit(oldp+475,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+476,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+477,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+478,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+479,((((QData)((IData)(
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
        tracep->fullCData(oldp+481,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+482,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+490,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+491,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+492,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullQData(oldp+493,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullCData(oldp+495,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+496,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+498,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+500,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+501,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+504,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp301, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp310[0U] = 0xffffffffU;
            __Vtemp310[1U] = 0xffffffffU;
            __Vtemp310[2U] = 0xffffffffU;
            __Vtemp310[3U] = 0xffffffffU;
        } else {
            __Vtemp310[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp301[0U])
                                   : 0U) : 0U);
            __Vtemp310[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp301[1U])
                                   : 0U) : 0U);
            __Vtemp310[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp301[2U])
                                   : 0U) : 0U);
            __Vtemp310[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp301[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+507,(__Vtemp310),128);
        VL_EXTEND_WQ(128,64, __Vtemp313, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp322[0U] = 0xffffffffU;
            __Vtemp322[1U] = 0xffffffffU;
            __Vtemp322[2U] = 0xffffffffU;
            __Vtemp322[3U] = 0xffffffffU;
        } else {
            __Vtemp322[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp313[0U])
                                   : 0U) : 0U);
            __Vtemp322[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp313[1U])
                                   : 0U) : 0U);
            __Vtemp322[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp313[2U])
                                   : 0U) : 0U);
            __Vtemp322[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp313[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+511,(__Vtemp322),128);
        tracep->fullBit(oldp+515,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+516,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+517,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+518,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+519,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        VL_EXTEND_WQ(128,64, __Vtemp325, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp335[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp325[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp335[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp325[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp335[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp325[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp335[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp325[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+520,(__Vtemp335),128);
        VL_EXTEND_WQ(128,64, __Vtemp338, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp348[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp338[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp348[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp338[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp348[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp338[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp348[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp338[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+524,(__Vtemp348),128);
        tracep->fullCData(oldp+528,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+529,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+530,(vlSelf->top__DOT__axi_ls_u__DOT__lenthReg),8);
        tracep->fullCData(oldp+531,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+532,((0x38U & ((IData)(vlSelf->top__DOT__DcacheRdAddr) 
                                              << 3U))),6);
        tracep->fullWData(oldp+533,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+543,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+553,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullBit(oldp+554,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullBit(oldp+555,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+556,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+557,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+558,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullCData(oldp+559,(((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)
                                                      ? 
                                                     (((((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                                                         & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                                        & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncached))) 
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
                                                       : 2U))
                                                     : 
                                                    ((((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                                                       & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncached)))
                                                      ? 1U
                                                      : 0U))))),3);
        tracep->fullQData(oldp+560,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+562,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp353[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp353[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp353[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp353[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp353[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp353[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp353[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp353[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp353[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp353[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+564,(__Vtemp353),315);
        tracep->fullIData(oldp+574,(((IData)(vlSelf->top__DOT__Dcache_u__DOT__uncache)
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? ((vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                              [(0x3fU 
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
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 5U)))] 
                                              << 0xbU) 
                                             | (0x7e0U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)) 
                                                   << 5U)))))),32);
        tracep->fullBit(oldp+575,((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U))) 
                                     & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                    & (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                        & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
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
        tracep->fullBit(oldp+576,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+577,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+579,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+580,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+581,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+582,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+583,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+585,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+586,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+587,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+588,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+589,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+590,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+592,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+593,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+594,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullCData(oldp+595,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+596,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
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
        tracep->fullBit(oldp+661,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullQData(oldp+662,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+664,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+665,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+666,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        tracep->fullCData(oldp+667,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+668,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+669,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+670,(vlSelf->clk));
        tracep->fullBit(oldp+671,(vlSelf->rst_n));
        tracep->fullQData(oldp+672,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+674,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+676,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+677,(vlSelf->regA0),64);
        tracep->fullBit(oldp+679,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+680,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+681,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+682,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+684,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+685,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+686,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+687,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+688,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+689,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+690,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+691,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+692,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+693,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+694,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+695,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+696,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+697,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+699,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+700,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+701,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+702,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+703,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+704,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+706,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+707,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+708,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+709,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+710,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+711,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+712,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+713,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+714,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+715,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+716,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+717,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+718,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+720,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+721,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+722,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+723,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+724,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+725,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+726,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+727,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+728,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+729,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+730,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+732,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+733,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+734,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+735,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+736,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+737,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+738,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+739,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+740,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+741,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+742,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+743,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+744,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+745,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+747,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+748,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+749,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+750,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+751,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+752,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+754,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+755,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+756,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+757,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+758,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+759,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+760,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+761,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+762,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+763,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+764,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+765,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+766,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+768,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+769,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+770,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+771,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+772,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+773,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+774,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+775,(vlSelf->axi_mmio_b_user_i));
        tracep->fullCData(oldp+776,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+777,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+778,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+779,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+780,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+781,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullCData(oldp+782,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullCData(oldp+783,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+784,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
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
        tracep->fullBit(oldp+789,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+790,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+791,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+792,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+797,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))));
        tracep->fullBit(oldp+798,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
        tracep->fullBit(oldp+799,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
        tracep->fullBit(oldp+800,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
        tracep->fullIData(oldp+801,(0x40U),32);
        tracep->fullIData(oldp+802,(4U),32);
        tracep->fullIData(oldp+803,(8U),32);
        tracep->fullIData(oldp+804,(1U),32);
        tracep->fullCData(oldp+805,(0U),3);
        tracep->fullCData(oldp+806,(0U),4);
        tracep->fullBit(oldp+807,(0U));
        tracep->fullCData(oldp+808,(3U),8);
        tracep->fullCData(oldp+809,(3U),3);
        tracep->fullCData(oldp+810,(1U),2);
        tracep->fullBit(oldp+811,(0U));
        tracep->fullCData(oldp+812,(2U),4);
        tracep->fullCData(oldp+813,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+814,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+815,(1U),4);
        tracep->fullCData(oldp+816,(0U),8);
        tracep->fullCData(oldp+817,(0xfU),4);
        tracep->fullCData(oldp+818,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+819,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+820,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+822,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+823,(1U));
        tracep->fullBit(oldp+824,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+825,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullCData(oldp+826,(vlSelf->top__DOT__fetchLenth),8);
        tracep->fullCData(oldp+827,(vlSelf->top__DOT__lsFetchLenth),8);
        tracep->fullBit(oldp+828,(0U));
        tracep->fullQData(oldp+829,(0ULL),64);
        tracep->fullCData(oldp+831,(1U),3);
        tracep->fullCData(oldp+832,(2U),3);
        tracep->fullCData(oldp+833,(7U),3);
        tracep->fullBit(oldp+834,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+835,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+836,(0x80U),32);
        tracep->fullIData(oldp+837,(6U),32);
        __Vtemp354[0U] = 0U;
        __Vtemp354[1U] = 0U;
        __Vtemp354[2U] = 0U;
        __Vtemp354[3U] = 0U;
        tracep->fullWData(oldp+838,(__Vtemp354),128);
        __Vtemp355[0U] = 0xffffffffU;
        __Vtemp355[1U] = 0xffffffffU;
        __Vtemp355[2U] = 0xffffffffU;
        __Vtemp355[3U] = 0xffffffffU;
        tracep->fullWData(oldp+842,(__Vtemp355),128);
        tracep->fullCData(oldp+846,(0U),2);
        tracep->fullCData(oldp+847,(3U),2);
        tracep->fullCData(oldp+848,(2U),2);
        tracep->fullIData(oldp+849,(3U),32);
        tracep->fullIData(oldp+850,(0x60U),32);
        tracep->fullIData(oldp+851,(0U),32);
        tracep->fullIData(oldp+852,(0x13bU),32);
        tracep->fullBit(oldp+853,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+854,(0xe2U),32);
        tracep->fullBit(oldp+855,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+856,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullCData(oldp+857,(1U),8);
        tracep->fullBit(oldp+858,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullIData(oldp+859,(0x121U),32);
    }
}
