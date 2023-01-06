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
        tracep->declBit(c+439,"clk", false,-1);
        tracep->declBit(c+440,"rst_n", false,-1);
        tracep->declQuad(c+441,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+443,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+445,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+446,"regA0", false,-1, 63,0);
        tracep->declBit(c+448,"stall_n_diff", false,-1);
        tracep->declBit(c+449,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+450,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+451,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+453,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+454,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+455,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+456,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+457,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+458,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+459,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+460,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+461,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+462,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+463,"axi_r_ready_o", false,-1);
        tracep->declBit(c+464,"axi_r_valid_i", false,-1);
        tracep->declBus(c+465,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+466,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+468,"axi_r_last_i", false,-1);
        tracep->declBus(c+469,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+470,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+471,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+472,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+473,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+475,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+476,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+477,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+478,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+479,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+480,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+481,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+482,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+483,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+484,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+485,"axi_w_ready_i", false,-1);
        tracep->declBit(c+486,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+487,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+489,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+490,"axi_w_last_o", false,-1);
        tracep->declBus(c+491,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+492,"axi_b_ready_o", false,-1);
        tracep->declBit(c+493,"axi_b_valid_i", false,-1);
        tracep->declBus(c+494,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+495,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+496,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+497,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+498,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+499,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+501,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+502,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+503,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+504,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+505,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+506,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+507,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+508,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+509,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+510,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+511,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+512,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+513,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+514,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+516,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+517,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+518,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+519,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+520,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+521,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+523,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+524,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+525,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+526,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+527,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+528,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+529,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+530,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+531,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+532,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+533,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+534,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+535,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+537,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+538,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+539,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+540,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+541,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+542,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+543,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+544,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+565,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+565,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+565,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+565,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+566,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+567,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+568,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+439,"top clk", false,-1);
        tracep->declBit(c+440,"top rst_n", false,-1);
        tracep->declQuad(c+441,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+443,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+445,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+446,"top regA0", false,-1, 63,0);
        tracep->declBit(c+448,"top stall_n_diff", false,-1);
        tracep->declBit(c+449,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+450,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+451,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+453,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+454,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+455,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+456,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+457,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+458,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+459,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+460,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+461,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+462,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+463,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+464,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+465,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+466,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+468,"top axi_r_last_i", false,-1);
        tracep->declBus(c+469,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+470,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+471,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+472,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+473,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+475,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+476,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+477,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+478,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+479,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+480,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+481,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+482,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+483,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+484,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+485,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+486,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+487,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+489,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+490,"top axi_w_last_o", false,-1);
        tracep->declBus(c+491,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+492,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+493,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+494,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+495,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+496,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+497,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+498,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+499,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+501,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+502,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+503,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+504,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+505,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+506,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+507,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+508,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+509,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+510,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+511,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+512,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+513,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+514,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+516,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+517,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+518,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+519,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+520,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+521,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+523,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+524,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+525,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+526,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+527,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+528,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+529,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+530,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+531,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+532,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+533,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+534,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+535,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+537,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+538,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+539,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+540,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+541,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+542,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+543,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+544,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+40,"top instr_fetching", false,-1);
        tracep->declBit(c+1,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+41,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+42,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+569,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+570,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+571,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+572,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+573,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+574,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+575,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+576,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+570,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+577,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+44,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+2,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+3,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+4,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+578,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+579,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+580,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+545,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+45,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+46,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+569,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+581,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+571,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+572,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+48,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+574,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+575,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+582,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+570,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+570,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+546,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+49,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+50,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+52,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+49,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+571,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+362,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+363,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+547,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+548,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+549,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+550,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+53,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+46,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+569,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+581,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+571,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+572,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+573,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+574,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+575,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+576,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+570,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+583,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+54,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+364,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+551,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+365,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+552,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+367,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+584,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+585,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+42,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+55,"top is_jump", false,-1);
        tracep->declQuad(c+56,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+58,"top pc_stall_n", false,-1);
        tracep->declBit(c+58,"top if_stall_n", false,-1);
        tracep->declBit(c+59,"top if_instr_valid", false,-1);
        tracep->declBit(c+59,"top sram_data_valid", false,-1);
        tracep->declQuad(c+60,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+42,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+587,"top sram_ren", false,-1);
        tracep->declBit(c+62,"top sram_addr_valid", false,-1);
        tracep->declBus(c+63,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+64,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+66,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+348,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+350,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+67,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+69,"top src1sel_id", false,-1);
        tracep->declBus(c+70,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+71,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+72,"top is_brc_id", false,-1);
        tracep->declBit(c+73,"top is_jal_id", false,-1);
        tracep->declBit(c+74,"top is_jalr_id", false,-1);
        tracep->declBit(c+75,"top wben_id", false,-1);
        tracep->declBus(c+76,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+77,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+58,"top id_stall_n", false,-1);
        tracep->declBit(c+78,"top DivEn_id", false,-1);
        tracep->declBus(c+79,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+80,"top in_trap_id", false,-1);
        tracep->declBit(c+81,"top out_trap_id", false,-1);
        tracep->declBit(c+82,"top trap_id", false,-1);
        tracep->declBit(c+83,"top ld_use_hazard", false,-1);
        tracep->declBit(c+84,"top id_flush", false,-1);
        tracep->declQuad(c+85,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+87,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+88,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+90,"top src1sel_ex", false,-1);
        tracep->declBus(c+91,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+92,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+94,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+96,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+98,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+100,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+101,"top is_brc_ex", false,-1);
        tracep->declBit(c+102,"top is_jal_ex", false,-1);
        tracep->declBit(c+103,"top is_jalr_ex", false,-1);
        tracep->declBit(c+104,"top wben_ex", false,-1);
        tracep->declBit(c+105,"top DivEn_ex", false,-1);
        tracep->declBus(c+106,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+107,"top trap_ex", false,-1);
        tracep->declBit(c+108,"top ex_stall_n", false,-1);
        tracep->declQuad(c+109,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+111,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+112,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+113,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+114,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+115,"top ex_flush", false,-1);
        tracep->declQuad(c+116,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+118,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+46,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+120,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+121,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+123,"top wben_ls", false,-1);
        tracep->declQuad(c+124,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+126,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+128,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+130,"top trap_ls", false,-1);
        tracep->declBit(c+108,"top ls_stall_n", false,-1);
        tracep->declBit(c+131,"top ls_not_ok", false,-1);
        tracep->declQuad(c+46,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+132,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+133,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+134,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+136,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+553,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+554,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+137,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+48,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+573,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+139,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+141,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+143,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+145,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+146,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+148,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+149,"top wben_wb", false,-1);
        tracep->declQuad(c+150,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+152,"top wb_stall_n", false,-1);
        tracep->declBus(c+565,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+565,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+565,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+565,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+566,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+567,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+568,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+40,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+555,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+588,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+589,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+591,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+592,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+593,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+594,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+595,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+596,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+597,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+598,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+599,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+600,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+601,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+368,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+556,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+369,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+557,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+367,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+602,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+545,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+45,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+46,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+569,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+581,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+571,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+572,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+48,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+574,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+575,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+582,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+570,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+570,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+546,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+49,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+50,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+52,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+49,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+571,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+362,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+363,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+547,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+548,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+549,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+550,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+53,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+46,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+569,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+581,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+571,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+572,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+573,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+574,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+575,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+576,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+570,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+583,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+54,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+364,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+551,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+365,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+552,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+367,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+584,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+471,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+472,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+473,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+475,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+476,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+477,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+478,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+479,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+480,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+481,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+482,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+483,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+484,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+485,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+486,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+487,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+489,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+490,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+491,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+492,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+493,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+494,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+495,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+496,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+449,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+450,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+451,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+453,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+454,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+455,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+456,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+457,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+458,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+459,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+460,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+461,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+462,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+463,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+464,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+465,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+466,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+468,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+469,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+470,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+519,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+520,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+521,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+523,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+524,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+525,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+526,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+527,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+528,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+529,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+530,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+531,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+532,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+533,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+534,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+535,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+537,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+538,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+539,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+540,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+541,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+542,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+543,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+544,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+497,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+498,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+499,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+501,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+502,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+503,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+504,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+505,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+506,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+507,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+508,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+509,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+510,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+511,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+512,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+513,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+514,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+516,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+517,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+518,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+545,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+45,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+46,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+569,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+581,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+571,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+572,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+48,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+574,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+575,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+582,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+570,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+570,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+546,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+49,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+50,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+52,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+49,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+571,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+362,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+363,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+547,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+548,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+549,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+371,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+153,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+154,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+156,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+157,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+158,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+159,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+160,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+161,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+162,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+163,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+164,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+165,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+166,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+372,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+558,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+373,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+559,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+367,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+560,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+439,"top IF_u clk", false,-1);
        tracep->declBit(c+440,"top IF_u rst_n", false,-1);
        tracep->declBit(c+55,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+56,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+126,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+128,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+80,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+81,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+58,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+42,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+63,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+59,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+60,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+59,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+42,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+587,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+62,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+167,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+565,"top axi_if_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+565,"top axi_if_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+565,"top axi_if_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+565,"top axi_if_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+566,"top axi_if_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+567,"top axi_if_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+568,"top axi_if_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+439,"top axi_if_u clock", false,-1);
        tracep->declBit(c+440,"top axi_if_u reset", false,-1);
        tracep->declBit(c+62,"top axi_if_u rw_valid_i", false,-1);
        tracep->declBit(c+59,"top axi_if_u rw_ready_o", false,-1);
        tracep->declQuad(c+60,"top axi_if_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+42,"top axi_if_u rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+40,"top axi_if_u instr_fetching", false,-1);
        tracep->declBit(c+1,"top axi_if_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+41,"top axi_if_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+42,"top axi_if_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+569,"top axi_if_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+570,"top axi_if_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+571,"top axi_if_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+572,"top axi_if_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+573,"top axi_if_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+574,"top axi_if_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+575,"top axi_if_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+576,"top axi_if_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+570,"top axi_if_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+577,"top axi_if_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+44,"top axi_if_u axi_r_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_if_u axi_r_valid_i", false,-1);
        tracep->declBus(c+3,"top axi_if_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+4,"top axi_if_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+578,"top axi_if_u axi_r_last_i", false,-1);
        tracep->declBus(c+579,"top axi_if_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+580,"top axi_if_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+603,"top axi_if_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+574,"top axi_if_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+604,"top axi_if_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+605,"top axi_if_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+169,"top axi_if_u r_state", false,-1, 1,0);
        tracep->declBus(c+561,"top axi_if_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+41,"top axi_if_u ar_valid", false,-1);
        tracep->declBit(c+44,"top axi_if_u r_ready", false,-1);
        tracep->declBit(c+606,"top axi_if_u instr_valid", false,-1);
        tracep->declQuad(c+6,"top axi_if_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+8,"top axi_if_u instr_valid_reg", false,-1);
        tracep->declQuad(c+9,"top axi_if_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+607,"top axi_if_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+570,"top axi_if_u axi_id", false,-1, 3,0);
        tracep->declBus(c+575,"top axi_if_u axi_user", false,-1, 0,0);
        tracep->declBus(c+572,"top axi_if_u axi_len", false,-1, 7,0);
        tracep->declBus(c+573,"top axi_if_u axi_size", false,-1, 2,0);
        tracep->declBit(c+439,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+440,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+42,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+63,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+58,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+84,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+64,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+66,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+170,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+172,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+608,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+609,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+439,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+440,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+58,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+173,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+176,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+439,"top ID_u clk", false,-1);
        tracep->declBit(c+440,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+64,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+139,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+145,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+66,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+146,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+148,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+149,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+350,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+348,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+67,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+69,"top ID_u src1sel", false,-1);
        tracep->declBus(c+70,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+71,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+74,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+73,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+72,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+75,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+76,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+77,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+446,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+78,"top ID_u DivEn", false,-1);
        tracep->declBus(c+79,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+82,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+80,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+81,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+179,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+67,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+350,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+348,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+64,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+66,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+76,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+77,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+179,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+69,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+70,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+71,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+74,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+73,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+72,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+75,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+78,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+79,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+82,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+80,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+81,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+180,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+181,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+182,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+183,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+179,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+67,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+439,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+139,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+145,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+76,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+350,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+77,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+348,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+148,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+146,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+149,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+446,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+375+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+66,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+87,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+83,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+439,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+440,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+108,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+115,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+64,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+66,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+67,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+348,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+350,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+71,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+74,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+73,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+72,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+69,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+70,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+75,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+76,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+77,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+78,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+79,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+82,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+85,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+87,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+92,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+94,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+96,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+100,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+103,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+102,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+101,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+90,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+91,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+104,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+113,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+114,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+105,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+106,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+107,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+184,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+186,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+187,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+188,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+189,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+190,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+191,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+610,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+609,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+439,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+440,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+108,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+352,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+192,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+100,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+94,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+92,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+96,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+85,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+87,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+103,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+102,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+101,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+90,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+91,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+111,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+112,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+46,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+146,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+109,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+105,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+106,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+88,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+56,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+98,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+55,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+202,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+204,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+206,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+98,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+100,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+202,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+204,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+105,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+106,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+88,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+208,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+209,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+210,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+212,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+213,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+215,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+217,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+217,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+218,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+219,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+220,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+222,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+223,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+224,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+226,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+228,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+230,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+202,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+213,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+212,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+215,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+222,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+209,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+223,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+232,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+219,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+217,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+218,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+212,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+217,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+233,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+202,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+234,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+218,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+217,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+220,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+235,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+237,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+239,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+241,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+243,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+245,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+247,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+202,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+204,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+106,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+230,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+206,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+98,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+103,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+102,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+101,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+249,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+96,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+85,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+56,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+55,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+250,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+252,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+611,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+254,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+255,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+256,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+257,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+259,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+261,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+439,"top forwarding_u clk", false,-1);
        tracep->declBit(c+440,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+113,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+114,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+262,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+148,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+123,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+149,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+146,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+152,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+111,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+112,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+109,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+109,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+263,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+264,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+265,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+266,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+267,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+268,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+269,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+270,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+439,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+440,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+85,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+98,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+87,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+88,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+104,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+107,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+108,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+116,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+118,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+120,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+46,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+123,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+130,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+612,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+609,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+439,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+440,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+108,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+271,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+279,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+439,"top ls_u clk", false,-1);
        tracep->declBit(c+440,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+116,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+46,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+118,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+120,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+141,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+145,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+143,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+130,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+121,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+124,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+126,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+128,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+131,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+46,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+132,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+133,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+134,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+136,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+48,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+573,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+553,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+554,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+137,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+133,"top ls_u wren", false,-1);
        tracep->declBit(c+132,"top ls_u rden", false,-1);
        tracep->declBus(c+287,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+134,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+288,"top ls_u wren_last", false,-1);
        tracep->declBit(c+439,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+440,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+133,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+132,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+287,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+134,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+46,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+116,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+141,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+288,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+121,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+131,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+46,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+132,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+133,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+134,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+136,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+48,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+573,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+553,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+554,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+137,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+137,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+289,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+290,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+291,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+292,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+293,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+294,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+295,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+573,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+296,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+297,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+298,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+48,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+136,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+299,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+300,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+301,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+302,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+120,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+145,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+118,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+143,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+133,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+132,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+287,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+134,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+303,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+439,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+440,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+116,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+120,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+46,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+130,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+124,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+126,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+128,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+304,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+305,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+306,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+307,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+308,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+309,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+310,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+311,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+312,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+46,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+313,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+315,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+317,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+128,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+126,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+319,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+321,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+323,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+565,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+565,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+565,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+565,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+566,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+567,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+568,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+439,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+440,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+133,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+132,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+554,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+553,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+137,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+134,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+136,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+46,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+48,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+573,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+545,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+45,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+46,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+569,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+581,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+571,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+572,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+48,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+574,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+575,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+582,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+570,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+570,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+546,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+49,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+50,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+52,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+49,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+571,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+362,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+363,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+547,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+548,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+549,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+550,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+53,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+46,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+569,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+581,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+571,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+572,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+573,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+574,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+575,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+576,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+570,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+583,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+54,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+364,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+551,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+365,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+552,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+367,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+584,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+603,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+574,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+604,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+605,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+325,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+562,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+45,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+49,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+362,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+11,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+603,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+574,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+604,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+605,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+326,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+563,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+53,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+54,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+613,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+12,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+14,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+16,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+17,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+607,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+581,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+575,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+572,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+573,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+327,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+439,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+440,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+116,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+120,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+46,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+121,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+123,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+124,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+152,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+139,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+145,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+141,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+143,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+149,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+150,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+614,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+609,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+439,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+440,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+152,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+328,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+338,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+139,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+145,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+141,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+143,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+150,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+148,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+146,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+439,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+440,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+83,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+55,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+80,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+81,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+59,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+131,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+58,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+58,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+58,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+108,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+108,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+152,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+84,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+115,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+615,"top myip_AXI_Lite_v1_0_S00_AXI_dut C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+615,"top myip_AXI_Lite_v1_0_S00_AXI_dut C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+573,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBit(c+439,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_ACLK", false,-1);
        tracep->declBit(c+440,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+616,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+618,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+619,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_AWVALID", false,-1);
        tracep->declBit(c+19,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+620,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+622,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+623,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_WVALID", false,-1);
        tracep->declBit(c+20,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_WREADY", false,-1);
        tracep->declBus(c+21,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+22,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_BVALID", false,-1);
        tracep->declBit(c+624,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_BREADY", false,-1);
        tracep->declQuad(c+42,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+569,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+41,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_ARVALID", false,-1);
        tracep->declBit(c+1,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+4,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+3,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+2,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_RVALID", false,-1);
        tracep->declBit(c+44,"top myip_AXI_Lite_v1_0_S00_AXI_dut S_AXI_RREADY", false,-1);
        tracep->declQuad(c+23,"top myip_AXI_Lite_v1_0_S00_AXI_dut axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+19,"top myip_AXI_Lite_v1_0_S00_AXI_dut axi_awready", false,-1);
        tracep->declBit(c+20,"top myip_AXI_Lite_v1_0_S00_AXI_dut axi_wready", false,-1);
        tracep->declBus(c+21,"top myip_AXI_Lite_v1_0_S00_AXI_dut axi_bresp", false,-1, 1,0);
        tracep->declBit(c+22,"top myip_AXI_Lite_v1_0_S00_AXI_dut axi_bvalid", false,-1);
        tracep->declQuad(c+25,"top myip_AXI_Lite_v1_0_S00_AXI_dut axi_araddr", false,-1, 63,0);
        tracep->declBit(c+1,"top myip_AXI_Lite_v1_0_S00_AXI_dut axi_arready", false,-1);
        tracep->declQuad(c+4,"top myip_AXI_Lite_v1_0_S00_AXI_dut axi_rdata", false,-1, 63,0);
        tracep->declBus(c+3,"top myip_AXI_Lite_v1_0_S00_AXI_dut axi_rresp", false,-1, 1,0);
        tracep->declBit(c+2,"top myip_AXI_Lite_v1_0_S00_AXI_dut axi_rvalid", false,-1);
        tracep->declBus(c+625,"top myip_AXI_Lite_v1_0_S00_AXI_dut ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+626,"top myip_AXI_Lite_v1_0_S00_AXI_dut OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+27,"top myip_AXI_Lite_v1_0_S00_AXI_dut slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+29,"top myip_AXI_Lite_v1_0_S00_AXI_dut slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+31,"top myip_AXI_Lite_v1_0_S00_AXI_dut slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+33,"top myip_AXI_Lite_v1_0_S00_AXI_dut slv_reg3", false,-1, 63,0);
        tracep->declBit(c+564,"top myip_AXI_Lite_v1_0_S00_AXI_dut slv_reg_rden", false,-1);
        tracep->declBit(c+35,"top myip_AXI_Lite_v1_0_S00_AXI_dut slv_reg_wren", false,-1);
        tracep->declQuad(c+36,"top myip_AXI_Lite_v1_0_S00_AXI_dut reg_data_out", false,-1, 63,0);
        tracep->declBus(c+38,"top myip_AXI_Lite_v1_0_S00_AXI_dut byte_index", false,-1, 31,0);
        tracep->declBit(c+39,"top myip_AXI_Lite_v1_0_S00_AXI_dut aw_en", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp66;
    VlWide<3>/*95:0*/ __Vtemp67;
    VlWide<3>/*95:0*/ __Vtemp68;
    VlWide<8>/*255:0*/ __Vtemp73;
    VlWide<10>/*319:0*/ __Vtemp78;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_arready));
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_rvalid));
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_rresp),2);
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_rdata),64);
        tracep->fullQData(oldp+6,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_awready));
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_wready));
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_bresp),2);
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_bvalid));
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_araddr),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__slv_reg0),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__slv_reg1),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__slv_reg2),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__slv_reg3),64);
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__slv_reg_wren));
        tracep->fullQData(oldp+36,(((1U & (IData)((vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_araddr 
                                                   >> 4U)))
                                     ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_araddr 
                                                       >> 3U)))
                                         ? vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__slv_reg3
                                         : vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__slv_reg2)
                                     : ((1U & (IData)(
                                                      (vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_araddr 
                                                       >> 3U)))
                                         ? vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__slv_reg1
                                         : vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__slv_reg0))),64);
        tracep->fullIData(oldp+38,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__byte_index),32);
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__aw_en));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__instr_fetching));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+46,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+56,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+58,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                            | (~ (IData)(vlSelf->top__DOT__sram_data_valid))) 
                                           | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullBit(oldp+62,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+63,(((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                   >> 2U)))
                                     ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                >> 0x20U))
                                     : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+64,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+66,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+70,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+71,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+73,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+74,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+76,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+77,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+79,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+85,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullIData(oldp+87,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU))),32);
        tracep->fullQData(oldp+88,(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullBit(oldp+90,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x12U))));
        tracep->fullCData(oldp+91,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 0x10U))),2);
        tracep->fullQData(oldp+92,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+94,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+96,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+100,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+101,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+102,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+103,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+104,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+105,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+106,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+107,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+108,((1U & (~ ((~ (IData)(vlSelf->top__DOT__sram_data_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+111,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+112,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+113,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+114,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+116,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+118,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+120,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+121,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+123,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+130,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+132,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+133,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+136,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+139,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+141,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+143,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+145,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+148,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+149,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+150,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+152,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullBit(oldp+153,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+156,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
        tracep->fullCData(oldp+157,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
        tracep->fullBit(oldp+158,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
        tracep->fullCData(oldp+159,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
        tracep->fullCData(oldp+160,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullCData(oldp+161,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
        tracep->fullBit(oldp+162,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
        tracep->fullCData(oldp+163,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
        tracep->fullCData(oldp+164,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
        tracep->fullCData(oldp+165,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+166,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullQData(oldp+167,(((IData)(vlSelf->top__DOT__is_jump)
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
        tracep->fullCData(oldp+169,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
        tracep->fullQData(oldp+170,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+172,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp55[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                          ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->top__DOT__sram_rdata 
                                              >> 0x20U))
                                   : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp55[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                  ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp55[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new) 
                                 >> 0x20U));
        tracep->fullWData(oldp+173,(__Vtemp55),96);
        tracep->fullWData(oldp+176,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+179,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+180,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+181,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+182,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+183,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+184,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+186,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+187,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+188,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+189,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+190,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+191,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+192,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp57, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp58, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp59, __Vtemp57, __Vtemp58);
        VL_EXTEND_WI(65,1, __Vtemp60, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp61, __Vtemp59, __Vtemp60);
        tracep->fullBit(oldp+208,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp61[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+209,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+212,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+217,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+218,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+219,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp64, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp65, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp66, __Vtemp64, __Vtemp65);
        VL_EXTEND_WI(65,1, __Vtemp67, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp68, __Vtemp66, __Vtemp67);
        tracep->fullBit(oldp+222,((1U & __Vtemp68[2U])));
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+224,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+226,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+228,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+230,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+232,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+233,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+234,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+239,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+241,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+243,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+245,(((0x4000000U & 
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
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+249,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+250,(((((QData)((IData)(
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
        tracep->fullQData(oldp+252,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+254,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+259,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+261,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+262,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+264,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+265,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+266,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+267,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+268,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+269,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+270,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        __Vtemp73[0U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp73[1U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp73[2U] = (((IData)((((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp73[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                          >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                >> 0x20U)) 
                                       << 2U));
        __Vtemp73[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                   >> 0x20U)) >> 0x1eU) 
                         | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                             << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x19U))));
        __Vtemp73[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    >> 0x19U))));
        __Vtemp73[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    >> 0x19U))));
        __Vtemp73[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                               >> 0x19U));
        tracep->fullWData(oldp+271,(__Vtemp73),226);
        tracep->fullWData(oldp+279,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+287,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+288,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+289,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+290,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+291,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+292,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+293,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+294,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+295,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+296,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+297,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+298,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+299,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+300,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+301,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+302,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+303,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+304,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+305,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+306,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+307,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+308,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+309,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+310,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+311,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+312,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+313,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+315,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+321,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullCData(oldp+325,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+326,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+327,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+328,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+338,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+348,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+350,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp78[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp78[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                          >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp78[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])) 
                            << 0x1bU));
        __Vtemp78[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs1_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs1_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp78[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])) 
                            << 0x1bU));
        __Vtemp78[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs2_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs2_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp78[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | (((IData)(vlSelf->top__DOT__ex_flush)
                              ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                            << 0x1bU));
        __Vtemp78[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                            ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                          >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                    << 0x1bU));
        __Vtemp78[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp78[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                  >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+352,(__Vtemp78),315);
        tracep->fullBit(oldp+362,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+363,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_b_valid));
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__ls_axi_r_valid_i));
        tracep->fullQData(oldp+365,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullCData(oldp+367,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+368,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+369,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+371,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+372,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+373,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+377,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+381,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+385,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+387,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+389,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+391,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+397,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+399,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+401,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+403,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+407,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+409,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+411,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+413,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+415,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+417,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+419,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+421,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+423,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+425,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+427,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+429,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+431,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+435,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+437,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+439,(vlSelf->clk));
        tracep->fullBit(oldp+440,(vlSelf->rst_n));
        tracep->fullQData(oldp+441,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+443,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+445,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+446,(vlSelf->regA0),64);
        tracep->fullBit(oldp+448,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+449,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+450,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+451,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+453,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+454,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+455,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+456,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+457,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+458,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+459,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+460,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+461,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+462,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+463,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+464,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+465,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+466,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+468,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+469,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+470,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+471,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+472,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+473,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+475,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+476,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+477,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+478,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+479,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+480,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+481,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+482,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+483,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+484,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+485,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+486,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+487,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+489,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+490,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+491,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+492,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+493,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+494,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+495,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+496,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+497,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+498,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+499,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+501,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+502,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+503,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+504,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+505,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+506,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+507,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+508,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+509,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+510,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+511,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+512,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+513,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+514,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+516,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+517,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+518,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+519,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+520,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+521,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+523,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+524,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+525,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+526,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+527,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+528,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+529,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+530,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+531,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+532,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+533,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+534,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+535,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+537,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+538,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+539,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+540,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+541,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+542,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+543,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+544,(vlSelf->axi_mmio_b_user_i));
        tracep->fullBit(oldp+545,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 0x1fU) ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+546,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 0x1fU) ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                    : (IData)(vlSelf->axi_w_ready_i))));
        tracep->fullCData(oldp+547,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                      >> 0x1fU) ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+548,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                      >> 0x1fU) ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+549,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 0x1fU) ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+550,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+551,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullBit(oldp+552,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & ((1U & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1dU)))
                                              ? (IData)(vlSelf->axi_mmio_r_last_i)
                                              : (IData)(vlSelf->axi_r_last_i)))
                                    : 0U)));
        tracep->fullBit(oldp+553,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
        tracep->fullBit(oldp+554,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
        tracep->fullBit(oldp+555,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+556,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+557,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1dU)))
                                                   ? (IData)(vlSelf->axi_mmio_r_last_i)
                                                   : (IData)(vlSelf->axi_r_last_i))))));
        tracep->fullCData(oldp+558,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+559,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_last_i)
                                    : (IData)(vlSelf->axi_r_last_i))));
        tracep->fullBit(oldp+560,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullCData(oldp+561,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_rvalid)
                                              ? 2U : 3U)
                                          : ((0ULL 
                                              != vlSelf->top__DOT__pc_new)
                                              ? ((vlSelf->top__DOT__pc_new 
                                                  != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                                  ? 1U
                                                  : 2U)
                                              : 0U))
                                      : ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_arready)
                                              ? 3U : 1U)
                                          : ((0ULL 
                                              != vlSelf->top__DOT__pc_new)
                                              ? 1U : 0U)))),2);
        tracep->fullCData(oldp+562,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                          ? (((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                               >> 0x1fU)
                                               ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                               : (IData)(vlSelf->axi_w_ready_i))
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
                                          ? (((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                               >> 0x1fU)
                                               ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                               : (IData)(vlSelf->axi_aw_ready_i))
                                              ? 3U : 1U)
                                          : ((8U == 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))
                                              ? 1U : 0U)))),2);
        tracep->fullCData(oldp+563,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__ls_axi_r_valid_i)
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
                                          ? (((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                               ? (1U 
                                                  & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                               : 0U)
                                              ? 3U : 1U)
                                          : ((3U == 
                                              (0x7fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))
                                              ? 1U : 0U)))),2);
        tracep->fullBit(oldp+564,((((IData)(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_if_u__DOT__ar_valid)) 
                                   & (~ (IData)(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__axi_rvalid)))));
        tracep->fullIData(oldp+565,(0x40U),32);
        tracep->fullIData(oldp+566,(4U),32);
        tracep->fullIData(oldp+567,(8U),32);
        tracep->fullIData(oldp+568,(1U),32);
        tracep->fullCData(oldp+569,(0U),3);
        tracep->fullCData(oldp+570,(0U),4);
        tracep->fullBit(oldp+571,(0U));
        tracep->fullCData(oldp+572,(0U),8);
        tracep->fullCData(oldp+573,(3U),3);
        tracep->fullCData(oldp+574,(1U),2);
        tracep->fullBit(oldp+575,(0U));
        tracep->fullCData(oldp+576,(2U),4);
        tracep->fullCData(oldp+577,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+578,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+579,(vlSelf->top__DOT__if_axi_r_id_i),4);
        tracep->fullBit(oldp+580,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+581,(1U),4);
        tracep->fullCData(oldp+582,(0xfU),4);
        tracep->fullCData(oldp+583,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+584,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+585,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+587,(1U));
        tracep->fullBit(oldp+588,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_valid_i));
        tracep->fullQData(oldp+589,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_addr_i),64);
        tracep->fullCData(oldp+591,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_prot_i),3);
        tracep->fullCData(oldp+592,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_id_i),4);
        tracep->fullBit(oldp+593,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_user_i));
        tracep->fullCData(oldp+594,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_len_i),8);
        tracep->fullCData(oldp+595,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_size_i),3);
        tracep->fullCData(oldp+596,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_burst_i),2);
        tracep->fullBit(oldp+597,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_lock_i));
        tracep->fullCData(oldp+598,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_cache_i),4);
        tracep->fullCData(oldp+599,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_qos_i),4);
        tracep->fullCData(oldp+600,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_region_i),4);
        tracep->fullBit(oldp+601,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_r_ready_i));
        tracep->fullBit(oldp+602,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_r_user_o));
        tracep->fullCData(oldp+603,(0U),2);
        tracep->fullCData(oldp+604,(3U),2);
        tracep->fullCData(oldp+605,(2U),2);
        tracep->fullBit(oldp+606,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid));
        tracep->fullIData(oldp+607,(3U),32);
        tracep->fullIData(oldp+608,(0x60U),32);
        tracep->fullIData(oldp+609,(0U),32);
        tracep->fullIData(oldp+610,(0x13bU),32);
        tracep->fullBit(oldp+611,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+612,(0xe2U),32);
        tracep->fullBit(oldp+613,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+614,(0x121U),32);
        tracep->fullIData(oldp+615,(0x40U),32);
        tracep->fullQData(oldp+616,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__S_AXI_AWADDR),64);
        tracep->fullCData(oldp+618,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__S_AXI_AWPROT),3);
        tracep->fullBit(oldp+619,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__S_AXI_AWVALID));
        tracep->fullQData(oldp+620,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__S_AXI_WDATA),64);
        tracep->fullCData(oldp+622,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__S_AXI_WSTRB),8);
        tracep->fullBit(oldp+623,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__S_AXI_WVALID));
        tracep->fullBit(oldp+624,(vlSelf->top__DOT__myip_AXI_Lite_v1_0_S00_AXI_dut__DOT__S_AXI_BREADY));
        tracep->fullIData(oldp+625,(3U),32);
        tracep->fullIData(oldp+626,(1U),32);
    }
}
