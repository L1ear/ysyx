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
        tracep->declBit(c+538,"clk", false,-1);
        tracep->declBit(c+539,"rst_n", false,-1);
        tracep->declQuad(c+540,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+542,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+544,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+545,"regA0", false,-1, 63,0);
        tracep->declBit(c+547,"stall_n_diff", false,-1);
        tracep->declBit(c+548,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+549,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+550,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+552,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+553,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+554,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+555,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+556,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+557,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+558,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+559,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+560,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+561,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+562,"axi_r_ready_o", false,-1);
        tracep->declBit(c+563,"axi_r_valid_i", false,-1);
        tracep->declBus(c+564,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+565,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+567,"axi_r_last_i", false,-1);
        tracep->declBus(c+568,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+569,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+570,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+571,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+572,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+574,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+575,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+576,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+577,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+578,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+579,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+580,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+581,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+582,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+583,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+584,"axi_w_ready_i", false,-1);
        tracep->declBit(c+585,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+586,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+588,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+589,"axi_w_last_o", false,-1);
        tracep->declBus(c+590,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+591,"axi_b_ready_o", false,-1);
        tracep->declBit(c+592,"axi_b_valid_i", false,-1);
        tracep->declBus(c+593,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+594,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+595,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+596,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+597,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+598,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+600,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+601,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+602,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+603,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+604,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+605,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+606,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+607,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+608,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+609,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+610,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+611,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+612,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+613,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+615,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+616,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+617,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+618,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+619,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+620,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+622,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+623,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+624,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+625,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+626,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+627,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+628,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+629,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+630,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+631,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+632,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+633,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+634,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+636,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+637,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+638,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+639,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+640,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+641,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+642,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+643,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+664,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+664,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+664,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+664,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+666,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+667,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+538,"top clk", false,-1);
        tracep->declBit(c+539,"top rst_n", false,-1);
        tracep->declQuad(c+540,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+542,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+544,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+545,"top regA0", false,-1, 63,0);
        tracep->declBit(c+547,"top stall_n_diff", false,-1);
        tracep->declBit(c+548,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+549,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+550,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+552,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+553,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+554,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+555,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+556,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+557,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+558,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+559,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+560,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+561,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+562,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+563,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+564,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+565,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+567,"top axi_r_last_i", false,-1);
        tracep->declBus(c+568,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+569,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+570,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+571,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+572,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+574,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+575,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+576,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+577,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+578,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+579,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+580,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+581,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+582,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+583,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+584,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+585,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+586,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+588,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+589,"top axi_w_last_o", false,-1);
        tracep->declBus(c+590,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+591,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+592,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+593,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+594,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+595,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+596,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+597,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+598,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+600,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+601,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+602,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+603,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+604,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+605,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+606,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+607,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+608,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+609,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+610,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+611,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+612,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+613,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+615,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+616,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+617,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+618,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+619,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+620,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+622,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+623,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+624,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+625,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+626,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+627,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+628,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+629,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+630,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+631,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+632,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+633,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+634,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+636,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+637,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+638,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+639,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+640,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+641,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+642,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+643,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+2,"top instr_fetching", false,-1);
        tracep->declBit(c+644,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+3,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+4,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+668,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+669,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+670,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+671,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+672,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+673,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+674,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+675,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+669,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+676,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+130,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+645,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+131,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+133,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+134,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+677,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+62,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+147,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+148,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+668,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+678,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+670,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+679,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+150,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+673,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+674,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+680,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+669,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+669,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+63,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+151,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+152,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+154,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+151,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+670,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+155,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+64,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+65,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+681,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+682,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+66,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+156,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+148,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+668,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+678,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+670,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+679,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+672,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+673,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+674,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+675,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+669,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+683,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+157,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+67,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+68,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+69,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+684,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+685,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+686,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+687,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+158,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+160,"top is_jump", false,-1);
        tracep->declQuad(c+161,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+163,"top pc_stall_n", false,-1);
        tracep->declBit(c+164,"top if_stall_n", false,-1);
        tracep->declBit(c+165,"top if_instr_valid", false,-1);
        tracep->declBit(c+689,"top sram_data_valid", false,-1);
        tracep->declQuad(c+166,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+168,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+690,"top sram_ren", false,-1);
        tracep->declBit(c+170,"top sram_addr_valid", false,-1);
        tracep->declBit(c+57,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+58,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+171,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+172,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+174,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+460,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+462,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+175,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+177,"top src1sel_id", false,-1);
        tracep->declBus(c+178,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+179,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+180,"top is_brc_id", false,-1);
        tracep->declBit(c+181,"top is_jal_id", false,-1);
        tracep->declBit(c+182,"top is_jalr_id", false,-1);
        tracep->declBit(c+183,"top wben_id", false,-1);
        tracep->declBus(c+184,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+185,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+163,"top id_stall_n", false,-1);
        tracep->declBit(c+186,"top DivEn_id", false,-1);
        tracep->declBus(c+187,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+188,"top in_trap_id", false,-1);
        tracep->declBit(c+189,"top out_trap_id", false,-1);
        tracep->declBit(c+190,"top trap_id", false,-1);
        tracep->declBit(c+191,"top ld_use_hazard", false,-1);
        tracep->declBit(c+192,"top id_flush", false,-1);
        tracep->declQuad(c+193,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+195,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+196,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+198,"top src1sel_ex", false,-1);
        tracep->declBus(c+199,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+200,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+202,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+204,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+206,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+208,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+209,"top is_brc_ex", false,-1);
        tracep->declBit(c+210,"top is_jal_ex", false,-1);
        tracep->declBit(c+211,"top is_jalr_ex", false,-1);
        tracep->declBit(c+212,"top wben_ex", false,-1);
        tracep->declBit(c+213,"top DivEn_ex", false,-1);
        tracep->declBus(c+214,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+215,"top trap_ex", false,-1);
        tracep->declBit(c+216,"top ex_stall_n", false,-1);
        tracep->declQuad(c+7,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+217,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+218,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+219,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+220,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+221,"top ex_flush", false,-1);
        tracep->declQuad(c+222,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+224,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+148,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+226,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+227,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+229,"top wben_ls", false,-1);
        tracep->declQuad(c+230,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+9,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+11,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+232,"top trap_ls", false,-1);
        tracep->declBit(c+216,"top ls_stall_n", false,-1);
        tracep->declBit(c+233,"top ls_not_ok", false,-1);
        tracep->declQuad(c+148,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+234,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+235,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+236,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+238,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+124,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+125,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+239,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+150,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+672,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+241,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+243,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+245,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+247,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+248,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+250,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+251,"top wben_wb", false,-1);
        tracep->declQuad(c+252,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+254,"top wb_stall_n", false,-1);
        tracep->declBit(c+255,"top rw_valid_i", false,-1);
        tracep->declBit(c+13,"top rw_ready_o", false,-1);
        tracep->declBus(c+691,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+133,"top rdLast_o", false,-1);
        tracep->declBus(c+14,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+131,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+135,"top dataValid_o", false,-1);
        tracep->declBus(c+664,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+664,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+664,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+664,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+666,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+667,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+2,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+644,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+3,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+4,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+668,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+669,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+670,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+671,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+672,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+673,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+674,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+675,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+669,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+676,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+6,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+130,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+645,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+131,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+133,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+134,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+677,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+646,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+692,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+693,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+695,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+696,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+697,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+698,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+699,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+700,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+701,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+702,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+703,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+704,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+647,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+705,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+706,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+708,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+709,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+710,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+711,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+648,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+649,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+650,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+651,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+652,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+712,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+713,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+715,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+716,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+717,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+718,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+719,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+720,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+721,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+722,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+723,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+724,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+725,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+136,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+653,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+137,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+139,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+134,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+726,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+570,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+571,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+572,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+574,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+575,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+576,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+577,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+578,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+579,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+580,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+581,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+582,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+583,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+584,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+585,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+586,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+588,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+589,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+590,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+591,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+592,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+593,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+594,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+595,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+548,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+549,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+550,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+552,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+553,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+554,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+555,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+556,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+557,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+558,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+559,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+560,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+561,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+562,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+563,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+564,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+565,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+567,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+568,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+569,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+618,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+619,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+620,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+622,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+623,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+624,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+625,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+626,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+627,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+628,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+629,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+630,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+631,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+632,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+633,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+634,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+636,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+637,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+638,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+639,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+640,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+641,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+642,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+643,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+596,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+597,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+598,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+600,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+601,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+602,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+603,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+604,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+605,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+606,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+607,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+608,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+609,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+610,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+611,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+612,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+613,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+615,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+616,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+617,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+646,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+692,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+693,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+695,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+696,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+697,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+698,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+699,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+700,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+701,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+702,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+703,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+704,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+647,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+705,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+706,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+708,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+709,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+710,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+711,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+648,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+649,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+650,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+651,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+140,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+15,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+16,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+18,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+19,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+20,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+21,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+22,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+23,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+24,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+25,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+26,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+27,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+28,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+141,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+654,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+142,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+144,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+134,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+655,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+538,"top IF_u clk", false,-1);
        tracep->declBit(c+539,"top IF_u rst_n", false,-1);
        tracep->declBit(c+160,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+161,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+9,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+11,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+188,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+189,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+164,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+158,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+171,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+165,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+166,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+689,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+57,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+58,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+168,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+690,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+170,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+168,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+538,"top cache_dut clk", false,-1);
        tracep->declBit(c+539,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+256,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+170,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+674,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+727,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+679,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+164,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+57,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+59,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+58,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+166,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+255,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+13,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+691,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+133,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+14,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+131,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+135,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+668,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+729,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+730,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+672,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+731,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+257,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+145,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+29,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+30,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+31,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+71,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+75,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+79,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+83,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+258,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+262,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+258,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+262,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+266,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+267,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+268,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+32,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+34,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+35,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+36,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+37,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+39,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+41,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+42,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+656,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+657,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+658,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+659,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+43,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+44,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+732,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+733,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+269,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+87,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+95,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+660,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+662,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+270,"top cache_dut missEn", false,-1);
        tracep->declBit(c+271,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+45,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+47,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+272,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+273,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+281,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+734,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+664,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+735,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+734,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+71,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+538,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+282,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+283,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+736,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+284,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+258,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+285,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+266,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+740,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+734,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+664,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+735,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+734,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+75,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+538,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+282,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+283,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+736,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+284,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+262,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+285,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+266,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+740,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+734,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+664,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+735,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+734,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+79,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+538,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+286,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+287,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+736,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+288,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+258,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+289,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+267,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+740,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+734,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+664,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+735,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+734,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+83,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+538,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+286,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+287,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+736,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+288,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+262,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+289,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+267,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+740,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+664,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+664,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+664,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+664,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+666,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+667,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+538,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+539,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+255,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+13,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+131,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+48,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+691,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+133,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+135,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+644,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+3,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+4,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+668,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+669,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+670,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+671,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+672,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+673,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+674,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+675,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+669,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+676,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+130,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+645,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+131,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+133,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+134,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+677,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+744,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+673,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+745,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+746,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+50,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+146,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+3,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+6,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+4,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+747,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+669,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+674,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+671,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+672,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+538,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+539,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+158,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+171,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+163,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+192,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+172,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+174,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+290,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+292,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+748,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+749,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+538,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+539,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+163,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+293,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+296,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+538,"top ID_u clk", false,-1);
        tracep->declBit(c+539,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+172,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+241,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+247,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+174,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+248,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+250,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+251,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+462,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+460,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+175,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+177,"top ID_u src1sel", false,-1);
        tracep->declBus(c+178,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+179,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+182,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+181,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+180,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+183,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+184,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+185,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+545,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+186,"top ID_u DivEn", false,-1);
        tracep->declBus(c+187,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+190,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+188,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+189,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+299,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+175,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+462,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+460,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+172,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+174,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+184,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+185,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+299,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+177,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+178,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+179,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+182,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+181,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+180,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+183,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+186,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+187,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+190,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+188,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+189,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+300,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+301,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+302,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+303,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+299,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+175,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+538,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+241,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+247,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+184,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+462,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+185,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+460,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+250,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+248,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+251,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+545,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+474+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+174,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+195,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+191,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+538,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+539,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+216,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+221,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+172,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+174,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+175,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+460,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+462,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+179,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+182,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+181,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+180,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+177,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+178,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+183,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+184,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+185,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+186,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+187,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+190,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+193,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+195,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+200,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+202,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+204,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+208,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+211,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+210,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+209,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+198,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+199,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+212,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+219,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+220,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+213,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+214,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+215,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+304,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+306,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+307,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+308,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+309,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+310,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+311,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+750,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+749,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+538,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+539,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+216,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+464,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+312,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+208,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+202,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+200,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+204,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+193,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+195,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+211,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+210,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+209,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+198,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+199,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+217,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+218,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+148,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+248,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+7,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+213,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+214,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+196,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+161,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+206,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+160,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+322,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+324,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+326,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+206,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+208,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+322,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+324,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+213,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+214,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+196,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+328,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+329,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+330,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+332,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+333,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+335,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+337,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+337,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+338,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+339,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+340,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+342,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+343,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+344,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+346,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+348,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+350,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+322,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+333,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+332,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+335,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+342,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+329,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+343,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+352,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+339,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+337,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+338,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+332,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+337,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+353,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+322,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+354,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+338,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+337,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+340,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+355,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+357,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+359,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+361,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+363,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+365,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+367,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+322,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+324,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+214,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+350,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+326,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+206,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+211,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+210,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+209,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+369,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+204,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+193,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+161,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+160,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+370,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+372,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+751,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+374,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+375,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+376,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+377,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+379,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+381,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+538,"top forwarding_u clk", false,-1);
        tracep->declBit(c+539,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+219,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+220,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+382,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+250,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+229,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+251,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+248,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+254,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+217,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+218,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+7,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+7,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+51,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+52,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+383,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+384,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+60,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+385,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+386,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+61,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+538,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+539,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+193,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+206,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+195,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+196,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+212,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+215,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+216,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+222,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+224,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+226,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+148,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+229,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+232,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+752,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+749,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+538,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+539,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+216,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+387,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+395,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+538,"top ls_u clk", false,-1);
        tracep->declBit(c+539,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+222,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+148,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+224,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+226,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+243,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+247,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+245,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+232,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+227,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+230,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+9,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+11,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+233,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+148,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+234,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+235,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+236,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+238,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+150,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+672,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+124,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+125,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+239,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+235,"top ls_u wren", false,-1);
        tracep->declBit(c+234,"top ls_u rden", false,-1);
        tracep->declBus(c+403,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+236,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+404,"top ls_u wren_last", false,-1);
        tracep->declBit(c+538,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+539,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+235,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+234,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+403,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+236,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+148,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+222,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+243,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+404,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+227,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+233,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+148,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+234,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+235,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+236,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+238,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+150,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+672,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+124,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+125,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+239,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+239,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+405,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+406,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+407,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+408,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+409,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+410,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+411,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+672,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+412,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+413,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+414,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+150,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+238,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+415,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+416,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+417,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+418,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+226,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+247,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+224,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+245,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+235,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+234,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+403,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+236,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+419,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+538,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+539,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+222,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+226,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+148,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+232,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+230,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+9,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+11,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+420,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+421,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+422,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+423,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+424,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+425,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+426,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+427,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+428,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+148,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+429,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+431,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+433,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+11,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+9,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+53,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+435,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+55,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+664,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+664,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+664,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+664,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+666,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+667,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+538,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+539,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+235,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+234,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+125,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+124,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+239,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+236,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+238,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+148,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+150,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+672,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+62,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+147,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+148,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+668,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+678,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+670,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+679,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+150,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+673,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+674,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+680,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+669,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+669,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+63,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+151,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+152,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+154,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+151,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+670,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+155,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+64,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+65,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+681,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+682,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+66,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+156,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+148,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+668,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+678,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+670,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+679,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+672,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+673,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+674,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+675,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+669,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+683,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+157,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+67,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+68,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+69,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+684,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+685,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+686,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+744,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+673,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+745,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+746,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+437,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+126,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+147,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+151,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+155,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+103,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+744,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+673,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+745,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+746,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+438,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+127,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+156,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+157,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+753,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+104,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+106,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+108,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+109,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+747,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+678,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+674,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+679,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+672,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+439,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+538,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+539,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+222,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+226,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+148,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+227,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+229,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+230,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+254,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+241,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+247,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+243,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+245,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+251,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+252,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+754,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+749,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+538,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+539,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+254,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+440,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+450,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+241,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+247,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+243,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+245,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+252,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+250,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+248,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+538,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+539,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+191,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+160,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+188,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+189,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+165,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+233,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+164,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+163,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+163,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+216,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+216,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+254,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+192,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+221,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+755,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+755,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+672,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+150,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+538,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+539,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+148,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+668,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+147,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+62,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+152,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+154,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+151,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+63,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+65,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+64,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+155,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+148,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+668,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+156,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+66,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+69,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+68,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+67,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+157,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+111,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+62,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+63,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+65,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+64,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+113,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+66,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+69,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+68,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+67,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+756,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+757,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+115,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+117,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+119,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+121,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+128,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+129,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+758,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+760,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+123,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp77;
    VlWide<4>/*127:0*/ __Vtemp78;
    VlWide<3>/*95:0*/ __Vtemp79;
    VlWide<3>/*95:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<3>/*95:0*/ __Vtemp83;
    VlWide<3>/*95:0*/ __Vtemp84;
    VlWide<3>/*95:0*/ __Vtemp85;
    VlWide<3>/*95:0*/ __Vtemp88;
    VlWide<3>/*95:0*/ __Vtemp89;
    VlWide<3>/*95:0*/ __Vtemp90;
    VlWide<3>/*95:0*/ __Vtemp91;
    VlWide<3>/*95:0*/ __Vtemp92;
    VlWide<8>/*255:0*/ __Vtemp97;
    VlWide<10>/*319:0*/ __Vtemp102;
    VlWide<4>/*127:0*/ __Vtemp103;
    VlWide<4>/*127:0*/ __Vtemp104;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullBit(oldp+2,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+3,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+6,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+13,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullIData(oldp+14,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                              >> 0xbU)) 
                                     << 0xbU) | (0x7e0U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U)) 
                                                    << 5U)))),32);
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+34,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+35,((0x3fU & (IData)(
                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                     >> 5U)))),6);
        tracep->fullIData(oldp+36,((0x1fffffU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))),21);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+41,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullBit(oldp+42,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullIData(oldp+43,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullIData(oldp+44,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullQData(oldp+45,((((QData)((IData)(
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
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullQData(oldp+48,((QData)((IData)(
                                                   (((IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 0xbU)) 
                                                     << 0xbU) 
                                                    | (0x7e0U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                   >> 5U)) 
                                                          << 5U)))))),64);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullBit(oldp+57,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                  | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+58,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                    | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                  | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullBit(oldp+59,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                  & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullBit(oldp+60,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 0xaU)))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+61,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 5U)))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullWData(oldp+71,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+75,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+79,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+83,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+87,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+95,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullBit(oldp+124,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
        tracep->fullBit(oldp+125,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
        tracep->fullCData(oldp+126,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
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
        tracep->fullCData(oldp+127,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
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
        tracep->fullBit(oldp+128,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+129,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))));
        tracep->fullBit(oldp+130,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+131,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+134,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+136,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+137,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+139,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last))
                                    : 0U)));
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+145,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+146,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+148,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U)))),64);
        tracep->fullCData(oldp+150,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+151,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+152,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                     << (0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                  << 1U)))),64);
        tracep->fullCData(oldp+154,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                              << (7U 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                     >> 2U))))),8);
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+160,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+161,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+163,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+164,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+165,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+170,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+171,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+172,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+174,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+177,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+178,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+179,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+180,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+181,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+182,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+183,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+184,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+185,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+186,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+187,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+188,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+189,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+190,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+191,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+192,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+193,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+195,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+196,(((0x4000000U & 
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
        tracep->fullBit(oldp+198,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+199,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+200,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+202,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+204,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+208,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+209,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+210,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+211,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+212,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+213,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+214,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+215,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+216,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullCData(oldp+217,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+218,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+219,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+220,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+221,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+222,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+224,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+226,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+227,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+229,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullBit(oldp+232,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+233,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+234,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+235,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+238,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+241,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+243,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+245,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+247,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+250,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+251,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+252,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+254,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullIData(oldp+256,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullCData(oldp+257,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        __Vtemp77[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp77[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp77[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp77[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+258,(__Vtemp77),128);
        __Vtemp78[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp78[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp78[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp78[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+262,(__Vtemp78),128);
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+267,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+268,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+269,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+270,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+271,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
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
        tracep->fullQData(oldp+290,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+292,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp79[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                          ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->top__DOT__sram_rdata 
                                              >> 0x20U))
                                   : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp79[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                  ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp79[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new) 
                                 >> 0x20U));
        tracep->fullWData(oldp+293,(__Vtemp79),96);
        tracep->fullWData(oldp+296,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+299,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+300,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+301,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+302,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+303,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+304,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+306,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+307,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+308,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+309,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+310,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+311,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+312,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+324,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp81, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp82, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp83, __Vtemp81, __Vtemp82);
        VL_EXTEND_WI(65,1, __Vtemp84, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp85, __Vtemp83, __Vtemp84);
        tracep->fullBit(oldp+328,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp85[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+329,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+330,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+332,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+333,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+337,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+338,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+339,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+340,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp88, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp89, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp90, __Vtemp88, __Vtemp89);
        VL_EXTEND_WI(65,1, __Vtemp91, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp92, __Vtemp90, __Vtemp91);
        tracep->fullBit(oldp+342,((1U & __Vtemp92[2U])));
        tracep->fullBit(oldp+343,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+344,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+346,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+348,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+350,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+352,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+353,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+354,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+355,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+357,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+359,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+361,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+363,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+365,(((0x4000000U & 
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
        tracep->fullQData(oldp+367,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+369,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+370,(((((QData)((IData)(
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
        tracep->fullQData(oldp+372,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+374,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+375,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+376,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+377,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+379,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+381,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+382,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+383,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+384,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+385,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+386,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        __Vtemp97[0U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                          << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0xeU)) 
                                    | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp97[1U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
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
        __Vtemp97[2U] = (((IData)((((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp97[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                          >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                >> 0x20U)) 
                                       << 2U));
        __Vtemp97[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                   >> 0x20U)) >> 0x1eU) 
                         | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                             << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x19U))));
        __Vtemp97[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    >> 0x19U))));
        __Vtemp97[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    >> 0x19U))));
        __Vtemp97[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                               >> 0x19U));
        tracep->fullWData(oldp+387,(__Vtemp97),226);
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
        tracep->fullQData(oldp+435,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullCData(oldp+437,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+438,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+439,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+440,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+450,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+460,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+462,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp102[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp102[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp102[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp102[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp102[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp102[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp102[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp102[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp102[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp102[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+464,(__Vtemp102),315);
        tracep->fullQData(oldp+474,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+476,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+480,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+482,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+484,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+486,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+488,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+490,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+492,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+494,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+496,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+498,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+500,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+504,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+506,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+508,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+512,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+514,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+516,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+518,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+520,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+522,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+524,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+526,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+528,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+530,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+532,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+534,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+536,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+538,(vlSelf->clk));
        tracep->fullBit(oldp+539,(vlSelf->rst_n));
        tracep->fullQData(oldp+540,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+542,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+544,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+545,(vlSelf->regA0),64);
        tracep->fullBit(oldp+547,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+548,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+549,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+550,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+552,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+553,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+554,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+555,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+556,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+557,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+558,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+559,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+560,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+561,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+562,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+563,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+564,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+565,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+567,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+568,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+569,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+570,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+571,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+572,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+574,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+575,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+576,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+577,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+578,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+579,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+580,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+581,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+582,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+583,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+584,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+585,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+586,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+588,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+589,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+590,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+591,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+592,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+593,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+594,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+595,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+596,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+597,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+598,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+600,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+601,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+602,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+603,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+604,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+605,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+606,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+607,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+608,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+609,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+610,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+611,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+612,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+613,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+615,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+616,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+617,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+618,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+619,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+620,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+622,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+623,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+624,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+625,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+626,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+627,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+628,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+629,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+630,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+631,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+632,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+633,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+634,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+636,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+637,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+638,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+639,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+640,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+641,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+642,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+643,(vlSelf->axi_mmio_b_user_i));
        tracep->fullBit(oldp+644,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+645,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+646,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+647,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                    : (IData)(vlSelf->axi_w_ready_i))));
        tracep->fullBit(oldp+648,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+649,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+650,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+651,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+652,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+653,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullCData(oldp+654,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+655,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullBit(oldp+656,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+657,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+658,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+659,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+660,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+662,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+664,(0x40U),32);
        tracep->fullIData(oldp+665,(4U),32);
        tracep->fullIData(oldp+666,(8U),32);
        tracep->fullIData(oldp+667,(1U),32);
        tracep->fullCData(oldp+668,(0U),3);
        tracep->fullCData(oldp+669,(0U),4);
        tracep->fullBit(oldp+670,(0U));
        tracep->fullCData(oldp+671,(3U),8);
        tracep->fullCData(oldp+672,(3U),3);
        tracep->fullCData(oldp+673,(1U),2);
        tracep->fullBit(oldp+674,(0U));
        tracep->fullCData(oldp+675,(2U),4);
        tracep->fullCData(oldp+676,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+677,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+678,(1U),4);
        tracep->fullCData(oldp+679,(0U),8);
        tracep->fullCData(oldp+680,(0xfU),4);
        tracep->fullCData(oldp+681,(vlSelf->top__DOT__ls_axi_b_id_i),4);
        tracep->fullBit(oldp+682,(vlSelf->top__DOT__ls_axi_b_user_i));
        tracep->fullCData(oldp+683,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+684,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullCData(oldp+685,(vlSelf->top__DOT__ls_axi_r_id_i),4);
        tracep->fullBit(oldp+686,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+687,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+689,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+690,(1U));
        tracep->fullCData(oldp+691,(vlSelf->top__DOT__fetchLenth),8);
        tracep->fullBit(oldp+692,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_valid_i));
        tracep->fullQData(oldp+693,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i),64);
        tracep->fullCData(oldp+695,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_prot_i),3);
        tracep->fullCData(oldp+696,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_id_i),4);
        tracep->fullBit(oldp+697,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_user_i));
        tracep->fullCData(oldp+698,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_len_i),8);
        tracep->fullCData(oldp+699,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_size_i),3);
        tracep->fullCData(oldp+700,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_burst_i),2);
        tracep->fullBit(oldp+701,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_lock_i));
        tracep->fullCData(oldp+702,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_cache_i),4);
        tracep->fullCData(oldp+703,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_qos_i),4);
        tracep->fullCData(oldp+704,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_region_i),4);
        tracep->fullBit(oldp+705,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_valid_i));
        tracep->fullQData(oldp+706,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_data_i),64);
        tracep->fullCData(oldp+708,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_strb_i),8);
        tracep->fullBit(oldp+709,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_last_i));
        tracep->fullBit(oldp+710,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_user_i));
        tracep->fullBit(oldp+711,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_b_ready_i));
        tracep->fullBit(oldp+712,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_valid_i));
        tracep->fullQData(oldp+713,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_addr_i),64);
        tracep->fullCData(oldp+715,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_prot_i),3);
        tracep->fullCData(oldp+716,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_id_i),4);
        tracep->fullBit(oldp+717,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_user_i));
        tracep->fullCData(oldp+718,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_len_i),8);
        tracep->fullCData(oldp+719,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_size_i),3);
        tracep->fullCData(oldp+720,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_burst_i),2);
        tracep->fullBit(oldp+721,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_lock_i));
        tracep->fullCData(oldp+722,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_cache_i),4);
        tracep->fullCData(oldp+723,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_qos_i),4);
        tracep->fullCData(oldp+724,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_region_i),4);
        tracep->fullBit(oldp+725,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_ready_i));
        tracep->fullBit(oldp+726,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_user_o));
        tracep->fullQData(oldp+727,(0ULL),64);
        tracep->fullCData(oldp+729,(1U),3);
        tracep->fullCData(oldp+730,(2U),3);
        tracep->fullCData(oldp+731,(7U),3);
        tracep->fullBit(oldp+732,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+733,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+734,(0x80U),32);
        tracep->fullIData(oldp+735,(6U),32);
        __Vtemp103[0U] = 0U;
        __Vtemp103[1U] = 0U;
        __Vtemp103[2U] = 0U;
        __Vtemp103[3U] = 0U;
        tracep->fullWData(oldp+736,(__Vtemp103),128);
        __Vtemp104[0U] = 0xffffffffU;
        __Vtemp104[1U] = 0xffffffffU;
        __Vtemp104[2U] = 0xffffffffU;
        __Vtemp104[3U] = 0xffffffffU;
        tracep->fullWData(oldp+740,(__Vtemp104),128);
        tracep->fullCData(oldp+744,(0U),2);
        tracep->fullCData(oldp+745,(3U),2);
        tracep->fullCData(oldp+746,(2U),2);
        tracep->fullIData(oldp+747,(3U),32);
        tracep->fullIData(oldp+748,(0x60U),32);
        tracep->fullIData(oldp+749,(0U),32);
        tracep->fullIData(oldp+750,(0x13bU),32);
        tracep->fullBit(oldp+751,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+752,(0xe2U),32);
        tracep->fullBit(oldp+753,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+754,(0x121U),32);
        tracep->fullIData(oldp+755,(0x40U),32);
        tracep->fullIData(oldp+756,(3U),32);
        tracep->fullIData(oldp+757,(1U),32);
        tracep->fullQData(oldp+758,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+760,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
