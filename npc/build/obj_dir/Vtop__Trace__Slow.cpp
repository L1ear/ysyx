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
        tracep->declBit(c+397,"clk", false,-1);
        tracep->declBit(c+398,"rst_n", false,-1);
        tracep->declQuad(c+399,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+401,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+403,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+404,"regA0", false,-1, 63,0);
        tracep->declBit(c+406,"stall_n_diff", false,-1);
        tracep->declBit(c+407,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+408,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+409,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+411,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+412,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+413,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+414,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+415,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+416,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+417,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+418,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+419,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+420,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+421,"axi_r_ready_o", false,-1);
        tracep->declBit(c+422,"axi_r_valid_i", false,-1);
        tracep->declBus(c+423,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+424,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+426,"axi_r_last_i", false,-1);
        tracep->declBus(c+427,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+428,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+429,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+430,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+431,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+433,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+434,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+435,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+436,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+437,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+438,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+439,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+440,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+441,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+442,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+443,"axi_w_ready_i", false,-1);
        tracep->declBit(c+444,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+445,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+447,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+448,"axi_w_last_o", false,-1);
        tracep->declBus(c+449,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+450,"axi_b_ready_o", false,-1);
        tracep->declBit(c+451,"axi_b_valid_i", false,-1);
        tracep->declBus(c+452,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+453,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+454,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+455,"axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+456,"axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+457,"axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+459,"axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+460,"axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+461,"axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+462,"axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+463,"axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+464,"axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+465,"axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+466,"axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+467,"axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+468,"axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+469,"axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+470,"axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+471,"axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+472,"axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+474,"axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+475,"axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+476,"axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+477,"axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+478,"axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+479,"axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+481,"axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+482,"axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+483,"axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+484,"axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+485,"axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+486,"axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+487,"axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+488,"axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+489,"axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+490,"axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+491,"axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+492,"axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+493,"axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+495,"axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+496,"axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+497,"axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+498,"axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+499,"axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+500,"axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+501,"axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+502,"axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBus(c+526,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+526,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+526,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+526,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+527,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+528,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+529,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+397,"top clk", false,-1);
        tracep->declBit(c+398,"top rst_n", false,-1);
        tracep->declQuad(c+399,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+401,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+403,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+404,"top regA0", false,-1, 63,0);
        tracep->declBit(c+406,"top stall_n_diff", false,-1);
        tracep->declBit(c+407,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+408,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+409,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+411,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+412,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+413,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+414,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+415,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+416,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+417,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+418,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+419,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+420,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+421,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+422,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+423,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+424,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+426,"top axi_r_last_i", false,-1);
        tracep->declBus(c+427,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+428,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+429,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+430,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+431,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+433,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+434,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+435,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+436,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+437,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+438,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+439,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+440,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+441,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+442,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+443,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+444,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+445,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+447,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+448,"top axi_w_last_o", false,-1);
        tracep->declBus(c+449,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+450,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+451,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+452,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+453,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+454,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+455,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+456,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+457,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+459,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+460,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+461,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+462,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+463,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+464,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+465,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+466,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+467,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+468,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+469,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+470,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+471,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+472,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+474,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+475,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+476,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+477,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+478,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+479,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+481,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+482,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+483,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+484,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+485,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+486,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+487,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+488,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+489,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+490,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+491,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+492,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+493,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+495,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+496,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+497,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+498,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+499,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+500,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+501,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+502,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+26,"top instr_fetching", false,-1);
        tracep->declBit(c+503,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+27,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+28,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+530,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+531,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+532,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+533,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+534,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+535,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+536,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+537,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+531,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+538,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+30,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+320,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+504,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+321,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+505,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+323,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+539,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+506,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+31,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+32,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+530,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+540,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+532,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+533,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+34,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+535,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+536,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+541,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+531,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+531,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+507,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+35,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+36,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+38,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+35,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+532,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+324,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+325,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+508,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+509,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+510,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+511,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+39,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+32,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+530,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+540,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+532,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+533,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+534,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+535,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+536,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+537,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+531,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+542,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+40,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+326,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+512,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+327,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+513,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+323,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+543,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+544,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+28,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+41,"top is_jump", false,-1);
        tracep->declQuad(c+42,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+44,"top pc_stall_n", false,-1);
        tracep->declBit(c+44,"top if_stall_n", false,-1);
        tracep->declBit(c+45,"top if_instr_valid", false,-1);
        tracep->declBit(c+45,"top sram_data_valid", false,-1);
        tracep->declQuad(c+46,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+28,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+546,"top sram_ren", false,-1);
        tracep->declBit(c+48,"top sram_addr_valid", false,-1);
        tracep->declBus(c+49,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+50,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+52,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+306,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+308,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+53,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+55,"top src1sel_id", false,-1);
        tracep->declBus(c+56,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+57,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+58,"top is_brc_id", false,-1);
        tracep->declBit(c+59,"top is_jal_id", false,-1);
        tracep->declBit(c+60,"top is_jalr_id", false,-1);
        tracep->declBit(c+61,"top wben_id", false,-1);
        tracep->declBus(c+62,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+63,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+44,"top id_stall_n", false,-1);
        tracep->declBit(c+64,"top DivEn_id", false,-1);
        tracep->declBus(c+65,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+66,"top in_trap_id", false,-1);
        tracep->declBit(c+67,"top out_trap_id", false,-1);
        tracep->declBit(c+68,"top trap_id", false,-1);
        tracep->declBit(c+69,"top ld_use_hazard", false,-1);
        tracep->declBit(c+70,"top id_flush", false,-1);
        tracep->declQuad(c+71,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+73,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+74,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+76,"top src1sel_ex", false,-1);
        tracep->declBus(c+77,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+78,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+80,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+82,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+84,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+86,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+87,"top is_brc_ex", false,-1);
        tracep->declBit(c+88,"top is_jal_ex", false,-1);
        tracep->declBit(c+89,"top is_jalr_ex", false,-1);
        tracep->declBit(c+90,"top wben_ex", false,-1);
        tracep->declBit(c+91,"top DivEn_ex", false,-1);
        tracep->declBus(c+92,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+93,"top trap_ex", false,-1);
        tracep->declBit(c+94,"top ex_stall_n", false,-1);
        tracep->declQuad(c+1,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+95,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+96,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+97,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+98,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+99,"top ex_flush", false,-1);
        tracep->declQuad(c+100,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+102,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+32,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+104,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+105,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+107,"top wben_ls", false,-1);
        tracep->declQuad(c+108,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+3,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+5,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+110,"top trap_ls", false,-1);
        tracep->declBit(c+94,"top ls_stall_n", false,-1);
        tracep->declBit(c+111,"top ls_not_ok", false,-1);
        tracep->declQuad(c+32,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+112,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+113,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+114,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+116,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+514,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+515,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+547,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+34,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+534,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+117,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+119,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+121,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+123,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+124,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+126,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+127,"top wben_wb", false,-1);
        tracep->declQuad(c+128,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+130,"top wb_stall_n", false,-1);
        tracep->declBus(c+526,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+526,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+526,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+526,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+527,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+528,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+529,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+26,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+503,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+27,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+28,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+530,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+531,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+532,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+533,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+534,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+535,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+536,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+537,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+531,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+538,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+30,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+320,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+504,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+321,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+505,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+323,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+539,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+506,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+31,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+32,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+530,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+540,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+532,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+533,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+34,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+535,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+536,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+541,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+531,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+531,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+507,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+35,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+36,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+38,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+35,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+532,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+324,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+325,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+508,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+509,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+510,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+511,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+39,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+32,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+530,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+540,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+532,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+533,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+534,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+535,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+536,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+537,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+531,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+542,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+40,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+326,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+512,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+327,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+513,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+323,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+543,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+429,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+430,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+431,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+433,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+434,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+435,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+436,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+437,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+438,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+439,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+440,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+441,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+442,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+443,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+444,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+445,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+447,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+448,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+449,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+450,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+451,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+452,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+453,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+454,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+407,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+408,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+409,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+411,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+412,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+413,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+414,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+415,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+416,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+417,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+418,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+419,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+420,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+421,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+422,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+423,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+424,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+426,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+427,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+428,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+477,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+478,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+479,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+481,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+482,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+483,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+484,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+485,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+486,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+487,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+488,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+489,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+490,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+491,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+492,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+493,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+495,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+496,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+497,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+498,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+499,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+500,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+501,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+502,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+455,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+456,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+457,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+459,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+460,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+461,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+462,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+463,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+464,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+465,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+466,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+467,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+468,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+469,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+470,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+471,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+472,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+474,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+475,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+476,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+506,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+31,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+32,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+530,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+540,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+532,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+533,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+34,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+535,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+536,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+541,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+531,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+531,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+507,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+35,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+36,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+35,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+532,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+324,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+325,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+508,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+509,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+510,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+329,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+131,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+132,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+530,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+134,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+532,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+533,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+534,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+535,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+536,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+537,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+531,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+135,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+136,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+330,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+516,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+331,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+517,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+323,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+518,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+397,"top IF_u clk", false,-1);
        tracep->declBit(c+398,"top IF_u rst_n", false,-1);
        tracep->declBit(c+41,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+42,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+3,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+5,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+66,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+67,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+44,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+28,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+49,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+45,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+46,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+45,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+28,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+546,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+48,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+519,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+526,"top axi_if_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+526,"top axi_if_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+526,"top axi_if_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+526,"top axi_if_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+527,"top axi_if_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+528,"top axi_if_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+529,"top axi_if_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+397,"top axi_if_u clock", false,-1);
        tracep->declBit(c+398,"top axi_if_u reset", false,-1);
        tracep->declBit(c+48,"top axi_if_u rw_valid_i", false,-1);
        tracep->declBit(c+45,"top axi_if_u rw_ready_o", false,-1);
        tracep->declQuad(c+46,"top axi_if_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+28,"top axi_if_u rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+26,"top axi_if_u instr_fetching", false,-1);
        tracep->declBit(c+503,"top axi_if_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+27,"top axi_if_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+28,"top axi_if_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+530,"top axi_if_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+531,"top axi_if_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+532,"top axi_if_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+533,"top axi_if_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+534,"top axi_if_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+535,"top axi_if_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+536,"top axi_if_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+537,"top axi_if_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+531,"top axi_if_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+538,"top axi_if_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+30,"top axi_if_u axi_r_ready_o", false,-1);
        tracep->declBit(c+320,"top axi_if_u axi_r_valid_i", false,-1);
        tracep->declBus(c+504,"top axi_if_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+321,"top axi_if_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+505,"top axi_if_u axi_r_last_i", false,-1);
        tracep->declBus(c+323,"top axi_if_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+539,"top axi_if_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+549,"top axi_if_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+535,"top axi_if_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+550,"top axi_if_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+551,"top axi_if_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+137,"top axi_if_u r_state", false,-1, 1,0);
        tracep->declBus(c+521,"top axi_if_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+27,"top axi_if_u ar_valid", false,-1);
        tracep->declBit(c+30,"top axi_if_u r_ready", false,-1);
        tracep->declBit(c+552,"top axi_if_u instr_valid", false,-1);
        tracep->declQuad(c+13,"top axi_if_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+15,"top axi_if_u instr_valid_reg", false,-1);
        tracep->declQuad(c+16,"top axi_if_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+553,"top axi_if_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+531,"top axi_if_u axi_id", false,-1, 3,0);
        tracep->declBus(c+536,"top axi_if_u axi_user", false,-1, 0,0);
        tracep->declBus(c+533,"top axi_if_u axi_len", false,-1, 7,0);
        tracep->declBus(c+534,"top axi_if_u axi_size", false,-1, 2,0);
        tracep->declBit(c+397,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+398,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+28,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+49,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+44,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+70,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+50,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+52,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+138,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+140,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+554,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+555,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+397,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+398,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+44,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+141,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+144,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+397,"top ID_u clk", false,-1);
        tracep->declBit(c+398,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+50,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+117,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+123,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+52,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+124,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+126,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+127,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+308,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+306,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+53,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+55,"top ID_u src1sel", false,-1);
        tracep->declBus(c+56,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+57,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+60,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+59,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+58,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+61,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+62,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+63,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+404,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+64,"top ID_u DivEn", false,-1);
        tracep->declBus(c+65,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+68,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+66,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+67,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+147,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+53,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+308,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+306,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+50,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+52,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+62,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+63,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+147,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+55,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+56,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+57,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+60,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+59,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+58,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+61,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+64,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+65,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+68,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+66,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+67,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+148,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+149,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+150,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+151,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+147,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+53,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+397,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+117,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+123,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+62,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+308,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+63,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+306,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+126,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+124,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+127,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+404,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+333+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+52,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+73,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+69,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+397,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+398,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+94,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+99,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+50,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+52,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+53,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+306,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+308,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+57,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+60,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+59,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+58,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+55,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+56,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+61,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+62,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+63,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+64,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+65,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+68,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+71,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+73,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+78,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+80,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+82,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+86,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+89,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+88,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+87,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+76,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+77,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+90,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+97,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+98,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+91,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+92,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+93,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+152,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+154,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+155,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+156,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+157,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+158,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+159,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+556,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+555,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+397,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+398,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+94,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+310,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+160,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+86,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+80,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+78,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+82,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+71,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+73,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+89,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+88,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+87,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+76,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+77,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+95,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+96,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+32,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+124,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+91,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+92,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+74,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+42,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+84,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+41,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+170,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+172,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+174,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+84,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+86,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+170,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+172,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+91,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+92,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+74,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+176,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+177,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+178,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+180,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+181,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+183,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+185,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+185,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+186,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+187,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+188,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+190,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+191,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+192,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+194,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+196,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+198,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+170,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+181,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+180,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+183,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+190,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+177,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+191,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+200,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+187,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+185,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+186,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+180,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+185,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+201,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+170,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+202,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+186,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+185,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+188,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+203,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+205,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+207,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+209,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+211,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+213,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+215,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+170,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+172,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+92,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+198,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+174,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+84,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+89,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+88,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+87,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+217,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+82,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+71,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+42,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+41,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+218,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+220,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+557,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+222,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+223,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+224,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+225,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+227,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+229,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+397,"top forwarding_u clk", false,-1);
        tracep->declBit(c+398,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+97,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+98,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+230,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+126,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+107,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+127,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+124,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+130,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+95,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+96,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+1,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+1,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+7,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+8,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+231,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+232,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+522,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+233,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+234,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+523,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+397,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+398,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+71,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+84,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+73,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+74,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+90,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+93,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+94,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+100,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+102,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+104,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+32,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+107,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+110,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+558,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+555,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+397,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+398,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+94,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+235,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+243,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+397,"top ls_u clk", false,-1);
        tracep->declBit(c+398,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+100,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+32,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+102,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+104,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+119,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+123,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+121,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+110,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+105,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+108,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+111,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+32,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+112,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+113,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+114,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+116,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+34,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+534,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+514,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+515,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+547,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+113,"top ls_u wren", false,-1);
        tracep->declBit(c+112,"top ls_u rden", false,-1);
        tracep->declBus(c+251,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+114,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+252,"top ls_u wren_last", false,-1);
        tracep->declBit(c+397,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+398,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+113,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+112,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+251,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+114,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+32,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+100,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+119,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+252,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+105,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+111,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+32,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+112,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+113,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+114,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+116,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+34,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+534,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+514,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+515,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+547,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+547,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+253,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+254,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+255,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+256,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+257,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+258,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+259,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+534,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+533,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+559,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+260,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+34,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+116,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+261,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+262,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+263,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+264,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+104,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+123,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+102,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+121,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+113,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+112,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+251,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+114,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+265,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+397,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+398,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+100,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+104,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+32,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+110,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+108,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+266,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+267,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+268,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+269,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+270,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+271,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+272,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+273,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+274,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+32,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+275,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+277,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+279,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+9,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+281,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+11,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+526,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+526,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+526,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+526,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+527,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+528,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+529,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+397,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+398,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+113,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+112,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+515,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+514,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+547,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+114,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+116,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+32,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+34,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+534,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+506,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+31,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+32,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+530,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+540,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+532,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+533,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+34,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+535,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+536,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+541,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+531,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+531,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+507,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+35,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+36,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+38,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+35,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+532,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+324,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+325,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+508,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+509,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+510,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+511,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+39,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+32,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+530,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+540,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+532,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+533,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+534,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+535,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+536,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+537,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+531,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+542,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+40,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+326,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+512,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+327,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+513,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+323,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+543,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+549,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+535,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+550,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+551,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+283,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+524,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+31,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+35,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+324,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+18,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+549,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+535,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+550,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+551,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+284,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+525,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+39,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+40,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+560,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+19,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+21,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+23,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+24,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+553,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+540,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+536,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+533,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+534,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+285,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+397,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+398,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+100,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+104,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+32,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+105,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+107,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+108,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+130,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+117,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+123,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+119,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+121,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+127,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+128,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+561,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+555,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+397,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+398,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+130,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+286,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+296,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+117,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+123,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+119,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+121,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+128,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+126,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+124,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+397,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+398,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+69,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+41,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+66,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+67,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+45,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+111,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+44,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+44,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+44,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+94,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+94,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+130,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+70,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+99,"top pipline_ctrl_u ex_flush", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp52;
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<8>/*255:0*/ __Vtemp67;
    VlWide<10>/*319:0*/ __Vtemp72;
    VlWide<10>/*319:0*/ __Vtemp77;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__instr_fetching));
        tracep->fullBit(oldp+27,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+32,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+42,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+44,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                            | (~ (IData)(vlSelf->top__DOT__sram_data_valid))) 
                                           | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullBit(oldp+48,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+49,(((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                   >> 2U)))
                                     ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                >> 0x20U))
                                     : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+50,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+52,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+71,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullIData(oldp+73,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU))),32);
        tracep->fullQData(oldp+74,(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullBit(oldp+76,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x12U))));
        tracep->fullCData(oldp+77,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 0x10U))),2);
        tracep->fullQData(oldp+78,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+80,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+82,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+86,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),5);
        tracep->fullBit(oldp+87,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x13U))));
        tracep->fullBit(oldp+88,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x14U))));
        tracep->fullBit(oldp+89,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x15U))));
        tracep->fullBit(oldp+90,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0xfU))));
        tracep->fullBit(oldp+91,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 4U))));
        tracep->fullCData(oldp+92,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 1U))),3);
        tracep->fullBit(oldp+93,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+94,((1U & (~ ((~ (IData)(vlSelf->top__DOT__sram_data_valid)) 
                                           | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullCData(oldp+95,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+97,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0xaU))),5);
        tracep->fullCData(oldp+98,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 5U))),5);
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+100,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+102,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+104,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+105,((((- (QData)((IData)(
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
                                         | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
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
                                        & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))),64);
        tracep->fullBit(oldp+107,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullBit(oldp+110,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+112,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+113,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+116,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+117,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+119,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+121,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+123,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+126,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+127,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+128,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+130,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+134,(((IData)(vlSelf->top__DOT__instr_fetching)
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+135,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullCData(oldp+137,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
        tracep->fullQData(oldp+138,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+140,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp49[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                          ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->top__DOT__sram_rdata 
                                              >> 0x20U))
                                   : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp49[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                  ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp49[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new) 
                                 >> 0x20U));
        tracep->fullWData(oldp+141,(__Vtemp49),96);
        tracep->fullWData(oldp+144,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+147,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+148,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+149,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+150,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+151,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+152,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+154,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+155,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+156,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+157,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+158,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+159,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+160,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp51, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp52, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp53, __Vtemp51, __Vtemp52);
        VL_EXTEND_WI(65,1, __Vtemp54, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp55, __Vtemp53, __Vtemp54);
        tracep->fullBit(oldp+176,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp55[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+177,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+180,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+185,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+186,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+187,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp58, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp59, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp60, __Vtemp58, __Vtemp59);
        VL_EXTEND_WI(65,1, __Vtemp61, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp62, __Vtemp60, __Vtemp61);
        tracep->fullBit(oldp+190,((1U & __Vtemp62[2U])));
        tracep->fullBit(oldp+191,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+192,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+194,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+196,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+198,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+200,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+201,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+202,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+207,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+209,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+211,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+213,(((0x4000000U & 
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
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+217,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+218,(((((QData)((IData)(
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
        tracep->fullQData(oldp+220,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+222,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+227,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+229,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+230,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+231,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+232,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+233,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+234,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        __Vtemp67[0U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp67[1U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp67[2U] = (((IData)((((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp67[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                          >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                >> 0x20U)) 
                                       << 2U));
        __Vtemp67[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                   >> 0x20U)) >> 0x1eU) 
                         | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                             << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x19U))));
        __Vtemp67[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    >> 0x19U))));
        __Vtemp67[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    >> 0x19U))));
        __Vtemp67[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                               >> 0x19U));
        tracep->fullWData(oldp+235,(__Vtemp67),226);
        tracep->fullWData(oldp+243,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+251,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+252,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+253,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+254,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+255,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+256,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+257,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+258,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+259,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullIData(oldp+260,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+261,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+262,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+263,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+264,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+265,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+266,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+267,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+268,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+269,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+271,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+273,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+274,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+275,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+277,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+281,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullCData(oldp+283,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+284,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+285,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        __Vtemp72[0U] = (IData)(vlSelf->top__DOT__csrdata_ls);
        __Vtemp72[1U] = (IData)((vlSelf->top__DOT__csrdata_ls 
                                 >> 0x20U));
        __Vtemp72[2U] = (((IData)((((- (QData)((IData)(
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
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
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
                                      & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                          << 1U) | (1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                          >> 1U)));
        __Vtemp72[3U] = (((IData)((((- (QData)((IData)(
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
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
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
                                      & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                          >> 0x1fU) | ((IData)(((((- (QData)((IData)(
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
                                                     | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
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
                                                >> 0x20U)) 
                                       << 1U));
        __Vtemp72[4U] = (((IData)(((((- (QData)((IData)(
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
                                        | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
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
                                   >> 0x20U)) >> 0x1fU) 
                         | ((IData)((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U)))) 
                            << 1U));
        __Vtemp72[5U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                    >> 2U)))) 
                          >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                     << 0x1eU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                       >> 2U))) 
                                                >> 0x20U)) 
                                       << 1U));
        __Vtemp72[6U] = (((IData)(((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U))) 
                                   >> 0x20U)) >> 0x1fU) 
                         | ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                             << 0x1fU) | (0x7ffffffeU 
                                          & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 1U))));
        __Vtemp72[7U] = ((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                >> 1U)) | ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                                            << 0x1fU) 
                                           | (0x7ffffffeU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                 >> 1U))));
        __Vtemp72[8U] = ((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                                >> 1U)) | ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] 
                                            << 0x1fU) 
                                           | (0x7ffffffeU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                                                 >> 1U))));
        __Vtemp72[9U] = (1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] 
                               >> 1U));
        tracep->fullWData(oldp+286,(__Vtemp72),289);
        tracep->fullWData(oldp+296,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+306,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+308,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
        tracep->fullWData(oldp+310,(__Vtemp77),315);
        tracep->fullBit(oldp+320,(vlSelf->top__DOT__if_axi_r_valid_i));
        tracep->fullQData(oldp+321,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullCData(oldp+323,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+324,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+325,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_b_valid));
        tracep->fullBit(oldp+326,(vlSelf->top__DOT__ls_axi_r_valid_i));
        tracep->fullQData(oldp+327,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+329,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+330,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullQData(oldp+333,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+339,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+343,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+349,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+353,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+355,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+357,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+359,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+361,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+363,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+365,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+367,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+369,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+371,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+373,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+377,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+381,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+385,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+387,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+389,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+391,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+397,(vlSelf->clk));
        tracep->fullBit(oldp+398,(vlSelf->rst_n));
        tracep->fullQData(oldp+399,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+401,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+403,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+404,(vlSelf->regA0),64);
        tracep->fullBit(oldp+406,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+407,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+408,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+409,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+411,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+412,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+413,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+414,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+415,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+416,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+417,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+418,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+419,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+420,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+421,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+422,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+423,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+424,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+426,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+427,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+428,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+429,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+430,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+431,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+433,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+434,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+435,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+436,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+437,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+438,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+439,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+440,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+441,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+442,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+443,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+444,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+445,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+447,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+448,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+449,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+450,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+451,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+452,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+453,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+454,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+455,(vlSelf->axi_mmio_ar_ready_i));
        tracep->fullBit(oldp+456,(vlSelf->axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+457,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->fullCData(oldp+459,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->fullCData(oldp+460,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->fullBit(oldp+461,(vlSelf->axi_mmio_ar_user_o));
        tracep->fullCData(oldp+462,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->fullCData(oldp+463,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->fullCData(oldp+464,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->fullBit(oldp+465,(vlSelf->axi_mmio_ar_lock_o));
        tracep->fullCData(oldp+466,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->fullCData(oldp+467,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->fullCData(oldp+468,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->fullBit(oldp+469,(vlSelf->axi_mmio_r_ready_o));
        tracep->fullBit(oldp+470,(vlSelf->axi_mmio_r_valid_i));
        tracep->fullCData(oldp+471,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->fullQData(oldp+472,(vlSelf->axi_mmio_r_data_i),64);
        tracep->fullBit(oldp+474,(vlSelf->axi_mmio_r_last_i));
        tracep->fullCData(oldp+475,(vlSelf->axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+476,(vlSelf->axi_mmio_r_user_i));
        tracep->fullBit(oldp+477,(vlSelf->axi_mmio_aw_ready_i));
        tracep->fullBit(oldp+478,(vlSelf->axi_mmio_aw_valid_o));
        tracep->fullQData(oldp+479,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->fullCData(oldp+481,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->fullCData(oldp+482,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->fullBit(oldp+483,(vlSelf->axi_mmio_aw_user_o));
        tracep->fullCData(oldp+484,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->fullCData(oldp+485,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->fullCData(oldp+486,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->fullBit(oldp+487,(vlSelf->axi_mmio_aw_lock_o));
        tracep->fullCData(oldp+488,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->fullCData(oldp+489,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->fullCData(oldp+490,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->fullBit(oldp+491,(vlSelf->axi_mmio_w_ready_i));
        tracep->fullBit(oldp+492,(vlSelf->axi_mmio_w_valid_o));
        tracep->fullQData(oldp+493,(vlSelf->axi_mmio_w_data_o),64);
        tracep->fullCData(oldp+495,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->fullBit(oldp+496,(vlSelf->axi_mmio_w_last_o));
        tracep->fullBit(oldp+497,(vlSelf->axi_mmio_w_user_o));
        tracep->fullBit(oldp+498,(vlSelf->axi_mmio_b_ready_o));
        tracep->fullBit(oldp+499,(vlSelf->axi_mmio_b_valid_i));
        tracep->fullCData(oldp+500,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->fullCData(oldp+501,(vlSelf->axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+502,(vlSelf->axi_mmio_b_user_i));
        tracep->fullBit(oldp+503,((((IData)(vlSelf->top__DOT__instr_fetching)
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+504,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+505,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1dU)))
                                                   ? (IData)(vlSelf->axi_mmio_r_last_i)
                                                   : (IData)(vlSelf->axi_r_last_i))))));
        tracep->fullBit(oldp+506,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 0x1fU) ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+507,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 0x1fU) ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                    : (IData)(vlSelf->axi_w_ready_i))));
        tracep->fullCData(oldp+508,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                      >> 0x1fU) ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+509,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                      >> 0x1fU) ? (IData)(vlSelf->axi_mmio_b_id_i)
                                      : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+510,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 0x1fU) ? (IData)(vlSelf->axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+511,((((IData)(vlSelf->top__DOT__instr_fetching)
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+512,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullBit(oldp+513,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & ((1U & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1dU)))
                                              ? (IData)(vlSelf->axi_mmio_r_last_i)
                                              : (IData)(vlSelf->axi_r_last_i)))
                                    : 0U)));
        tracep->fullBit(oldp+514,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
        tracep->fullBit(oldp+515,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
        tracep->fullCData(oldp+516,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+517,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_last_i)
                                    : (IData)(vlSelf->axi_r_last_i))));
        tracep->fullBit(oldp+518,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullQData(oldp+519,(((IData)(vlSelf->top__DOT__is_jump)
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
        tracep->fullCData(oldp+521,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__if_axi_r_valid_i)
                                              ? 2U : 3U)
                                          : ((0ULL 
                                              != vlSelf->top__DOT__pc_new)
                                              ? ((vlSelf->top__DOT__pc_new 
                                                  != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                                  ? 1U
                                                  : 2U)
                                              : 0U))
                                      : ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((((IData)(vlSelf->top__DOT__instr_fetching)
                                                ? 0U
                                                : 1U)
                                               ? 0U
                                               : (1U 
                                                  & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))
                                              ? 3U : 1U)
                                          : ((0ULL 
                                              != vlSelf->top__DOT__pc_new)
                                              ? 1U : 0U)))),2);
        tracep->fullBit(oldp+522,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+523,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullCData(oldp+524,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
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
        tracep->fullCData(oldp+525,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
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
                                          ? ((((IData)(vlSelf->top__DOT__instr_fetching)
                                                ? 0U
                                                : 1U)
                                               ? (1U 
                                                  & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                               : 0U)
                                              ? 3U : 1U)
                                          : ((3U == 
                                              (0x7fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))
                                              ? 1U : 0U)))),2);
        tracep->fullIData(oldp+526,(0x40U),32);
        tracep->fullIData(oldp+527,(4U),32);
        tracep->fullIData(oldp+528,(8U),32);
        tracep->fullIData(oldp+529,(1U),32);
        tracep->fullCData(oldp+530,(0U),3);
        tracep->fullCData(oldp+531,(0U),4);
        tracep->fullBit(oldp+532,(0U));
        tracep->fullCData(oldp+533,(0U),8);
        tracep->fullCData(oldp+534,(3U),3);
        tracep->fullCData(oldp+535,(1U),2);
        tracep->fullBit(oldp+536,(0U));
        tracep->fullCData(oldp+537,(2U),4);
        tracep->fullCData(oldp+538,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+539,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+540,(1U),4);
        tracep->fullCData(oldp+541,(0xfU),4);
        tracep->fullCData(oldp+542,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+543,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+544,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+546,(1U));
        tracep->fullQData(oldp+547,(0ULL),64);
        tracep->fullCData(oldp+549,(0U),2);
        tracep->fullCData(oldp+550,(3U),2);
        tracep->fullCData(oldp+551,(2U),2);
        tracep->fullBit(oldp+552,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid));
        tracep->fullIData(oldp+553,(3U),32);
        tracep->fullIData(oldp+554,(0x60U),32);
        tracep->fullIData(oldp+555,(0U),32);
        tracep->fullIData(oldp+556,(0x13bU),32);
        tracep->fullBit(oldp+557,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+558,(0xe2U),32);
        tracep->fullSData(oldp+559,(0U),16);
        tracep->fullBit(oldp+560,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+561,(0x121U),32);
    }
}
