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
        tracep->declBit(c+471,"clk", false,-1);
        tracep->declBit(c+472,"rst_n", false,-1);
        tracep->declQuad(c+473,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+475,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+477,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+478,"regA0", false,-1, 63,0);
        tracep->declBit(c+480,"stall_n_diff", false,-1);
        tracep->declBit(c+481,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+482,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+483,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+485,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+486,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+487,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+488,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+489,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+490,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+491,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+492,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+493,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+494,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+495,"axi_r_ready_o", false,-1);
        tracep->declBit(c+496,"axi_r_valid_i", false,-1);
        tracep->declBus(c+497,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+498,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+500,"axi_r_last_i", false,-1);
        tracep->declBus(c+501,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+502,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+503,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+504,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+505,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+507,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+508,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+509,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+510,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+511,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+512,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+513,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+514,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+515,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+516,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+517,"axi_w_ready_i", false,-1);
        tracep->declBit(c+518,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+519,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+521,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+522,"axi_w_last_o", false,-1);
        tracep->declBus(c+523,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+524,"axi_b_ready_o", false,-1);
        tracep->declBit(c+525,"axi_b_valid_i", false,-1);
        tracep->declBus(c+526,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+527,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+528,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+529,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+530,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+531,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+533,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+534,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+535,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+536,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+537,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+538,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+539,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+540,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+541,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+542,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+543,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+544,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+545,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+546,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+548,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+549,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+550,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+551,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+552,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+553,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+555,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+556,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+557,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+558,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+559,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+560,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+561,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+562,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+563,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+564,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+565,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+566,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+567,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+569,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+570,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+571,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+572,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+573,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+574,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+575,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+576,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+586,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+586,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+586,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+586,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+587,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+588,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+589,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+471,"top clk", false,-1);
        tracep->declBit(c+472,"top rst_n", false,-1);
        tracep->declQuad(c+473,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+475,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+477,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+478,"top regA0", false,-1, 63,0);
        tracep->declBit(c+480,"top stall_n_diff", false,-1);
        tracep->declBit(c+481,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+482,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+483,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+485,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+486,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+487,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+488,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+489,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+490,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+491,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+492,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+493,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+494,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+495,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+496,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+497,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+498,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+500,"top axi_r_last_i", false,-1);
        tracep->declBus(c+501,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+502,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+503,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+504,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+505,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+507,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+508,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+509,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+510,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+511,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+512,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+513,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+514,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+515,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+516,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+517,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+518,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+519,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+521,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+522,"top axi_w_last_o", false,-1);
        tracep->declBus(c+523,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+524,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+525,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+526,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+527,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+528,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+529,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+530,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+531,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+533,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+534,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+535,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+536,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+537,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+538,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+539,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+540,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+541,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+542,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+543,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+544,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+545,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+546,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+548,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+549,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+550,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+551,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+552,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+553,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+555,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+556,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+557,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+558,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+559,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+560,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+561,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+562,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+563,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+564,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+565,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+566,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+567,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+569,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+570,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+571,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+572,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+573,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+574,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+575,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+576,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+67,"top instr_fetching", false,-1);
        tracep->declBit(c+1,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+68,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+69,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+590,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+591,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+592,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+593,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+594,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+595,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+596,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+597,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+591,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+598,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+71,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+2,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+3,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+4,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+599,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+600,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+601,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+6,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+72,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+73,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+590,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+602,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+592,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+593,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+75,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+595,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+596,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+603,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+591,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+591,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+7,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+76,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+77,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+79,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+76,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+592,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+80,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+8,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+9,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+604,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+605,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+10,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+81,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+73,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+590,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+602,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+592,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+593,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+594,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+595,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+596,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+597,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+591,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+606,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+82,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+11,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+12,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+13,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+607,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+608,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+609,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+610,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+69,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+83,"top is_jump", false,-1);
        tracep->declQuad(c+84,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+86,"top pc_stall_n", false,-1);
        tracep->declBit(c+86,"top if_stall_n", false,-1);
        tracep->declBit(c+87,"top if_instr_valid", false,-1);
        tracep->declBit(c+87,"top sram_data_valid", false,-1);
        tracep->declQuad(c+88,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+69,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+612,"top sram_ren", false,-1);
        tracep->declBit(c+90,"top sram_addr_valid", false,-1);
        tracep->declBus(c+91,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+92,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+94,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+376,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+378,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+95,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+97,"top src1sel_id", false,-1);
        tracep->declBus(c+98,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+99,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+100,"top is_brc_id", false,-1);
        tracep->declBit(c+101,"top is_jal_id", false,-1);
        tracep->declBit(c+102,"top is_jalr_id", false,-1);
        tracep->declBit(c+103,"top wben_id", false,-1);
        tracep->declBus(c+104,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+105,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+86,"top id_stall_n", false,-1);
        tracep->declBit(c+106,"top DivEn_id", false,-1);
        tracep->declBus(c+107,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+108,"top in_trap_id", false,-1);
        tracep->declBit(c+109,"top out_trap_id", false,-1);
        tracep->declBit(c+110,"top trap_id", false,-1);
        tracep->declBit(c+111,"top ld_use_hazard", false,-1);
        tracep->declBit(c+112,"top id_flush", false,-1);
        tracep->declQuad(c+113,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+115,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+116,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+118,"top src1sel_ex", false,-1);
        tracep->declBus(c+119,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+120,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+122,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+124,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+126,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+128,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+129,"top is_brc_ex", false,-1);
        tracep->declBit(c+130,"top is_jal_ex", false,-1);
        tracep->declBit(c+131,"top is_jalr_ex", false,-1);
        tracep->declBit(c+132,"top wben_ex", false,-1);
        tracep->declBit(c+133,"top DivEn_ex", false,-1);
        tracep->declBus(c+134,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+135,"top trap_ex", false,-1);
        tracep->declBit(c+136,"top ex_stall_n", false,-1);
        tracep->declQuad(c+137,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+139,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+140,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+141,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+142,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+143,"top ex_flush", false,-1);
        tracep->declQuad(c+144,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+146,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+73,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+148,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+149,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+151,"top wben_ls", false,-1);
        tracep->declQuad(c+152,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+154,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+156,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+158,"top trap_ls", false,-1);
        tracep->declBit(c+136,"top ls_stall_n", false,-1);
        tracep->declBit(c+159,"top ls_not_ok", false,-1);
        tracep->declQuad(c+73,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+160,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+161,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+162,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+164,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+59,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+60,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+165,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+75,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+594,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+167,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+169,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+171,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+173,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+174,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+176,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+177,"top wben_wb", false,-1);
        tracep->declQuad(c+178,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+180,"top wb_stall_n", false,-1);
        tracep->declBus(c+586,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+586,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+586,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+586,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+587,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+588,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+589,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+67,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+577,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+613,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+614,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+616,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+617,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+618,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+619,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+620,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+621,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+622,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+623,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+624,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+625,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+626,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+454,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+455,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+456,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+458,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+459,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+627,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+578,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+628,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+629,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+631,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+632,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+633,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+634,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+635,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+636,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+637,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+638,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+639,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+640,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+579,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+641,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+642,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+644,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+645,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+646,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+647,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+580,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+581,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+582,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+583,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+584,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+648,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+649,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+651,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+652,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+653,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+654,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+655,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+656,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+657,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+658,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+659,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+660,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+661,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+460,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+461,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+462,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+464,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+459,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+662,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+503,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+504,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+505,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+507,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+508,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+509,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+510,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+511,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+512,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+513,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+514,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+515,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+516,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+517,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+518,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+519,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+521,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+522,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+523,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+524,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+525,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+526,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+527,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+528,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+481,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+482,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+483,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+485,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+486,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+487,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+488,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+489,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+490,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+491,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+492,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+493,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+494,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+495,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+496,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+497,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+498,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+500,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+501,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+502,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+551,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+552,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+553,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+555,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+556,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+557,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+558,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+559,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+560,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+561,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+562,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+563,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+564,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+565,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+566,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+567,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+569,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+570,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+571,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+572,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+573,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+574,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+575,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+576,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+529,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+530,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+531,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+533,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+534,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+535,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+536,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+537,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+538,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+539,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+540,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+541,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+542,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+543,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+544,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+545,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+546,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+548,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+549,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+550,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+578,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+628,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+629,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+631,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+632,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+633,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+634,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+635,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+636,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+637,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+638,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+639,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+640,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+579,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+641,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+642,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+644,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+645,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+646,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+647,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+580,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+581,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+582,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+583,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+465,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+181,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+182,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+184,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+185,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+186,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+187,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+188,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+189,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+190,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+191,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+192,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+193,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+194,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+466,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+467,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+468,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+470,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+459,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+585,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+471,"top IF_u clk", false,-1);
        tracep->declBit(c+472,"top IF_u rst_n", false,-1);
        tracep->declBit(c+83,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+84,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+154,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+156,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+108,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+109,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+86,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+69,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+91,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+87,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+88,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+87,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+69,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+612,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+90,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+195,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+586,"top axi_if_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+586,"top axi_if_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+586,"top axi_if_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+586,"top axi_if_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+587,"top axi_if_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+588,"top axi_if_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+589,"top axi_if_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+471,"top axi_if_u clock", false,-1);
        tracep->declBit(c+472,"top axi_if_u reset", false,-1);
        tracep->declBit(c+90,"top axi_if_u rw_valid_i", false,-1);
        tracep->declBit(c+87,"top axi_if_u rw_ready_o", false,-1);
        tracep->declQuad(c+88,"top axi_if_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+69,"top axi_if_u rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+67,"top axi_if_u instr_fetching", false,-1);
        tracep->declBit(c+1,"top axi_if_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+68,"top axi_if_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+69,"top axi_if_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+590,"top axi_if_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+591,"top axi_if_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+592,"top axi_if_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+593,"top axi_if_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+594,"top axi_if_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+595,"top axi_if_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+596,"top axi_if_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+597,"top axi_if_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+591,"top axi_if_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+598,"top axi_if_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+71,"top axi_if_u axi_r_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_if_u axi_r_valid_i", false,-1);
        tracep->declBus(c+3,"top axi_if_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+4,"top axi_if_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+599,"top axi_if_u axi_r_last_i", false,-1);
        tracep->declBus(c+600,"top axi_if_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+601,"top axi_if_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+663,"top axi_if_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+595,"top axi_if_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+664,"top axi_if_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+665,"top axi_if_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+197,"top axi_if_u r_state", false,-1, 1,0);
        tracep->declBus(c+61,"top axi_if_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+68,"top axi_if_u ar_valid", false,-1);
        tracep->declBit(c+71,"top axi_if_u r_ready", false,-1);
        tracep->declBit(c+666,"top axi_if_u instr_valid", false,-1);
        tracep->declQuad(c+15,"top axi_if_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+17,"top axi_if_u instr_valid_reg", false,-1);
        tracep->declQuad(c+18,"top axi_if_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+667,"top axi_if_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+591,"top axi_if_u axi_id", false,-1, 3,0);
        tracep->declBus(c+596,"top axi_if_u axi_user", false,-1, 0,0);
        tracep->declBus(c+593,"top axi_if_u axi_len", false,-1, 7,0);
        tracep->declBus(c+594,"top axi_if_u axi_size", false,-1, 2,0);
        tracep->declBit(c+471,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+472,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+69,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+91,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+86,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+112,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+92,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+94,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+198,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+200,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+668,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+669,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+471,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+472,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+86,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+201,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+204,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+471,"top ID_u clk", false,-1);
        tracep->declBit(c+472,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+92,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+167,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+173,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+94,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+174,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+176,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+177,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+378,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+376,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+95,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+97,"top ID_u src1sel", false,-1);
        tracep->declBus(c+98,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+99,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+102,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+101,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+100,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+103,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+104,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+105,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+478,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+106,"top ID_u DivEn", false,-1);
        tracep->declBus(c+107,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+110,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+108,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+109,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+207,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+95,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+378,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+376,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+92,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+94,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+104,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+105,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+207,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+97,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+98,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+99,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+102,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+101,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+100,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+103,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+106,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+107,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+110,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+108,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+109,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+208,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+209,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+210,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+211,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+207,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+95,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+471,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+167,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+173,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+104,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+378,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+105,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+376,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+176,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+174,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+177,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+478,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+390+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+94,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+115,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+111,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+471,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+472,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+136,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+143,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+92,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+94,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+95,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+376,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+378,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+99,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+102,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+101,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+100,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+97,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+98,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+103,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+104,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+105,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+106,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+107,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+110,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+113,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+115,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+120,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+122,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+124,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+128,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+131,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+130,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+129,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+118,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+119,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+132,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+141,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+142,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+133,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+134,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+135,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+212,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+214,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+215,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+216,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+217,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+218,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+219,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+670,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+669,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+471,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+472,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+136,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+380,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+220,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+128,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+122,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+120,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+124,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+113,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+115,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+131,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+130,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+129,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+118,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+119,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+139,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+140,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+73,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+174,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+137,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+133,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+134,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+116,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+84,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+126,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+83,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+230,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+232,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+234,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+126,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+128,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+230,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+232,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+133,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+134,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+116,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+236,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+237,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+238,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+240,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+241,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+243,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+245,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+245,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+246,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+247,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+248,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+250,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+251,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+252,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+254,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+256,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+258,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+230,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+241,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+240,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+243,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+250,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+237,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+251,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+260,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+247,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+245,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+246,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+240,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+245,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+261,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+230,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+262,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+246,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+245,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+248,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+263,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+265,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+267,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+269,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+271,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+273,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+275,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+230,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+232,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+134,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+258,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+234,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+126,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+131,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+130,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+129,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+277,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+124,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+113,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+84,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+83,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+278,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+280,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+671,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+282,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+283,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+284,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+285,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+287,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+289,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+471,"top forwarding_u clk", false,-1);
        tracep->declBit(c+472,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+141,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+142,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+290,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+176,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+151,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+177,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+174,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+180,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+139,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+140,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+137,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+137,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+291,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+292,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+293,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+294,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+295,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+296,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+297,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+298,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+471,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+472,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+113,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+126,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+115,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+116,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+132,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+135,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+136,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+144,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+146,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+148,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+73,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+151,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+158,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+672,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+669,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+471,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+472,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+136,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+299,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+307,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+471,"top ls_u clk", false,-1);
        tracep->declBit(c+472,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+144,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+73,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+146,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+148,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+169,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+173,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+171,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+158,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+149,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+152,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+154,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+156,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+159,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+73,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+160,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+161,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+162,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+164,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+75,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+594,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+59,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+60,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+165,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+161,"top ls_u wren", false,-1);
        tracep->declBit(c+160,"top ls_u rden", false,-1);
        tracep->declBus(c+315,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+162,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+316,"top ls_u wren_last", false,-1);
        tracep->declBit(c+471,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+472,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+161,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+160,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+315,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+162,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+73,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+144,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+169,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+316,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+149,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+159,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+73,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+160,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+161,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+162,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+164,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+75,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+594,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+59,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+60,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+165,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+165,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+317,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+318,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+319,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+320,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+321,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+322,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+323,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+594,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+324,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+325,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+326,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+75,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+164,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+327,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+328,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+329,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+330,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+148,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+173,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+146,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+171,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+161,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+160,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+315,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+162,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+331,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+471,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+472,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+144,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+148,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+73,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+158,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+152,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+154,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+156,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+332,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+333,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+334,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+335,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+336,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+337,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+338,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+339,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+340,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+73,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+341,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+343,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+345,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+156,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+154,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+347,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+349,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+351,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+586,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+586,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+586,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+586,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+587,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+588,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+589,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+471,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+472,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+161,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+160,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+60,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+59,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+165,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+162,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+164,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+73,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+75,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+594,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+6,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+72,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+73,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+590,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+602,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+592,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+593,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+75,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+595,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+596,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+603,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+591,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+591,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+7,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+76,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+77,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+79,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+76,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+592,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+80,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+8,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+9,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+604,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+605,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+10,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+81,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+73,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+590,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+602,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+592,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+593,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+594,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+595,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+596,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+597,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+591,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+606,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+82,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+11,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+12,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+13,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+607,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+608,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+609,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+663,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+595,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+664,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+665,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+353,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+62,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+72,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+76,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+80,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+20,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+663,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+595,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+664,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+665,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+354,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+63,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+81,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+82,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+673,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+21,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+23,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+25,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+26,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+667,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+602,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+596,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+593,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+594,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+355,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+471,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+472,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+144,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+148,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+73,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+149,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+151,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+152,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+180,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+167,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+173,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+169,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+171,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+177,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+178,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+674,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+669,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+471,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+472,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+180,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+356,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+366,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+167,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+173,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+169,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+171,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+178,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+176,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+174,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+471,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+472,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+111,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+83,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+108,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+109,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+87,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+159,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+86,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+86,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+86,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+136,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+136,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+180,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+112,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+143,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+675,"top ifAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+675,"top ifAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+594,"top ifAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+676,"top ifAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+471,"top ifAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+472,"top ifAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+677,"top ifAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+679,"top ifAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+680,"top ifAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+28,"top ifAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+681,"top ifAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+683,"top ifAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+684,"top ifAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+29,"top ifAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+30,"top ifAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+31,"top ifAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+685,"top ifAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+69,"top ifAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+590,"top ifAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+68,"top ifAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+1,"top ifAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+4,"top ifAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+3,"top ifAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+2,"top ifAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+71,"top ifAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+32,"top ifAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+28,"top ifAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+29,"top ifAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+30,"top ifAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+31,"top ifAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+34,"top ifAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+1,"top ifAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+4,"top ifAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+3,"top ifAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+2,"top ifAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+686,"top ifAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+687,"top ifAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+36,"top ifAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+38,"top ifAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+40,"top ifAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+42,"top ifAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+64,"top ifAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+44,"top ifAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+688,"top ifAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+690,"top ifAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+45,"top ifAxiSlaveRam_u aw_en", false,-1);
        tracep->declBus(c+675,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+675,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+594,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+75,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+471,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+472,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+73,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+590,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+72,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+77,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+79,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+76,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+9,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+8,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+80,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+73,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+590,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+81,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+10,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+13,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+12,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+11,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+82,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+46,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+9,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+8,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+48,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+10,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+13,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+12,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+11,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+686,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+687,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+50,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+52,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+54,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+56,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+65,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+66,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+691,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+693,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+58,"top lsAxiSlaveRam_u aw_en", false,-1);
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
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+44,(((((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready) 
                                    & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID)) 
                                   & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready)) 
                                  & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID))));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__aw_en));
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullBit(oldp+59,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
        tracep->fullBit(oldp+60,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
        tracep->fullCData(oldp+61,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
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
        tracep->fullCData(oldp+62,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
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
        tracep->fullCData(oldp+63,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
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
        tracep->fullBit(oldp+64,((((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready) 
                                   & (IData)(vlSelf->top__DOT__axi_if_u__DOT__ar_valid)) 
                                  & (~ (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+65,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                  & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+66,(((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                    & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid)) 
                                   & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)) 
                                  & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid))));
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__instr_fetching));
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+73,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullCData(oldp+75,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+77,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                    << (0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                 << 1U)))),64);
        tracep->fullCData(oldp+79,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                             << (7U 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                    >> 2U))))),8);
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+84,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+86,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                            | (~ (IData)(vlSelf->top__DOT__sram_data_valid))) 
                                           | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullBit(oldp+90,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+91,(((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                   >> 2U)))
                                     ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                >> 0x20U))
                                     : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+92,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+94,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+98,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+99,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+101,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+104,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+105,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+107,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+113,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+115,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+116,(((0x4000000U & 
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
        tracep->fullBit(oldp+118,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+119,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+120,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+122,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+124,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+128,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+129,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+130,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+131,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+132,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+133,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+134,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+135,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+136,((1U & (~ ((~ (IData)(vlSelf->top__DOT__sram_data_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+139,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+140,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+141,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+142,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+144,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+146,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+148,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+149,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+151,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+158,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+159,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+160,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+161,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+164,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+167,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+169,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+171,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+173,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+176,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+177,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+178,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+180,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullBit(oldp+181,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+184,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
        tracep->fullCData(oldp+185,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
        tracep->fullBit(oldp+186,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
        tracep->fullCData(oldp+187,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
        tracep->fullCData(oldp+188,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullCData(oldp+189,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
        tracep->fullBit(oldp+190,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
        tracep->fullCData(oldp+191,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
        tracep->fullCData(oldp+192,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
        tracep->fullCData(oldp+193,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+194,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullQData(oldp+195,(((IData)(vlSelf->top__DOT__is_jump)
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
        tracep->fullCData(oldp+197,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
        tracep->fullQData(oldp+198,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+200,(((IData)(vlSelf->top__DOT__id_flush)
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
        tracep->fullWData(oldp+201,(__Vtemp54),96);
        tracep->fullWData(oldp+204,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+207,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+208,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+209,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+210,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+211,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+212,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+214,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+215,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+216,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+217,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+218,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+219,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+220,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp56, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp57, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp58, __Vtemp56, __Vtemp57);
        VL_EXTEND_WI(65,1, __Vtemp59, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp60, __Vtemp58, __Vtemp59);
        tracep->fullBit(oldp+236,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp60[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+237,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+245,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+246,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+247,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp63, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp64, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp65, __Vtemp63, __Vtemp64);
        VL_EXTEND_WI(65,1, __Vtemp66, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp67, __Vtemp65, __Vtemp66);
        tracep->fullBit(oldp+250,((1U & __Vtemp67[2U])));
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+252,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+254,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+256,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+258,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+260,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+261,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+262,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+267,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+269,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+271,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+273,(((0x4000000U & 
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
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+277,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+278,(((((QData)((IData)(
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
        tracep->fullQData(oldp+280,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+282,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+283,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+284,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+287,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+289,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+290,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+291,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+292,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+293,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+294,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+295,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+296,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+297,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+298,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
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
        tracep->fullWData(oldp+299,(__Vtemp72),226);
        tracep->fullWData(oldp+307,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+315,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+316,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+317,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+318,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+319,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+320,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+321,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+322,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+323,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+324,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+325,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+326,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+327,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+328,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+329,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+330,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+331,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+332,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+333,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+334,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+335,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+338,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+340,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+341,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+343,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+349,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullCData(oldp+353,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+354,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+355,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+356,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+366,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+376,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+378,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
        tracep->fullWData(oldp+380,(__Vtemp77),315);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+392,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+398,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+400,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+402,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+404,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+406,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+408,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+410,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+412,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+420,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+422,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+424,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+426,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+428,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+430,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+432,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+434,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+436,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+440,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+442,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+446,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+448,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+450,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+452,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+454,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullCData(oldp+455,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp)))),2);
        tracep->fullQData(oldp+456,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+458,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last)))));
        tracep->fullCData(oldp+459,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+460,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullCData(oldp+461,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp))
                                      : 0U)),2);
        tracep->fullQData(oldp+462,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+464,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last))
                                    : 0U)));
        tracep->fullBit(oldp+465,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+466,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullCData(oldp+467,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp),2);
        tracep->fullQData(oldp+468,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+470,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullBit(oldp+471,(vlSelf->clk));
        tracep->fullBit(oldp+472,(vlSelf->rst_n));
        tracep->fullQData(oldp+473,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+475,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+477,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+478,(vlSelf->regA0),64);
        tracep->fullBit(oldp+480,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+481,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+482,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+483,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+485,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+486,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+487,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+488,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+489,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+490,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+491,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+492,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+493,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+494,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+495,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+496,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+497,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+498,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+500,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+501,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+502,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+503,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+504,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+505,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+507,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+508,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+509,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+510,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+511,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+512,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+513,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+514,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+515,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+516,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+517,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+518,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+519,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+521,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+522,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+523,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+524,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+525,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+526,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+527,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+528,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+529,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+530,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+531,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+533,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+534,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+535,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+536,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+537,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+538,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+539,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+540,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+541,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+542,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+543,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+544,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+545,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+546,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+548,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+549,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+550,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+551,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+552,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+553,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+555,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+556,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+557,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+558,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+559,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+560,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+561,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+562,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+563,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+564,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+565,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+566,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+567,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+569,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+570,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+571,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+572,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+573,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+574,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+575,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+576,(vlSelf->axi_mmio_b_user_i));
        tracep->fullBit(oldp+577,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullBit(oldp+578,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+579,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                    : (IData)(vlSelf->axi_w_ready_i))));
        tracep->fullBit(oldp+580,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+581,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+582,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+583,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+584,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullBit(oldp+585,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullIData(oldp+586,(0x40U),32);
        tracep->fullIData(oldp+587,(4U),32);
        tracep->fullIData(oldp+588,(8U),32);
        tracep->fullIData(oldp+589,(1U),32);
        tracep->fullCData(oldp+590,(0U),3);
        tracep->fullCData(oldp+591,(0U),4);
        tracep->fullBit(oldp+592,(0U));
        tracep->fullCData(oldp+593,(0U),8);
        tracep->fullCData(oldp+594,(3U),3);
        tracep->fullCData(oldp+595,(1U),2);
        tracep->fullBit(oldp+596,(0U));
        tracep->fullCData(oldp+597,(2U),4);
        tracep->fullCData(oldp+598,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+599,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+600,(vlSelf->top__DOT__if_axi_r_id_i),4);
        tracep->fullBit(oldp+601,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+602,(1U),4);
        tracep->fullCData(oldp+603,(0xfU),4);
        tracep->fullCData(oldp+604,(vlSelf->top__DOT__ls_axi_b_id_i),4);
        tracep->fullBit(oldp+605,(vlSelf->top__DOT__ls_axi_b_user_i));
        tracep->fullCData(oldp+606,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+607,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullCData(oldp+608,(vlSelf->top__DOT__ls_axi_r_id_i),4);
        tracep->fullBit(oldp+609,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+610,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+612,(1U));
        tracep->fullBit(oldp+613,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_valid_i));
        tracep->fullQData(oldp+614,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_addr_i),64);
        tracep->fullCData(oldp+616,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_prot_i),3);
        tracep->fullCData(oldp+617,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_id_i),4);
        tracep->fullBit(oldp+618,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_user_i));
        tracep->fullCData(oldp+619,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_len_i),8);
        tracep->fullCData(oldp+620,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_size_i),3);
        tracep->fullCData(oldp+621,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_burst_i),2);
        tracep->fullBit(oldp+622,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_lock_i));
        tracep->fullCData(oldp+623,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_cache_i),4);
        tracep->fullCData(oldp+624,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_qos_i),4);
        tracep->fullCData(oldp+625,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_region_i),4);
        tracep->fullBit(oldp+626,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_r_ready_i));
        tracep->fullBit(oldp+627,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_r_user_o));
        tracep->fullBit(oldp+628,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_valid_i));
        tracep->fullQData(oldp+629,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i),64);
        tracep->fullCData(oldp+631,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_prot_i),3);
        tracep->fullCData(oldp+632,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_id_i),4);
        tracep->fullBit(oldp+633,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_user_i));
        tracep->fullCData(oldp+634,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_len_i),8);
        tracep->fullCData(oldp+635,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_size_i),3);
        tracep->fullCData(oldp+636,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_burst_i),2);
        tracep->fullBit(oldp+637,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_lock_i));
        tracep->fullCData(oldp+638,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_cache_i),4);
        tracep->fullCData(oldp+639,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_qos_i),4);
        tracep->fullCData(oldp+640,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_region_i),4);
        tracep->fullBit(oldp+641,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_valid_i));
        tracep->fullQData(oldp+642,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_data_i),64);
        tracep->fullCData(oldp+644,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_strb_i),8);
        tracep->fullBit(oldp+645,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_last_i));
        tracep->fullBit(oldp+646,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_w_user_i));
        tracep->fullBit(oldp+647,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_b_ready_i));
        tracep->fullBit(oldp+648,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_valid_i));
        tracep->fullQData(oldp+649,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_addr_i),64);
        tracep->fullCData(oldp+651,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_prot_i),3);
        tracep->fullCData(oldp+652,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_id_i),4);
        tracep->fullBit(oldp+653,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_user_i));
        tracep->fullCData(oldp+654,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_len_i),8);
        tracep->fullCData(oldp+655,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_size_i),3);
        tracep->fullCData(oldp+656,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_burst_i),2);
        tracep->fullBit(oldp+657,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_lock_i));
        tracep->fullCData(oldp+658,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_cache_i),4);
        tracep->fullCData(oldp+659,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_qos_i),4);
        tracep->fullCData(oldp+660,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_ar_region_i),4);
        tracep->fullBit(oldp+661,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_ready_i));
        tracep->fullBit(oldp+662,(vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_r_user_o));
        tracep->fullCData(oldp+663,(0U),2);
        tracep->fullCData(oldp+664,(3U),2);
        tracep->fullCData(oldp+665,(2U),2);
        tracep->fullBit(oldp+666,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid));
        tracep->fullIData(oldp+667,(3U),32);
        tracep->fullIData(oldp+668,(0x60U),32);
        tracep->fullIData(oldp+669,(0U),32);
        tracep->fullIData(oldp+670,(0x13bU),32);
        tracep->fullBit(oldp+671,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+672,(0xe2U),32);
        tracep->fullBit(oldp+673,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+674,(0x121U),32);
        tracep->fullIData(oldp+675,(0x40U),32);
        tracep->fullCData(oldp+676,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWSIZE),3);
        tracep->fullQData(oldp+677,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWADDR),64);
        tracep->fullCData(oldp+679,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWPROT),3);
        tracep->fullBit(oldp+680,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID));
        tracep->fullQData(oldp+681,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WDATA),64);
        tracep->fullCData(oldp+683,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WSTRB),8);
        tracep->fullBit(oldp+684,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID));
        tracep->fullBit(oldp+685,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_BREADY));
        tracep->fullIData(oldp+686,(3U),32);
        tracep->fullIData(oldp+687,(1U),32);
        tracep->fullQData(oldp+688,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+690,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__byte_index),32);
        tracep->fullQData(oldp+691,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+693,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
