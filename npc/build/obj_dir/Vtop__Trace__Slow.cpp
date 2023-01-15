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
        tracep->declBit(c+549,"clk", false,-1);
        tracep->declBit(c+550,"rst_n", false,-1);
        tracep->declQuad(c+551,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+553,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+555,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+556,"regA0", false,-1, 63,0);
        tracep->declBit(c+558,"stall_n_diff", false,-1);
        tracep->declBit(c+559,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+560,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+561,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+563,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+564,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+565,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+566,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+567,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+568,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+569,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+570,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+571,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+572,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+573,"axi_r_ready_o", false,-1);
        tracep->declBit(c+574,"axi_r_valid_i", false,-1);
        tracep->declBus(c+575,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+576,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+578,"axi_r_last_i", false,-1);
        tracep->declBus(c+579,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+580,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+581,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+582,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+583,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+585,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+586,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+587,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+588,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+589,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+590,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+591,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+592,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+593,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+594,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+595,"axi_w_ready_i", false,-1);
        tracep->declBit(c+596,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+597,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+599,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+600,"axi_w_last_o", false,-1);
        tracep->declBus(c+601,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+602,"axi_b_ready_o", false,-1);
        tracep->declBit(c+603,"axi_b_valid_i", false,-1);
        tracep->declBus(c+604,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+605,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+606,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+607,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+608,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+609,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+611,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+612,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+613,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+614,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+615,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+616,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+617,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+618,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+619,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+620,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+621,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+622,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+623,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+624,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+626,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+627,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+628,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+629,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+630,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+631,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+633,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+634,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+635,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+636,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+637,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+638,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+639,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+640,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+641,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+642,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+643,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+644,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+645,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+647,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+648,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+649,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+650,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+651,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+652,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+653,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+654,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+665,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+666,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+667,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+668,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+549,"top clk", false,-1);
        tracep->declBit(c+550,"top rst_n", false,-1);
        tracep->declQuad(c+551,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+553,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+555,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+556,"top regA0", false,-1, 63,0);
        tracep->declBit(c+558,"top stall_n_diff", false,-1);
        tracep->declBit(c+559,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+560,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+561,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+563,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+564,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+565,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+566,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+567,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+568,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+569,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+570,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+571,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+572,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+573,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+574,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+575,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+576,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+578,"top axi_r_last_i", false,-1);
        tracep->declBus(c+579,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+580,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+581,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+582,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+583,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+585,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+586,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+587,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+588,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+589,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+590,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+591,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+592,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+593,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+594,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+595,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+596,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+597,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+599,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+600,"top axi_w_last_o", false,-1);
        tracep->declBus(c+601,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+602,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+603,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+604,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+605,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+606,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+607,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+608,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+609,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+611,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+612,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+613,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+614,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+615,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+616,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+617,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+618,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+619,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+620,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+621,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+622,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+623,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+624,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+626,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+627,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+628,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+629,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+630,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+631,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+633,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+634,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+635,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+636,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+637,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+638,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+639,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+640,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+641,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+642,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+643,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+644,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+645,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+647,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+648,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+649,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+650,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+651,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+652,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+653,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+654,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+74,"top instr_fetching", false,-1);
        tracep->declBit(c+438,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+75,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+76,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+669,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+670,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+671,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+672,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+673,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+674,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+675,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+676,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+670,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+677,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+78,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+458,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+655,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+459,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+461,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+462,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+678,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+2,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+79,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+80,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+669,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+679,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+671,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+680,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+82,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+674,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+675,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+681,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+670,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+670,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+3,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+83,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+84,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+86,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+83,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+671,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+87,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+4,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+5,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+682,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+683,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+6,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+88,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+80,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+669,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+679,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+671,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+680,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+673,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+674,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+675,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+676,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+670,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+684,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+89,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+7,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+8,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+9,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+685,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+686,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+687,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+688,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+90,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+92,"top is_jump", false,-1);
        tracep->declQuad(c+93,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+95,"top pc_stall_n", false,-1);
        tracep->declBit(c+96,"top if_stall_n", false,-1);
        tracep->declBit(c+97,"top if_instr_valid", false,-1);
        tracep->declBit(c+690,"top sram_data_valid", false,-1);
        tracep->declQuad(c+98,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+100,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+691,"top sram_ren", false,-1);
        tracep->declBit(c+102,"top sram_addr_valid", false,-1);
        tracep->declBit(c+103,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+104,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+105,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+106,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+108,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+444,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+446,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+109,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+111,"top src1sel_id", false,-1);
        tracep->declBus(c+112,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+113,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+114,"top is_brc_id", false,-1);
        tracep->declBit(c+115,"top is_jal_id", false,-1);
        tracep->declBit(c+116,"top is_jalr_id", false,-1);
        tracep->declBit(c+117,"top wben_id", false,-1);
        tracep->declBus(c+118,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+119,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+95,"top id_stall_n", false,-1);
        tracep->declBit(c+120,"top DivEn_id", false,-1);
        tracep->declBus(c+121,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+122,"top in_trap_id", false,-1);
        tracep->declBit(c+123,"top out_trap_id", false,-1);
        tracep->declBit(c+124,"top trap_id", false,-1);
        tracep->declBit(c+125,"top ld_use_hazard", false,-1);
        tracep->declBit(c+126,"top id_flush", false,-1);
        tracep->declQuad(c+127,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+129,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+130,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+132,"top src1sel_ex", false,-1);
        tracep->declBus(c+133,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+134,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+136,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+138,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+140,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+142,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+143,"top is_brc_ex", false,-1);
        tracep->declBit(c+144,"top is_jal_ex", false,-1);
        tracep->declBit(c+145,"top is_jalr_ex", false,-1);
        tracep->declBit(c+146,"top wben_ex", false,-1);
        tracep->declBit(c+147,"top DivEn_ex", false,-1);
        tracep->declBus(c+148,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+149,"top trap_ex", false,-1);
        tracep->declBit(c+150,"top ex_stall_n", false,-1);
        tracep->declQuad(c+151,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+153,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+154,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+155,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+156,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+157,"top ex_flush", false,-1);
        tracep->declQuad(c+158,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+160,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+80,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+162,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+163,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+165,"top wben_ls", false,-1);
        tracep->declQuad(c+166,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+168,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+170,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+172,"top trap_ls", false,-1);
        tracep->declBit(c+150,"top ls_stall_n", false,-1);
        tracep->declBit(c+173,"top ls_not_ok", false,-1);
        tracep->declQuad(c+80,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+174,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+175,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+176,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+178,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+64,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+65,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+179,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+82,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+673,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+181,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+183,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+185,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+187,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+188,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+190,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+191,"top wben_wb", false,-1);
        tracep->declQuad(c+192,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+194,"top wb_stall_n", false,-1);
        tracep->declBit(c+195,"top rw_valid_i", false,-1);
        tracep->declBit(c+196,"top rw_ready_o", false,-1);
        tracep->declBus(c+692,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+461,"top rdLast_o", false,-1);
        tracep->declBus(c+197,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+459,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+463,"top dataValid_o", false,-1);
        tracep->declBus(c+665,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+666,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+667,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+668,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+74,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+438,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+75,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+76,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+669,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+670,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+671,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+672,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+673,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+674,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+675,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+676,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+670,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+677,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+78,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+458,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+655,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+459,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+461,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+462,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+678,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+656,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+693,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+694,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+696,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+697,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+698,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+699,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+700,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+701,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+702,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+703,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+704,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+705,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+657,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+706,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+707,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+709,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+710,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+711,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+712,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+658,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+659,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+660,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+661,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+439,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+713,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+714,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+716,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+717,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+718,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+719,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+720,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+721,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+722,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+723,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+724,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+725,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+726,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+464,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+662,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+465,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+467,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+462,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+727,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+581,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+582,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+583,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+585,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+586,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+587,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+588,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+589,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+590,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+591,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+592,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+593,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+594,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+595,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+596,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+597,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+599,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+600,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+601,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+602,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+603,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+604,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+605,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+606,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+559,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+560,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+561,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+563,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+564,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+565,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+566,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+567,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+568,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+569,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+570,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+571,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+572,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+573,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+574,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+575,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+576,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+578,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+579,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+580,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+629,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+630,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+631,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+633,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+634,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+635,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+636,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+637,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+638,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+639,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+640,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+641,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+642,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+643,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+644,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+645,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+647,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+648,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+649,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+650,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+651,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+652,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+653,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+654,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+607,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+608,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+609,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+611,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+612,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+613,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+614,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+615,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+616,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+617,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+618,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+619,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+620,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+621,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+622,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+623,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+624,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+626,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+627,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+628,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+656,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+693,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+694,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+696,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+697,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+698,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+699,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+700,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+701,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+702,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+703,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+704,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+705,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+657,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+706,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+707,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+709,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+710,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+711,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+712,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+658,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+659,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+660,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+661,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+468,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+198,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+199,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+201,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+202,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+203,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+204,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+205,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+206,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+207,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+208,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+209,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+210,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+211,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+469,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+663,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+470,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+472,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+462,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+664,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+549,"top IF_u clk", false,-1);
        tracep->declBit(c+550,"top IF_u rst_n", false,-1);
        tracep->declBit(c+92,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+93,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+168,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+170,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+122,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+123,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+96,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+90,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+105,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+97,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+98,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+690,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+103,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+104,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+100,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+691,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+102,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+100,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+549,"top cache_dut clk", false,-1);
        tracep->declBit(c+550,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+212,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+102,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+675,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+728,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+680,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+96,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+103,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+213,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+104,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+98,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+195,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+196,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+692,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+461,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+197,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+459,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+463,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+669,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+730,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+731,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+673,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+732,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+214,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+473,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+215,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+216,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+217,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+11,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+15,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+19,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+23,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+218,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+222,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+218,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+222,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+474,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+475,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+226,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+227,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+229,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+230,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+231,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+232,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+234,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+236,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+237,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+440,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+441,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+442,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+443,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+238,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+239,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+733,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+734,"top cache_dut validWay2_q", false,-1);
        tracep->declBus(c+240,"top cache_dut tagtest", false,-1, 20,0);
        tracep->declBit(c+241,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+27,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+35,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+66,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+68,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+242,"top cache_dut missEn", false,-1);
        tracep->declBit(c+243,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+244,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+246,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+247,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+248,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+256,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+735,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+665,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+736,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+735,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+11,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+549,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+476,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+477,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+737,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+478,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+218,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+479,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+474,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+741,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+735,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+665,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+736,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+735,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+15,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+549,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+476,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+477,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+737,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+478,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+222,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+479,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+474,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+741,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+735,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+665,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+736,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+735,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+19,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+549,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+480,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+481,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+737,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+482,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+218,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+483,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+475,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+741,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+735,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+665,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+736,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+735,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+23,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+549,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+480,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+481,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+737,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+482,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+222,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+483,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+475,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+741,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+665,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+666,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+667,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+668,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+549,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+550,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+195,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+196,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+459,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+257,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+692,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+461,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+463,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+74,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+438,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+75,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+76,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+669,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+670,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+671,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+672,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+673,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+674,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+675,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+676,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+670,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+677,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+78,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+458,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+655,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+459,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+461,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+462,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+678,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+745,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+674,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+746,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+747,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+259,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+484,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+75,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+78,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+76,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+748,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+670,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+675,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+672,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+673,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+549,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+550,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+90,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+105,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+95,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+126,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+106,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+108,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+260,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+262,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+749,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+750,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+549,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+550,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+95,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+263,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+266,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+549,"top ID_u clk", false,-1);
        tracep->declBit(c+550,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+106,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+181,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+187,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+108,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+188,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+190,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+191,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+446,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+444,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+109,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+111,"top ID_u src1sel", false,-1);
        tracep->declBus(c+112,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+113,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+116,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+115,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+114,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+117,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+118,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+119,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+556,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+120,"top ID_u DivEn", false,-1);
        tracep->declBus(c+121,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+124,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+122,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+123,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+269,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+109,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+446,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+444,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+106,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+108,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+118,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+119,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+269,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+111,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+112,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+113,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+116,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+115,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+114,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+117,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+120,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+121,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+124,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+122,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+123,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+270,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+271,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+272,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+273,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+269,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+109,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+549,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+181,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+187,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+118,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+446,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+119,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+444,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+190,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+188,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+191,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+556,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+485+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+108,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+129,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+125,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+549,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+550,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+150,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+157,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+106,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+108,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+109,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+444,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+446,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+113,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+116,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+115,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+114,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+111,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+112,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+117,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+118,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+119,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+120,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+121,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+124,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+127,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+129,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+134,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+136,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+138,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+142,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+145,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+144,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+143,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+132,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+133,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+146,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+155,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+156,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+147,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+148,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+149,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+274,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+276,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+277,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+278,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+279,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+280,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+281,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+751,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+750,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+549,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+550,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+150,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+448,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+282,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+142,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+136,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+134,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+138,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+127,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+129,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+145,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+144,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+143,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+132,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+133,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+153,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+154,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+80,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+188,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+151,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+147,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+148,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+130,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+93,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+140,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+92,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+292,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+294,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+296,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+140,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+142,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+292,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+294,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+147,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+148,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+130,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+298,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+299,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+300,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+302,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+303,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+305,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+307,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+307,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+308,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+309,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+310,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+312,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+313,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+314,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+316,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+318,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+320,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+292,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+303,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+302,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+305,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+312,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+299,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+313,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+322,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+309,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+307,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+308,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+302,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+307,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+323,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+292,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+324,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+308,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+307,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+310,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+325,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+327,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+329,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+331,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+333,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+335,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+337,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+292,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+294,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+148,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+320,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+296,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+140,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+145,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+144,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+143,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+339,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+138,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+127,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+93,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+92,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+340,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+342,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+752,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+344,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+345,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+346,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+347,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+349,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+351,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+549,"top forwarding_u clk", false,-1);
        tracep->declBit(c+550,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+155,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+156,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+352,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+190,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+165,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+191,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+188,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+194,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+153,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+154,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+151,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+151,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+353,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+354,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+355,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+356,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+357,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+358,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+359,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+360,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+549,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+550,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+127,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+140,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+129,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+130,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+146,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+149,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+150,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+158,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+160,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+162,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+80,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+165,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+172,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+753,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+750,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+549,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+550,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+150,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+361,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+369,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+549,"top ls_u clk", false,-1);
        tracep->declBit(c+550,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+158,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+80,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+160,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+162,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+183,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+187,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+185,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+172,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+163,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+166,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+168,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+170,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+173,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+80,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+174,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+175,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+176,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+178,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+82,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+673,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+64,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+65,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+179,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+175,"top ls_u wren", false,-1);
        tracep->declBit(c+174,"top ls_u rden", false,-1);
        tracep->declBus(c+377,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+176,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+378,"top ls_u wren_last", false,-1);
        tracep->declBit(c+549,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+550,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+175,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+174,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+377,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+176,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+80,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+158,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+183,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+378,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+163,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+173,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+80,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+174,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+175,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+176,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+178,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+82,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+673,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+64,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+65,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+179,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+179,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+379,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+380,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+381,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+382,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+383,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+384,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+385,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+673,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+386,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+387,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+388,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+82,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+178,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+389,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+390,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+391,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+392,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+162,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+187,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+160,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+185,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+175,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+174,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+377,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+176,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+393,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+549,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+550,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+158,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+162,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+80,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+172,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+166,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+168,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+170,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+394,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+395,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+396,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+397,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+398,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+399,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+400,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+401,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+402,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+80,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+403,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+405,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+407,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+170,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+168,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+409,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+411,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+413,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+665,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+665,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+666,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+667,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+668,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+549,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+550,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+175,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+174,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+65,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+64,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+179,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+176,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+178,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+80,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+82,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+673,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+2,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+79,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+80,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+669,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+679,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+671,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+680,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+82,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+674,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+675,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+681,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+670,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+670,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+3,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+83,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+84,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+86,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+83,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+671,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+87,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+4,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+5,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+682,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+683,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+6,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+88,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+80,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+669,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+679,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+671,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+680,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+673,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+674,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+675,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+676,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+670,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+684,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+89,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+7,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+8,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+9,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+685,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+686,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+687,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+745,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+674,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+746,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+747,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+415,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+70,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+79,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+83,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+87,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+43,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+745,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+674,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+746,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+747,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+416,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+71,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+88,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+89,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+754,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+44,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+46,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+48,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+49,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+748,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+679,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+675,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+680,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+673,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+417,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+549,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+550,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+158,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+162,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+80,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+163,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+165,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+166,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+194,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+181,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+187,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+183,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+185,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+191,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+192,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+755,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+750,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+549,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+550,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+194,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+418,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+428,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+181,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+187,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+183,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+185,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+192,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+190,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+188,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+549,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+550,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+125,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+92,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+122,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+123,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+97,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+173,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+96,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+95,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+95,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+150,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+150,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+194,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+126,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+157,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+756,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+756,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+673,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+82,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+549,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+550,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+80,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+669,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+79,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+2,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+84,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+86,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+83,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+3,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+5,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+4,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+87,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+80,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+669,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+88,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+9,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+8,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+89,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+51,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+2,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+3,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+5,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+4,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+53,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+9,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+8,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+757,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+758,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+55,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+57,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+59,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+61,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+72,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+73,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+759,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+761,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+63,"top lsAxiSlaveRam_u aw_en", false,-1);
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
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullWData(oldp+11,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+15,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+19,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+23,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+27,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+35,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullBit(oldp+64,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
        tracep->fullBit(oldp+65,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
        tracep->fullQData(oldp+66,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+68,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullCData(oldp+70,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
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
        tracep->fullCData(oldp+71,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
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
        tracep->fullBit(oldp+72,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                  & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+73,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                  & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))));
        tracep->fullBit(oldp+74,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+75,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+78,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+80,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+84,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                    << (0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                 << 1U)))),64);
        tracep->fullCData(oldp+86,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                             << (7U 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                    >> 2U))))),8);
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+93,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+95,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                            | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                           | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+102,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+103,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+104,(((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                    | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+105,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+106,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+108,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+112,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+113,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+118,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+119,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+127,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+129,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+130,(((0x4000000U & 
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
        tracep->fullBit(oldp+132,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+133,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+134,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+136,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+138,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+142,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+143,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+144,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+145,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+146,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+147,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+148,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+149,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+150,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+153,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+154,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+155,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+156,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+158,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+160,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+162,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+163,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+165,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+172,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+173,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+174,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+175,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+178,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+181,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+183,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+185,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+187,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+190,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+191,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+192,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+194,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullBit(oldp+195,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+196,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullIData(oldp+197,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                               >> 0xbU)) 
                                      << 0xbU) | (0x7e0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 5U)) 
                                                     << 5U)))),32);
        tracep->fullBit(oldp+198,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+201,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
        tracep->fullCData(oldp+202,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
        tracep->fullBit(oldp+203,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
        tracep->fullCData(oldp+204,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
        tracep->fullCData(oldp+205,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullCData(oldp+206,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
        tracep->fullBit(oldp+207,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
        tracep->fullCData(oldp+208,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
        tracep->fullCData(oldp+209,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
        tracep->fullCData(oldp+210,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+211,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullIData(oldp+212,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+213,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+214,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+215,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+216,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        __Vtemp77[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp77[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp77[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp77[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+218,(__Vtemp77),128);
        __Vtemp78[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp78[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp78[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp78[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+222,(__Vtemp78),128);
        tracep->fullBit(oldp+226,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+229,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+230,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+231,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+236,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+237,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+238,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+239,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+240,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                    [9U]),21);
        tracep->fullBit(oldp+241,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+242,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+243,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+244,((((QData)((IData)(
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
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullCData(oldp+247,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+248,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+256,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+257,((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 0xbU)) 
                                                      << 0xbU) 
                                                     | (0x7e0U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                    >> 5U)) 
                                                           << 5U)))))),64);
        tracep->fullCData(oldp+259,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullQData(oldp+260,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+262,(((IData)(vlSelf->top__DOT__id_flush)
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
        tracep->fullWData(oldp+263,(__Vtemp79),96);
        tracep->fullWData(oldp+266,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+269,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+270,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+271,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+272,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+273,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+274,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+276,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+277,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+278,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+279,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+280,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+281,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+282,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp81, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp82, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp83, __Vtemp81, __Vtemp82);
        VL_EXTEND_WI(65,1, __Vtemp84, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp85, __Vtemp83, __Vtemp84);
        tracep->fullBit(oldp+298,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp85[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+299,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+302,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+307,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+308,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+309,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp88, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp89, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp90, __Vtemp88, __Vtemp89);
        VL_EXTEND_WI(65,1, __Vtemp91, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp92, __Vtemp90, __Vtemp91);
        tracep->fullBit(oldp+312,((1U & __Vtemp92[2U])));
        tracep->fullBit(oldp+313,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+314,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+316,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+318,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+320,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+322,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+323,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+324,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+329,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+331,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+333,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+335,(((0x4000000U & 
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
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+339,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+340,(((((QData)((IData)(
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
        tracep->fullQData(oldp+342,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+344,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+345,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+346,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+349,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+351,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+352,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+353,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+354,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+355,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+356,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+357,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+358,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+359,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+360,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
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
        tracep->fullWData(oldp+361,(__Vtemp97),226);
        tracep->fullWData(oldp+369,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+377,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+378,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+379,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+380,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+381,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+382,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+383,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+384,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+385,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+386,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+387,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+388,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+389,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+390,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+391,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+392,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+393,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+394,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+395,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+396,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+397,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+398,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+399,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+400,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+401,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+402,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+403,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+405,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+407,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+409,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+411,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+413,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullCData(oldp+415,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+416,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+417,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+418,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+428,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+438,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullBit(oldp+439,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullBit(oldp+440,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+441,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+442,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+443,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+444,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+446,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
        tracep->fullWData(oldp+448,(__Vtemp102),315);
        tracep->fullBit(oldp+458,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+459,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+461,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+462,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+463,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+464,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+465,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+467,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last))
                                    : 0U)));
        tracep->fullBit(oldp+468,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+469,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+470,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+472,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+473,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullBit(oldp+474,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+475,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+476,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+477,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullCData(oldp+478,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+479,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+480,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+481,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullCData(oldp+482,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullBit(oldp+483,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullCData(oldp+484,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullQData(oldp+485,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+487,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+489,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+491,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+493,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+495,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+497,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+511,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+513,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+515,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+521,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+525,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+527,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+529,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+533,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+535,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+537,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+539,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+541,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+543,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+545,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+547,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+549,(vlSelf->clk));
        tracep->fullBit(oldp+550,(vlSelf->rst_n));
        tracep->fullQData(oldp+551,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+553,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+555,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+556,(vlSelf->regA0),64);
        tracep->fullBit(oldp+558,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+559,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+560,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+561,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+563,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+564,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+565,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+566,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+567,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+568,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+569,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+570,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+571,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+572,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+573,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+574,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+575,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+576,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+578,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+579,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+580,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+581,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+582,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+583,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+585,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+586,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+587,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+588,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+589,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+590,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+591,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+592,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+593,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+594,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+595,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+596,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+597,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+599,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+600,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+601,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+602,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+603,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+604,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+605,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+606,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+607,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+608,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+609,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+611,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+612,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+613,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+614,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+615,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+616,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+617,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+618,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+619,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+620,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+621,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+622,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+623,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+624,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+626,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+627,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+628,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+629,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+630,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+631,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+633,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+634,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+635,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+636,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+637,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+638,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+639,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+640,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+641,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+642,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+643,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+644,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+645,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+647,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+648,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+649,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+650,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+651,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+652,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+653,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+654,(vlSelf->axi_mmio_b_user_i));
        tracep->fullCData(oldp+655,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+656,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+657,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                    : (IData)(vlSelf->axi_w_ready_i))));
        tracep->fullBit(oldp+658,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+659,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+660,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+661,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullCData(oldp+662,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullCData(oldp+663,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+664,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullIData(oldp+665,(0x40U),32);
        tracep->fullIData(oldp+666,(4U),32);
        tracep->fullIData(oldp+667,(8U),32);
        tracep->fullIData(oldp+668,(1U),32);
        tracep->fullCData(oldp+669,(0U),3);
        tracep->fullCData(oldp+670,(0U),4);
        tracep->fullBit(oldp+671,(0U));
        tracep->fullCData(oldp+672,(3U),8);
        tracep->fullCData(oldp+673,(3U),3);
        tracep->fullCData(oldp+674,(1U),2);
        tracep->fullBit(oldp+675,(0U));
        tracep->fullCData(oldp+676,(2U),4);
        tracep->fullCData(oldp+677,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+678,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+679,(1U),4);
        tracep->fullCData(oldp+680,(0U),8);
        tracep->fullCData(oldp+681,(0xfU),4);
        tracep->fullCData(oldp+682,(vlSelf->top__DOT__ls_axi_b_id_i),4);
        tracep->fullBit(oldp+683,(vlSelf->top__DOT__ls_axi_b_user_i));
        tracep->fullCData(oldp+684,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+685,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullCData(oldp+686,(vlSelf->top__DOT__ls_axi_r_id_i),4);
        tracep->fullBit(oldp+687,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+688,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+690,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+691,(1U));
        tracep->fullCData(oldp+692,(vlSelf->top__DOT__fetchLenth),8);
        tracep->fullBit(oldp+693,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_valid_i));
        tracep->fullQData(oldp+694,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i),64);
        tracep->fullCData(oldp+696,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_prot_i),3);
        tracep->fullCData(oldp+697,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_id_i),4);
        tracep->fullBit(oldp+698,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_user_i));
        tracep->fullCData(oldp+699,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_len_i),8);
        tracep->fullCData(oldp+700,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_size_i),3);
        tracep->fullCData(oldp+701,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_burst_i),2);
        tracep->fullBit(oldp+702,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_lock_i));
        tracep->fullCData(oldp+703,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_cache_i),4);
        tracep->fullCData(oldp+704,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_qos_i),4);
        tracep->fullCData(oldp+705,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_region_i),4);
        tracep->fullBit(oldp+706,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_valid_i));
        tracep->fullQData(oldp+707,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_data_i),64);
        tracep->fullCData(oldp+709,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_strb_i),8);
        tracep->fullBit(oldp+710,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_last_i));
        tracep->fullBit(oldp+711,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_user_i));
        tracep->fullBit(oldp+712,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_b_ready_i));
        tracep->fullBit(oldp+713,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_valid_i));
        tracep->fullQData(oldp+714,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_addr_i),64);
        tracep->fullCData(oldp+716,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_prot_i),3);
        tracep->fullCData(oldp+717,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_id_i),4);
        tracep->fullBit(oldp+718,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_user_i));
        tracep->fullCData(oldp+719,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_len_i),8);
        tracep->fullCData(oldp+720,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_size_i),3);
        tracep->fullCData(oldp+721,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_burst_i),2);
        tracep->fullBit(oldp+722,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_lock_i));
        tracep->fullCData(oldp+723,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_cache_i),4);
        tracep->fullCData(oldp+724,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_qos_i),4);
        tracep->fullCData(oldp+725,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_region_i),4);
        tracep->fullBit(oldp+726,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_ready_i));
        tracep->fullBit(oldp+727,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_user_o));
        tracep->fullQData(oldp+728,(0ULL),64);
        tracep->fullCData(oldp+730,(1U),3);
        tracep->fullCData(oldp+731,(2U),3);
        tracep->fullCData(oldp+732,(7U),3);
        tracep->fullBit(oldp+733,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+734,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+735,(0x80U),32);
        tracep->fullIData(oldp+736,(6U),32);
        __Vtemp103[0U] = 0U;
        __Vtemp103[1U] = 0U;
        __Vtemp103[2U] = 0U;
        __Vtemp103[3U] = 0U;
        tracep->fullWData(oldp+737,(__Vtemp103),128);
        __Vtemp104[0U] = 0xffffffffU;
        __Vtemp104[1U] = 0xffffffffU;
        __Vtemp104[2U] = 0xffffffffU;
        __Vtemp104[3U] = 0xffffffffU;
        tracep->fullWData(oldp+741,(__Vtemp104),128);
        tracep->fullCData(oldp+745,(0U),2);
        tracep->fullCData(oldp+746,(3U),2);
        tracep->fullCData(oldp+747,(2U),2);
        tracep->fullIData(oldp+748,(3U),32);
        tracep->fullIData(oldp+749,(0x60U),32);
        tracep->fullIData(oldp+750,(0U),32);
        tracep->fullIData(oldp+751,(0x13bU),32);
        tracep->fullBit(oldp+752,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+753,(0xe2U),32);
        tracep->fullBit(oldp+754,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+755,(0x121U),32);
        tracep->fullIData(oldp+756,(0x40U),32);
        tracep->fullIData(oldp+757,(3U),32);
        tracep->fullIData(oldp+758,(1U),32);
        tracep->fullQData(oldp+759,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+761,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
