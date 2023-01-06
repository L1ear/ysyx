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
        tracep->declBit(c+436,"clk", false,-1);
        tracep->declBit(c+437,"rst_n", false,-1);
        tracep->declQuad(c+438,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+440,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+442,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+443,"regA0", false,-1, 63,0);
        tracep->declBit(c+445,"stall_n_diff", false,-1);
        tracep->declBit(c+446,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+447,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+448,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+450,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+451,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+452,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+453,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+454,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+455,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+456,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+457,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+458,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+459,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+460,"axi_r_ready_o", false,-1);
        tracep->declBit(c+461,"axi_r_valid_i", false,-1);
        tracep->declBus(c+462,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+463,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+465,"axi_r_last_i", false,-1);
        tracep->declBus(c+466,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+467,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+468,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+469,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+470,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+472,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+473,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+474,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+475,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+476,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+477,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+478,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+479,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+480,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+481,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+482,"axi_w_ready_i", false,-1);
        tracep->declBit(c+483,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+484,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+486,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+487,"axi_w_last_o", false,-1);
        tracep->declBus(c+488,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+489,"axi_b_ready_o", false,-1);
        tracep->declBit(c+490,"axi_b_valid_i", false,-1);
        tracep->declBus(c+491,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+492,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+493,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+494,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+495,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+496,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+498,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+499,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+500,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+501,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+502,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+503,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+504,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+505,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+506,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+507,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+508,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+509,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+510,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+511,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+513,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+514,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+515,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+516,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+517,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+518,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+520,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+521,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+522,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+523,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+524,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+525,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+526,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+527,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+528,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+529,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+530,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+531,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+532,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+534,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+535,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+536,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+537,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+538,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+539,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+540,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+541,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+561,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+562,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+563,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+564,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+436,"top clk", false,-1);
        tracep->declBit(c+437,"top rst_n", false,-1);
        tracep->declQuad(c+438,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+440,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+442,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+443,"top regA0", false,-1, 63,0);
        tracep->declBit(c+445,"top stall_n_diff", false,-1);
        tracep->declBit(c+446,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+447,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+448,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+450,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+451,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+452,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+453,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+454,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+455,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+456,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+457,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+458,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+459,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+460,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+461,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+462,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+463,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+465,"top axi_r_last_i", false,-1);
        tracep->declBus(c+466,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+467,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+468,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+469,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+470,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+472,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+473,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+474,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+475,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+476,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+477,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+478,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+479,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+480,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+481,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+482,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+483,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+484,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+486,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+487,"top axi_w_last_o", false,-1);
        tracep->declBus(c+488,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+489,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+490,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+491,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+492,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+493,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+494,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+495,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+496,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+498,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+499,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+500,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+501,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+502,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+503,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+504,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+505,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+506,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+507,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+508,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+509,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+510,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+511,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+513,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+514,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+515,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+516,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+517,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+518,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+520,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+521,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+522,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+523,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+524,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+525,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+526,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+527,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+528,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+529,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+530,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+531,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+532,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+534,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+535,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+536,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+537,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+538,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+539,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+540,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+541,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+37,"top instr_fetching", false,-1);
        tracep->declBit(c+1,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+38,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+39,"top if_axi_ar_addr_o", false,-1, 63,0);
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
        tracep->declBit(c+41,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+2,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+3,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+4,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+574,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+575,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+576,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+542,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+42,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+43,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+565,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+577,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+567,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+568,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+45,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+570,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+571,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+578,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+566,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+566,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+543,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+46,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+47,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+49,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+46,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+567,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+359,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+360,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+544,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+545,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+546,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+547,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+50,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+43,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+565,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+577,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+567,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+568,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+569,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+570,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+571,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+572,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+566,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+579,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+51,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+361,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+548,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+362,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+549,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+364,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+580,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+581,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+39,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+52,"top is_jump", false,-1);
        tracep->declQuad(c+53,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+55,"top pc_stall_n", false,-1);
        tracep->declBit(c+55,"top if_stall_n", false,-1);
        tracep->declBit(c+56,"top if_instr_valid", false,-1);
        tracep->declBit(c+56,"top sram_data_valid", false,-1);
        tracep->declQuad(c+57,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+39,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+583,"top sram_ren", false,-1);
        tracep->declBit(c+59,"top sram_addr_valid", false,-1);
        tracep->declBus(c+60,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+61,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+63,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+345,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+347,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+64,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+66,"top src1sel_id", false,-1);
        tracep->declBus(c+67,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+68,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+69,"top is_brc_id", false,-1);
        tracep->declBit(c+70,"top is_jal_id", false,-1);
        tracep->declBit(c+71,"top is_jalr_id", false,-1);
        tracep->declBit(c+72,"top wben_id", false,-1);
        tracep->declBus(c+73,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+74,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+55,"top id_stall_n", false,-1);
        tracep->declBit(c+75,"top DivEn_id", false,-1);
        tracep->declBus(c+76,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+77,"top in_trap_id", false,-1);
        tracep->declBit(c+78,"top out_trap_id", false,-1);
        tracep->declBit(c+79,"top trap_id", false,-1);
        tracep->declBit(c+80,"top ld_use_hazard", false,-1);
        tracep->declBit(c+81,"top id_flush", false,-1);
        tracep->declQuad(c+82,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+84,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+85,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+87,"top src1sel_ex", false,-1);
        tracep->declBus(c+88,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+89,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+91,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+93,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+95,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+97,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+98,"top is_brc_ex", false,-1);
        tracep->declBit(c+99,"top is_jal_ex", false,-1);
        tracep->declBit(c+100,"top is_jalr_ex", false,-1);
        tracep->declBit(c+101,"top wben_ex", false,-1);
        tracep->declBit(c+102,"top DivEn_ex", false,-1);
        tracep->declBus(c+103,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+104,"top trap_ex", false,-1);
        tracep->declBit(c+105,"top ex_stall_n", false,-1);
        tracep->declQuad(c+106,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+108,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+109,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+110,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+111,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+112,"top ex_flush", false,-1);
        tracep->declQuad(c+113,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+115,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+43,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+117,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+118,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+120,"top wben_ls", false,-1);
        tracep->declQuad(c+121,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+123,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+125,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+127,"top trap_ls", false,-1);
        tracep->declBit(c+105,"top ls_stall_n", false,-1);
        tracep->declBit(c+128,"top ls_not_ok", false,-1);
        tracep->declQuad(c+43,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+129,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+130,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+131,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+133,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+550,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+551,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+134,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+45,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+569,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+136,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+138,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+140,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+142,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+143,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+145,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+146,"top wben_wb", false,-1);
        tracep->declQuad(c+147,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+149,"top wb_stall_n", false,-1);
        tracep->declBus(c+561,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+562,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+563,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+564,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+37,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+552,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+584,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+585,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+587,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+588,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+589,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+590,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+591,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+592,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+593,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+594,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+595,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+596,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+597,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+365,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+553,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+366,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+554,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+364,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+598,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+542,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+42,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+43,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+565,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+577,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+567,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+568,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+45,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+570,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+571,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+578,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+566,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+566,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+543,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+46,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+47,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+49,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+46,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+567,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+359,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+360,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+544,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+545,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+546,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+547,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+50,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+43,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+565,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+577,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+567,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+568,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+569,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+570,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+571,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+572,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+566,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+579,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+51,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+361,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+548,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+362,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+549,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+364,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+580,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+468,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+469,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+470,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+472,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+473,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+474,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+475,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+476,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+477,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+478,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+479,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+480,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+481,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+482,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+483,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+484,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+486,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+487,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+488,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+489,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+490,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+491,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+492,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+493,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+446,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+447,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+448,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+450,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+451,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+452,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+453,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+454,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+455,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+456,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+457,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+458,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+459,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+460,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+461,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+462,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+463,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+465,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+466,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+467,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+516,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+517,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+518,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+520,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+521,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+522,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+523,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+524,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+525,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+526,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+527,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+528,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+529,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+530,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+531,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+532,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+534,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+535,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+536,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+537,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+538,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+539,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+540,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+541,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+494,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+495,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+496,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+498,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+499,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+500,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+501,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+502,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+503,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+504,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+505,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+506,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+507,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+508,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+509,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+510,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+511,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+513,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+514,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+515,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+542,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+42,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+43,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+565,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+577,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+567,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+568,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+45,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+570,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+571,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+578,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+566,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+566,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+543,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+46,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+47,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+49,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+46,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+567,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+359,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+360,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+544,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+545,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+546,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+368,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+150,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+151,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+153,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+154,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+155,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+156,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+157,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+158,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+159,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+160,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+161,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+162,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+163,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+369,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+555,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+370,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+556,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+364,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+557,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+436,"top IF_u clk", false,-1);
        tracep->declBit(c+437,"top IF_u rst_n", false,-1);
        tracep->declBit(c+52,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+53,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+123,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+125,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+77,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+78,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+55,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+39,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+60,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+56,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+57,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+56,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+39,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+583,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+59,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+164,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+561,"top axi_if_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_if_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_if_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_if_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+562,"top axi_if_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+563,"top axi_if_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+564,"top axi_if_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+436,"top axi_if_u clock", false,-1);
        tracep->declBit(c+437,"top axi_if_u reset", false,-1);
        tracep->declBit(c+59,"top axi_if_u rw_valid_i", false,-1);
        tracep->declBit(c+56,"top axi_if_u rw_ready_o", false,-1);
        tracep->declQuad(c+57,"top axi_if_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+39,"top axi_if_u rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+37,"top axi_if_u instr_fetching", false,-1);
        tracep->declBit(c+1,"top axi_if_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+38,"top axi_if_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+39,"top axi_if_u axi_ar_addr_o", false,-1, 63,0);
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
        tracep->declBit(c+41,"top axi_if_u axi_r_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_if_u axi_r_valid_i", false,-1);
        tracep->declBus(c+3,"top axi_if_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+4,"top axi_if_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+574,"top axi_if_u axi_r_last_i", false,-1);
        tracep->declBus(c+575,"top axi_if_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+576,"top axi_if_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+599,"top axi_if_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+570,"top axi_if_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+600,"top axi_if_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+601,"top axi_if_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+166,"top axi_if_u r_state", false,-1, 1,0);
        tracep->declBus(c+558,"top axi_if_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+38,"top axi_if_u ar_valid", false,-1);
        tracep->declBit(c+41,"top axi_if_u r_ready", false,-1);
        tracep->declBit(c+602,"top axi_if_u instr_valid", false,-1);
        tracep->declQuad(c+6,"top axi_if_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+8,"top axi_if_u instr_valid_reg", false,-1);
        tracep->declQuad(c+9,"top axi_if_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+603,"top axi_if_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+566,"top axi_if_u axi_id", false,-1, 3,0);
        tracep->declBus(c+571,"top axi_if_u axi_user", false,-1, 0,0);
        tracep->declBus(c+568,"top axi_if_u axi_len", false,-1, 7,0);
        tracep->declBus(c+569,"top axi_if_u axi_size", false,-1, 2,0);
        tracep->declBit(c+436,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+437,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+39,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+60,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+55,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+81,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+61,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+63,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+167,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+169,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+604,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+605,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+436,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+437,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+55,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+170,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+173,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+436,"top ID_u clk", false,-1);
        tracep->declBit(c+437,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+61,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+136,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+142,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+63,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+143,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+145,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+146,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+347,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+345,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+64,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+66,"top ID_u src1sel", false,-1);
        tracep->declBus(c+67,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+68,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+71,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+70,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+69,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+72,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+73,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+74,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+443,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+75,"top ID_u DivEn", false,-1);
        tracep->declBus(c+76,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+79,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+77,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+78,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+176,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+64,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+347,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+345,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+61,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+63,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+73,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+74,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+176,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+66,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+67,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+68,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+71,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+70,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+69,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+72,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+75,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+76,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+79,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+77,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+78,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+177,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+178,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+179,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+180,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+176,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+64,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+436,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+136,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+142,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+73,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+347,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+74,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+345,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+145,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+143,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+146,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+443,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+372+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+63,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+84,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+80,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+436,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+437,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+105,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+112,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+61,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+63,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+64,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+345,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+347,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+68,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+71,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+70,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+69,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+66,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+67,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+72,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+73,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+74,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+75,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+76,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+79,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+82,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+84,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+89,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+91,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+93,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+97,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+100,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+99,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+98,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+87,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+88,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+101,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+110,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+111,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+102,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+103,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+104,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+181,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+183,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+184,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+185,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+186,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+187,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+188,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+606,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+605,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+436,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+437,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+105,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+349,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+189,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+97,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+91,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+89,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+93,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+82,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+84,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+100,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+99,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+98,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+87,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+88,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+108,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+109,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+43,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+143,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+106,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+102,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+103,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+85,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+53,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+95,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+52,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+199,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+201,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+203,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+95,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+97,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+199,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+201,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+102,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+103,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+85,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+205,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+206,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+207,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+209,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+210,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+212,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+214,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+214,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+215,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+216,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+217,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+219,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+220,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+221,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+223,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+225,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+227,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+199,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+210,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+209,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+212,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+219,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+206,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+220,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+229,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+216,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+214,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+215,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+209,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+214,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+230,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+199,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+231,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+215,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+214,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+217,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+232,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+234,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+236,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+238,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+240,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+242,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+244,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+199,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+201,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+103,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+227,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+203,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+95,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+100,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+99,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+98,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+246,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+93,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+82,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+53,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+52,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+247,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+249,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+607,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+251,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+252,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+253,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+254,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+256,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+258,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+436,"top forwarding_u clk", false,-1);
        tracep->declBit(c+437,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+110,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+111,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+259,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+145,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+120,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+146,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+143,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+149,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+108,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+109,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+106,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+106,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+260,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+261,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+262,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+263,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+264,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+265,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+266,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+267,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+436,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+437,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+82,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+95,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+84,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+85,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+101,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+104,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+105,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+113,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+115,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+117,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+43,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+120,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+127,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+608,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+605,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+436,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+437,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+105,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+268,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+276,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+436,"top ls_u clk", false,-1);
        tracep->declBit(c+437,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+113,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+43,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+115,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+117,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+138,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+142,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+140,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+127,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+118,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+121,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+123,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+125,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+128,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+43,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+129,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+130,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+131,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+133,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+45,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+569,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+550,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+551,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+134,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+130,"top ls_u wren", false,-1);
        tracep->declBit(c+129,"top ls_u rden", false,-1);
        tracep->declBus(c+284,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+131,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+285,"top ls_u wren_last", false,-1);
        tracep->declBit(c+436,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+437,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+130,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+129,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+284,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+131,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+43,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+113,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+138,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+285,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+118,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+128,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+43,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+129,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+130,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+131,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+133,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+45,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+569,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+550,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+551,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+134,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+134,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+286,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+287,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+288,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+289,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+290,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+291,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+292,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+569,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+293,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+294,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+295,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+45,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+133,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+296,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+297,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+298,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+299,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+117,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+142,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+115,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+140,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+130,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+129,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+284,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+131,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+300,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+436,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+437,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+113,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+117,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+43,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+127,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+121,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+123,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+125,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+301,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+302,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+303,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+304,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+305,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+306,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+307,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+308,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+309,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+43,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+310,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+312,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+314,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+125,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+123,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+316,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+318,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+320,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+561,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+562,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+563,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+564,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+436,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+437,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+130,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+129,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+551,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+550,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+134,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+131,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+133,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+43,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+45,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+569,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+542,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+42,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+43,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+565,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+577,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+567,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+568,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+45,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+570,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+571,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+578,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+566,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+566,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+543,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+46,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+47,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+49,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+46,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+567,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+359,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+360,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+544,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+545,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+546,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+547,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+50,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+43,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+565,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+577,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+567,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+568,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+569,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+570,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+571,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+572,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+566,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+579,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+51,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+361,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+548,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+362,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+549,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+364,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+580,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+599,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+570,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+600,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+601,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+322,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+559,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+42,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+46,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+359,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+11,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+599,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+570,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+600,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+601,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+323,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+560,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+50,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+51,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+609,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+12,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+14,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+16,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+17,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+603,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+577,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+571,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+568,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+569,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+324,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+436,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+437,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+113,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+117,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+43,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+118,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+120,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+121,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+149,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+136,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+142,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+138,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+140,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+146,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+147,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+610,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+605,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+436,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+437,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+149,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+325,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+335,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+136,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+142,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+138,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+140,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+147,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+145,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+143,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+436,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+437,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+80,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+52,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+77,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+78,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+56,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+128,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+55,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+55,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+55,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+105,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+105,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+149,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+81,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+112,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+611,"top ifAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+611,"top ifAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+569,"top ifAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+612,"top ifAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+436,"top ifAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+437,"top ifAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+613,"top ifAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+615,"top ifAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+616,"top ifAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+19,"top ifAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+617,"top ifAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+619,"top ifAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+620,"top ifAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+20,"top ifAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+21,"top ifAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+22,"top ifAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+621,"top ifAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+39,"top ifAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+565,"top ifAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+38,"top ifAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+1,"top ifAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+4,"top ifAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+3,"top ifAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+2,"top ifAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+41,"top ifAxiSlaveRam_u S_AXI_RREADY", false,-1);
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
        tracep->declBus(c+622,"top ifAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+623,"top ifAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+27,"top ifAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+29,"top ifAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+31,"top ifAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+33,"top ifAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+624,"top ifAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+35,"top ifAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+625,"top ifAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+627,"top ifAxiSlaveRam_u byte_index", false,-1, 31,0);
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
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__instr_fetching));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+43,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+53,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+55,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                            | (~ (IData)(vlSelf->top__DOT__sram_data_valid))) 
                                           | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullBit(oldp+59,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+60,(((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                   >> 2U)))
                                     ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                >> 0x20U))
                                     : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+61,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+63,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+73,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+74,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+76,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+82,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullIData(oldp+84,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU))),32);
        tracep->fullQData(oldp+85,(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullBit(oldp+87,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x12U))));
        tracep->fullCData(oldp+88,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 0x10U))),2);
        tracep->fullQData(oldp+89,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+91,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+93,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+97,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),5);
        tracep->fullBit(oldp+98,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x13U))));
        tracep->fullBit(oldp+99,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x14U))));
        tracep->fullBit(oldp+100,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+101,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+102,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+103,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+104,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+105,((1U & (~ ((~ (IData)(vlSelf->top__DOT__sram_data_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+108,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+109,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+110,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+111,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+113,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+115,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+117,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+118,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+120,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+127,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+129,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+130,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+133,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+136,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+138,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+140,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+142,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+145,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+146,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+147,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+149,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullBit(oldp+150,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+153,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
        tracep->fullCData(oldp+154,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
        tracep->fullCData(oldp+156,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
        tracep->fullCData(oldp+157,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullCData(oldp+158,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
        tracep->fullBit(oldp+159,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
        tracep->fullCData(oldp+160,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
        tracep->fullCData(oldp+161,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
        tracep->fullCData(oldp+162,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+163,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullQData(oldp+164,(((IData)(vlSelf->top__DOT__is_jump)
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
        tracep->fullCData(oldp+166,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
        tracep->fullQData(oldp+167,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+169,(((IData)(vlSelf->top__DOT__id_flush)
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
        tracep->fullWData(oldp+170,(__Vtemp54),96);
        tracep->fullWData(oldp+173,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+176,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+177,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+178,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+179,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+180,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+181,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+183,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+184,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+185,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+186,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+187,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+188,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+189,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp56, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp57, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp58, __Vtemp56, __Vtemp57);
        VL_EXTEND_WI(65,1, __Vtemp59, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp60, __Vtemp58, __Vtemp59);
        tracep->fullBit(oldp+205,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp60[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+209,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+214,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+215,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+216,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp63, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp64, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp65, __Vtemp63, __Vtemp64);
        VL_EXTEND_WI(65,1, __Vtemp66, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp67, __Vtemp65, __Vtemp66);
        tracep->fullBit(oldp+219,((1U & __Vtemp67[2U])));
        tracep->fullBit(oldp+220,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+221,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+223,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+225,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+227,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+229,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+230,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+231,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+236,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+238,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+240,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+242,(((0x4000000U & 
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
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+246,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+247,(((((QData)((IData)(
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
        tracep->fullQData(oldp+249,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+251,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+253,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+256,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+258,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+259,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+261,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+262,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+263,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+264,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+265,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+266,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+267,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
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
        tracep->fullWData(oldp+268,(__Vtemp72),226);
        tracep->fullWData(oldp+276,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+284,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+285,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+286,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+287,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+288,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+289,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+290,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+291,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+292,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+293,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+294,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+295,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+296,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+297,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+298,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+299,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+300,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+301,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+302,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+303,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+304,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+305,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+306,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+307,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+308,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+309,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+310,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+312,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+318,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullCData(oldp+322,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+323,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+324,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+325,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+335,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+345,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+347,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
        tracep->fullWData(oldp+349,(__Vtemp77),315);
        tracep->fullBit(oldp+359,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_b_valid));
        tracep->fullBit(oldp+361,(vlSelf->top__DOT__ls_axi_r_valid_i));
        tracep->fullQData(oldp+362,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullCData(oldp+364,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+365,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+366,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+368,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+369,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+370,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullQData(oldp+372,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+374,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+376,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+378,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+380,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+382,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+392,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+398,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+400,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+402,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+404,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+406,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+408,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+410,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+412,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+420,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+422,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+424,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+426,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+428,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+430,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+432,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+434,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+436,(vlSelf->clk));
        tracep->fullBit(oldp+437,(vlSelf->rst_n));
        tracep->fullQData(oldp+438,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+440,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+442,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+443,(vlSelf->regA0),64);
        tracep->fullBit(oldp+445,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+446,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+447,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+448,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+450,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+451,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+452,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+453,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+454,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+455,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+456,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+457,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+458,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+459,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+460,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+461,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+462,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+463,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+465,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+466,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+467,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+468,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+469,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+470,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+472,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+473,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+474,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+475,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+476,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+477,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+478,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+479,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+480,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+481,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+482,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+483,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+484,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+486,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+487,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+488,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+489,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+490,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+491,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+492,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+493,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+494,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+495,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+496,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+498,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+499,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+500,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+501,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+502,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+503,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+504,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+505,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+506,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+507,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+508,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+509,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+510,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+511,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+513,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+514,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+515,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+516,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+517,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+518,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+520,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+521,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+522,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+523,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+524,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+525,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+526,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+527,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+528,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+529,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+530,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+531,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+532,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+534,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+535,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+536,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+537,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+538,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+539,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+540,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+541,(vlSelf->axi_mmio_b_user_i));
        tracep->fullBit(oldp+542,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 0x1fU) ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+543,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 0x1fU) ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                    : (IData)(vlSelf->axi_w_ready_i))));
        tracep->fullCData(oldp+544,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                      >> 0x1fU) ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+545,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                      >> 0x1fU) ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+546,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 0x1fU) ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+547,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+548,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullBit(oldp+549,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & ((1U & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1dU)))
                                              ? (IData)(vlSelf->axi_mmio_r_last_i)
                                              : (IData)(vlSelf->axi_r_last_i)))
                                    : 0U)));
        tracep->fullBit(oldp+550,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
        tracep->fullBit(oldp+551,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
        tracep->fullBit(oldp+552,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+553,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+554,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1dU)))
                                                   ? (IData)(vlSelf->axi_mmio_r_last_i)
                                                   : (IData)(vlSelf->axi_r_last_i))))));
        tracep->fullCData(oldp+555,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+556,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_last_i)
                                    : (IData)(vlSelf->axi_r_last_i))));
        tracep->fullBit(oldp+557,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullCData(oldp+558,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)
                                              ? 2U : 3U)
                                          : ((0ULL 
                                              != vlSelf->top__DOT__pc_new)
                                              ? ((vlSelf->top__DOT__pc_new 
                                                  != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                                  ? 1U
                                                  : 2U)
                                              : 0U))
                                      : ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready)
                                              ? 3U : 1U)
                                          : ((0ULL 
                                              != vlSelf->top__DOT__pc_new)
                                              ? 1U : 0U)))),2);
        tracep->fullCData(oldp+559,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
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
        tracep->fullCData(oldp+560,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
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
        tracep->fullCData(oldp+577,(1U),4);
        tracep->fullCData(oldp+578,(0xfU),4);
        tracep->fullCData(oldp+579,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+580,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+581,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+583,(1U));
        tracep->fullBit(oldp+584,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_valid_i));
        tracep->fullQData(oldp+585,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_addr_i),64);
        tracep->fullCData(oldp+587,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_prot_i),3);
        tracep->fullCData(oldp+588,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_id_i),4);
        tracep->fullBit(oldp+589,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_user_i));
        tracep->fullCData(oldp+590,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_len_i),8);
        tracep->fullCData(oldp+591,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_size_i),3);
        tracep->fullCData(oldp+592,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_burst_i),2);
        tracep->fullBit(oldp+593,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_lock_i));
        tracep->fullCData(oldp+594,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_cache_i),4);
        tracep->fullCData(oldp+595,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_qos_i),4);
        tracep->fullCData(oldp+596,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_ar_region_i),4);
        tracep->fullBit(oldp+597,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_r_ready_i));
        tracep->fullBit(oldp+598,(vlSelf->top__DOT__axi_crossbar_u__DOT__if_axi_r_user_o));
        tracep->fullCData(oldp+599,(0U),2);
        tracep->fullCData(oldp+600,(3U),2);
        tracep->fullCData(oldp+601,(2U),2);
        tracep->fullBit(oldp+602,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid));
        tracep->fullIData(oldp+603,(3U),32);
        tracep->fullIData(oldp+604,(0x60U),32);
        tracep->fullIData(oldp+605,(0U),32);
        tracep->fullIData(oldp+606,(0x13bU),32);
        tracep->fullBit(oldp+607,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+608,(0xe2U),32);
        tracep->fullBit(oldp+609,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+610,(0x121U),32);
        tracep->fullIData(oldp+611,(0x40U),32);
        tracep->fullCData(oldp+612,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWSIZE),3);
        tracep->fullQData(oldp+613,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWADDR),64);
        tracep->fullCData(oldp+615,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWPROT),3);
        tracep->fullBit(oldp+616,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID));
        tracep->fullQData(oldp+617,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WDATA),64);
        tracep->fullCData(oldp+619,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WSTRB),8);
        tracep->fullBit(oldp+620,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID));
        tracep->fullBit(oldp+621,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_BREADY));
        tracep->fullIData(oldp+622,(3U),32);
        tracep->fullIData(oldp+623,(1U),32);
        tracep->fullBit(oldp+624,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg_rden));
        tracep->fullQData(oldp+625,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+627,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__byte_index),32);
    }
}
