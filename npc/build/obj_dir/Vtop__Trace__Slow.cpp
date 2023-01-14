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
        tracep->declBit(c+570,"clk", false,-1);
        tracep->declBit(c+571,"rst_n", false,-1);
        tracep->declQuad(c+572,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+574,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+576,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+577,"regA0", false,-1, 63,0);
        tracep->declBit(c+579,"stall_n_diff", false,-1);
        tracep->declBit(c+580,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+581,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+582,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+584,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+585,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+586,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+587,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+588,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+589,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+590,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+591,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+592,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+593,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+594,"axi_r_ready_o", false,-1);
        tracep->declBit(c+595,"axi_r_valid_i", false,-1);
        tracep->declBus(c+596,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+597,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+599,"axi_r_last_i", false,-1);
        tracep->declBus(c+600,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+601,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+602,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+603,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+604,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+606,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+607,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+608,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+609,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+610,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+611,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+612,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+613,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+614,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+615,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+616,"axi_w_ready_i", false,-1);
        tracep->declBit(c+617,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+618,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+620,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+621,"axi_w_last_o", false,-1);
        tracep->declBus(c+622,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+623,"axi_b_ready_o", false,-1);
        tracep->declBit(c+624,"axi_b_valid_i", false,-1);
        tracep->declBus(c+625,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+626,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+627,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+628,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+629,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+630,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+632,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+633,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+634,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+635,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+636,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+637,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+638,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+639,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+640,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+641,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+642,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+643,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+644,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+645,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+647,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+648,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+649,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+650,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+651,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+652,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+654,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+655,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+656,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+657,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+658,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+659,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+660,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+661,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+662,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+663,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+664,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+665,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+666,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+668,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+669,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+670,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+671,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+672,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+673,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+674,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+675,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+685,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+685,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+685,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+685,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+686,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+687,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+688,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+570,"top clk", false,-1);
        tracep->declBit(c+571,"top rst_n", false,-1);
        tracep->declQuad(c+572,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+574,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+576,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+577,"top regA0", false,-1, 63,0);
        tracep->declBit(c+579,"top stall_n_diff", false,-1);
        tracep->declBit(c+580,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+581,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+582,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+584,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+585,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+586,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+587,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+588,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+589,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+590,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+591,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+592,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+593,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+594,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+595,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+596,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+597,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+599,"top axi_r_last_i", false,-1);
        tracep->declBus(c+600,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+601,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+602,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+603,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+604,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+606,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+607,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+608,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+609,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+610,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+611,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+612,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+613,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+614,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+615,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+616,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+617,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+618,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+620,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+621,"top axi_w_last_o", false,-1);
        tracep->declBus(c+622,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+623,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+624,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+625,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+626,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+627,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+628,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+629,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+630,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+632,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+633,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+634,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+635,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+636,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+637,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+638,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+639,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+640,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+641,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+642,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+643,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+644,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+645,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+647,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+648,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+649,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+650,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+651,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+652,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+654,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+655,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+656,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+657,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+658,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+659,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+660,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+661,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+662,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+663,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+664,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+665,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+666,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+668,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+669,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+670,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+671,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+672,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+673,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+674,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+675,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+82,"top instr_fetching", false,-1);
        tracep->declBit(c+689,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+83,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+84,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+690,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+691,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+692,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+693,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+694,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+695,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+696,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+697,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+691,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+698,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+86,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+699,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+700,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+701,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+703,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+704,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+705,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+87,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+88,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+690,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+706,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+692,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+693,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+90,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+695,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+696,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+707,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+691,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+691,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+2,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+91,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+92,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+94,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+91,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+692,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+95,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+3,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+4,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+708,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+709,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+5,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+96,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+88,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+690,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+706,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+692,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+693,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+694,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+695,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+696,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+697,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+691,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+710,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+97,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+6,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+7,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+8,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+711,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+712,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+713,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+714,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+98,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+100,"top is_jump", false,-1);
        tracep->declQuad(c+101,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+103,"top pc_stall_n", false,-1);
        tracep->declBit(c+104,"top if_stall_n", false,-1);
        tracep->declBit(c+105,"top if_instr_valid", false,-1);
        tracep->declBit(c+68,"top sram_data_valid", false,-1);
        tracep->declQuad(c+106,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+84,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+716,"top sram_ren", false,-1);
        tracep->declBit(c+108,"top sram_addr_valid", false,-1);
        tracep->declBit(c+109,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+110,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+111,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+112,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+114,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+475,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+477,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+115,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+117,"top src1sel_id", false,-1);
        tracep->declBus(c+118,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+119,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+120,"top is_brc_id", false,-1);
        tracep->declBit(c+121,"top is_jal_id", false,-1);
        tracep->declBit(c+122,"top is_jalr_id", false,-1);
        tracep->declBit(c+123,"top wben_id", false,-1);
        tracep->declBus(c+124,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+125,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+103,"top id_stall_n", false,-1);
        tracep->declBit(c+126,"top DivEn_id", false,-1);
        tracep->declBus(c+127,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+128,"top in_trap_id", false,-1);
        tracep->declBit(c+129,"top out_trap_id", false,-1);
        tracep->declBit(c+130,"top trap_id", false,-1);
        tracep->declBit(c+131,"top ld_use_hazard", false,-1);
        tracep->declBit(c+132,"top id_flush", false,-1);
        tracep->declQuad(c+133,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+135,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+136,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+138,"top src1sel_ex", false,-1);
        tracep->declBus(c+139,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+140,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+142,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+144,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+146,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+148,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+149,"top is_brc_ex", false,-1);
        tracep->declBit(c+150,"top is_jal_ex", false,-1);
        tracep->declBit(c+151,"top is_jalr_ex", false,-1);
        tracep->declBit(c+152,"top wben_ex", false,-1);
        tracep->declBit(c+153,"top DivEn_ex", false,-1);
        tracep->declBus(c+154,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+155,"top trap_ex", false,-1);
        tracep->declBit(c+156,"top ex_stall_n", false,-1);
        tracep->declQuad(c+157,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+159,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+160,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+161,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+162,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+163,"top ex_flush", false,-1);
        tracep->declQuad(c+164,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+166,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+88,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+168,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+169,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+171,"top wben_ls", false,-1);
        tracep->declQuad(c+172,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+174,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+176,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+178,"top trap_ls", false,-1);
        tracep->declBit(c+156,"top ls_stall_n", false,-1);
        tracep->declBit(c+179,"top ls_not_ok", false,-1);
        tracep->declQuad(c+88,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+180,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+181,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+182,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+184,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+69,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+70,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+185,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+90,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+694,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+187,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+189,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+191,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+193,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+194,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+196,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+197,"top wben_wb", false,-1);
        tracep->declQuad(c+198,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+200,"top wb_stall_n", false,-1);
        tracep->declBus(c+685,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+685,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+685,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+685,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+686,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+687,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+688,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+82,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+676,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+83,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+84,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+690,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+691,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+692,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+693,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+694,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+695,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+696,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+697,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+691,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+698,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+86,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+553,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+554,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+555,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+557,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+558,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+717,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+677,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+718,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+719,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+721,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+722,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+723,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+724,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+725,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+726,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+727,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+728,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+729,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+730,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+678,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+731,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+732,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+734,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+735,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+736,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+737,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+679,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+680,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+681,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+682,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+683,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+738,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+739,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+741,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+742,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+743,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+744,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+745,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+746,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+747,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+748,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+749,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+750,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+751,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+559,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+560,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+561,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+563,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+558,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+752,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+602,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+603,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+604,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+606,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+607,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+608,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+609,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+610,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+611,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+612,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+613,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+614,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+615,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+616,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+617,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+618,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+620,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+621,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+622,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+623,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+624,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+625,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+626,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+627,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+580,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+581,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+582,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+584,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+585,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+586,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+587,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+588,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+589,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+590,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+591,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+592,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+593,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+594,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+595,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+596,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+597,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+599,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+600,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+601,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+650,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+651,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+652,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+654,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+655,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+656,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+657,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+658,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+659,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+660,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+661,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+662,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+663,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+664,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+665,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+666,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+668,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+669,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+670,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+671,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+672,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+673,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+674,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+675,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+628,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+629,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+630,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+632,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+633,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+634,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+635,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+636,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+637,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+638,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+639,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+640,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+641,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+642,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+643,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+644,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+645,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+647,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+648,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+649,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+677,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+718,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+719,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+721,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+722,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+723,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+724,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+725,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+726,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+727,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+728,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+729,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+730,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+678,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+731,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+732,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+734,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+735,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+736,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+737,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+679,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+680,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+681,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+682,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+564,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+201,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+202,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+204,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+205,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+206,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+207,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+208,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+209,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+210,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+211,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+212,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+213,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+214,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+565,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+566,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+567,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+569,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+558,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+684,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+570,"top IF_u clk", false,-1);
        tracep->declBit(c+571,"top IF_u rst_n", false,-1);
        tracep->declBit(c+100,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+101,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+174,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+176,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+128,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+129,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+104,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+98,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+111,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+105,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+106,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+68,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+109,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+110,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+84,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+716,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+108,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+84,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+570,"top cache_dut clk", false,-1);
        tracep->declBit(c+571,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+215,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+108,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+696,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+753,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+693,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+104,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+109,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+216,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+110,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+106,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+755,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+756,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+757,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+758,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBus(c+690,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+760,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+761,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+694,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+217,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+218,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+219,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+220,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+221,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+10,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+14,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+18,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+22,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+222,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+226,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+230,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+234,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+238,"top cache_dut wenWay1_1", false,-1);
        tracep->declBit(c+239,"top cache_dut wenWay1_2", false,-1);
        tracep->declBit(c+240,"top cache_dut wenWay2_1", false,-1);
        tracep->declBit(c+241,"top cache_dut wenWay2_2", false,-1);
        tracep->declBit(c+242,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+243,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+245,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+246,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+247,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+248,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+250,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+252,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+253,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+254,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+255,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+256,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+257,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+258,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+259,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+762,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+763,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+260,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+26,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+34,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+71,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+73,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+261,"top cache_dut missEn", false,-1);
        tracep->declBit(c+262,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+263,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+265,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+266,"top cache_dut missFlag", false,-1);
        tracep->declArray(c+267,"top cache_dut dpiRegWay1", false,-1, 255,0);
        tracep->declArray(c+275,"top cache_dut dpiRegWay2", false,-1, 255,0);
        tracep->declBus(c+764,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+685,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+765,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+764,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+10,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+570,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+283,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+284,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+766,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+285,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+222,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+286,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+238,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+770,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+764,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+685,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+765,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+764,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+14,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+570,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+287,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+288,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+766,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+285,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+226,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+289,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+239,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+770,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+764,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+685,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+765,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+764,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+18,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+570,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+290,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+291,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+766,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+285,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+230,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+292,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+240,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+770,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+764,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+685,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+765,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+764,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+22,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+570,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+293,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+294,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+766,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+285,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+234,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+295,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+241,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+770,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+685,"top axi_if_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+685,"top axi_if_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+685,"top axi_if_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+685,"top axi_if_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+686,"top axi_if_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+687,"top axi_if_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+688,"top axi_if_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+570,"top axi_if_u clock", false,-1);
        tracep->declBit(c+571,"top axi_if_u reset", false,-1);
        tracep->declBit(c+108,"top axi_if_u rw_valid_i", false,-1);
        tracep->declBit(c+68,"top axi_if_u rw_ready_o", false,-1);
        tracep->declQuad(c+75,"top axi_if_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+84,"top axi_if_u rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+82,"top axi_if_u instr_fetching", false,-1);
        tracep->declBit(c+689,"top axi_if_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+83,"top axi_if_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+84,"top axi_if_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+690,"top axi_if_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+691,"top axi_if_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+692,"top axi_if_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+693,"top axi_if_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+694,"top axi_if_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+695,"top axi_if_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+696,"top axi_if_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+697,"top axi_if_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+691,"top axi_if_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+698,"top axi_if_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+86,"top axi_if_u axi_r_ready_o", false,-1);
        tracep->declBit(c+699,"top axi_if_u axi_r_valid_i", false,-1);
        tracep->declBus(c+700,"top axi_if_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+701,"top axi_if_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+703,"top axi_if_u axi_r_last_i", false,-1);
        tracep->declBus(c+704,"top axi_if_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+705,"top axi_if_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+774,"top axi_if_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+695,"top axi_if_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+775,"top axi_if_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+776,"top axi_if_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+296,"top axi_if_u r_state", false,-1, 1,0);
        tracep->declBus(c+77,"top axi_if_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+83,"top axi_if_u ar_valid", false,-1);
        tracep->declBit(c+86,"top axi_if_u r_ready", false,-1);
        tracep->declBit(c+777,"top axi_if_u instr_valid", false,-1);
        tracep->declQuad(c+42,"top axi_if_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+44,"top axi_if_u instr_valid_reg", false,-1);
        tracep->declQuad(c+45,"top axi_if_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+778,"top axi_if_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+691,"top axi_if_u axi_id", false,-1, 3,0);
        tracep->declBus(c+696,"top axi_if_u axi_user", false,-1, 0,0);
        tracep->declBus(c+693,"top axi_if_u axi_len", false,-1, 7,0);
        tracep->declBus(c+694,"top axi_if_u axi_size", false,-1, 2,0);
        tracep->declBit(c+570,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+571,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+98,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+111,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+103,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+132,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+112,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+114,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+297,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+299,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+779,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+780,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+570,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+571,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+103,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+300,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+303,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+570,"top ID_u clk", false,-1);
        tracep->declBit(c+571,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+112,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+187,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+193,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+114,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+194,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+196,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+197,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+477,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+475,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+115,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+117,"top ID_u src1sel", false,-1);
        tracep->declBus(c+118,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+119,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+122,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+121,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+120,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+123,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+124,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+125,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+577,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+126,"top ID_u DivEn", false,-1);
        tracep->declBus(c+127,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+130,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+128,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+129,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+306,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+115,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+477,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+475,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+112,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+114,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+124,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+125,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+306,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+117,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+118,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+119,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+122,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+121,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+120,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+123,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+126,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+127,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+130,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+128,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+129,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+307,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+308,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+309,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+310,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+306,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+115,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+570,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+187,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+193,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+124,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+477,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+125,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+475,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+196,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+194,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+197,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+577,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+489+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+114,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+135,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+131,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+570,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+571,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+156,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+163,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+112,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+114,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+115,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+475,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+477,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+119,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+122,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+121,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+120,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+117,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+118,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+123,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+124,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+125,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+126,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+127,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+130,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+133,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+135,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+140,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+142,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+144,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+148,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+151,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+150,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+149,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+138,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+139,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+152,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+161,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+162,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+153,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+154,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+155,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+311,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+313,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+314,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+315,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+316,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+317,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+318,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+781,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+780,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+570,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+571,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+156,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+479,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+319,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+148,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+142,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+140,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+144,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+133,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+135,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+151,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+150,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+149,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+138,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+139,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+159,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+160,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+88,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+194,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+157,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+153,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+154,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+136,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+101,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+146,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+100,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+329,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+331,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+333,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+146,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+148,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+329,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+331,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+153,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+154,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+136,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+335,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+336,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+337,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+339,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+340,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+342,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+344,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+344,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+345,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+346,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+347,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+349,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+350,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+351,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+353,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+355,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+357,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+329,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+340,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+339,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+342,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+349,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+336,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+350,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+359,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+346,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+344,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+345,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+339,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+344,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+360,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+329,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+361,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+345,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+344,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+347,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+362,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+364,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+366,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+368,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+370,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+372,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+374,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+329,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+331,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+154,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+357,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+333,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+146,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+151,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+150,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+149,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+376,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+144,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+133,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+101,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+100,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+377,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+379,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+782,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+381,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+382,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+383,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+384,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+386,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+388,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+570,"top forwarding_u clk", false,-1);
        tracep->declBit(c+571,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+161,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+162,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+389,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+196,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+171,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+197,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+194,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+200,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+159,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+160,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+157,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+157,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+390,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+391,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+392,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+393,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+394,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+395,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+396,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+397,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+570,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+571,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+133,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+146,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+135,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+136,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+152,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+155,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+156,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+164,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+166,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+168,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+88,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+171,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+178,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+783,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+780,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+570,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+571,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+156,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+398,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+406,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+570,"top ls_u clk", false,-1);
        tracep->declBit(c+571,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+164,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+88,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+166,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+168,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+189,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+193,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+191,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+178,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+169,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+172,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+174,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+176,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+179,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+88,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+180,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+181,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+182,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+184,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+90,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+694,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+69,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+70,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+185,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+181,"top ls_u wren", false,-1);
        tracep->declBit(c+180,"top ls_u rden", false,-1);
        tracep->declBus(c+414,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+182,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+415,"top ls_u wren_last", false,-1);
        tracep->declBit(c+570,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+571,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+181,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+180,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+414,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+182,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+88,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+164,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+189,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+415,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+169,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+179,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+88,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+180,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+181,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+182,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+184,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+90,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+694,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+69,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+70,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+185,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+185,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+416,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+417,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+418,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+419,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+420,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+421,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+422,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+694,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+423,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+424,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+425,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+90,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+184,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+426,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+427,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+428,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+429,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+168,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+193,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+166,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+191,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+181,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+180,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+414,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+182,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+430,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+570,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+571,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+164,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+168,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+88,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+178,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+172,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+174,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+176,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+431,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+432,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+433,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+434,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+435,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+436,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+437,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+438,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+439,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+88,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+440,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+442,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+444,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+176,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+174,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+446,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+448,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+450,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+685,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+685,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+685,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+685,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+686,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+687,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+688,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+570,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+571,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+181,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+180,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+70,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+69,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+185,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+182,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+184,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+88,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+90,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+694,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+1,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+87,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+88,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+690,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+706,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+692,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+693,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+90,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+695,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+696,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+707,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+691,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+691,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+2,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+91,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+92,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+94,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+91,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+692,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+95,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+3,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+4,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+708,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+709,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+5,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+96,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+88,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+690,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+706,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+692,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+693,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+694,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+695,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+696,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+697,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+691,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+710,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+97,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+6,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+7,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+8,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+711,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+712,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+713,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+774,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+695,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+775,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+776,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+452,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+78,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+87,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+91,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+95,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+47,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+774,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+695,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+775,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+776,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+453,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+79,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+96,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+97,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+784,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+48,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+50,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+52,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+53,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+778,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+706,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+696,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+693,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+694,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+454,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+570,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+571,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+164,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+168,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+88,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+169,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+171,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+172,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+200,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+187,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+193,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+189,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+191,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+197,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+198,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+785,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+780,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+570,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+571,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+200,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+455,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+465,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+187,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+193,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+189,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+191,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+198,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+196,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+194,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+570,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+571,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+131,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+100,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+128,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+129,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+105,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+179,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+104,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+103,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+103,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+156,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+156,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+200,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+132,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+163,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+786,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+786,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+694,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+90,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+570,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+571,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+88,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+690,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+87,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+1,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+92,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+94,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+91,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+2,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+4,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+3,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+95,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+88,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+690,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+96,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+5,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+8,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+7,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+97,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+55,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+1,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+2,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+4,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+3,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+57,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+5,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+8,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+7,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+787,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+788,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+59,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+61,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+63,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+65,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+80,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+81,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+789,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+791,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+67,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp108;
    VlWide<3>/*95:0*/ __Vtemp110;
    VlWide<3>/*95:0*/ __Vtemp111;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<3>/*95:0*/ __Vtemp113;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp119;
    VlWide<3>/*95:0*/ __Vtemp120;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<8>/*255:0*/ __Vtemp126;
    VlWide<10>/*319:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp133;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullWData(oldp+10,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+14,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+18,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+22,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+26,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+34,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullBit(oldp+68,((((IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state) 
                                   >> 1U) & ((~ (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state)) 
                                             & ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                 == vlSelf->top__DOT__axi_if_u__DOT__addr_reg) 
                                                & (IData)(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg))))));
        tracep->fullBit(oldp+69,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
        tracep->fullBit(oldp+70,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
        tracep->fullQData(oldp+71,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
                                                                  vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[7U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[6U])))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way1Data[7U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[6U]))))
                                             : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[5U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[4U])))
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
                                                                  vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[2U])))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way1Data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[2U]))))
                                             : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[0U])))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way1Data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[0U]))))))
                                     : 0ULL)),64);
        tracep->fullQData(oldp+73,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
                                                                  vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[7U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[6U])))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way2Data[7U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[6U]))))
                                             : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[5U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[4U])))
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
                                                                  vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[2U])))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way2Data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[2U]))))
                                             : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[0U])))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way2Data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[0U]))))))
                                     : 0ULL)),64);
        tracep->fullQData(oldp+75,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                     ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                         ? 0ULL : (
                                                   (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                    != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                                    ? 0ULL
                                                    : vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg))
                                     : 0ULL)),64);
        tracep->fullCData(oldp+77,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                     ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                         ? ((IData)(vlSelf->top__DOT__if_axi_r_last_i)
                                             ? 2U : 3U)
                                         : ((0ULL != vlSelf->top__DOT__pc_new)
                                             ? ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                 != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                                 ? 1U
                                                 : 2U)
                                             : 0U))
                                     : ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                         ? ((IData)(vlSelf->top__DOT__if_axi_ar_ready_i)
                                             ? 3U : 1U)
                                         : ((0ULL != vlSelf->top__DOT__pc_new)
                                             ? 1U : 0U)))),2);
        tracep->fullCData(oldp+78,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                     ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                         ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)
                                             ? 2U : 3U)
                                         : ((8U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U)))
                                             ? ((((
                                                   (((QData)((IData)(
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
        tracep->fullCData(oldp+79,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                     ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                         ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)
                                             ? 2U : 3U)
                                         : ((3U == 
                                             (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U)))
                                             ? (((((QData)((IData)(
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
        tracep->fullBit(oldp+80,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                  & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+81,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                  & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__instr_fetching));
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+88,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullCData(oldp+90,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+92,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                    << (0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                 << 1U)))),64);
        tracep->fullCData(oldp+94,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                             << (7U 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                    >> 2U))))),8);
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+101,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+103,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullBit(oldp+108,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+109,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+110,(((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                    | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+111,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+112,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+114,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+118,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+119,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+125,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+130,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+133,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+135,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+136,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullBit(oldp+138,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+139,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+140,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+142,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+144,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+148,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+149,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+150,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+151,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+152,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+153,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+154,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+155,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+156,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+159,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+160,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+161,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+162,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+163,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+164,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+166,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+168,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+169,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+171,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+178,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+179,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+180,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+181,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+184,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+187,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+189,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+191,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+193,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+196,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+197,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+198,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+200,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullBit(oldp+201,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+204,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
        tracep->fullCData(oldp+205,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
        tracep->fullCData(oldp+207,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
        tracep->fullCData(oldp+208,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullCData(oldp+209,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
        tracep->fullBit(oldp+210,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
        tracep->fullCData(oldp+211,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
        tracep->fullCData(oldp+212,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
        tracep->fullCData(oldp+213,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+214,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullIData(oldp+215,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+216,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+217,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullCData(oldp+218,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullBit(oldp+219,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+220,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+221,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullWData(oldp+222,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1),128);
        tracep->fullWData(oldp+226,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2),128);
        tracep->fullWData(oldp+230,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1),128);
        tracep->fullWData(oldp+234,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2),128);
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1));
        tracep->fullBit(oldp+239,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2));
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1));
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2));
        tracep->fullBit(oldp+242,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+245,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+246,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+247,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+252,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+253,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+254,(vlSelf->top__DOT__cache_dut__DOT__bitValid1_d));
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__cache_dut__DOT__bitValid2_d));
        tracep->fullIData(oldp+256,(vlSelf->top__DOT__cache_dut__DOT__tagArray1_d),21);
        tracep->fullIData(oldp+257,(vlSelf->top__DOT__cache_dut__DOT__tagArray2_d),21);
        tracep->fullIData(oldp+258,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+259,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+260,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+261,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+262,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__cache_dut__DOT__addrToRead),64);
        tracep->fullIData(oldp+265,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullWData(oldp+267,(vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1),256);
        tracep->fullWData(oldp+275,(vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2),256);
        tracep->fullBit(oldp+283,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN));
        tracep->fullBit(oldp+284,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1)))));
        tracep->fullCData(oldp+285,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+286,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)))));
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+288,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2)))));
        tracep->fullBit(oldp+289,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+290,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN));
        tracep->fullBit(oldp+291,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1)))));
        tracep->fullBit(oldp+292,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)))));
        tracep->fullBit(oldp+293,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+294,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2)))));
        tracep->fullBit(oldp+295,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullCData(oldp+296,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
        tracep->fullQData(oldp+297,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+299,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp108[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp108[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp108[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+300,(__Vtemp108),96);
        tracep->fullWData(oldp+303,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+306,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+307,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+308,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+309,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+310,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+311,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+313,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+314,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+315,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+316,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+317,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+318,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+319,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+333,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp110, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp111, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp112, __Vtemp110, __Vtemp111);
        VL_EXTEND_WI(65,1, __Vtemp113, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp114, __Vtemp112, __Vtemp113);
        tracep->fullBit(oldp+335,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp114[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+340,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+342,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+344,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+345,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+346,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp117, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp118, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp119, __Vtemp117, __Vtemp118);
        VL_EXTEND_WI(65,1, __Vtemp120, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp121, __Vtemp119, __Vtemp120);
        tracep->fullBit(oldp+349,((1U & __Vtemp121[2U])));
        tracep->fullBit(oldp+350,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+351,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+353,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+355,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+357,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+359,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+360,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+361,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+362,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+364,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+366,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+368,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+370,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+372,(((0x4000000U & 
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
        tracep->fullQData(oldp+374,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+376,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+377,(((((QData)((IData)(
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
        tracep->fullQData(oldp+379,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+381,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+382,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+383,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+386,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+388,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+389,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+390,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+391,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+392,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+393,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+394,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+395,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+396,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+397,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        __Vtemp126[0U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                           << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xeU)) 
                                     | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp126[1U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                           >> 0x1eU) | ((IData)((((0x4000000U 
                                                   & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                                   : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp126[2U] = (((IData)((((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout) 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                             << 2U));
        __Vtemp126[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp126[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp126[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp126[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp126[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+398,(__Vtemp126),226);
        tracep->fullWData(oldp+406,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+414,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+415,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+416,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+417,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+418,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+419,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+420,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+421,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+422,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+423,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+424,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+425,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+426,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+427,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+428,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+429,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+430,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+431,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+432,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+433,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+434,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+435,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+436,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+437,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+438,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+439,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+440,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+442,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+446,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+448,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+450,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullCData(oldp+452,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+453,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+454,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+455,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+465,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+475,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+477,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp131[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp131[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp131[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp131[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp131[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp131[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp131[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp131[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp131[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp131[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+479,(__Vtemp131),315);
        tracep->fullQData(oldp+489,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+491,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+493,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+495,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+497,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+511,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+513,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+515,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+521,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+525,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+527,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+529,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+533,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+535,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+537,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+539,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+541,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+543,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+545,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+547,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+549,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+551,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+553,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullCData(oldp+554,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp)))),2);
        tracep->fullQData(oldp+555,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+557,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last)))));
        tracep->fullCData(oldp+558,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+559,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullCData(oldp+560,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp))
                                      : 0U)),2);
        tracep->fullQData(oldp+561,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+563,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last))
                                    : 0U)));
        tracep->fullBit(oldp+564,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+565,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullCData(oldp+566,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp),2);
        tracep->fullQData(oldp+567,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+569,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullBit(oldp+570,(vlSelf->clk));
        tracep->fullBit(oldp+571,(vlSelf->rst_n));
        tracep->fullQData(oldp+572,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+574,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+576,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+577,(vlSelf->regA0),64);
        tracep->fullBit(oldp+579,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+580,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+581,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+582,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+584,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+585,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+586,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+587,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+588,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+589,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+590,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+591,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+592,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+593,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+594,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+595,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+596,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+597,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+599,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+600,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+601,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+602,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+603,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+604,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+606,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+607,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+608,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+609,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+610,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+611,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+612,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+613,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+614,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+615,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+616,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+617,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+618,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+620,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+621,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+622,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+623,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+624,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+625,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+626,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+627,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+628,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+629,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+630,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+632,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+633,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+634,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+635,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+636,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+637,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+638,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+639,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+640,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+641,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+642,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+643,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+644,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+645,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+647,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+648,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+649,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+650,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+651,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+652,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+654,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+655,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+656,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+657,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+658,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+659,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+660,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+661,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+662,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+663,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+664,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+665,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+666,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+668,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+669,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+670,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+671,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+672,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+673,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+674,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+675,(vlSelf->axi_mmio_b_user_i));
        tracep->fullBit(oldp+676,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullBit(oldp+677,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+678,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                    : (IData)(vlSelf->axi_w_ready_i))));
        tracep->fullBit(oldp+679,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+680,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+681,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+682,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+683,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullBit(oldp+684,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullIData(oldp+685,(0x40U),32);
        tracep->fullIData(oldp+686,(4U),32);
        tracep->fullIData(oldp+687,(8U),32);
        tracep->fullIData(oldp+688,(1U),32);
        tracep->fullBit(oldp+689,(vlSelf->top__DOT__if_axi_ar_ready_i));
        tracep->fullCData(oldp+690,(0U),3);
        tracep->fullCData(oldp+691,(0U),4);
        tracep->fullBit(oldp+692,(0U));
        tracep->fullCData(oldp+693,(0U),8);
        tracep->fullCData(oldp+694,(3U),3);
        tracep->fullCData(oldp+695,(1U),2);
        tracep->fullBit(oldp+696,(0U));
        tracep->fullCData(oldp+697,(2U),4);
        tracep->fullCData(oldp+698,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+699,(vlSelf->top__DOT__if_axi_r_valid_i));
        tracep->fullCData(oldp+700,(vlSelf->top__DOT__if_axi_r_resp_i),2);
        tracep->fullQData(oldp+701,(vlSelf->top__DOT__if_axi_r_data_i),64);
        tracep->fullBit(oldp+703,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+704,(vlSelf->top__DOT__if_axi_r_id_i),4);
        tracep->fullBit(oldp+705,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+706,(1U),4);
        tracep->fullCData(oldp+707,(0xfU),4);
        tracep->fullCData(oldp+708,(vlSelf->top__DOT__ls_axi_b_id_i),4);
        tracep->fullBit(oldp+709,(vlSelf->top__DOT__ls_axi_b_user_i));
        tracep->fullCData(oldp+710,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+711,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullCData(oldp+712,(vlSelf->top__DOT__ls_axi_r_id_i),4);
        tracep->fullBit(oldp+713,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+714,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+716,(1U));
        tracep->fullBit(oldp+717,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_r_user_o));
        tracep->fullBit(oldp+718,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_valid_i));
        tracep->fullQData(oldp+719,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i),64);
        tracep->fullCData(oldp+721,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_prot_i),3);
        tracep->fullCData(oldp+722,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_id_i),4);
        tracep->fullBit(oldp+723,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_user_i));
        tracep->fullCData(oldp+724,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_len_i),8);
        tracep->fullCData(oldp+725,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_size_i),3);
        tracep->fullCData(oldp+726,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_burst_i),2);
        tracep->fullBit(oldp+727,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_lock_i));
        tracep->fullCData(oldp+728,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_cache_i),4);
        tracep->fullCData(oldp+729,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_qos_i),4);
        tracep->fullCData(oldp+730,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_region_i),4);
        tracep->fullBit(oldp+731,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_valid_i));
        tracep->fullQData(oldp+732,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_data_i),64);
        tracep->fullCData(oldp+734,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_strb_i),8);
        tracep->fullBit(oldp+735,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_last_i));
        tracep->fullBit(oldp+736,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_user_i));
        tracep->fullBit(oldp+737,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_b_ready_i));
        tracep->fullBit(oldp+738,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_valid_i));
        tracep->fullQData(oldp+739,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_addr_i),64);
        tracep->fullCData(oldp+741,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_prot_i),3);
        tracep->fullCData(oldp+742,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_id_i),4);
        tracep->fullBit(oldp+743,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_user_i));
        tracep->fullCData(oldp+744,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_len_i),8);
        tracep->fullCData(oldp+745,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_size_i),3);
        tracep->fullCData(oldp+746,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_burst_i),2);
        tracep->fullBit(oldp+747,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_lock_i));
        tracep->fullCData(oldp+748,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_cache_i),4);
        tracep->fullCData(oldp+749,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_qos_i),4);
        tracep->fullCData(oldp+750,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_region_i),4);
        tracep->fullBit(oldp+751,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_ready_i));
        tracep->fullBit(oldp+752,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_user_o));
        tracep->fullQData(oldp+753,(0ULL),64);
        tracep->fullBit(oldp+755,(vlSelf->top__DOT__cache_dut__DOT__cacheRdValid_o));
        tracep->fullBit(oldp+756,(vlSelf->top__DOT__cache_dut__DOT__rdLast_i));
        tracep->fullIData(oldp+757,(vlSelf->top__DOT__cache_dut__DOT__cacheAddr_o),32);
        tracep->fullQData(oldp+758,(vlSelf->top__DOT__cache_dut__DOT__rdData_i),64);
        tracep->fullCData(oldp+760,(1U),3);
        tracep->fullCData(oldp+761,(2U),3);
        tracep->fullBit(oldp+762,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+763,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+764,(0x80U),32);
        tracep->fullIData(oldp+765,(6U),32);
        __Vtemp132[0U] = 0U;
        __Vtemp132[1U] = 0U;
        __Vtemp132[2U] = 0U;
        __Vtemp132[3U] = 0U;
        tracep->fullWData(oldp+766,(__Vtemp132),128);
        __Vtemp133[0U] = 0xffffffffU;
        __Vtemp133[1U] = 0xffffffffU;
        __Vtemp133[2U] = 0xffffffffU;
        __Vtemp133[3U] = 0xffffffffU;
        tracep->fullWData(oldp+770,(__Vtemp133),128);
        tracep->fullCData(oldp+774,(0U),2);
        tracep->fullCData(oldp+775,(3U),2);
        tracep->fullCData(oldp+776,(2U),2);
        tracep->fullBit(oldp+777,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid));
        tracep->fullIData(oldp+778,(3U),32);
        tracep->fullIData(oldp+779,(0x60U),32);
        tracep->fullIData(oldp+780,(0U),32);
        tracep->fullIData(oldp+781,(0x13bU),32);
        tracep->fullBit(oldp+782,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+783,(0xe2U),32);
        tracep->fullBit(oldp+784,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+785,(0x121U),32);
        tracep->fullIData(oldp+786,(0x40U),32);
        tracep->fullIData(oldp+787,(3U),32);
        tracep->fullIData(oldp+788,(1U),32);
        tracep->fullQData(oldp+789,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+791,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
