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
        tracep->declBit(c+691,"clk", false,-1);
        tracep->declBit(c+692,"rst_n", false,-1);
        tracep->declQuad(c+693,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+695,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+697,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+698,"regA0", false,-1, 63,0);
        tracep->declBit(c+700,"stall_n_diff", false,-1);
        tracep->declBit(c+701,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+702,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+703,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+705,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+706,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+707,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+708,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+709,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+710,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+711,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+712,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+713,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+714,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+715,"axi_r_ready_o", false,-1);
        tracep->declBit(c+716,"axi_r_valid_i", false,-1);
        tracep->declBus(c+717,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+718,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+720,"axi_r_last_i", false,-1);
        tracep->declBus(c+721,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+722,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+723,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+724,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+725,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+727,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+728,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+729,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+730,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+731,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+732,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+733,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+734,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+735,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+736,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+737,"axi_w_ready_i", false,-1);
        tracep->declBit(c+738,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+739,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+741,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+742,"axi_w_last_o", false,-1);
        tracep->declBus(c+743,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+744,"axi_b_ready_o", false,-1);
        tracep->declBit(c+745,"axi_b_valid_i", false,-1);
        tracep->declBus(c+746,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+747,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+748,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+749,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+750,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+751,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+753,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+754,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+755,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+756,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+757,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+758,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+759,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+760,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+761,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+762,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+763,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+764,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+765,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+766,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+768,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+769,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+770,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+771,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+772,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+773,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+775,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+776,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+777,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+778,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+779,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+780,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+781,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+782,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+783,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+784,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+785,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+786,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+787,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+789,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+790,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+791,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+792,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+793,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+794,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+795,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+796,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+821,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+822,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+823,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+824,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+691,"top clk", false,-1);
        tracep->declBit(c+692,"top rst_n", false,-1);
        tracep->declQuad(c+693,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+695,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+697,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+698,"top regA0", false,-1, 63,0);
        tracep->declBit(c+700,"top stall_n_diff", false,-1);
        tracep->declBit(c+701,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+702,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+703,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+705,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+706,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+707,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+708,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+709,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+710,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+711,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+712,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+713,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+714,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+715,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+716,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+717,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+718,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+720,"top axi_r_last_i", false,-1);
        tracep->declBus(c+721,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+722,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+723,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+724,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+725,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+727,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+728,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+729,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+730,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+731,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+732,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+733,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+734,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+735,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+736,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+737,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+738,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+739,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+741,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+742,"top axi_w_last_o", false,-1);
        tracep->declBus(c+743,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+744,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+745,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+746,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+747,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+748,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+749,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+750,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+751,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+753,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+754,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+755,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+756,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+757,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+758,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+759,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+760,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+761,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+762,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+763,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+764,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+765,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+766,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+768,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+769,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+770,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+771,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+772,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+773,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+775,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+776,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+777,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+778,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+779,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+780,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+781,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+782,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+783,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+784,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+785,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+786,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+787,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+789,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+790,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+791,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+792,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+793,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+794,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+795,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+796,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+3,"top instr_fetching", false,-1);
        tracep->declBit(c+797,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+4,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+5,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+825,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+826,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+827,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+828,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+829,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+830,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+831,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+832,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+826,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+833,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+7,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+245,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+798,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+246,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+248,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+249,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+834,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+137,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+262,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+138,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+825,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+835,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+827,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+828,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+829,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+830,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+831,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+836,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+826,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+826,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+140,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+263,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+233,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+837,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+264,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+827,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+265,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+141,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+142,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+838,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+839,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+143,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+266,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+267,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+825,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+835,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+827,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+828,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+829,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+830,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+831,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+832,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+826,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+840,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+269,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+144,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+145,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+146,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+841,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+842,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+843,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+844,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+270,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+272,"top is_jump", false,-1);
        tracep->declQuad(c+273,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+275,"top pc_stall_n", false,-1);
        tracep->declBit(c+276,"top if_stall_n", false,-1);
        tracep->declBit(c+277,"top if_instr_valid", false,-1);
        tracep->declBit(c+846,"top sram_data_valid", false,-1);
        tracep->declQuad(c+278,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+280,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+847,"top sram_ren", false,-1);
        tracep->declBit(c+282,"top sram_addr_valid", false,-1);
        tracep->declBit(c+124,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+125,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+283,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+284,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+286,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+613,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+615,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+287,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+289,"top src1sel_id", false,-1);
        tracep->declBus(c+290,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+291,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+292,"top is_brc_id", false,-1);
        tracep->declBit(c+293,"top is_jal_id", false,-1);
        tracep->declBit(c+294,"top is_jalr_id", false,-1);
        tracep->declBit(c+295,"top wben_id", false,-1);
        tracep->declBus(c+296,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+297,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+275,"top id_stall_n", false,-1);
        tracep->declBit(c+298,"top DivEn_id", false,-1);
        tracep->declBus(c+299,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+300,"top in_trap_id", false,-1);
        tracep->declBit(c+301,"top out_trap_id", false,-1);
        tracep->declBit(c+302,"top trap_id", false,-1);
        tracep->declBit(c+303,"top ld_use_hazard", false,-1);
        tracep->declBit(c+304,"top id_flush", false,-1);
        tracep->declQuad(c+305,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+307,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+308,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+310,"top src1sel_ex", false,-1);
        tracep->declBus(c+311,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+312,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+314,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+316,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+318,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+320,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+321,"top is_brc_ex", false,-1);
        tracep->declBit(c+322,"top is_jal_ex", false,-1);
        tracep->declBit(c+323,"top is_jalr_ex", false,-1);
        tracep->declBit(c+324,"top wben_ex", false,-1);
        tracep->declBit(c+325,"top DivEn_ex", false,-1);
        tracep->declBus(c+326,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+327,"top trap_ex", false,-1);
        tracep->declBit(c+328,"top ex_stall_n", false,-1);
        tracep->declQuad(c+8,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+329,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+330,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+331,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+332,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+333,"top ex_flush", false,-1);
        tracep->declBit(c+334,"top rden_ls", false,-1);
        tracep->declBit(c+335,"top wren_ls", false,-1);
        tracep->declBit(c+336,"top ls_addr_ok_i", false,-1);
        tracep->declQuad(c+10,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+12,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+16,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+126,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+17,"top wben_ls", false,-1);
        tracep->declQuad(c+18,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+20,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+24,"top trap_ls", false,-1);
        tracep->declBit(c+337,"top ls_stall_n", false,-1);
        tracep->declBit(c+338,"top ls_not_ok", false,-1);
        tracep->declQuad(c+14,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+25,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+26,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+339,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+27,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+848,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+849,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+341,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+28,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+829,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+343,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+345,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+347,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+349,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+350,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+352,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+353,"top wben_wb", false,-1);
        tracep->declQuad(c+354,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+337,"top wb_stall_n", false,-1);
        tracep->declBit(c+356,"top rw_valid_i", false,-1);
        tracep->declBit(c+29,"top rw_ready_o", false,-1);
        tracep->declBus(c+850,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+248,"top rdLast_o", false,-1);
        tracep->declBus(c+30,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+246,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+250,"top dataValid_o", false,-1);
        tracep->declBit(c+357,"top dataNotOk", false,-1);
        tracep->declBit(c+358,"top DcacheRdValid", false,-1);
        tracep->declBit(c+31,"top DcacheWrValid", false,-1);
        tracep->declBit(c+359,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+851,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+841,"top lsRdLast", false,-1);
        tracep->declQuad(c+360,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+362,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+146,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+364,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+365,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+235,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+852,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+821,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+822,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+823,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+824,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+3,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+797,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+4,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+5,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+825,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+826,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+827,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+828,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+829,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+830,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+831,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+832,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+826,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+833,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+7,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+245,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+798,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+246,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+248,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+249,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+834,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+799,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+853,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+854,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+856,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+857,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+858,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+859,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+860,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+861,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+862,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+863,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+864,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+800,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+866,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+867,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+869,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+870,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+871,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+872,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+801,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+802,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+803,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+805,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+873,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+874,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+876,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+877,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+878,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+879,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+880,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+881,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+882,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+883,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+884,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+885,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+886,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+251,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+806,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+252,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+254,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+249,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+887,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+723,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+724,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+725,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+727,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+728,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+729,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+730,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+731,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+732,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+733,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+734,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+735,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+736,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+737,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+738,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+739,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+741,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+742,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+743,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+744,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+745,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+746,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+747,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+748,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+701,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+702,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+703,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+705,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+706,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+707,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+708,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+709,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+710,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+711,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+712,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+713,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+714,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+715,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+716,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+717,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+718,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+720,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+721,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+722,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+771,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+772,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+773,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+775,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+776,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+777,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+778,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+779,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+780,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+781,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+782,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+783,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+784,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+785,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+786,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+787,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+789,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+790,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+791,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+792,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+793,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+794,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+795,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+796,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+749,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+750,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+751,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+753,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+754,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+755,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+756,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+757,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+758,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+759,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+760,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+761,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+762,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+763,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+764,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+765,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+766,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+768,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+769,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+770,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+799,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+853,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+854,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+856,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+857,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+858,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+859,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+860,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+861,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+862,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+863,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+864,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+800,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+866,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+867,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+869,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+870,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+871,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+872,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+801,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+802,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+803,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+804,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+255,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+32,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+33,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+35,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+36,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+37,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+39,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+40,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+41,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+42,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+43,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+44,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+45,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+256,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+807,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+257,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+259,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+249,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+808,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+691,"top IF_u clk", false,-1);
        tracep->declBit(c+692,"top IF_u rst_n", false,-1);
        tracep->declBit(c+272,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+273,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+20,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+300,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+301,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+276,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+270,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+283,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+277,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+278,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+846,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+124,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+125,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+280,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+847,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+282,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+280,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+691,"top cache_dut clk", false,-1);
        tracep->declBit(c+692,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+366,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+282,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+831,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+888,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+890,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+276,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+124,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+128,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+125,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+278,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+356,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+29,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+850,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+248,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+30,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+246,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+250,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+825,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+891,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+892,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+829,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+893,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+367,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+260,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+46,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+47,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+48,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+148,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+152,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+156,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+160,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+368,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+372,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+368,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+372,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+376,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+377,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+378,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+49,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+51,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+52,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+53,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+54,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+56,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+58,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+59,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+809,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+810,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+811,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+812,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+60,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+61,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+894,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+895,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+379,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+164,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+172,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+813,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+815,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+380,"top cache_dut missEn", false,-1);
        tracep->declBit(c+381,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+62,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+64,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+382,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+383,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+391,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+896,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+821,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+897,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+896,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+148,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+691,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+392,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+393,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+898,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+394,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+368,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+395,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+376,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+902,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+896,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+821,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+897,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+896,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+152,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+691,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+392,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+393,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+898,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+394,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+372,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+395,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+376,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+902,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+896,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+821,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+897,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+896,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+156,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+691,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+396,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+397,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+898,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+398,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+368,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+399,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+377,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+902,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+896,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+821,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+897,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+896,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+160,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+691,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+396,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+397,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+898,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+398,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+372,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+399,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+377,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+902,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+821,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+822,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+823,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+824,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+691,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+692,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+356,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+29,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+246,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+65,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+850,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+248,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+250,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+3,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+797,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+4,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+5,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+825,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+826,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+827,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+828,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+829,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+830,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+831,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+832,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+826,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+833,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+7,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+245,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+798,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+246,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+248,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+249,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+834,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+906,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+830,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+907,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+908,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+67,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+261,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+4,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+7,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+5,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+909,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+826,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+831,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+828,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+829,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+691,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+692,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+270,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+283,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+275,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+304,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+284,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+286,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+400,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+402,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+910,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+691,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+692,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+275,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+403,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+406,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+691,"top ID_u clk", false,-1);
        tracep->declBit(c+692,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+284,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+343,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+349,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+286,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+350,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+352,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+353,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+615,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+613,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+287,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+289,"top ID_u src1sel", false,-1);
        tracep->declBus(c+290,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+291,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+294,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+293,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+292,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+295,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+296,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+297,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+698,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+298,"top ID_u DivEn", false,-1);
        tracep->declBus(c+299,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+302,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+300,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+301,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+409,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+287,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+615,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+613,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+284,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+286,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+296,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+297,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+409,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+289,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+290,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+291,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+294,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+293,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+292,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+295,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+298,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+299,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+302,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+300,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+301,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+410,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+411,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+412,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+413,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+409,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+287,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+691,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+343,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+349,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+296,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+615,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+297,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+613,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+352,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+350,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+353,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+698,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+627+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+286,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+307,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+303,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+691,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+692,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+328,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+333,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+284,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+286,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+287,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+613,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+615,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+291,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+294,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+293,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+292,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+289,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+290,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+295,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+296,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+297,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+298,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+299,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+302,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+305,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+307,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+312,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+314,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+316,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+320,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+323,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+322,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+321,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+310,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+311,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+324,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+331,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+332,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+325,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+326,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+327,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+414,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+416,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+417,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+418,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+419,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+420,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+421,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+912,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+691,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+692,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+328,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+617,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+422,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+320,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+314,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+312,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+316,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+305,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+307,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+323,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+322,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+321,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+310,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+311,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+329,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+330,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+14,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+350,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+8,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+325,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+326,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+308,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+273,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+318,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+272,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+432,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+334,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+335,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+336,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+433,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+435,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+437,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+318,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+320,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+433,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+435,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+325,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+326,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+308,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+439,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+440,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+441,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+443,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+444,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+446,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+448,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+448,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+449,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+450,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+451,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+453,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+454,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+455,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+457,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+459,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+461,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+433,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+444,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+443,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+446,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+453,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+440,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+454,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+463,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+450,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+448,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+449,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+443,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+448,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+464,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+433,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+465,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+449,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+448,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+451,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+466,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+468,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+470,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+472,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+474,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+476,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+478,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+433,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+435,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+326,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+461,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+437,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+318,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+323,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+322,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+321,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+480,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+316,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+305,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+273,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+272,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+481,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+483,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+913,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+485,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+486,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+487,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+488,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+490,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+492,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+691,"top forwarding_u clk", false,-1);
        tracep->declBit(c+692,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+331,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+332,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+68,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+352,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+17,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+353,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+350,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+337,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+329,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+330,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+8,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+8,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+69,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+70,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+129,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+493,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+130,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+131,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+494,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+132,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+691,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+692,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+305,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+318,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+307,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+308,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+324,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+327,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+337,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+10,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+12,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+16,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+14,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+17,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+24,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+914,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+691,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+692,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+337,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+495,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+71,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+691,"top ls_u clk", false,-1);
        tracep->declBit(c+692,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+10,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+16,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+345,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+349,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+347,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+24,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+126,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+18,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+338,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+14,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+25,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+26,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+339,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+27,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+28,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+829,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+915,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+357,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+341,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u wren", false,-1);
        tracep->declBit(c+25,"top ls_u rden", false,-1);
        tracep->declBus(c+79,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+339,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+503,"top ls_u wren_last", false,-1);
        tracep->declBit(c+691,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+692,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+26,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+25,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+79,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+339,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+345,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+503,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+126,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+338,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+14,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+25,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+26,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+339,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+27,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+28,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+829,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+915,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+357,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+341,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+341,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+80,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+81,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+82,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+83,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+84,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+85,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+86,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+829,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+504,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+505,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+506,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+28,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+27,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+87,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+88,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+89,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+90,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+16,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+349,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+12,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+347,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+25,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+79,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+339,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+133,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+691,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+692,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+10,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+16,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+24,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+18,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+91,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+92,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+93,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+94,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+95,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+96,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+97,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+98,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+99,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+14,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+100,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+102,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+104,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+106,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+108,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+110,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+691,"top Dcache_u clk", false,-1);
        tracep->declBit(c+692,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+507,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+508,"top Dcache_u valid_i", false,-1);
        tracep->declBit(c+509,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+339,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+27,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+337,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+336,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+510,"top Dcache_u data_ok_o", false,-1);
        tracep->declBit(c+357,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+341,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+358,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+359,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+851,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+841,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+511,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+512,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declQuad(c+146,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+364,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+365,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+31,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+235,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+852,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+825,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+891,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+892,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+829,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+893,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+513,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+514,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+515,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+516,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+517,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+180,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+184,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+188,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+192,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+518,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+522,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+518,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+522,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+526,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+527,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+528,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+529,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+531,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+532,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+533,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+112,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+114,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+134,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+135,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+534,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+535,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+536,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+537,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+538,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+539,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+916,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+917,"top Dcache_u validWay2_q", false,-1);
        tracep->declBit(c+540,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+196,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+204,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+817,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+819,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+541,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+542,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+543,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBus(c+2,"top Dcache_u randomBit", false,-1, 31,0);
        tracep->declBit(c+116,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+545,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+546,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+554,"top Dcache_u replaceEn", false,-1);
        tracep->declQuad(c+117,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+119,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+120,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+122,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+555,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+556,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+557,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declQuad(c+559,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+561,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+565,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+561,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+565,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+569,"top Dcache_u wrMiss", false,-1);
        tracep->declBus(c+824,"top Dcache_u randomBit2", false,-1, 31,0);
        tracep->declBit(c+570,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+136,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+31,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+831,"top Dcache_u uncache", false,-1);
        tracep->declBus(c+512,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBus(c+896,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+821,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+897,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+896,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+180,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+691,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+571,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+572,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+573,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+577,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+518,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+578,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+526,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+561,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+896,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+821,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+897,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+896,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+184,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+691,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+571,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+572,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+579,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+577,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+522,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+578,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+526,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+565,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+896,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+821,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+897,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+896,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+188,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+691,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+583,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+584,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+573,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+585,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+518,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+586,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+527,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+561,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+896,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+821,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+897,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+896,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+192,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+691,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+583,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+584,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+579,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+585,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+522,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+586,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+527,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+565,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+821,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+822,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+823,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+824,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+691,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+692,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+358,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+359,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+146,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+360,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+851,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+841,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+364,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+31,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+365,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+235,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+852,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+837,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+362,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+137,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+262,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+138,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+825,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+835,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+827,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+828,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+829,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+830,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+831,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+836,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+826,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+826,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+140,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+263,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+233,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+837,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+264,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+827,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+265,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+141,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+142,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+838,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+839,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+143,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+266,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+267,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+825,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+835,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+827,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+828,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+829,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+830,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+831,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+832,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+826,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+840,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+269,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+144,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+145,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+146,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+841,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+842,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+843,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+906,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+830,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+907,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+908,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+587,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+588,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+262,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+263,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+265,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+918,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+264,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+138,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+212,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+589,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+906,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+830,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+907,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+908,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+590,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+591,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+266,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+269,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+267,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+909,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+835,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+831,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+828,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+829,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+592,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+691,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+692,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+10,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+16,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+126,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+17,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+18,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+337,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+343,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+349,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+345,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+347,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+353,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+354,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+919,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+691,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+692,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+337,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+593,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+603,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+343,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+349,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+345,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+347,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+354,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+352,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+350,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+691,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+692,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+303,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+272,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+300,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+301,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+277,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+338,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+276,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+275,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+275,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+328,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+337,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+337,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+304,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+333,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+920,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+920,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+829,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+829,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+691,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+692,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+138,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+825,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+262,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+137,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+233,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+837,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+263,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+140,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+142,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+141,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+265,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+267,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+825,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+266,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+143,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+146,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+145,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+144,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+269,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+220,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+137,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+140,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+142,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+141,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+222,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+143,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+146,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+145,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+144,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+921,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+922,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+224,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+226,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+228,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+230,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+243,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+244,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+923,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+925,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+232,"top lsAxiSlaveRam_u aw_en", false,-1);
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
        tracep->fullBit(oldp+3,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+4,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+7,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+10,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+12,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+14,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullIData(oldp+16,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1eU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U))),32);
        tracep->fullBit(oldp+17,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+24,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+25,((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))));
        tracep->fullBit(oldp+26,((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))));
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+29,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullIData(oldp+30,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                              >> 0xbU)) 
                                     << 0xbU) | (0x7e0U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U)) 
                                                    << 5U)))),32);
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+51,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+52,((0x3fU & (IData)(
                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                     >> 5U)))),6);
        tracep->fullIData(oldp+53,((0x1fffffU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))),21);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+58,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullBit(oldp+59,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullIData(oldp+60,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullIData(oldp+61,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullQData(oldp+62,((((QData)((IData)(
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
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullQData(oldp+65,((QData)((IData)(
                                                   (((IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 0xbU)) 
                                                     << 0xbU) 
                                                    | (0x7e0U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                   >> 5U)) 
                                                          << 5U)))))),64);
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullCData(oldp+68,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))),5);
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+70,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+71,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+79,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                          >> 0xeU))),3);
        tracep->fullBit(oldp+80,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+81,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (4U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+82,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+83,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (5U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+84,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+85,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (6U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+86,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+87,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+88,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+89,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+90,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+91,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+92,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+93,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+94,((0x1cU == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 4U)))));
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+100,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+102,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+108,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__Dcache_u__DOT__missFlag));
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullCData(oldp+119,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+124,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+125,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullQData(oldp+126,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+128,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullBit(oldp+129,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+130,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+131,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+132,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+133,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+134,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+135,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+136,(((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+142,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+145,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullWData(oldp+148,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+152,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+156,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+160,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+164,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+172,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullWData(oldp+180,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+184,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+188,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+192,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+196,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+204,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullWData(oldp+212,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+232,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullQData(oldp+233,((((QData)((IData)(
                                                      vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[
                                                      (((IData)(0x3fU) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                            << 6U))) 
                                                       >> 5U)])) 
                                      << ((0U == (0x1fU 
                                                  & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                     << 6U)))
                                           ? 0x20U : 
                                          ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                 << 6U))))) 
                                     | (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                    << 6U)))
                                          ? 0ULL : 
                                         ((QData)((IData)(
                                                          vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                    << 6U))))) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[
                                                           (6U 
                                                            & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                               << 1U))])) 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                  << 6U)))))),64);
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
        tracep->fullWData(oldp+235,(__Vtemp217),256);
        tracep->fullBit(oldp+243,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+244,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)))));
        tracep->fullBit(oldp+245,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+246,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+248,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+249,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+251,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+252,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+254,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last))
                                    : 0U)));
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+260,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+261,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullBit(oldp+262,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+263,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+264,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt))));
        tracep->fullBit(oldp+265,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+266,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
        tracep->fullBit(oldp+269,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+273,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+275,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+276,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+282,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+283,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+284,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+286,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+289,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+290,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+291,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+292,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+293,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+294,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+295,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+296,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+297,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+298,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+299,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+300,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+301,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+302,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+303,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+304,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+305,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+307,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+310,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+311,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+312,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+314,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+316,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+320,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+321,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+322,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+323,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+324,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+325,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+326,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+327,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+328,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullCData(oldp+329,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+330,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+331,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+332,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+334,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+335,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullBit(oldp+336,(((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+338,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullQData(oldp+339,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+343,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+345,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+347,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+349,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+350,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+352,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+353,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+354,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+356,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+357,((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))));
        tracep->fullBit(oldp+358,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+359,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+360,((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0xbU)) 
                                                      << 0xbU) 
                                                     | (0x7e0U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                    >> 5U)) 
                                                           << 5U)))))),64);
        tracep->fullQData(oldp+362,((QData)((IData)(
                                                    ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceWay)
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
                                                            << 5U))))))),64);
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+365,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullIData(oldp+366,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullCData(oldp+367,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        __Vtemp218[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp218[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp218[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp218[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+368,(__Vtemp218),128);
        __Vtemp219[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp219[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp219[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp219[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+372,(__Vtemp219),128);
        tracep->fullBit(oldp+376,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+377,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+378,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+379,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+380,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+381,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+382,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+383,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+391,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+392,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+393,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullCData(oldp+394,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+395,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+396,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+397,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullCData(oldp+398,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+399,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+400,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+402,(((IData)(vlSelf->top__DOT__id_flush)
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
        tracep->fullWData(oldp+403,(__Vtemp220),96);
        tracep->fullWData(oldp+406,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+409,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+410,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+411,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+412,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+413,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+414,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+416,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+417,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+418,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+419,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+420,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+421,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+422,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullBit(oldp+432,((1U & (~ ((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            | ((1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))))));
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+435,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+437,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp222, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp223, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp224, __Vtemp222, __Vtemp223);
        VL_EXTEND_WI(65,1, __Vtemp225, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp226, __Vtemp224, __Vtemp225);
        tracep->fullBit(oldp+439,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp226[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+440,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+443,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+446,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+448,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+449,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+450,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+451,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp229, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp230, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp231, __Vtemp229, __Vtemp230);
        VL_EXTEND_WI(65,1, __Vtemp232, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp233, __Vtemp231, __Vtemp232);
        tracep->fullBit(oldp+453,((1U & __Vtemp233[2U])));
        tracep->fullBit(oldp+454,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+455,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+457,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+459,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+461,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+463,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+464,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+465,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+466,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+468,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+470,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+472,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+474,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+476,(((0x4000000U & 
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
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+480,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+481,(((((QData)((IData)(
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
        tracep->fullQData(oldp+483,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+485,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+486,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+487,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+488,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+490,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+492,((1U & ((0x200U & 
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
        tracep->fullBit(oldp+493,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+494,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
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
        tracep->fullWData(oldp+495,(__Vtemp238),226);
        tracep->fullBit(oldp+503,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullCData(oldp+504,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+505,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+506,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullIData(oldp+507,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+508,(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i));
        tracep->fullBit(oldp+509,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullBit(oldp+510,(((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))));
        tracep->fullIData(oldp+511,((((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullIData(oldp+512,(((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceWay)
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
        tracep->fullCData(oldp+513,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullCData(oldp+514,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
        tracep->fullBit(oldp+515,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+516,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+517,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
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
        tracep->fullWData(oldp+518,(__Vtemp245),128);
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
        tracep->fullWData(oldp+522,(__Vtemp252),128);
        tracep->fullBit(oldp+526,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+527,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+528,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+529,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+531,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+532,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+533,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+534,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & vlSelf->top__DOT__Dcache_u__DOT__randomBit)));
        tracep->fullBit(oldp+535,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__Dcache_u__DOT__randomBit))));
        tracep->fullIData(oldp+536,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+537,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullIData(oldp+538,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+539,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+540,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+541,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+542,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+543,((((QData)((IData)(
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
        tracep->fullCData(oldp+545,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+546,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+554,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+555,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+556,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+557,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
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
        tracep->fullWData(oldp+561,(__Vtemp261),128);
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
        tracep->fullWData(oldp+565,(__Vtemp270),128);
        tracep->fullBit(oldp+569,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+570,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+571,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))));
        tracep->fullBit(oldp+572,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
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
        tracep->fullWData(oldp+573,(__Vtemp280),128);
        tracep->fullCData(oldp+577,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+578,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullWData(oldp+579,(__Vtemp290),128);
        tracep->fullBit(oldp+583,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
        tracep->fullBit(oldp+584,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+585,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+586,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                    | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
        tracep->fullCData(oldp+587,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+588,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+589,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+590,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+591,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullCData(oldp+592,((0x38U & ((IData)((QData)((IData)(
                                                                      (((IData)(
                                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                                >> 0xbU)) 
                                                                        << 0xbU) 
                                                                       | (0x7e0U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                                >> 5U)) 
                                                                             << 5U)))))) 
                                              << 3U))),6);
        tracep->fullWData(oldp+593,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+603,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+613,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+615,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
        tracep->fullWData(oldp+617,(__Vtemp295),315);
        tracep->fullQData(oldp+627,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+629,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+631,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+633,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+635,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+637,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+639,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+641,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+643,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+645,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+647,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+649,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+651,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+653,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+655,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+657,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+659,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+661,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+663,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+665,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+667,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+669,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+671,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+673,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+675,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+677,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+679,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+681,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+683,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+685,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+687,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+689,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+691,(vlSelf->clk));
        tracep->fullBit(oldp+692,(vlSelf->rst_n));
        tracep->fullQData(oldp+693,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+695,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+697,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+698,(vlSelf->regA0),64);
        tracep->fullBit(oldp+700,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+701,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+702,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+703,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+705,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+706,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+707,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+708,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+709,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+710,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+711,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+712,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+713,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+714,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+715,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+716,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+717,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+718,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+720,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+721,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+722,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+723,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+724,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+725,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+727,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+728,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+729,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+730,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+731,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+732,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+733,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+734,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+735,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+736,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+737,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+738,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+739,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+741,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+742,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+743,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+744,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+745,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+746,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+747,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+748,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+749,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+750,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+751,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+753,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+754,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+755,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+756,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+757,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+758,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+759,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+760,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+761,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+762,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+763,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+764,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+765,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+766,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+768,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+769,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+770,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+771,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+772,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+773,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+775,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+776,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+777,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+778,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+779,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+780,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+781,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+782,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+783,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+784,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+785,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+786,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+787,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+789,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+790,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+791,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+792,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+793,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+794,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+795,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+796,(vlSelf->axi_mmio_b_user_i));
        tracep->fullBit(oldp+797,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+798,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+799,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+800,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                    : (IData)(vlSelf->axi_w_ready_i))));
        tracep->fullBit(oldp+801,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+802,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+803,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+804,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+805,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+806,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullCData(oldp+807,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+808,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullBit(oldp+809,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+810,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+811,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+812,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+813,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+815,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+817,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+819,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+821,(0x40U),32);
        tracep->fullIData(oldp+822,(4U),32);
        tracep->fullIData(oldp+823,(8U),32);
        tracep->fullIData(oldp+824,(1U),32);
        tracep->fullCData(oldp+825,(0U),3);
        tracep->fullCData(oldp+826,(0U),4);
        tracep->fullBit(oldp+827,(0U));
        tracep->fullCData(oldp+828,(3U),8);
        tracep->fullCData(oldp+829,(3U),3);
        tracep->fullCData(oldp+830,(1U),2);
        tracep->fullBit(oldp+831,(0U));
        tracep->fullCData(oldp+832,(2U),4);
        tracep->fullCData(oldp+833,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+834,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+835,(1U),4);
        tracep->fullCData(oldp+836,(0xfU),4);
        tracep->fullCData(oldp+837,(0xffU),8);
        tracep->fullCData(oldp+838,(vlSelf->top__DOT__ls_axi_b_id_i),4);
        tracep->fullBit(oldp+839,(vlSelf->top__DOT__ls_axi_b_user_i));
        tracep->fullCData(oldp+840,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+841,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullCData(oldp+842,(vlSelf->top__DOT__ls_axi_r_id_i),4);
        tracep->fullBit(oldp+843,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+844,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+846,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+847,(1U));
        tracep->fullBit(oldp+848,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+849,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullCData(oldp+850,(vlSelf->top__DOT__fetchLenth),8);
        tracep->fullCData(oldp+851,(vlSelf->top__DOT__lsFetchLenth),8);
        tracep->fullCData(oldp+852,(4U),8);
        tracep->fullBit(oldp+853,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_valid_i));
        tracep->fullQData(oldp+854,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i),64);
        tracep->fullCData(oldp+856,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_prot_i),3);
        tracep->fullCData(oldp+857,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_id_i),4);
        tracep->fullBit(oldp+858,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_user_i));
        tracep->fullCData(oldp+859,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_len_i),8);
        tracep->fullCData(oldp+860,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_size_i),3);
        tracep->fullCData(oldp+861,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_burst_i),2);
        tracep->fullBit(oldp+862,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_lock_i));
        tracep->fullCData(oldp+863,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_cache_i),4);
        tracep->fullCData(oldp+864,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_qos_i),4);
        tracep->fullCData(oldp+865,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_region_i),4);
        tracep->fullBit(oldp+866,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_valid_i));
        tracep->fullQData(oldp+867,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_data_i),64);
        tracep->fullCData(oldp+869,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_strb_i),8);
        tracep->fullBit(oldp+870,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_last_i));
        tracep->fullBit(oldp+871,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_user_i));
        tracep->fullBit(oldp+872,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_b_ready_i));
        tracep->fullBit(oldp+873,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_valid_i));
        tracep->fullQData(oldp+874,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_addr_i),64);
        tracep->fullCData(oldp+876,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_prot_i),3);
        tracep->fullCData(oldp+877,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_id_i),4);
        tracep->fullBit(oldp+878,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_user_i));
        tracep->fullCData(oldp+879,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_len_i),8);
        tracep->fullCData(oldp+880,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_size_i),3);
        tracep->fullCData(oldp+881,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_burst_i),2);
        tracep->fullBit(oldp+882,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_lock_i));
        tracep->fullCData(oldp+883,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_cache_i),4);
        tracep->fullCData(oldp+884,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_qos_i),4);
        tracep->fullCData(oldp+885,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_region_i),4);
        tracep->fullBit(oldp+886,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_ready_i));
        tracep->fullBit(oldp+887,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_user_o));
        tracep->fullQData(oldp+888,(0ULL),64);
        tracep->fullCData(oldp+890,(0U),8);
        tracep->fullCData(oldp+891,(1U),3);
        tracep->fullCData(oldp+892,(2U),3);
        tracep->fullCData(oldp+893,(7U),3);
        tracep->fullBit(oldp+894,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+895,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+896,(0x80U),32);
        tracep->fullIData(oldp+897,(6U),32);
        __Vtemp296[0U] = 0U;
        __Vtemp296[1U] = 0U;
        __Vtemp296[2U] = 0U;
        __Vtemp296[3U] = 0U;
        tracep->fullWData(oldp+898,(__Vtemp296),128);
        __Vtemp297[0U] = 0xffffffffU;
        __Vtemp297[1U] = 0xffffffffU;
        __Vtemp297[2U] = 0xffffffffU;
        __Vtemp297[3U] = 0xffffffffU;
        tracep->fullWData(oldp+902,(__Vtemp297),128);
        tracep->fullCData(oldp+906,(0U),2);
        tracep->fullCData(oldp+907,(3U),2);
        tracep->fullCData(oldp+908,(2U),2);
        tracep->fullIData(oldp+909,(3U),32);
        tracep->fullIData(oldp+910,(0x60U),32);
        tracep->fullIData(oldp+911,(0U),32);
        tracep->fullIData(oldp+912,(0x13bU),32);
        tracep->fullBit(oldp+913,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+914,(0xe2U),32);
        tracep->fullBit(oldp+915,(vlSelf->top__DOT__ls_u__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+916,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+917,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+918,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullIData(oldp+919,(0x121U),32);
        tracep->fullIData(oldp+920,(0x40U),32);
        tracep->fullIData(oldp+921,(3U),32);
        tracep->fullIData(oldp+922,(1U),32);
        tracep->fullQData(oldp+923,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+925,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
