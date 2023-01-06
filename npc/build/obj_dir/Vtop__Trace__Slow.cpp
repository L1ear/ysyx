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
        tracep->declBit(c+446,"clk", false,-1);
        tracep->declBit(c+447,"rst_n", false,-1);
        tracep->declQuad(c+448,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+450,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+452,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+453,"regA0", false,-1, 63,0);
        tracep->declBit(c+455,"stall_n_diff", false,-1);
        tracep->declBit(c+456,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+457,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+458,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+460,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+461,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+462,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+463,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+464,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+465,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+466,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+467,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+468,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+469,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+470,"axi_r_ready_o", false,-1);
        tracep->declBit(c+471,"axi_r_valid_i", false,-1);
        tracep->declBus(c+472,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+473,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+475,"axi_r_last_i", false,-1);
        tracep->declBus(c+476,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+477,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+478,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+479,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+480,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+482,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+483,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+484,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+485,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+486,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+487,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+488,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+489,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+490,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+491,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+492,"axi_w_ready_i", false,-1);
        tracep->declBit(c+493,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+494,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+496,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+497,"axi_w_last_o", false,-1);
        tracep->declBus(c+498,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+499,"axi_b_ready_o", false,-1);
        tracep->declBit(c+500,"axi_b_valid_i", false,-1);
        tracep->declBus(c+501,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+502,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+503,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+504,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+505,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+506,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+508,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+509,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+510,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+511,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+512,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+513,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+514,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+515,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+516,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+517,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+518,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+519,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+520,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+521,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+523,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+524,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+525,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+526,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+527,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+528,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+530,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+531,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+532,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+533,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+534,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+535,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+536,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+537,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+538,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+539,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+540,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+541,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+542,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+544,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+545,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+546,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+547,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+548,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+549,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+550,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+551,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+561,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+562,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+563,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+564,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+446,"top clk", false,-1);
        tracep->declBit(c+447,"top rst_n", false,-1);
        tracep->declQuad(c+448,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+450,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+452,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+453,"top regA0", false,-1, 63,0);
        tracep->declBit(c+455,"top stall_n_diff", false,-1);
        tracep->declBit(c+456,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+457,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+458,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+460,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+461,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+462,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+463,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+464,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+465,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+466,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+467,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+468,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+469,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+470,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+471,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+472,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+473,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+475,"top axi_r_last_i", false,-1);
        tracep->declBus(c+476,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+477,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+478,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+479,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+480,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+482,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+483,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+484,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+485,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+486,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+487,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+488,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+489,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+490,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+491,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+492,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+493,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+494,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+496,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+497,"top axi_w_last_o", false,-1);
        tracep->declBus(c+498,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+499,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+500,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+501,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+502,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+503,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+504,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+505,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+506,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+508,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+509,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+510,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+511,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+512,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+513,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+514,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+515,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+516,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+517,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+518,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+519,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+520,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+521,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+523,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+524,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+525,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+526,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+527,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+528,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+530,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+531,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+532,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+533,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+534,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+535,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+536,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+537,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+538,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+539,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+540,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+541,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+542,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+544,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+545,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+546,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+547,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+548,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+549,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+550,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+551,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+42,"top instr_fetching", false,-1);
        tracep->declBit(c+1,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+43,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+44,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+565,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+566,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+567,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+568,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+569,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+570,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+571,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+572,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+566,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+573,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+46,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+2,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+3,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+4,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+574,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+575,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+576,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+577,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+47,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+48,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+565,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+578,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+567,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+568,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+50,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+570,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+571,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+579,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+566,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+566,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+580,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+51,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+52,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+54,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+51,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+567,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+55,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+581,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+582,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+583,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+584,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+585,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+56,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+48,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+565,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+578,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+567,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+568,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+569,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+570,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+571,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+572,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+566,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+586,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+57,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+587,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+588,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+589,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+591,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+592,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+593,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+594,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+44,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+58,"top is_jump", false,-1);
        tracep->declQuad(c+59,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+61,"top pc_stall_n", false,-1);
        tracep->declBit(c+61,"top if_stall_n", false,-1);
        tracep->declBit(c+62,"top if_instr_valid", false,-1);
        tracep->declBit(c+62,"top sram_data_valid", false,-1);
        tracep->declQuad(c+63,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+44,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+596,"top sram_ren", false,-1);
        tracep->declBit(c+65,"top sram_addr_valid", false,-1);
        tracep->declBus(c+66,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+67,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+69,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+351,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+353,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+70,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+72,"top src1sel_id", false,-1);
        tracep->declBus(c+73,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+74,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+75,"top is_brc_id", false,-1);
        tracep->declBit(c+76,"top is_jal_id", false,-1);
        tracep->declBit(c+77,"top is_jalr_id", false,-1);
        tracep->declBit(c+78,"top wben_id", false,-1);
        tracep->declBus(c+79,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+80,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+61,"top id_stall_n", false,-1);
        tracep->declBit(c+81,"top DivEn_id", false,-1);
        tracep->declBus(c+82,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+83,"top in_trap_id", false,-1);
        tracep->declBit(c+84,"top out_trap_id", false,-1);
        tracep->declBit(c+85,"top trap_id", false,-1);
        tracep->declBit(c+86,"top ld_use_hazard", false,-1);
        tracep->declBit(c+87,"top id_flush", false,-1);
        tracep->declQuad(c+88,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+90,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+91,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+93,"top src1sel_ex", false,-1);
        tracep->declBus(c+94,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+95,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+97,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+99,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+101,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+103,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+104,"top is_brc_ex", false,-1);
        tracep->declBit(c+105,"top is_jal_ex", false,-1);
        tracep->declBit(c+106,"top is_jalr_ex", false,-1);
        tracep->declBit(c+107,"top wben_ex", false,-1);
        tracep->declBit(c+108,"top DivEn_ex", false,-1);
        tracep->declBus(c+109,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+110,"top trap_ex", false,-1);
        tracep->declBit(c+111,"top ex_stall_n", false,-1);
        tracep->declQuad(c+112,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+114,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+115,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+116,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+117,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+118,"top ex_flush", false,-1);
        tracep->declQuad(c+119,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+121,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+48,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+123,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+124,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+126,"top wben_ls", false,-1);
        tracep->declQuad(c+127,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+129,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+131,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+133,"top trap_ls", false,-1);
        tracep->declBit(c+111,"top ls_stall_n", false,-1);
        tracep->declBit(c+134,"top ls_not_ok", false,-1);
        tracep->declQuad(c+48,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+135,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+136,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+137,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+139,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+37,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+38,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+140,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+50,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+569,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+142,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+144,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+146,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+148,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+149,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+151,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+152,"top wben_wb", false,-1);
        tracep->declQuad(c+153,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+155,"top wb_stall_n", false,-1);
        tracep->declBus(c+561,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+562,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+563,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+564,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+42,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+552,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+597,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+598,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+600,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+601,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+602,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+603,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+604,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+605,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+606,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+607,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+608,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+609,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+610,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+429,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+430,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+431,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+433,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+434,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+611,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+553,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+612,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+613,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+615,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+616,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+617,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+618,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+619,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+620,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+621,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+622,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+623,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+624,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+554,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+625,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+626,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+628,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+629,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+630,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+631,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+555,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+556,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+557,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+558,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+559,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+632,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+633,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+635,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+636,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+637,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+638,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+639,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+640,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+641,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+642,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+643,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+644,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+645,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+435,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+436,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+437,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+439,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+434,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+646,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+478,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+479,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+480,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+482,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+483,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+484,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+485,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+486,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+487,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+488,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+489,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+490,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+491,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+492,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+493,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+494,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+496,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+497,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+498,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+499,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+500,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+501,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+502,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+503,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+456,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+457,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+458,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+460,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+461,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+462,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+463,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+464,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+465,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+466,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+467,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+468,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+469,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+470,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+471,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+472,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+473,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+475,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+476,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+477,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+526,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+527,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+528,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+530,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+531,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+532,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+533,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+534,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+535,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+536,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+537,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+538,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+539,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+540,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+541,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+542,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+544,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+545,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+546,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+547,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+548,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+549,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+550,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+551,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+504,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+505,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+506,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+508,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+509,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+510,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+511,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+512,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+513,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+514,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+515,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+516,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+517,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+518,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+519,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+520,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+521,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+523,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+524,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+525,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+553,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+612,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+613,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+615,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+616,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+617,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+618,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+619,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+620,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+621,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+622,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+623,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+624,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+554,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+625,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+626,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+628,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+629,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+630,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+631,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+555,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+556,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+557,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+558,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+440,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+156,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+157,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+159,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+160,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+161,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+162,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+163,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+164,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+165,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+166,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+167,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+168,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+169,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+441,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+442,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+443,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+445,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+434,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+560,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+446,"top IF_u clk", false,-1);
        tracep->declBit(c+447,"top IF_u rst_n", false,-1);
        tracep->declBit(c+58,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+59,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+129,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+131,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+83,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+84,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+61,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+44,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+66,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+62,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+63,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+62,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+44,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+596,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+65,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+170,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+561,"top axi_if_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_if_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_if_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_if_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+562,"top axi_if_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+563,"top axi_if_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+564,"top axi_if_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+446,"top axi_if_u clock", false,-1);
        tracep->declBit(c+447,"top axi_if_u reset", false,-1);
        tracep->declBit(c+65,"top axi_if_u rw_valid_i", false,-1);
        tracep->declBit(c+62,"top axi_if_u rw_ready_o", false,-1);
        tracep->declQuad(c+63,"top axi_if_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+44,"top axi_if_u rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+42,"top axi_if_u instr_fetching", false,-1);
        tracep->declBit(c+1,"top axi_if_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+43,"top axi_if_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+44,"top axi_if_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+565,"top axi_if_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+566,"top axi_if_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+567,"top axi_if_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+568,"top axi_if_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+569,"top axi_if_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+570,"top axi_if_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+571,"top axi_if_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+572,"top axi_if_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+566,"top axi_if_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+573,"top axi_if_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+46,"top axi_if_u axi_r_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_if_u axi_r_valid_i", false,-1);
        tracep->declBus(c+3,"top axi_if_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+4,"top axi_if_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+574,"top axi_if_u axi_r_last_i", false,-1);
        tracep->declBus(c+575,"top axi_if_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+576,"top axi_if_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+647,"top axi_if_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+570,"top axi_if_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+648,"top axi_if_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+649,"top axi_if_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+172,"top axi_if_u r_state", false,-1, 1,0);
        tracep->declBus(c+39,"top axi_if_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+43,"top axi_if_u ar_valid", false,-1);
        tracep->declBit(c+46,"top axi_if_u r_ready", false,-1);
        tracep->declBit(c+650,"top axi_if_u instr_valid", false,-1);
        tracep->declQuad(c+6,"top axi_if_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+8,"top axi_if_u instr_valid_reg", false,-1);
        tracep->declQuad(c+9,"top axi_if_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+651,"top axi_if_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+566,"top axi_if_u axi_id", false,-1, 3,0);
        tracep->declBus(c+571,"top axi_if_u axi_user", false,-1, 0,0);
        tracep->declBus(c+568,"top axi_if_u axi_len", false,-1, 7,0);
        tracep->declBus(c+569,"top axi_if_u axi_size", false,-1, 2,0);
        tracep->declBit(c+446,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+447,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+44,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+66,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+61,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+87,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+67,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+69,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+173,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+175,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+652,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+653,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+446,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+447,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+61,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+176,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+179,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+446,"top ID_u clk", false,-1);
        tracep->declBit(c+447,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+67,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+142,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+148,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+69,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+149,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+151,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+152,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+353,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+351,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+70,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+72,"top ID_u src1sel", false,-1);
        tracep->declBus(c+73,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+74,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+77,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+76,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+75,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+78,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+79,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+80,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+453,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+81,"top ID_u DivEn", false,-1);
        tracep->declBus(c+82,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+85,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+83,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+84,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+182,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+70,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+353,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+351,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+67,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+69,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+79,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+80,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+182,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+72,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+73,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+74,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+77,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+76,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+75,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+78,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+81,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+82,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+85,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+83,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+84,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+183,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+184,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+185,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+186,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+182,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+70,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+446,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+142,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+148,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+79,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+353,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+80,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+351,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+151,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+149,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+152,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+453,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+365+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+69,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+90,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+86,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+446,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+447,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+111,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+118,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+67,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+69,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+70,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+351,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+353,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+74,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+77,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+76,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+75,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+72,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+73,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+78,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+79,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+80,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+81,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+82,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+85,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+88,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+90,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+95,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+97,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+99,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+103,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+106,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+105,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+104,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+93,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+94,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+107,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+116,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+117,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+108,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+109,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+110,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+187,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+189,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+190,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+191,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+192,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+193,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+194,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+654,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+653,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+446,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+447,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+111,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+355,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+195,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+103,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+97,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+95,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+99,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+88,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+90,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+106,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+105,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+104,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+93,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+94,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+114,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+115,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+48,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+149,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+112,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+108,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+109,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+91,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+59,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+101,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+58,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+205,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+207,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+209,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+101,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+103,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+205,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+207,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+108,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+109,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+91,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+211,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+212,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+213,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+215,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+216,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+218,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+220,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+220,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+221,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+222,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+223,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+225,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+226,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+227,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+229,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+231,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+233,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+205,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+216,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+215,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+218,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+225,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+212,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+226,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+235,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+222,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+220,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+221,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+215,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+220,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+236,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+205,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+237,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+221,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+220,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+223,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+238,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+240,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+242,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+244,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+246,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+248,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+250,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+205,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+207,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+109,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+233,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+209,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+101,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+106,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+105,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+104,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+252,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+99,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+88,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+59,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+58,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+253,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+255,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+655,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+257,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+258,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+259,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+260,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+262,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+264,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+446,"top forwarding_u clk", false,-1);
        tracep->declBit(c+447,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+116,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+117,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+265,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+151,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+126,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+152,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+149,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+155,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+114,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+115,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+112,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+112,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+266,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+267,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+268,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+269,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+270,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+271,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+272,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+273,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+446,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+447,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+88,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+101,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+90,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+91,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+107,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+110,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+111,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+119,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+121,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+123,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+48,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+126,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+133,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+656,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+653,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+446,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+447,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+111,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+274,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+282,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+446,"top ls_u clk", false,-1);
        tracep->declBit(c+447,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+119,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+48,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+121,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+123,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+144,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+148,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+146,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+133,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+124,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+127,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+129,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+131,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+134,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+48,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+135,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+136,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+137,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+139,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+50,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+569,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+37,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+38,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+140,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+136,"top ls_u wren", false,-1);
        tracep->declBit(c+135,"top ls_u rden", false,-1);
        tracep->declBus(c+290,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+137,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+291,"top ls_u wren_last", false,-1);
        tracep->declBit(c+446,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+447,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+136,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+135,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+290,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+137,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+48,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+119,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+144,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+291,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+124,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+134,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+48,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+135,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+136,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+137,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+139,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+50,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+569,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+37,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+38,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+140,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+140,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+292,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+293,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+294,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+295,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+296,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+297,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+298,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+569,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+299,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+300,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+301,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+50,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+139,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+302,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+303,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+304,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+305,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+123,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+148,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+121,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+146,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+136,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+135,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+290,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+137,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+306,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+446,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+447,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+119,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+123,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+48,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+133,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+127,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+129,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+131,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+307,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+308,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+309,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+310,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+311,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+312,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+313,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+314,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+315,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+48,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+316,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+318,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+320,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+131,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+129,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+322,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+324,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+326,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+561,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+562,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+563,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+564,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+446,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+447,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+136,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+135,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+38,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+37,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+140,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+137,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+139,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+48,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+50,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+569,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+577,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+47,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+48,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+565,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+578,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+567,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+568,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+50,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+570,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+571,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+579,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+566,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+566,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+580,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+51,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+52,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+54,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+51,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+567,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+55,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+581,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+582,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+583,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+584,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+585,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+56,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+48,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+565,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+578,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+567,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+568,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+569,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+570,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+571,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+572,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+566,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+586,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+57,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+587,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+588,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+589,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+591,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+592,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+593,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+647,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+570,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+648,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+649,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+328,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+40,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+47,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+51,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+55,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+11,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+647,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+570,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+648,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+649,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+329,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+41,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+56,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+57,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+657,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+12,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+14,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+16,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+17,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+651,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+578,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+571,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+568,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+569,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+330,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+446,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+447,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+119,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+123,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+48,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+124,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+126,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+127,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+155,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+142,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+148,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+144,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+146,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+152,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+153,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+658,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+653,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+446,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+447,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+155,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+331,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+341,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+142,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+148,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+144,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+146,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+153,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+151,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+149,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+446,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+447,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+86,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+58,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+83,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+84,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+62,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+134,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+61,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+61,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+61,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+111,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+111,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+155,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+87,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+118,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+659,"top ifAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+659,"top ifAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+569,"top ifAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+660,"top ifAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+446,"top ifAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+447,"top ifAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+661,"top ifAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+663,"top ifAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+664,"top ifAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+19,"top ifAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+665,"top ifAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+667,"top ifAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+668,"top ifAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+20,"top ifAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+21,"top ifAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+22,"top ifAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+669,"top ifAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+44,"top ifAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+565,"top ifAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+43,"top ifAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+1,"top ifAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+4,"top ifAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+3,"top ifAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+2,"top ifAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+46,"top ifAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+23,"top ifAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+19,"top ifAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+20,"top ifAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+21,"top ifAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+22,"top ifAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+25,"top ifAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+1,"top ifAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+4,"top ifAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+3,"top ifAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+2,"top ifAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+670,"top ifAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+671,"top ifAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+27,"top ifAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+29,"top ifAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+31,"top ifAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+33,"top ifAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+672,"top ifAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+35,"top ifAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+673,"top ifAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+675,"top ifAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+36,"top ifAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp66;
    VlWide<3>/*95:0*/ __Vtemp67;
    VlWide<8>/*255:0*/ __Vtemp72;
    VlWide<10>/*319:0*/ __Vtemp77;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullQData(oldp+6,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+35,(((((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready) 
                                    & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID)) 
                                   & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready)) 
                                  & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID))));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__aw_en));
        tracep->fullBit(oldp+37,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
        tracep->fullBit(oldp+38,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
        tracep->fullCData(oldp+39,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                     ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                         ? ((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)
                                             ? 2U : 3U)
                                         : ((0ULL != vlSelf->top__DOT__pc_new)
                                             ? ((vlSelf->top__DOT__pc_new 
                                                 != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                                 ? 1U
                                                 : 2U)
                                             : 0U))
                                     : ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                         ? ((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready)
                                             ? 3U : 1U)
                                         : ((0ULL != vlSelf->top__DOT__pc_new)
                                             ? 1U : 0U)))),2);
        tracep->fullCData(oldp+40,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                     ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                         ? ((IData)(vlSelf->top__DOT__ls_axi_w_ready_i)
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
                                         ? ((IData)(vlSelf->top__DOT__ls_axi_aw_ready_i)
                                             ? 3U : 1U)
                                         : ((8U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U)))
                                             ? 1U : 0U)))),2);
        tracep->fullCData(oldp+41,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                     ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                         ? ((IData)(vlSelf->top__DOT__ls_axi_r_valid_i)
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
                                         ? ((IData)(vlSelf->top__DOT__ls_axi_ar_ready_i)
                                             ? 3U : 1U)
                                         : ((3U == 
                                             (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U)))
                                             ? 1U : 0U)))),2);
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__instr_fetching));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+48,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+52,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                    << (0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                 << 1U)))),64);
        tracep->fullCData(oldp+54,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                             << (7U 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                    >> 2U))))),8);
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+59,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+61,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                            | (~ (IData)(vlSelf->top__DOT__sram_data_valid))) 
                                           | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullBit(oldp+65,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+66,(((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                   >> 2U)))
                                     ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                >> 0x20U))
                                     : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+67,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+69,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+73,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+74,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+79,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+88,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullIData(oldp+90,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU))),32);
        tracep->fullQData(oldp+91,(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullBit(oldp+93,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x12U))));
        tracep->fullCData(oldp+94,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 0x10U))),2);
        tracep->fullQData(oldp+95,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+97,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+99,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+103,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+104,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+105,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+106,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+107,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+108,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+109,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+110,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+111,((1U & (~ ((~ (IData)(vlSelf->top__DOT__sram_data_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+114,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+115,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+116,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+117,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+119,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+121,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+123,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
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
        tracep->fullBit(oldp+126,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+133,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+135,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+136,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+139,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+142,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+144,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+146,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+148,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+151,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+152,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+153,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+159,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
        tracep->fullCData(oldp+160,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
        tracep->fullBit(oldp+161,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
        tracep->fullCData(oldp+162,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
        tracep->fullCData(oldp+163,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullCData(oldp+164,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
        tracep->fullBit(oldp+165,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
        tracep->fullCData(oldp+166,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
        tracep->fullCData(oldp+167,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
        tracep->fullCData(oldp+168,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+169,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullQData(oldp+170,(((IData)(vlSelf->top__DOT__is_jump)
                                      ? ((0x200000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
                                                      >> 0x1bU)))))
                                      : ((IData)(vlSelf->top__DOT__in_trap_id)
                                          ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec
                                          : ((IData)(vlSelf->top__DOT__out_trap_id)
                                              ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc
                                              : (4ULL 
                                                 + vlSelf->top__DOT__pc_new))))),64);
        tracep->fullCData(oldp+172,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
        tracep->fullQData(oldp+173,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+175,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp54[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                          ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->top__DOT__sram_rdata 
                                              >> 0x20U))
                                   : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp54[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                  ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp54[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new) 
                                 >> 0x20U));
        tracep->fullWData(oldp+176,(__Vtemp54),96);
        tracep->fullWData(oldp+179,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+182,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+183,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+184,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+185,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+186,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+187,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+189,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+190,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+191,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+192,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+193,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+194,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+195,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp56, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp57, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp58, __Vtemp56, __Vtemp57);
        VL_EXTEND_WI(65,1, __Vtemp59, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp60, __Vtemp58, __Vtemp59);
        tracep->fullBit(oldp+211,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp60[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+212,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+215,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+220,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+221,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+222,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp63, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp64, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp65, __Vtemp63, __Vtemp64);
        VL_EXTEND_WI(65,1, __Vtemp66, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp67, __Vtemp65, __Vtemp66);
        tracep->fullBit(oldp+225,((1U & __Vtemp67[2U])));
        tracep->fullBit(oldp+226,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+227,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+229,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+231,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+233,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+235,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+236,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+237,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+242,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+244,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+246,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+248,(((0x4000000U & 
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
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+252,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+253,(((((QData)((IData)(
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
        tracep->fullQData(oldp+255,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+257,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+262,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+264,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+265,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+267,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+268,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+269,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+270,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+271,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+272,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+273,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        __Vtemp72[0U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp72[1U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp72[2U] = (((IData)((((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp72[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                          >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                >> 0x20U)) 
                                       << 2U));
        __Vtemp72[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                   >> 0x20U)) >> 0x1eU) 
                         | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                             << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x19U))));
        __Vtemp72[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    >> 0x19U))));
        __Vtemp72[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    >> 0x19U))));
        __Vtemp72[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                               >> 0x19U));
        tracep->fullWData(oldp+274,(__Vtemp72),226);
        tracep->fullWData(oldp+282,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+290,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+291,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+292,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+293,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+294,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+295,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+296,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+297,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+298,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+299,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+300,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+301,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+302,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+303,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+304,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+305,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+306,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+307,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+308,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+309,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+310,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+311,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+312,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+313,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+314,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+315,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+316,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+318,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+324,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullCData(oldp+328,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+329,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+330,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+331,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+341,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+351,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+353,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp77[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                          << 0x1bU) | (((IData)(vlSelf->top__DOT__aluctr_id) 
                                        << 0x16U) | 
                                       ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
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
        __Vtemp77[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                          >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp77[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])) 
                            << 0x1bU));
        __Vtemp77[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs1_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs1_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp77[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])) 
                            << 0x1bU));
        __Vtemp77[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs2_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs2_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp77[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | (((IData)(vlSelf->top__DOT__ex_flush)
                              ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                            << 0x1bU));
        __Vtemp77[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                            ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                          >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                    << 0x1bU));
        __Vtemp77[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                          >> 5U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp77[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                  >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+355,(__Vtemp77),315);
        tracep->fullQData(oldp+365,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+367,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+369,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+371,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+373,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+377,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+381,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+385,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+387,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+389,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+391,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+397,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+399,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+401,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+403,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+407,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+409,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+411,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+413,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+415,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+417,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+419,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+421,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+423,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+425,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+427,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+429,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullCData(oldp+430,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp)))),2);
        tracep->fullQData(oldp+431,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+433,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last)))));
        tracep->fullCData(oldp+434,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+435,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullCData(oldp+436,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp))
                                      : 0U)),2);
        tracep->fullQData(oldp+437,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+439,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last))
                                    : 0U)));
        tracep->fullBit(oldp+440,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+441,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullCData(oldp+442,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp),2);
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+445,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullBit(oldp+446,(vlSelf->clk));
        tracep->fullBit(oldp+447,(vlSelf->rst_n));
        tracep->fullQData(oldp+448,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+450,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+452,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+453,(vlSelf->regA0),64);
        tracep->fullBit(oldp+455,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+456,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+457,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+458,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+460,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+461,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+462,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+463,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+464,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+465,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+466,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+467,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+468,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+469,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+470,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+471,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+472,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+473,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+475,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+476,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+477,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+478,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+479,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+480,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+482,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+483,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+484,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+485,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+486,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+487,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+488,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+489,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+490,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+491,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+492,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+493,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+494,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+496,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+497,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+498,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+499,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+500,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+501,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+502,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+503,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+504,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+505,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+506,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+508,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+509,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+510,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+511,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+512,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+513,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+514,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+515,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+516,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+517,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+518,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+519,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+520,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+521,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+523,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+524,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+525,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+526,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+527,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+528,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+530,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+531,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+532,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+533,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+534,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+535,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+536,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+537,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+538,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+539,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+540,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+541,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+542,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+544,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+545,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+546,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+547,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+548,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+549,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+550,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+551,(vlSelf->axi_mmio_b_user_i));
        tracep->fullBit(oldp+552,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullBit(oldp+553,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+554,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                    : (IData)(vlSelf->axi_w_ready_i))));
        tracep->fullBit(oldp+555,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+556,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+557,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+558,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+559,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullBit(oldp+560,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullIData(oldp+561,(0x40U),32);
        tracep->fullIData(oldp+562,(4U),32);
        tracep->fullIData(oldp+563,(8U),32);
        tracep->fullIData(oldp+564,(1U),32);
        tracep->fullCData(oldp+565,(0U),3);
        tracep->fullCData(oldp+566,(0U),4);
        tracep->fullBit(oldp+567,(0U));
        tracep->fullCData(oldp+568,(0U),8);
        tracep->fullCData(oldp+569,(3U),3);
        tracep->fullCData(oldp+570,(1U),2);
        tracep->fullBit(oldp+571,(0U));
        tracep->fullCData(oldp+572,(2U),4);
        tracep->fullCData(oldp+573,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+574,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+575,(vlSelf->top__DOT__if_axi_r_id_i),4);
        tracep->fullBit(oldp+576,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullBit(oldp+577,(vlSelf->top__DOT__ls_axi_aw_ready_i));
        tracep->fullCData(oldp+578,(1U),4);
        tracep->fullCData(oldp+579,(0xfU),4);
        tracep->fullBit(oldp+580,(vlSelf->top__DOT__ls_axi_w_ready_i));
        tracep->fullBit(oldp+581,(vlSelf->top__DOT__ls_axi_b_valid_i));
        tracep->fullCData(oldp+582,(vlSelf->top__DOT__ls_axi_b_resp_i),2);
        tracep->fullCData(oldp+583,(vlSelf->top__DOT__ls_axi_b_id_i),4);
        tracep->fullBit(oldp+584,(vlSelf->top__DOT__ls_axi_b_user_i));
        tracep->fullBit(oldp+585,(vlSelf->top__DOT__ls_axi_ar_ready_i));
        tracep->fullCData(oldp+586,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+587,(vlSelf->top__DOT__ls_axi_r_valid_i));
        tracep->fullCData(oldp+588,(vlSelf->top__DOT__ls_axi_r_resp_i),2);
        tracep->fullQData(oldp+589,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+591,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullCData(oldp+592,(vlSelf->top__DOT__ls_axi_r_id_i),4);
        tracep->fullBit(oldp+593,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+594,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+596,(1U));
        tracep->fullBit(oldp+597,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_valid_i));
        tracep->fullQData(oldp+598,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_addr_i),64);
        tracep->fullCData(oldp+600,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_prot_i),3);
        tracep->fullCData(oldp+601,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_id_i),4);
        tracep->fullBit(oldp+602,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_user_i));
        tracep->fullCData(oldp+603,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_len_i),8);
        tracep->fullCData(oldp+604,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_size_i),3);
        tracep->fullCData(oldp+605,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_burst_i),2);
        tracep->fullBit(oldp+606,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_lock_i));
        tracep->fullCData(oldp+607,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_cache_i),4);
        tracep->fullCData(oldp+608,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_qos_i),4);
        tracep->fullCData(oldp+609,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_region_i),4);
        tracep->fullBit(oldp+610,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_r_ready_i));
        tracep->fullBit(oldp+611,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_r_user_o));
        tracep->fullBit(oldp+612,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_valid_i));
        tracep->fullQData(oldp+613,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i),64);
        tracep->fullCData(oldp+615,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_prot_i),3);
        tracep->fullCData(oldp+616,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_id_i),4);
        tracep->fullBit(oldp+617,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_user_i));
        tracep->fullCData(oldp+618,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_len_i),8);
        tracep->fullCData(oldp+619,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_size_i),3);
        tracep->fullCData(oldp+620,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_burst_i),2);
        tracep->fullBit(oldp+621,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_lock_i));
        tracep->fullCData(oldp+622,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_cache_i),4);
        tracep->fullCData(oldp+623,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_qos_i),4);
        tracep->fullCData(oldp+624,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_region_i),4);
        tracep->fullBit(oldp+625,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_valid_i));
        tracep->fullQData(oldp+626,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_data_i),64);
        tracep->fullCData(oldp+628,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_strb_i),8);
        tracep->fullBit(oldp+629,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_last_i));
        tracep->fullBit(oldp+630,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_user_i));
        tracep->fullBit(oldp+631,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_b_ready_i));
        tracep->fullBit(oldp+632,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_valid_i));
        tracep->fullQData(oldp+633,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_addr_i),64);
        tracep->fullCData(oldp+635,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_prot_i),3);
        tracep->fullCData(oldp+636,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_id_i),4);
        tracep->fullBit(oldp+637,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_user_i));
        tracep->fullCData(oldp+638,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_len_i),8);
        tracep->fullCData(oldp+639,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_size_i),3);
        tracep->fullCData(oldp+640,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_burst_i),2);
        tracep->fullBit(oldp+641,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_lock_i));
        tracep->fullCData(oldp+642,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_cache_i),4);
        tracep->fullCData(oldp+643,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_qos_i),4);
        tracep->fullCData(oldp+644,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_region_i),4);
        tracep->fullBit(oldp+645,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_ready_i));
        tracep->fullBit(oldp+646,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_user_o));
        tracep->fullCData(oldp+647,(0U),2);
        tracep->fullCData(oldp+648,(3U),2);
        tracep->fullCData(oldp+649,(2U),2);
        tracep->fullBit(oldp+650,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid));
        tracep->fullIData(oldp+651,(3U),32);
        tracep->fullIData(oldp+652,(0x60U),32);
        tracep->fullIData(oldp+653,(0U),32);
        tracep->fullIData(oldp+654,(0x13bU),32);
        tracep->fullBit(oldp+655,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+656,(0xe2U),32);
        tracep->fullBit(oldp+657,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+658,(0x121U),32);
        tracep->fullIData(oldp+659,(0x40U),32);
        tracep->fullCData(oldp+660,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWSIZE),3);
        tracep->fullQData(oldp+661,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWADDR),64);
        tracep->fullCData(oldp+663,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWPROT),3);
        tracep->fullBit(oldp+664,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID));
        tracep->fullQData(oldp+665,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WDATA),64);
        tracep->fullCData(oldp+667,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WSTRB),8);
        tracep->fullBit(oldp+668,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID));
        tracep->fullBit(oldp+669,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_BREADY));
        tracep->fullIData(oldp+670,(3U),32);
        tracep->fullIData(oldp+671,(1U),32);
        tracep->fullBit(oldp+672,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg_rden));
        tracep->fullQData(oldp+673,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+675,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__byte_index),32);
    }
}
