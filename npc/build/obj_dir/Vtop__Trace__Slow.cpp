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
        tracep->declBit(c+960,"clk", false,-1);
        tracep->declBit(c+961,"rst_n", false,-1);
        tracep->declQuad(c+962,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+964,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+966,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+967,"regA0", false,-1, 63,0);
        tracep->declBit(c+969,"stall_n_diff", false,-1);
        tracep->declBit(c+970,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+971,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+972,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+974,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+975,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+976,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+977,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+978,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+979,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+980,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+981,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+982,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+983,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+984,"axi_r_ready_o", false,-1);
        tracep->declBit(c+985,"axi_r_valid_i", false,-1);
        tracep->declBus(c+986,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+987,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+989,"axi_r_last_i", false,-1);
        tracep->declBus(c+990,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+991,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+992,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+993,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+994,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+996,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+997,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+998,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+999,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1000,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1001,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1002,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+1003,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1004,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1005,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1006,"axi_w_ready_i", false,-1);
        tracep->declBit(c+1007,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+1008,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1010,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1011,"axi_w_last_o", false,-1);
        tracep->declBus(c+1012,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1013,"axi_b_ready_o", false,-1);
        tracep->declBit(c+1014,"axi_b_valid_i", false,-1);
        tracep->declBus(c+1015,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1016,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1017,"axi_b_user_i", false,-1, 0,0);
        tracep->declQuad(c+1018,"nh", false,-1, 63,0);
        tracep->declQuad(c+1020,"nr", false,-1, 63,0);
        tracep->declQuad(c+1022,"inh", false,-1, 63,0);
        tracep->declQuad(c+1024,"inr", false,-1, 63,0);
        tracep->declBus(c+1061,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1061,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1061,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1061,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1062,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1063,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1064,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+960,"top clk", false,-1);
        tracep->declBit(c+961,"top rst_n", false,-1);
        tracep->declQuad(c+962,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+964,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+966,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+967,"top regA0", false,-1, 63,0);
        tracep->declBit(c+969,"top stall_n_diff", false,-1);
        tracep->declBit(c+970,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+971,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+972,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+974,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+975,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+976,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+977,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+978,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+979,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+980,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+981,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+982,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+983,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+984,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+985,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+986,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+987,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+989,"top axi_r_last_i", false,-1);
        tracep->declBus(c+990,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+991,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+992,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+993,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+994,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+996,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+997,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+998,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+999,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1000,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1001,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1002,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+1003,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1004,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1005,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1006,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+1007,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+1008,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1010,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1011,"top axi_w_last_o", false,-1);
        tracep->declBus(c+1012,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1013,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+1014,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+1015,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1016,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1017,"top axi_b_user_i", false,-1, 0,0);
        tracep->declQuad(c+1018,"top nh", false,-1, 63,0);
        tracep->declQuad(c+1020,"top nr", false,-1, 63,0);
        tracep->declQuad(c+1022,"top inh", false,-1, 63,0);
        tracep->declQuad(c+1024,"top inr", false,-1, 63,0);
        tracep->declBit(c+267,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+418,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+419,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+224,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1066,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+225,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+421,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+422,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1067,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+423,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+226,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+424,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+268,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+269,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+270,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1069,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+1070,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1071,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+272,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+425,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+273,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+275,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1066,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+395,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+276,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+277,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1067,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+278,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+279,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+426,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+396,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+280,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+398,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+1066,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+427,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+281,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+282,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1072,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1073,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top instr_fetching", false,-1);
        tracep->declBit(c+1026,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1065,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1068,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1066,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+428,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+429,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1074,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1067,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+1075,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1076,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+848,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+1027,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+849,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+851,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+852,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1077,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1028,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+430,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+283,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1065,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1078,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1066,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+431,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+285,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1074,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1067,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+1079,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+853,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+432,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+433,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+286,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+435,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+1066,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+436,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+1029,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+1030,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1031,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1032,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1033,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1065,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1078,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1066,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+431,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+227,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1074,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1067,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+1075,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1080,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+854,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+1034,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+855,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+857,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+852,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1081,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+1082,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+437,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+439,"top is_jump", false,-1);
        tracep->declQuad(c+440,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+826,"top pc_stall_n", false,-1);
        tracep->declBit(c+858,"top if_stall_n", false,-1);
        tracep->declBit(c+442,"top if_instr_valid", false,-1);
        tracep->declBit(c+1084,"top sram_data_valid", false,-1);
        tracep->declQuad(c+443,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+445,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+1085,"top sram_ren", false,-1);
        tracep->declBit(c+447,"top sram_addr_valid", false,-1);
        tracep->declBit(c+448,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+449,"top cacheDataNotOk_i", false,-1);
        tracep->declBus(c+450,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+451,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+453,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+834,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+836,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+454,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+456,"top src1sel_id", false,-1);
        tracep->declBus(c+457,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+458,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+459,"top is_brc_id", false,-1);
        tracep->declBit(c+460,"top is_jal_id", false,-1);
        tracep->declBit(c+461,"top is_jalr_id", false,-1);
        tracep->declBit(c+462,"top wben_id", false,-1);
        tracep->declBus(c+463,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+464,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+827,"top id_stall_n", false,-1);
        tracep->declBit(c+465,"top DivEn_id", false,-1);
        tracep->declBus(c+466,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+467,"top in_trap_id", false,-1);
        tracep->declBit(c+468,"top out_trap_id", false,-1);
        tracep->declBit(c+469,"top trap_id", false,-1);
        tracep->declBit(c+470,"top ld_use_hazard", false,-1);
        tracep->declBit(c+471,"top id_flush", false,-1);
        tracep->declQuad(c+472,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+474,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+475,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+477,"top src1sel_ex", false,-1);
        tracep->declBus(c+478,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+479,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+481,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+483,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+485,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+487,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+488,"top is_brc_ex", false,-1);
        tracep->declBit(c+489,"top is_jal_ex", false,-1);
        tracep->declBit(c+490,"top is_jalr_ex", false,-1);
        tracep->declBit(c+491,"top wben_ex", false,-1);
        tracep->declBit(c+492,"top DivEn_ex", false,-1);
        tracep->declBus(c+493,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+494,"top trap_ex", false,-1);
        tracep->declBit(c+828,"top ex_stall_n", false,-1);
        tracep->declQuad(c+10,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+495,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+496,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+497,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+498,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+499,"top ex_flush", false,-1);
        tracep->declBit(c+500,"top rden_ls", false,-1);
        tracep->declBit(c+501,"top wren_ls", false,-1);
        tracep->declBit(c+829,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+859,"top ex_not_ok", false,-1);
        tracep->declQuad(c+12,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+18,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+1035,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+19,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+26,"top trap_ls", false,-1);
        tracep->declBit(c+860,"top ls_stall_n", false,-1);
        tracep->declBit(c+861,"top ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+228,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+502,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+1086,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+1087,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+862,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+503,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+504,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+506,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+508,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+510,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+511,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+513,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+514,"top wben_wb", false,-1);
        tracep->declQuad(c+515,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+860,"top wb_stall_n", false,-1);
        tracep->declQuad(c+517,"top clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1065,"top clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+519,"top clint_axi_arvalid", false,-1);
        tracep->declBit(c+287,"top clint_axi_arready", false,-1);
        tracep->declBus(c+520,"top clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+288,"top clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+289,"top clint_axi_rvalid", false,-1);
        tracep->declBit(c+521,"top clint_axi_rready", false,-1);
        tracep->declBus(c+290,"top clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+291,"top clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1065,"top clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+522,"top clint_axi_awvalid", false,-1);
        tracep->declBit(c+293,"top clint_axi_awready", false,-1);
        tracep->declQuad(c+523,"top clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+294,"top clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+525,"top clint_axi_wvalid", false,-1);
        tracep->declBit(c+295,"top clint_axi_wready", false,-1);
        tracep->declBus(c+288,"top clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+296,"top clint_axi_bvalid", false,-1);
        tracep->declBit(c+526,"top clint_axi_bready", false,-1);
        tracep->declBit(c+527,"top rw_valid_i", false,-1);
        tracep->declBit(c+32,"top rw_ready_o", false,-1);
        tracep->declBus(c+428,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+851,"top rdLast_o", false,-1);
        tracep->declBus(c+230,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+849,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+864,"top dataValid_o", false,-1);
        tracep->declBit(c+528,"top fence_id", false,-1);
        tracep->declBit(c+529,"top fence_ex", false,-1);
        tracep->declBit(c+231,"top ld_csr_hazard", false,-1);
        tracep->declBit(c+33,"top ls_flush", false,-1);
        tracep->declBit(c+33,"top in_intr_ls", false,-1);
        tracep->declBit(c+861,"top dataNotOk", false,-1);
        tracep->declBit(c+34,"top fence_ls", false,-1);
        tracep->declBit(c+530,"top clear_Icache", false,-1);
        tracep->declBit(c+531,"top DcacheRdValid", false,-1);
        tracep->declBit(c+532,"top DcacheWrValid", false,-1);
        tracep->declBit(c+35,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+431,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+857,"top lsRdLast", false,-1);
        tracep->declQuad(c+533,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+535,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+855,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+865,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+537,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+399,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+431,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+538,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+539,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+227,"top lsLoadSize", false,-1, 2,0);
        tracep->declBus(c+1061,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1061,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1061,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1061,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1062,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1063,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1064,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+1026,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+1068,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+1066,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+428,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+429,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+1074,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+1067,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+1075,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+1076,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+848,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+1027,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+849,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+851,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+852,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+1077,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+1028,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+430,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+283,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+1078,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+1066,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+431,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+285,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+1074,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+1067,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+1079,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+853,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+432,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+433,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+286,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+435,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+1066,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+436,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+1029,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+1030,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+1031,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+1032,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+1033,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+6,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+7,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+1078,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+1066,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+431,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+227,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+1074,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+1067,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+1075,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+1080,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+854,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+1034,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+855,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+857,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+852,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+1081,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+992,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+993,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+994,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+996,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+997,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+998,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+999,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1000,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1001,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1002,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+1003,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1004,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1005,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1006,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+1007,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+1008,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1010,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1011,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+1012,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1013,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+1014,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+1015,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1016,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1017,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+970,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+971,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+972,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+974,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+975,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+976,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+977,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+978,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+979,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+980,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+981,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+982,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+983,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+984,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+985,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+986,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+987,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+989,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+990,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+991,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+272,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+425,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+273,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+275,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1066,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+395,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+276,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+277,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1067,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+278,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+279,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+426,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+396,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+280,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+398,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+1066,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+427,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+281,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+282,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1078,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1073,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+267,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+418,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+419,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+224,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1066,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+225,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+421,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+422,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1067,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+423,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+226,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+424,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+268,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+269,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+270,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+268,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+1078,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1071,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+517,"top axi_crossbar_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_crossbar_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+519,"top axi_crossbar_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+287,"top axi_crossbar_u clint_axi_arready", false,-1);
        tracep->declBus(c+520,"top axi_crossbar_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top axi_crossbar_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+288,"top axi_crossbar_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+289,"top axi_crossbar_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+521,"top axi_crossbar_u clint_axi_rready", false,-1);
        tracep->declBus(c+290,"top axi_crossbar_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+291,"top axi_crossbar_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_crossbar_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+522,"top axi_crossbar_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+293,"top axi_crossbar_u clint_axi_awready", false,-1);
        tracep->declQuad(c+523,"top axi_crossbar_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+294,"top axi_crossbar_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+525,"top axi_crossbar_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+295,"top axi_crossbar_u clint_axi_wready", false,-1);
        tracep->declBus(c+288,"top axi_crossbar_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+296,"top axi_crossbar_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+526,"top axi_crossbar_u clint_axi_bready", false,-1);
        tracep->declBit(c+1028,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+430,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+283,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+1078,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+1066,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+431,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+285,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1074,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+1067,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+1079,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+853,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+432,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+433,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+286,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+435,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+1066,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+436,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+1029,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+1030,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+1031,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1032,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+866,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+36,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+540,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+37,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+1066,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+232,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+542,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1074,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+1088,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+1075,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+543,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+867,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+1037,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+868,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+870,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+852,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+1038,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+544,"top axi_crossbar_u clint_r_trans", false,-1);
        tracep->declBit(c+297,"top axi_crossbar_u clint_w_trans", false,-1);
        tracep->declBit(c+545,"top axi_crossbar_u perip_r_trans", false,-1);
        tracep->declBit(c+298,"top axi_crossbar_u perip_w_trans", false,-1);
        tracep->declBit(c+960,"top IF_u clk", false,-1);
        tracep->declBit(c+961,"top IF_u rst_n", false,-1);
        tracep->declBit(c+439,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+440,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+467,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+468,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+858,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+437,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+450,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+442,"top IF_u if_instr_valid", false,-1);
        tracep->declBit(c+33,"top IF_u in_intr_ls", false,-1);
        tracep->declQuad(c+443,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+1084,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+448,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+449,"top IF_u cacheDataNotOk_i", false,-1);
        tracep->declQuad(c+445,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+1085,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+447,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+445,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+960,"top cache_dut clk", false,-1);
        tracep->declBit(c+961,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+546,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+447,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+1067,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+1089,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+1091,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+858,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+448,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+547,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+449,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+443,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+530,"top cache_dut clrValid", false,-1);
        tracep->declBit(c+527,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+32,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+428,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+851,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+230,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+849,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+864,"top cache_dut dataValid_i", false,-1);
        tracep->declQuad(c+1022,"top cache_dut nh", false,-1, 63,0);
        tracep->declQuad(c+1024,"top cache_dut nr", false,-1, 63,0);
        tracep->declBus(c+1065,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+1092,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+1093,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+1094,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+1095,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+1096,"top cache_dut unCacheOp", false,-1, 2,0);
        tracep->declBus(c+548,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+871,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+549,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+39,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+40,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+299,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+303,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+307,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+311,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+550,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+554,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+550,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+554,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+558,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+559,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+560,"top cache_dut uncached", false,-1);
        tracep->declBit(c+41,"top cache_dut uncachedOk", false,-1);
        tracep->declBit(c+561,"top cache_dut diffAddr", false,-1);
        tracep->declBus(c+42,"top cache_dut Num_req", false,-1, 31,0);
        tracep->declBus(c+43,"top cache_dut Num_hit", false,-1, 31,0);
        tracep->declBit(c+44,"top cache_dut missed", false,-1);
        tracep->declBit(c+562,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+45,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+47,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+48,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+49,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+50,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+52,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+54,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+55,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+1039,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+1040,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+1041,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+1042,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+56,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+57,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+1097,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+1098,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+563,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+315,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+323,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+1043,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+1045,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+564,"top cache_dut missEn", false,-1);
        tracep->declBit(c+565,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+58,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+331,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+60,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+566,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+567,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+575,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+1099,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1061,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1100,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1099,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+299,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+960,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+576,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+577,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+1101,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+872,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+550,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+578,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+558,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+1105,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1099,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1061,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1100,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1099,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+303,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+960,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+576,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+577,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+1101,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+872,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+554,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+578,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+558,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+1105,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1099,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1061,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1100,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1099,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+307,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+960,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+579,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+580,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+1101,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+873,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+550,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+581,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+559,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+1105,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1099,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1061,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1100,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1099,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+311,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+960,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+579,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+580,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+1101,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+873,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+554,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+581,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+559,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+1105,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1061,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1061,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1061,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1061,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1062,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1063,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1064,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+960,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+961,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+527,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+32,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+849,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+233,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+428,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+851,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+864,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+1,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+1026,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1068,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1066,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+428,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+429,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1074,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1067,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+1075,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1076,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+848,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+1027,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+849,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+851,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+852,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1077,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+1109,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+1074,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+1110,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+1111,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+61,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+874,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+2,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+5,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+1112,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1068,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+1067,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+428,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+429,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+960,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+961,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+437,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+450,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+827,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+471,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+451,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+453,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+582,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+584,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+1113,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1114,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+960,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+961,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+827,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+585,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+588,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+960,"top ID_u clk", false,-1);
        tracep->declBit(c+961,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+451,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+504,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+510,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+453,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+511,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+513,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+514,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+836,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+834,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+454,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+456,"top ID_u src1sel", false,-1);
        tracep->declBus(c+457,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+458,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+461,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+460,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+459,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+462,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+463,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+464,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+967,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+465,"top ID_u DivEn", false,-1);
        tracep->declBus(c+466,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+469,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+467,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+468,"top ID_u out_trap_id", false,-1);
        tracep->declBit(c+528,"top ID_u fence_id", false,-1);
        tracep->declBus(c+591,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+454,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+836,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+834,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+451,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+453,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+463,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+464,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+591,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+456,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+457,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+458,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+461,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+460,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+459,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+462,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+465,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+466,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+469,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+467,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+468,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBit(c+528,"top ID_u decoder_u fence_id", false,-1);
        tracep->declBus(c+592,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+593,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+594,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+595,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+591,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+454,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+960,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+504,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+510,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+463,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+836,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+464,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+834,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+513,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+511,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+514,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+967,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+896+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+453,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+474,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBus(c+18,"top hazard_detect_u instr_ls_i", false,-1, 31,0);
        tracep->declBus(c+510,"top hazard_detect_u instr_wb_i", false,-1, 31,0);
        tracep->declBit(c+470,"top hazard_detect_u ld_use_hazard", false,-1);
        tracep->declBit(c+231,"top hazard_detect_u ld_csr_hazard", false,-1);
        tracep->declBit(c+596,"top hazard_detect_u wb_is_load", false,-1);
        tracep->declBit(c+62,"top hazard_detect_u ls_is_csropi", false,-1);
        tracep->declBit(c+960,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+961,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+828,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+499,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+451,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+453,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+454,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+834,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+836,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+458,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+461,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+460,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+459,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+456,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+457,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+462,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+463,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+464,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+465,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+466,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+469,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declBit(c+528,"top EX_reg_u fence_ex_reg_i", false,-1);
        tracep->declQuad(c+472,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+474,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+479,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+481,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+483,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+487,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+490,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+489,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+488,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+477,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+478,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+491,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+497,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+498,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+492,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+493,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+494,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declBit(c+529,"top EX_reg_u fence_ex_reg_o", false,-1);
        tracep->declQuad(c+597,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+599,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+600,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+601,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+602,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+603,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+604,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBit(c+605,"top EX_reg_u fence_ex_reg", false,-1);
        tracep->declBit(c+606,"top EX_reg_u diven_ex_reg", false,-1);
        tracep->declBus(c+1115,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1114,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+960,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+961,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+828,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+838,"top EX_reg_u ex_reg i_din", false,-1, 315,0);
        tracep->declArray(c+607,"top EX_reg_u ex_reg o_dout", false,-1, 315,0);
        tracep->declBit(c+960,"top ex_stage_u clk", false,-1);
        tracep->declBit(c+961,"top ex_stage_u rst_n", false,-1);
        tracep->declBus(c+487,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+481,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+479,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+483,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+472,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+474,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+490,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+489,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+488,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+477,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+478,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+495,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+496,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+16,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+511,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+492,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+493,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declBit(c+499,"top ex_stage_u flush_ex_i", false,-1);
        tracep->declQuad(c+475,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+440,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+485,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+439,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+859,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+500,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+501,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+829,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+617,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+619,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+621,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+485,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBit(c+1047,"top ex_stage_u aluNotOk", false,-1);
        tracep->declBit(c+960,"top ex_stage_u u_ALU clk", false,-1);
        tracep->declBit(c+961,"top ex_stage_u u_ALU rst_n", false,-1);
        tracep->declBus(c+487,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+617,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+619,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+492,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+493,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declBit(c+499,"top ex_stage_u u_ALU flush_alu", false,-1);
        tracep->declQuad(c+475,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+623,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+624,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declBit(c+1047,"top ex_stage_u u_ALU aluNotOk", false,-1);
        tracep->declQuad(c+625,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+627,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+628,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+630,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+632,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+632,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+633,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+634,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+635,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+637,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+638,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+639,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+641,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+643,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+63,"top ex_stage_u u_ALU src1Reg", false,-1, 63,0);
        tracep->declQuad(c+65,"top ex_stage_u u_ALU src2Reg", false,-1, 63,0);
        tracep->declBit(c+645,"top ex_stage_u u_ALU diffIn", false,-1);
        tracep->declBit(c+646,"top ex_stage_u u_ALU mul_valid", false,-1);
        tracep->declBit(c+1048,"top ex_stage_u u_ALU mul_resValid", false,-1);
        tracep->declQuad(c+235,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+237,"top ex_stage_u u_ALU mulOut", false,-1, 63,0);
        tracep->declQuad(c+239,"top ex_stage_u u_ALU divOut", false,-1, 63,0);
        tracep->declBit(c+647,"top ex_stage_u u_ALU div_valid", false,-1);
        tracep->declBit(c+241,"top ex_stage_u u_ALU div_resValid", false,-1);
        tracep->declQuad(c+617,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+628,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+627,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+630,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+637,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+624,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+638,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+648,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+634,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+632,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+633,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+627,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+632,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+649,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+617,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+650,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+633,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+632,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+635,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+651,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+653,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+655,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+657,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+659,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+661,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+663,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declBus(c+665,"top ex_stage_u u_ALU shifter shft_src2", false,-1, 5,0);
        tracep->declQuad(c+666,"top ex_stage_u u_ALU shifter shft_src1", false,-1, 63,0);
        tracep->declBit(c+960,"top ex_stage_u u_ALU Multiplier clk", false,-1);
        tracep->declBit(c+961,"top ex_stage_u u_ALU Multiplier rst_n", false,-1);
        tracep->declBit(c+646,"top ex_stage_u u_ALU Multiplier mul_valid", false,-1);
        tracep->declBit(c+499,"top ex_stage_u u_ALU Multiplier flush", false,-1);
        tracep->declBus(c+668,"top ex_stage_u u_ALU Multiplier mul_type", false,-1, 1,0);
        tracep->declQuad(c+617,"top ex_stage_u u_ALU Multiplier multiplicand", false,-1, 63,0);
        tracep->declQuad(c+619,"top ex_stage_u u_ALU Multiplier multiplier", false,-1, 63,0);
        tracep->declBit(c+1048,"top ex_stage_u u_ALU Multiplier out_valid", false,-1);
        tracep->declQuad(c+237,"top ex_stage_u u_ALU Multiplier result", false,-1, 63,0);
        tracep->declBit(c+669,"top ex_stage_u u_ALU Multiplier stateReg", false,-1);
        tracep->declBit(c+670,"top ex_stage_u u_ALU Multiplier interValid", false,-1);
        tracep->declBit(c+671,"top ex_stage_u u_ALU Multiplier resultValidReg_d", false,-1);
        tracep->declBit(c+1049,"top ex_stage_u u_ALU Multiplier resultValidReg_q", false,-1);
        tracep->declBus(c+672,"top ex_stage_u u_ALU Multiplier mul_signed", false,-1, 1,0);
        tracep->declQuad(c+67,"top ex_stage_u u_ALU Multiplier result_hi", false,-1, 63,0);
        tracep->declQuad(c+69,"top ex_stage_u u_ALU Multiplier result_lo", false,-1, 63,0);
        tracep->declBit(c+673,"top ex_stage_u u_ALU Multiplier mul_ready", false,-1);
        tracep->declBus(c+1064,"top ex_stage_u u_ALU Multiplier resultValidReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1114,"top ex_stage_u u_ALU Multiplier resultValidReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+960,"top ex_stage_u u_ALU Multiplier resultValidReg i_clk", false,-1);
        tracep->declBit(c+875,"top ex_stage_u u_ALU Multiplier resultValidReg i_rst_n", false,-1);
        tracep->declBit(c+1085,"top ex_stage_u u_ALU Multiplier resultValidReg i_wen", false,-1);
        tracep->declBus(c+671,"top ex_stage_u u_ALU Multiplier resultValidReg i_din", false,-1, 0,0);
        tracep->declBus(c+1049,"top ex_stage_u u_ALU Multiplier resultValidReg o_dout", false,-1, 0,0);
        tracep->declBit(c+960,"top ex_stage_u u_ALU Multiplier mul64_u clk", false,-1);
        tracep->declBit(c+961,"top ex_stage_u u_ALU Multiplier mul64_u rst_n", false,-1);
        tracep->declBit(c+646,"top ex_stage_u u_ALU Multiplier mul64_u mul_valid", false,-1);
        tracep->declBit(c+499,"top ex_stage_u u_ALU Multiplier mul64_u flush", false,-1);
        tracep->declBit(c+1067,"top ex_stage_u u_ALU Multiplier mul64_u mulw", false,-1);
        tracep->declBus(c+672,"top ex_stage_u u_ALU Multiplier mul64_u mul_signed", false,-1, 1,0);
        tracep->declQuad(c+617,"top ex_stage_u u_ALU Multiplier mul64_u multiplicand", false,-1, 63,0);
        tracep->declQuad(c+619,"top ex_stage_u u_ALU Multiplier mul64_u multiplier", false,-1, 63,0);
        tracep->declBit(c+673,"top ex_stage_u u_ALU Multiplier mul64_u mul_ready", false,-1);
        tracep->declBit(c+670,"top ex_stage_u u_ALU Multiplier mul64_u out_valid", false,-1);
        tracep->declQuad(c+67,"top ex_stage_u u_ALU Multiplier mul64_u result_hi", false,-1, 63,0);
        tracep->declQuad(c+69,"top ex_stage_u u_ALU Multiplier mul64_u result_lo", false,-1, 63,0);
        tracep->declBit(c+674,"top ex_stage_u u_ALU Multiplier mul64_u src1_is_signed", false,-1);
        tracep->declBit(c+675,"top ex_stage_u u_ALU Multiplier mul64_u src2_is_signed", false,-1);
        tracep->declQuad(c+676,"top ex_stage_u u_ALU Multiplier mul64_u mul_lo_src1", false,-1, 32,0);
        tracep->declQuad(c+678,"top ex_stage_u u_ALU Multiplier mul64_u mul_hi_src1", false,-1, 32,0);
        tracep->declQuad(c+680,"top ex_stage_u u_ALU Multiplier mul64_u mul_lo_src2", false,-1, 32,0);
        tracep->declQuad(c+682,"top ex_stage_u u_ALU Multiplier mul64_u mul_hi_src2", false,-1, 32,0);
        tracep->declArray(c+684,"top ex_stage_u u_ALU Multiplier mul64_u mul_ll_rslt", false,-1, 65,0);
        tracep->declArray(c+687,"top ex_stage_u u_ALU Multiplier mul64_u mul_lh_rslt", false,-1, 65,0);
        tracep->declArray(c+690,"top ex_stage_u u_ALU Multiplier mul64_u mul_hl_rslt", false,-1, 65,0);
        tracep->declArray(c+693,"top ex_stage_u u_ALU Multiplier mul64_u mul_hh_rslt", false,-1, 65,0);
        tracep->declArray(c+71,"top ex_stage_u u_ALU Multiplier mul64_u mul_ll_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+74,"top ex_stage_u u_ALU Multiplier mul64_u mul_lh_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+77,"top ex_stage_u u_ALU Multiplier mul64_u mul_hl_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+80,"top ex_stage_u u_ALU Multiplier mul64_u mul_hh_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+83,"top ex_stage_u u_ALU Multiplier mul64_u mul_ll_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+88,"top ex_stage_u u_ALU Multiplier mul64_u mul_lh_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+93,"top ex_stage_u u_ALU Multiplier mul64_u mul_hl_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+98,"top ex_stage_u u_ALU Multiplier mul64_u mul_hh_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+103,"top ex_stage_u u_ALU Multiplier mul64_u mul_rslt_stg2_ex2", false,-1, 129,0);
        tracep->declBit(c+696,"top ex_stage_u u_ALU Multiplier mul64_u mul_stg1_vld_set", false,-1);
        tracep->declBit(c+697,"top ex_stage_u u_ALU Multiplier mul64_u mul_stg1_vld_clr", false,-1);
        tracep->declBit(c+698,"top ex_stage_u u_ALU Multiplier mul64_u mul_stg1_vld_d", false,-1);
        tracep->declBit(c+670,"top ex_stage_u u_ALU Multiplier mul64_u mul_stg1_vld_q", false,-1);
        tracep->declBit(c+670,"top ex_stage_u u_ALU Multiplier mul64_u int_reg_wr_ready_fin", false,-1);
        tracep->declBus(c+1116,"top ex_stage_u u_ALU Multiplier mul64_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1114,"top ex_stage_u u_ALU Multiplier mul64_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+960,"top ex_stage_u u_ALU Multiplier mul64_u id_reg i_clk", false,-1);
        tracep->declBit(c+961,"top ex_stage_u u_ALU Multiplier mul64_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+696,"top ex_stage_u u_ALU Multiplier mul64_u id_reg i_wen", false,-1);
        tracep->declArray(c+699,"top ex_stage_u u_ALU Multiplier mul64_u id_reg i_din", false,-1, 263,0);
        tracep->declArray(c+108,"top ex_stage_u u_ALU Multiplier mul64_u id_reg o_dout", false,-1, 263,0);
        tracep->declBit(c+960,"top ex_stage_u u_ALU divider clk", false,-1);
        tracep->declBit(c+961,"top ex_stage_u u_ALU divider rst_n", false,-1);
        tracep->declQuad(c+708,"top ex_stage_u u_ALU divider dividend", false,-1, 63,0);
        tracep->declQuad(c+710,"top ex_stage_u u_ALU divider divisor", false,-1, 63,0);
        tracep->declBit(c+647,"top ex_stage_u u_ALU divider div_valid", false,-1);
        tracep->declBus(c+668,"top ex_stage_u u_ALU divider div_type", false,-1, 1,0);
        tracep->declBit(c+499,"top ex_stage_u u_ALU divider flush", false,-1);
        tracep->declBit(c+241,"top ex_stage_u u_ALU divider out_valid", false,-1);
        tracep->declQuad(c+239,"top ex_stage_u u_ALU divider result", false,-1, 63,0);
        tracep->declBus(c+117,"top ex_stage_u u_ALU divider div_type_r", false,-1, 1,0);
        tracep->declQuad(c+712,"top ex_stage_u u_ALU divider dividend_N", false,-1, 63,0);
        tracep->declQuad(c+714,"top ex_stage_u u_ALU divider divisor_N", false,-1, 63,0);
        tracep->declQuad(c+118,"top ex_stage_u u_ALU divider divisor_N_r", false,-1, 63,0);
        tracep->declQuad(c+120,"top ex_stage_u u_ALU divider divisor_P_r", false,-1, 63,0);
        tracep->declArray(c+122,"top ex_stage_u u_ALU divider dividendReg", false,-1, 127,0);
        tracep->declBus(c+126,"top ex_stage_u u_ALU divider div_cnt", false,-1, 5,0);
        tracep->declBit(c+127,"top ex_stage_u u_ALU divider div_busy", false,-1);
        tracep->declBit(c+128,"top ex_stage_u u_ALU divider dividend_sign", false,-1);
        tracep->declBit(c+129,"top ex_stage_u u_ALU divider divisor_sign", false,-1);
        tracep->declQuad(c+130,"top ex_stage_u u_ALU divider x2", false,-1, 63,0);
        tracep->declQuad(c+132,"top ex_stage_u u_ALU divider r_64", false,-1, 63,0);
        tracep->declBit(c+134,"top ex_stage_u u_ALU divider partial_q", false,-1);
        tracep->declQuad(c+135,"top ex_stage_u u_ALU divider quotient", false,-1, 63,0);
        tracep->declQuad(c+137,"top ex_stage_u u_ALU divider remainder", false,-1, 63,0);
        tracep->declQuad(c+139,"top ex_stage_u u_ALU divider remainder_s", false,-1, 63,0);
        tracep->declQuad(c+621,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+485,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+490,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+489,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+488,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+716,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+483,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+472,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+440,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+439,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+717,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+719,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+1117,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+721,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+722,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+723,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+724,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+726,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+728,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+960,"top forwarding_u clk", false,-1);
        tracep->declBit(c+961,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+497,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+498,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+141,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+513,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+19,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+514,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+511,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+860,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+495,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+496,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+10,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+10,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+142,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+143,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+242,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+729,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+243,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+244,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+730,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+245,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+960,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+961,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+472,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+485,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+474,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+475,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+491,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+494,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+860,"top L_S_reg_u stall_n", false,-1);
        tracep->declBit(c+33,"top L_S_reg_u flush_i", false,-1);
        tracep->declBit(c+529,"top L_S_reg_u fence_ls_reg_i", false,-1);
        tracep->declQuad(c+12,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+18,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+16,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+19,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+26,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBit(c+34,"top L_S_reg_u fence_ls_reg_o", false,-1);
        tracep->declArray(c+246,"top L_S_reg_u bundle", false,-1, 226,0);
        tracep->declBus(c+1118,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1114,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+960,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+961,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+860,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+246,"top L_S_reg_u ls_reg i_din", false,-1, 226,0);
        tracep->declArray(c+144,"top L_S_reg_u ls_reg o_dout", false,-1, 226,0);
        tracep->declBit(c+960,"top ls_u clk", false,-1);
        tracep->declBit(c+961,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+506,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+510,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+508,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+515,"top ls_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+860,"top ls_u stall_n", false,-1);
        tracep->declBit(c+858,"top ls_u if_stall_n", false,-1);
        tracep->declQuad(c+1035,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+861,"top ls_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top ls_u in_intr_ls", false,-1);
        tracep->declBit(c+231,"top ls_u ld_csr_hazard", false,-1);
        tracep->declQuad(c+504,"top ls_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+472,"top ls_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+451,"top ls_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+437,"top ls_u if_pc", false,-1, 63,0);
        tracep->declQuad(c+517,"top ls_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1065,"top ls_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+519,"top ls_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+287,"top ls_u clint_axi_arready", false,-1);
        tracep->declBus(c+520,"top ls_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+288,"top ls_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+289,"top ls_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+521,"top ls_u clint_axi_rready", false,-1);
        tracep->declBus(c+290,"top ls_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+291,"top ls_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1065,"top ls_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+522,"top ls_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+293,"top ls_u clint_axi_awready", false,-1);
        tracep->declQuad(c+523,"top ls_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+294,"top ls_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+525,"top ls_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+295,"top ls_u clint_axi_wready", false,-1);
        tracep->declBus(c+288,"top ls_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+296,"top ls_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+526,"top ls_u clint_axi_bready", false,-1);
        tracep->declQuad(c+16,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+228,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+502,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+503,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+861,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+861,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+862,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u rden", false,-1);
        tracep->declBus(c+152,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+228,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+731,"top ls_u wren_last", false,-1);
        tracep->declQuad(c+732,"top ls_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+876,"top ls_u csr_stall_n", false,-1);
        tracep->declBit(c+153,"top ls_u timr_int", false,-1);
        tracep->declBit(c+960,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+961,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+152,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+228,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+506,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+731,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+1035,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+861,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+228,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+502,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+503,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+861,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+861,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+862,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+862,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+154,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+155,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+156,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+157,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+158,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+159,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+160,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+29,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+877,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+878,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+879,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+503,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+502,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+161,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+162,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+163,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+164,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+18,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+510,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+508,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+515,"top ls_u ls_ctr_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+152,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+228,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+254,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+255,"top ls_u ls_ctr_u csr_st_en", false,-1);
        tracep->declBit(c+960,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+961,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+504,"top ls_u CSR_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+472,"top ls_u CSR_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+451,"top ls_u CSR_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+437,"top ls_u CSR_u if_pc", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+732,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+876,"top ls_u CSR_u stall_n", false,-1);
        tracep->declBit(c+153,"top ls_u CSR_u timer_int_i", false,-1);
        tracep->declBit(c+33,"top ls_u CSR_u in_intr_ls", false,-1);
        tracep->declQuad(c+20,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declQuad(c+165,"top ls_u CSR_u commitPC", false,-1, 63,0);
        tracep->declBit(c+167,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+168,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+169,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+170,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+171,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+172,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+173,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+174,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+175,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declBit(c+176,"top ls_u CSR_u sel_mie", false,-1);
        tracep->declBit(c+177,"top ls_u CSR_u sel_mip", false,-1);
        tracep->declQuad(c+732,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+256,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+258,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+734,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+178,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declBit(c+180,"top ls_u CSR_u mstatus_MIE", false,-1);
        tracep->declQuad(c+181,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+183,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declQuad(c+185,"top ls_u CSR_u mie", false,-1, 63,0);
        tracep->declBit(c+187,"top ls_u CSR_u mie_MTIE", false,-1);
        tracep->declQuad(c+188,"top ls_u CSR_u mip", false,-1, 63,0);
        tracep->declBit(c+190,"top ls_u CSR_u mip_MTIP", false,-1);
        tracep->declBit(c+960,"top ls_u clint_u clk", false,-1);
        tracep->declBit(c+961,"top ls_u clint_u rst_n", false,-1);
        tracep->declQuad(c+517,"top ls_u clint_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1065,"top ls_u clint_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+519,"top ls_u clint_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+287,"top ls_u clint_u clint_axi_arready", false,-1);
        tracep->declBus(c+520,"top ls_u clint_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+288,"top ls_u clint_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+289,"top ls_u clint_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+521,"top ls_u clint_u clint_axi_rready", false,-1);
        tracep->declBus(c+290,"top ls_u clint_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+291,"top ls_u clint_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1065,"top ls_u clint_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+522,"top ls_u clint_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+293,"top ls_u clint_u clint_axi_awready", false,-1);
        tracep->declQuad(c+523,"top ls_u clint_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+294,"top ls_u clint_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+525,"top ls_u clint_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+295,"top ls_u clint_u clint_axi_wready", false,-1);
        tracep->declBus(c+288,"top ls_u clint_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+296,"top ls_u clint_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+526,"top ls_u clint_u clint_axi_bready", false,-1);
        tracep->declBit(c+153,"top ls_u clint_u hart0_time_int_o", false,-1);
        tracep->declQuad(c+332,"top ls_u clint_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+293,"top ls_u clint_u axi_awready", false,-1);
        tracep->declBit(c+295,"top ls_u clint_u axi_wready", false,-1);
        tracep->declBus(c+334,"top ls_u clint_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+296,"top ls_u clint_u axi_bvalid", false,-1);
        tracep->declQuad(c+335,"top ls_u clint_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+287,"top ls_u clint_u axi_arready", false,-1);
        tracep->declBus(c+288,"top ls_u clint_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+289,"top ls_u clint_u axi_rvalid", false,-1);
        tracep->declBit(c+337,"top ls_u clint_u aw_en", false,-1);
        tracep->declQuad(c+30,"top ls_u clint_u reg_data_out", false,-1, 63,0);
        tracep->declQuad(c+191,"top ls_u clint_u mtime", false,-1, 63,0);
        tracep->declQuad(c+193,"top ls_u clint_u mtimecmp", false,-1, 63,0);
        tracep->declBit(c+736,"top ls_u clint_u mtimeWrEn", false,-1);
        tracep->declBit(c+737,"top ls_u clint_u mtimecmpWrEn", false,-1);
        tracep->declBit(c+738,"top ls_u clint_u slv_reg_wren", false,-1);
        tracep->declBit(c+407,"top ls_u clint_u slv_reg_rden", false,-1);
        tracep->declBus(c+195,"top ls_u clint_u byte_index", false,-1, 31,0);
        tracep->declBit(c+960,"top Dcache_u clk", false,-1);
        tracep->declBit(c+961,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+739,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+740,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+741,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+742,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+228,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+502,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+860,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+829,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+861,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+862,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBus(c+503,"top Dcache_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top Dcache_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+529,"top Dcache_u fence_clean", false,-1);
        tracep->declBit(c+530,"top Dcache_u clear_Icache", false,-1);
        tracep->declBit(c+531,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+35,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+431,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+857,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+743,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+1050,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declBus(c+227,"top Dcache_u cacheRdSize_o", false,-1, 2,0);
        tracep->declQuad(c+855,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+865,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+537,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+532,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+399,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+431,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+538,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+539,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declQuad(c+1020,"top Dcache_u nr", false,-1, 63,0);
        tracep->declQuad(c+1018,"top Dcache_u nh", false,-1, 63,0);
        tracep->declBus(c+1065,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+1092,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+1093,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+1094,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+1095,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+1096,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+1119,"top Dcache_u clean", false,-1, 2,0);
        tracep->declBus(c+744,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+880,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+745,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+746,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+747,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+338,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+342,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+346,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+350,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+748,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+752,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+748,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+752,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+756,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+757,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+758,"top Dcache_u uncached", false,-1);
        tracep->declBus(c+196,"top Dcache_u Num_req", false,-1, 31,0);
        tracep->declBus(c+197,"top Dcache_u Num_hit", false,-1, 31,0);
        tracep->declBit(c+198,"top Dcache_u missed", false,-1);
        tracep->declBit(c+759,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+760,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+762,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+763,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+764,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+199,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+201,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+260,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+261,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+1051,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+1052,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+1053,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+1054,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+262,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+263,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+1120,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+1121,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+203,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+204,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+205,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+765,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+354,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+362,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+1055,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+1057,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+766,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+767,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+768,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+370,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+206,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+770,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+771,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+779,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+207,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+208,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+780,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+209,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+210,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+212,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+782,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+783,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+784,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+786,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+787,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+789,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+793,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+789,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+793,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+797,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+798,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+214,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+1059,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+215,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+216,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+215,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+1060,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+799,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+264,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+881,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+265,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+217,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+218,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+800,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+219,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBit(c+801,"top Dcache_u cleanEn", false,-1);
        tracep->declBit(c+530,"top Dcache_u clean_OK", false,-1);
        tracep->declBus(c+802,"top Dcache_u cleanCnt", false,-1, 6,0);
        tracep->declBit(c+803,"top Dcache_u cleanWrValid", false,-1);
        tracep->declBus(c+266,"top Dcache_u cleanWrAddr", false,-1, 31,0);
        tracep->declBit(c+221,"top Dcache_u oneCycleDelay", false,-1);
        tracep->declArray(c+408,"top Dcache_u cleanData", false,-1, 255,0);
        tracep->declBus(c+1099,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1061,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1100,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1099,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+338,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+960,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+830,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+804,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+805,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+882,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+748,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+831,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+756,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+789,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1099,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1061,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1100,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1099,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+342,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+960,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+830,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+804,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+809,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+882,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+752,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+831,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+756,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+793,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1099,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1061,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1100,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1099,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+346,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+960,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+832,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+813,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+805,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+883,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+748,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+833,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+757,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+789,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1099,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1061,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1100,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1099,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+350,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+960,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+832,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+813,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+809,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+883,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+752,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+833,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+757,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+793,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1061,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1061,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1061,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1061,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1062,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1063,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1064,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+960,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+961,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+531,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+35,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+855,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+533,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+431,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+857,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+865,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+532,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+537,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+399,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+431,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+539,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+227,"top axi_ls_u loadSize", false,-1, 2,0);
        tracep->declBus(c+538,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+535,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+1028,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+430,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+283,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1078,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1066,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+431,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+285,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1074,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1067,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+1079,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+853,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+432,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+433,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+286,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+435,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+1066,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+436,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+1029,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+1030,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1031,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1032,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1033,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1065,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1078,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1066,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+431,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+227,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1074,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1067,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+1075,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1068,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1080,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+854,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+1034,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+855,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+857,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+852,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1081,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+1109,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+1074,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+1110,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+1111,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+814,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+884,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+430,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+432,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+436,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+1122,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+435,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+283,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+371,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+379,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+285,"top axi_ls_u wrSize_reg", false,-1, 2,0);
        tracep->declBus(c+380,"top axi_ls_u storeLenth_reg", false,-1, 7,0);
        tracep->declBus(c+222,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+1109,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+1074,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+1110,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+1111,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+223,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+885,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+6,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+9,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+1112,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1078,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+1067,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+1123,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+1094,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+381,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+960,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+961,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+1035,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+19,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+860,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+504,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+510,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+506,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+508,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+514,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+515,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+1124,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1114,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+960,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+961,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+860,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+886,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+815,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+504,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+510,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+506,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+508,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+515,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+513,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+511,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+960,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+961,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+470,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+439,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+467,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+468,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+442,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+859,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+861,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u in_intr_ls", false,-1);
        tracep->declBit(c+528,"top pipline_ctrl_u fence_id", false,-1);
        tracep->declBit(c+529,"top pipline_ctrl_u fence_ex", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u fence_ls", false,-1);
        tracep->declBit(c+858,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+826,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+827,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+828,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+860,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+860,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+471,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+499,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u ls_flush", false,-1);
        tracep->declBit(c+825,"top pipline_ctrl_u fenceInPip", false,-1);
        tracep->declBus(c+1125,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1125,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+421,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+276,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+960,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+961,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+273,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+1065,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+425,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+272,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+396,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+280,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+426,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+279,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+282,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+281,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+427,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+419,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+1065,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+418,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+267,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+270,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+269,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+268,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+424,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+382,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+272,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+279,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+282,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+281,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+384,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+267,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+270,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+269,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+268,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+1126,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+1127,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+386,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+388,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+390,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+392,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+416,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+417,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+1128,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+1130,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+394,"top lsAxiSlaveRam_u aw_en", false,-1);
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

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_d5724acc_0;

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp352;
    VlWide<3>/*95:0*/ __Vtemp355;
    VlWide<3>/*95:0*/ __Vtemp358;
    VlWide<3>/*95:0*/ __Vtemp361;
    VlWide<3>/*95:0*/ __Vtemp364;
    VlWide<5>/*159:0*/ __Vtemp365;
    VlWide<5>/*159:0*/ __Vtemp370;
    VlWide<5>/*159:0*/ __Vtemp375;
    VlWide<5>/*159:0*/ __Vtemp379;
    VlWide<8>/*255:0*/ __Vtemp384;
    VlWide<8>/*255:0*/ __Vtemp389;
    VlWide<8>/*255:0*/ __Vtemp394;
    VlWide<8>/*255:0*/ __Vtemp398;
    VlWide<4>/*127:0*/ __Vtemp399;
    VlWide<4>/*127:0*/ __Vtemp400;
    VlWide<3>/*95:0*/ __Vtemp401;
    VlWide<3>/*95:0*/ __Vtemp403;
    VlWide<3>/*95:0*/ __Vtemp404;
    VlWide<3>/*95:0*/ __Vtemp405;
    VlWide<3>/*95:0*/ __Vtemp406;
    VlWide<3>/*95:0*/ __Vtemp407;
    VlWide<3>/*95:0*/ __Vtemp410;
    VlWide<3>/*95:0*/ __Vtemp411;
    VlWide<3>/*95:0*/ __Vtemp412;
    VlWide<3>/*95:0*/ __Vtemp413;
    VlWide<3>/*95:0*/ __Vtemp414;
    VlWide<3>/*95:0*/ __Vtemp417;
    VlWide<3>/*95:0*/ __Vtemp418;
    VlWide<3>/*95:0*/ __Vtemp419;
    VlWide<3>/*95:0*/ __Vtemp420;
    VlWide<3>/*95:0*/ __Vtemp423;
    VlWide<3>/*95:0*/ __Vtemp424;
    VlWide<3>/*95:0*/ __Vtemp426;
    VlWide<3>/*95:0*/ __Vtemp427;
    VlWide<3>/*95:0*/ __Vtemp428;
    VlWide<3>/*95:0*/ __Vtemp429;
    VlWide<3>/*95:0*/ __Vtemp432;
    VlWide<3>/*95:0*/ __Vtemp433;
    VlWide<3>/*95:0*/ __Vtemp435;
    VlWide<3>/*95:0*/ __Vtemp436;
    VlWide<3>/*95:0*/ __Vtemp437;
    VlWide<3>/*95:0*/ __Vtemp438;
    VlWide<3>/*95:0*/ __Vtemp441;
    VlWide<3>/*95:0*/ __Vtemp442;
    VlWide<3>/*95:0*/ __Vtemp444;
    VlWide<3>/*95:0*/ __Vtemp445;
    VlWide<3>/*95:0*/ __Vtemp446;
    VlWide<3>/*95:0*/ __Vtemp447;
    VlWide<3>/*95:0*/ __Vtemp449;
    VlWide<3>/*95:0*/ __Vtemp450;
    VlWide<3>/*95:0*/ __Vtemp451;
    VlWide<3>/*95:0*/ __Vtemp455;
    VlWide<3>/*95:0*/ __Vtemp456;
    VlWide<3>/*95:0*/ __Vtemp458;
    VlWide<3>/*95:0*/ __Vtemp459;
    VlWide<3>/*95:0*/ __Vtemp460;
    VlWide<3>/*95:0*/ __Vtemp464;
    VlWide<3>/*95:0*/ __Vtemp465;
    VlWide<3>/*95:0*/ __Vtemp467;
    VlWide<3>/*95:0*/ __Vtemp468;
    VlWide<3>/*95:0*/ __Vtemp469;
    VlWide<3>/*95:0*/ __Vtemp473;
    VlWide<3>/*95:0*/ __Vtemp474;
    VlWide<3>/*95:0*/ __Vtemp476;
    VlWide<3>/*95:0*/ __Vtemp477;
    VlWide<3>/*95:0*/ __Vtemp478;
    VlWide<9>/*287:0*/ __Vtemp482;
    VlWide<4>/*127:0*/ __Vtemp485;
    VlWide<4>/*127:0*/ __Vtemp492;
    VlWide<4>/*127:0*/ __Vtemp495;
    VlWide<4>/*127:0*/ __Vtemp502;
    VlWide<4>/*127:0*/ __Vtemp505;
    VlWide<4>/*127:0*/ __Vtemp514;
    VlWide<4>/*127:0*/ __Vtemp517;
    VlWide<4>/*127:0*/ __Vtemp526;
    VlWide<4>/*127:0*/ __Vtemp529;
    VlWide<4>/*127:0*/ __Vtemp539;
    VlWide<4>/*127:0*/ __Vtemp542;
    VlWide<4>/*127:0*/ __Vtemp552;
    VlWide<10>/*319:0*/ __Vtemp557;
    VlWide<4>/*127:0*/ __Vtemp558;
    VlWide<4>/*127:0*/ __Vtemp559;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+2,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+5,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+6,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
        tracep->fullBit(oldp+9,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+10,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+12,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                     << 0x3dU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 3U)))),64);
        tracep->fullQData(oldp+14,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3dU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 3U)))),64);
        tracep->fullQData(oldp+16,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3dU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 3U)))),64);
        tracep->fullIData(oldp+18,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1dU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 3U))),32);
        tracep->fullBit(oldp+19,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 2U))));
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+26,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullBit(oldp+27,((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 3U)))));
        tracep->fullBit(oldp+28,((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 5U)))));
        tracep->fullCData(oldp+29,(((((1U & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                             | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                      | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                     | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                    | (3U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld)))))),3);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out),64);
        tracep->fullBit(oldp+32,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__in_intr_ls));
        tracep->fullBit(oldp+34,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+35,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullCData(oldp+37,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U)),4);
        tracep->fullCData(oldp+38,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                     : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))),4);
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__cache_dut__DOT__uncachedOk));
        tracep->fullIData(oldp+42,(vlSelf->top__DOT__cache_dut__DOT__Num_req),32);
        tracep->fullIData(oldp+43,(vlSelf->top__DOT__cache_dut__DOT__Num_hit),32);
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__cache_dut__DOT__missed));
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+47,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+48,((0x3fU & (IData)(
                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                     >> 5U)))),6);
        tracep->fullIData(oldp+49,((0x1fffffU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))),21);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+54,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullBit(oldp+55,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullIData(oldp+56,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullIData(oldp+57,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullQData(oldp+58,((((QData)((IData)(
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
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullBit(oldp+62,(((0x73U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 3U))) 
                                  & (((1U == (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU))) 
                                      | (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU)))) 
                                     | (2U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xfU)))))));
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src1Reg),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2Reg),64);
        tracep->fullQData(oldp+67,((((QData)((IData)(
                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[2U])))),64);
        tracep->fullQData(oldp+69,((((QData)((IData)(
                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[0U])))),64);
        __Vtemp352[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp352[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp352[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        tracep->fullWData(oldp+71,(__Vtemp352),66);
        __Vtemp355[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp355[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp355[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                >> 4U));
        tracep->fullWData(oldp+74,(__Vtemp355),66);
        __Vtemp358[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp358[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp358[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                >> 2U));
        tracep->fullWData(oldp+77,(__Vtemp358),66);
        __Vtemp361[0U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp361[1U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp361[2U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        tracep->fullWData(oldp+80,(__Vtemp361),66);
        __Vtemp364[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp364[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp364[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        VL_EXTEND_WW(130,66, __Vtemp365, __Vtemp364);
        tracep->fullWData(oldp+83,(__Vtemp365),130);
        __Vtemp370[0U] = 0U;
        __Vtemp370[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp370[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp370[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                             >> 5U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                           >> 4U)));
        __Vtemp370[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 5U)))) 
                          >> 0x1eU);
        tracep->fullWData(oldp+88,(__Vtemp370),130);
        __Vtemp375[0U] = 0U;
        __Vtemp375[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp375[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp375[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 3U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                           >> 2U)));
        __Vtemp375[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                            >> 3U)))) 
                          >> 0x1eU);
        tracep->fullWData(oldp+93,(__Vtemp375),130);
        __Vtemp379[0U] = 0U;
        __Vtemp379[1U] = 0U;
        __Vtemp379[2U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp379[3U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp379[4U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        tracep->fullWData(oldp+98,(__Vtemp379),130);
        tracep->fullWData(oldp+103,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2),130);
        tracep->fullWData(oldp+108,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout),264);
        tracep->fullCData(oldp+117,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r),2);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r),64);
        tracep->fullWData(oldp+122,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg),128);
        tracep->fullCData(oldp+126,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt),6);
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy));
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign));
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign));
        tracep->fullQData(oldp+130,(((0x40000000U & 
                                      vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])
                                      ? vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r)),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64),64);
        tracep->fullBit(oldp+134,(((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64 
                                                  >> 0x3fU)))
                                    ? 0U : 1U)));
        tracep->fullQData(oldp+135,((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign) 
                                      ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign))
                                      ? (1ULL + (~ 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])))))
                                      : (((QData)((IData)(
                                                          vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U]))))),64);
        tracep->fullQData(oldp+137,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign)
                                      ? (1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s)),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s),64);
        tracep->fullCData(oldp+141,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0xaU))),5);
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+144,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),227);
        tracep->fullCData(oldp+152,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xfU))),3);
        tracep->fullBit(oldp+153,(vlSelf->top__DOT__ls_u__DOT__timr_int));
        tracep->fullBit(oldp+154,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 3U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+155,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 3U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
        tracep->fullBit(oldp+158,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
        tracep->fullBit(oldp+159,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
        tracep->fullBit(oldp+160,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
        tracep->fullBit(oldp+161,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+162,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+163,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+164,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC),64);
        tracep->fullBit(oldp+167,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw));
        tracep->fullBit(oldp+168,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs));
        tracep->fullBit(oldp+169,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc));
        tracep->fullBit(oldp+170,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 5U)))));
        tracep->fullBit(oldp+171,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+172,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+173,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+174,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+175,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullBit(oldp+176,(((0x304U == (0xfffU 
                                               & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                   << 9U) 
                                                  | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 0x17U)))) 
                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullBit(oldp+177,(((0x344U == (0xfffU 
                                               & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                   << 9U) 
                                                  | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 0x17U)))) 
                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullBit(oldp+180,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                 >> 3U)))));
        tracep->fullQData(oldp+181,((((0x1cU == (0x1fU 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 5U))) 
                                      & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U)) ? 0xbULL
                                      : ((IData)(vlSelf->top__DOT__in_intr_ls)
                                          ? 0x8000000000000007ULL
                                          : 0ULL))),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie),64);
        tracep->fullBit(oldp+187,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                                 >> 7U)))));
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip),64);
        tracep->fullBit(oldp+190,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                 >> 7U)))));
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp),64);
        tracep->fullIData(oldp+195,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index),32);
        tracep->fullIData(oldp+196,(vlSelf->top__DOT__Dcache_u__DOT__Num_req),32);
        tracep->fullIData(oldp+197,(vlSelf->top__DOT__Dcache_u__DOT__Num_hit),32);
        tracep->fullBit(oldp+198,(vlSelf->top__DOT__Dcache_u__DOT__missed));
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+203,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullIData(oldp+204,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [0x23U]),21);
        tracep->fullBit(oldp+205,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__Dcache_u__DOT__missFlag));
        tracep->fullBit(oldp+207,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+208,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+209,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+214,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+215,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+216,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
        tracep->fullBit(oldp+218,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
        tracep->fullBit(oldp+221,(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay));
        tracep->fullCData(oldp+222,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+223,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+224,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? 0U
                                               : 1U))),4);
        tracep->fullCData(oldp+225,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (0xffU 
                                              & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U))))),8);
        tracep->fullCData(oldp+226,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (0xfU 
                                              & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                                  : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))))),4);
        tracep->fullCData(oldp+227,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & ((((1U 
                                                  & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                                     | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                                 | (2U 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                                | (2U 
                                                   & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                               | (3U 
                                                  & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld))))))
                                      : 3U)),3);
        tracep->fullQData(oldp+228,((((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x17U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                               >> 1U)))
                                      : ((((0x73U == 
                                            (0x7fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 1U))) 
                                           & (((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 0xdU))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                      >> 0xdU)))) 
                                              | (2U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                     >> 0xdU))))) 
                                          & ((0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 0x17U)) 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 8U))))
                                          ? (((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))
                                          : (((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                 << 0x1dU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                   >> 3U)))))),64);
        tracep->fullIData(oldp+230,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullBit(oldp+231,((((3U == (0x7fU & 
                                            (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                             >> 1U))) 
                                    & ((0x73U == (0x7fU 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 3U))) 
                                       & (((1U == (7U 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 0xfU))) 
                                           | (3U == 
                                              (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xfU)))) 
                                          | (2U == 
                                             (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU)))))) 
                                   & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x12U))))));
        tracep->fullCData(oldp+232,((0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
        tracep->fullQData(oldp+233,((QData)((IData)(
                                                    ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                                      : 
                                                     (((IData)(
                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                >> 0xbU)) 
                                                       << 0xbU) 
                                                      | (0x7e0U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                     >> 5U)) 
                                                            << 5U))))))),64);
        tracep->fullQData(oldp+235,(((0x10U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? ((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign)
                                              ? (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s))
                                              : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s)
                                          : (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign) 
                                              ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign))
                                              ? (1ULL 
                                                 + 
                                                 (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])))))
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])))))
                                      : ((0U == (3U 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                    >> 2U)))
                                          ? (((QData)((IData)(
                                                              vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[0U])))
                                          : (((QData)((IData)(
                                                              vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[2U])))))),64);
        tracep->fullQData(oldp+237,(((0U == (3U & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 2U)))
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[0U])))
                                      : (((QData)((IData)(
                                                          vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[2U]))))),64);
        tracep->fullQData(oldp+239,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s))
                                          : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s)
                                      : (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign) 
                                          ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign))
                                          ? (1ULL + 
                                             (~ (((QData)((IData)(
                                                                  vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])))))
                                          : (((QData)((IData)(
                                                              vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])))))),64);
        tracep->fullBit(oldp+241,((1U & (~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy) 
                                            | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid))))));
        tracep->fullBit(oldp+242,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+243,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+244,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+245,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        if (vlSelf->top__DOT__in_intr_ls) {
            __Vtemp384[0U] = Vtop__ConstPool__CONST_d5724acc_0[0U];
            __Vtemp384[1U] = Vtop__ConstPool__CONST_d5724acc_0[1U];
            __Vtemp384[2U] = Vtop__ConstPool__CONST_d5724acc_0[2U];
            __Vtemp384[3U] = Vtop__ConstPool__CONST_d5724acc_0[3U];
            __Vtemp384[4U] = Vtop__ConstPool__CONST_d5724acc_0[4U];
            __Vtemp384[5U] = Vtop__ConstPool__CONST_d5724acc_0[5U];
            __Vtemp384[6U] = Vtop__ConstPool__CONST_d5724acc_0[6U];
            __Vtemp384[7U] = Vtop__ConstPool__CONST_d5724acc_0[7U];
        } else {
            __Vtemp384[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 3U) | ((4U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (3U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp384[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp384[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 3U));
            __Vtemp384[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp384[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp384[5U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp384[6U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp384[7U] = (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
        }
        tracep->fullWData(oldp+246,(__Vtemp384),227);
        tracep->fullBit(oldp+254,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x17U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+255,((((0x73U == (0x7fU 
                                               & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 1U))) 
                                    & (((1U == (7U 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 0xdU))) 
                                        | (3U == (7U 
                                                  & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                     >> 0xdU)))) 
                                       | (2U == (7U 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 0xdU))))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x17U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullQData(oldp+256,((vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                                     | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+258,(((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullBit(oldp+260,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+261,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+262,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+263,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+264,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        tracep->fullBit(oldp+265,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullIData(oldp+266,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                          ? ((((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                          >> 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                                              & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))
                                              ? ((vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                                  [
                                                  (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))] 
                                                  << 0xbU) 
                                                 | (0x7e0U 
                                                    & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                                                       << 5U)))
                                              : 0U)
                                          : ((((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                          >> 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                                              & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))
                                              ? ((vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                                  [
                                                  (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))] 
                                                  << 0xbU) 
                                                 | (0x7e0U 
                                                    & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                                                       << 5U)))
                                              : 0U))
                                      : 0U)),32);
        tracep->fullBit(oldp+267,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+268,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+269,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+273,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg)),64);
        tracep->fullCData(oldp+275,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+276,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)))),3);
        tracep->fullCData(oldp+277,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+278,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 0xfU)),4);
        tracep->fullBit(oldp+279,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+280,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (0xffU 
                                              & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)))),8);
        tracep->fullBit(oldp+281,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+282,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+285,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
        tracep->fullCData(oldp+286,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready));
        tracep->fullCData(oldp+288,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp),2);
        tracep->fullBit(oldp+289,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+290,(((2U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                      : 0U)),3);
        tracep->fullQData(oldp+291,(((2U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+293,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready));
        tracep->fullCData(oldp+294,(vlSelf->top__DOT__clint_axi_wstrb),8);
        tracep->fullBit(oldp+295,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready));
        tracep->fullBit(oldp+296,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid));
        tracep->fullBit(oldp+297,((2U == (0xffU & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))));
        tracep->fullBit(oldp+298,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))));
        tracep->fullWData(oldp+299,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+303,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+307,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+311,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+315,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+323,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullIData(oldp+331,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullQData(oldp+332,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr),64);
        tracep->fullCData(oldp+334,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr),64);
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en));
        tracep->fullWData(oldp+338,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+342,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+346,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+350,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+354,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+362,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullBit(oldp+370,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullWData(oldp+371,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+379,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+380,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
        tracep->fullCData(oldp+381,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+382,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+392,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+394,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullCData(oldp+395,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                               ? 0U
                                               : 3U))),8);
        tracep->fullQData(oldp+396,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o)),64);
        tracep->fullBit(oldp+398,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))));
        VL_EXTEND_WQ(256,64, __Vtemp389, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp394[0U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U]);
            __Vtemp394[1U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U]);
            __Vtemp394[2U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U]);
            __Vtemp394[3U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U]);
            __Vtemp394[4U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U]);
            __Vtemp394[5U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U]);
            __Vtemp394[6U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U]);
            __Vtemp394[7U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U]);
        } else {
            __Vtemp394[0U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp389[0U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
            __Vtemp394[1U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp389[1U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
            __Vtemp394[2U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp389[2U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
            __Vtemp394[3U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp389[3U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
            __Vtemp394[4U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp389[4U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
            __Vtemp394[5U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp389[5U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
            __Vtemp394[6U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp389[6U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
            __Vtemp394[7U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp389[7U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
        }
        tracep->fullWData(oldp+399,(__Vtemp394),256);
        tracep->fullBit(oldp+407,((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))));
        if ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))) {
            __Vtemp398[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U];
            __Vtemp398[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U];
            __Vtemp398[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U];
            __Vtemp398[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U];
            __Vtemp398[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U];
            __Vtemp398[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U];
            __Vtemp398[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U];
            __Vtemp398[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U];
        } else {
            __Vtemp398[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U];
            __Vtemp398[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U];
            __Vtemp398[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U];
            __Vtemp398[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U];
            __Vtemp398[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U];
            __Vtemp398[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U];
            __Vtemp398[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U];
            __Vtemp398[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U];
        }
        tracep->fullWData(oldp+408,(__Vtemp398),256);
        tracep->fullBit(oldp+416,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+417,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        tracep->fullBit(oldp+418,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+419,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr)),64);
        tracep->fullCData(oldp+421,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)))),3);
        tracep->fullCData(oldp+422,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+423,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 2U)),4);
        tracep->fullBit(oldp+424,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))));
        tracep->fullBit(oldp+425,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+426,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+427,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullCData(oldp+428,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+429,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                              ? 0U : 3U))
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+430,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+431,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+432,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+435,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+436,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+437,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+439,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+440,(((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                         + (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                  >> 0x1cU))))
                                      : ((((QData)((IData)(
                                                           vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                           << 0x24U) 
                                          | (((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                              << 4U) 
                                             | ((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                >> 0x1cU))) 
                                         + (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                  >> 0x1cU)))))),64);
        tracep->fullBit(oldp+442,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+445,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+447,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+448,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+449,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+450,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+451,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+453,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+454,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+456,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+457,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+458,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+459,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+460,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+461,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+462,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+463,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+464,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+465,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+466,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+467,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+468,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+469,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+470,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+471,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+472,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullIData(oldp+474,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1cU))),32);
        tracep->fullQData(oldp+475,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+477,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+478,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x11U))),2);
        tracep->fullQData(oldp+479,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+481,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+483,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+485,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+487,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x17U))),5);
        tracep->fullBit(oldp+488,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+489,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+490,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+491,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+492,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+493,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),3);
        tracep->fullBit(oldp+494,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullCData(oldp+495,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+496,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+497,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xbU))),5);
        tracep->fullCData(oldp+498,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 6U))),5);
        tracep->fullBit(oldp+499,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+500,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 4U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1cU))))));
        tracep->fullBit(oldp+501,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 2U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1eU))))));
        tracep->fullCData(oldp+502,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+503,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+504,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+506,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+508,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+510,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+511,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+513,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+514,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+515,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+517,(((2U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullBit(oldp+519,(vlSelf->top__DOT__clint_axi_arvalid));
        tracep->fullCData(oldp+520,(((2U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                      : 0U)),3);
        tracep->fullBit(oldp+521,(((2U == (0xffU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x18U))))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+522,(vlSelf->top__DOT__clint_axi_awvalid));
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__clint_axi_wdata),64);
        tracep->fullBit(oldp+525,(vlSelf->top__DOT__clint_axi_wvalid));
        tracep->fullBit(oldp+526,(vlSelf->top__DOT__clint_axi_bready));
        tracep->fullBit(oldp+527,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+528,(vlSelf->top__DOT__fence_id));
        tracep->fullBit(oldp+529,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+530,(vlSelf->top__DOT__Dcache_u__DOT__clean_OK));
        tracep->fullBit(oldp+531,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+532,(vlSelf->top__DOT__DcacheWrValid));
        tracep->fullQData(oldp+533,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+535,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+537,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+538,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullCData(oldp+539,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                      : 3U)),3);
        tracep->fullQData(oldp+540,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+542,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullBit(oldp+543,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+544,((2U == (0xffU & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))));
        tracep->fullBit(oldp+545,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))));
        tracep->fullIData(oldp+546,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+547,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+548,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+549,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        __Vtemp399[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp399[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp399[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp399[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+550,(__Vtemp399),128);
        __Vtemp400[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp400[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp400[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp400[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+554,(__Vtemp400),128);
        tracep->fullBit(oldp+558,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+559,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+560,(vlSelf->top__DOT__cache_dut__DOT__uncached));
        tracep->fullBit(oldp+561,(vlSelf->top__DOT__cache_dut__DOT__diffAddr));
        tracep->fullBit(oldp+562,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+563,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+564,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+565,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+566,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+567,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+575,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+576,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+577,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+578,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+579,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+580,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+581,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+582,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+584,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp401[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp401[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp401[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+585,(__Vtemp401),96);
        tracep->fullWData(oldp+588,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+591,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+592,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+593,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+594,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+595,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullBit(oldp+596,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U)))));
        tracep->fullQData(oldp+597,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+599,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+600,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+601,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+602,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+603,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+604,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullBit(oldp+605,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__fence_id))));
        tracep->fullBit(oldp+606,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__DivEn_id))));
        tracep->fullWData(oldp+607,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),316);
        tracep->fullQData(oldp+617,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+619,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+621,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp403, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp404, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp405, __Vtemp403, __Vtemp404);
        VL_EXTEND_WI(65,1, __Vtemp406, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp407, __Vtemp405, __Vtemp406);
        tracep->fullBit(oldp+623,((1U & ((0x4000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp407[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+624,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+625,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+627,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+628,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+630,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+632,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+633,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullCData(oldp+634,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x17U))),3);
        tracep->fullQData(oldp+635,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp410, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp411, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp412, __Vtemp410, __Vtemp411);
        VL_EXTEND_WI(65,1, __Vtemp413, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp414, __Vtemp412, __Vtemp413);
        tracep->fullBit(oldp+637,((1U & __Vtemp414[2U])));
        tracep->fullBit(oldp+638,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+639,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+641,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+643,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullBit(oldp+645,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn));
        tracep->fullBit(oldp+646,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid));
        tracep->fullBit(oldp+647,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid));
        tracep->fullCData(oldp+648,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x17U))),4);
        tracep->fullBit(oldp+649,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+650,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+651,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+653,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+655,((0xffffffffffffffffULL 
                                     >> (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2))),64);
        tracep->fullQData(oldp+657,((~ (0xffffffffffffffffULL 
                                        >> (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2)))),64);
        tracep->fullQData(oldp+659,(((0x8000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2)) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+661,(((0x8000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                        >> 0x1fU)))
                                          ? (0x100000000ULL 
                                             | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                | (QData)((IData)(
                                                                  (~ (IData)(
                                                                             ((0xffffffffffffffffULL 
                                                                               >> (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2)) 
                                                                              >> 0x20U)))))))
                                          : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                             & (QData)((IData)(
                                                               ((0xffffffffffffffffULL 
                                                                 >> (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2)) 
                                                                >> 0x20U)))))
                                      : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                           >> 0x3fU)))))) 
                                            & (~ (0xffffffffffffffffULL 
                                                  >> (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2))))))),64);
        tracep->fullQData(oldp+663,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+665,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2),6);
        tracep->fullQData(oldp+666,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1),64);
        tracep->fullCData(oldp+668,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),2);
        tracep->fullBit(oldp+669,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg));
        tracep->fullBit(oldp+670,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q));
        tracep->fullBit(oldp+671,((1U & ((~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg)) 
                                         | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg) 
                                            & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))))));
        tracep->fullCData(oldp+672,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul_signed),2);
        tracep->fullBit(oldp+673,(1U));
        tracep->fullBit(oldp+674,((1U & ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul_signed) 
                                         >> 1U))));
        tracep->fullBit(oldp+675,((1U & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul_signed))));
        tracep->fullQData(oldp+676,((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1))),33);
        tracep->fullQData(oldp+678,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src1),33);
        tracep->fullQData(oldp+680,((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),33);
        tracep->fullQData(oldp+682,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src2),33);
        VL_EXTEND_WI(66,32, __Vtemp417, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1));
        VL_EXTEND_WI(66,32, __Vtemp418, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2));
        VL_MUL_W(3, __Vtemp419, __Vtemp417, __Vtemp418);
        __Vtemp420[0U] = __Vtemp419[0U];
        __Vtemp420[1U] = __Vtemp419[1U];
        __Vtemp420[2U] = (3U & __Vtemp419[2U]);
        tracep->fullWData(oldp+684,(__Vtemp420),66);
        VL_EXTENDS_WQ(66,33, __Vtemp423, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1)));
        __Vtemp424[0U] = __Vtemp423[0U];
        __Vtemp424[1U] = __Vtemp423[1U];
        __Vtemp424[2U] = (3U & __Vtemp423[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp426, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp427[0U] = __Vtemp426[0U];
        __Vtemp427[1U] = __Vtemp426[1U];
        __Vtemp427[2U] = (3U & __Vtemp426[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp428, __Vtemp424, __Vtemp427);
        __Vtemp429[0U] = __Vtemp428[0U];
        __Vtemp429[1U] = __Vtemp428[1U];
        __Vtemp429[2U] = (3U & __Vtemp428[2U]);
        tracep->fullWData(oldp+687,(__Vtemp429),66);
        VL_EXTENDS_WQ(66,33, __Vtemp432, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp433[0U] = __Vtemp432[0U];
        __Vtemp433[1U] = __Vtemp432[1U];
        __Vtemp433[2U] = (3U & __Vtemp432[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp435, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
        __Vtemp436[0U] = __Vtemp435[0U];
        __Vtemp436[1U] = __Vtemp435[1U];
        __Vtemp436[2U] = (3U & __Vtemp435[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp437, __Vtemp433, __Vtemp436);
        __Vtemp438[0U] = __Vtemp437[0U];
        __Vtemp438[1U] = __Vtemp437[1U];
        __Vtemp438[2U] = (3U & __Vtemp437[2U]);
        tracep->fullWData(oldp+690,(__Vtemp438),66);
        VL_EXTENDS_WQ(66,33, __Vtemp441, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp442[0U] = __Vtemp441[0U];
        __Vtemp442[1U] = __Vtemp441[1U];
        __Vtemp442[2U] = (3U & __Vtemp441[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp444, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp445[0U] = __Vtemp444[0U];
        __Vtemp445[1U] = __Vtemp444[1U];
        __Vtemp445[2U] = (3U & __Vtemp444[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp446, __Vtemp442, __Vtemp445);
        __Vtemp447[0U] = __Vtemp446[0U];
        __Vtemp447[1U] = __Vtemp446[1U];
        __Vtemp447[2U] = (3U & __Vtemp446[2U]);
        tracep->fullWData(oldp+693,(__Vtemp447),66);
        tracep->fullBit(oldp+696,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set));
        tracep->fullBit(oldp+697,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                   | (IData)(vlSelf->top__DOT__ex_flush))));
        tracep->fullBit(oldp+698,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set) 
                                   | (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                       & (~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                             | (IData)(vlSelf->top__DOT__ex_flush)))) 
                                      & (~ (IData)(vlSelf->top__DOT__ex_flush))))));
        VL_EXTEND_WI(66,32, __Vtemp449, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1));
        VL_EXTEND_WI(66,32, __Vtemp450, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2));
        VL_MUL_W(3, __Vtemp451, __Vtemp449, __Vtemp450);
        VL_EXTENDS_WQ(66,33, __Vtemp455, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1)));
        __Vtemp456[0U] = __Vtemp455[0U];
        __Vtemp456[1U] = __Vtemp455[1U];
        __Vtemp456[2U] = (3U & __Vtemp455[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp458, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp459[0U] = __Vtemp458[0U];
        __Vtemp459[1U] = __Vtemp458[1U];
        __Vtemp459[2U] = (3U & __Vtemp458[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp460, __Vtemp456, __Vtemp459);
        VL_EXTENDS_WQ(66,33, __Vtemp464, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp465[0U] = __Vtemp464[0U];
        __Vtemp465[1U] = __Vtemp464[1U];
        __Vtemp465[2U] = (3U & __Vtemp464[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp467, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
        __Vtemp468[0U] = __Vtemp467[0U];
        __Vtemp468[1U] = __Vtemp467[1U];
        __Vtemp468[2U] = (3U & __Vtemp467[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp469, __Vtemp465, __Vtemp468);
        VL_EXTENDS_WQ(66,33, __Vtemp473, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp474[0U] = __Vtemp473[0U];
        __Vtemp474[1U] = __Vtemp473[1U];
        __Vtemp474[2U] = (3U & __Vtemp473[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp476, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp477[0U] = __Vtemp476[0U];
        __Vtemp477[1U] = __Vtemp476[1U];
        __Vtemp477[2U] = (3U & __Vtemp476[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp478, __Vtemp474, __Vtemp477);
        __Vtemp482[0U] = __Vtemp478[0U];
        __Vtemp482[1U] = __Vtemp478[1U];
        __Vtemp482[2U] = ((__Vtemp469[0U] << 2U) | 
                          (3U & __Vtemp478[2U]));
        __Vtemp482[3U] = ((__Vtemp469[0U] >> 0x1eU) 
                          | (__Vtemp469[1U] << 2U));
        __Vtemp482[4U] = ((__Vtemp460[0U] << 4U) | 
                          ((__Vtemp469[1U] >> 0x1eU) 
                           | (0xcU & (__Vtemp469[2U] 
                                      << 2U))));
        __Vtemp482[5U] = ((__Vtemp460[0U] >> 0x1cU) 
                          | (__Vtemp460[1U] << 4U));
        __Vtemp482[6U] = ((__Vtemp451[0U] << 6U) | 
                          ((__Vtemp460[1U] >> 0x1cU) 
                           | (0x30U & (__Vtemp460[2U] 
                                       << 4U))));
        __Vtemp482[7U] = ((__Vtemp451[0U] >> 0x1aU) 
                          | (__Vtemp451[1U] << 6U));
        __Vtemp482[8U] = ((__Vtemp451[1U] >> 0x1aU) 
                          | (0xc0U & (__Vtemp451[2U] 
                                      << 6U)));
        tracep->fullWData(oldp+699,(__Vtemp482),264);
        tracep->fullQData(oldp+708,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT____Vcellinp__divider__dividend),64);
        tracep->fullQData(oldp+710,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT____Vcellinp__divider__divisor),64);
        tracep->fullQData(oldp+712,((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT____Vcellinp__divider__dividend))),64);
        tracep->fullQData(oldp+714,((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT____Vcellinp__divider__divisor))),64);
        tracep->fullCData(oldp+716,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 8U))),3);
        tracep->fullQData(oldp+717,(((((QData)((IData)(
                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                        << 4U) | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                  >> 0x1cU))) 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU))))),64);
        tracep->fullQData(oldp+719,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU))))),64);
        tracep->fullBit(oldp+721,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+722,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+723,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+724,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+726,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+728,((1U & ((0x400U & 
                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                          ? ((0x200U 
                                              & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                              ? ((0x100U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                  ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                              : ((0x100U 
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
                                                 >> 9U)) 
                                             & ((0x100U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                 ? 
                                                (0U 
                                                 != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)))))))));
        tracep->fullBit(oldp+729,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+730,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+731,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullQData(oldp+732,(vlSelf->top__DOT__ls_u__DOT__csr_wr_data),64);
        tracep->fullQData(oldp+734,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullBit(oldp+736,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn));
        tracep->fullBit(oldp+737,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn));
        tracep->fullBit(oldp+738,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren));
        tracep->fullIData(oldp+739,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+740,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+741,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+742,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 4U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1cU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 2U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1eU)))))));
        tracep->fullIData(oldp+743,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+744,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+745,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+746,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+747,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp485, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp492[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp492[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp492[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp492[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp492[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp485[0U])
                               : 0U);
            __Vtemp492[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp485[1U])
                               : 0U);
            __Vtemp492[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp485[2U])
                               : 0U);
            __Vtemp492[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp485[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+748,(__Vtemp492),128);
        VL_EXTEND_WQ(128,64, __Vtemp495, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp502[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp502[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp502[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp502[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp502[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp495[0U])
                               : 0U);
            __Vtemp502[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp495[1U])
                               : 0U);
            __Vtemp502[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp495[2U])
                               : 0U);
            __Vtemp502[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp495[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+752,(__Vtemp502),128);
        tracep->fullBit(oldp+756,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+757,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+758,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+759,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+760,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+762,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+763,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+764,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+765,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+766,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+767,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+768,((((QData)((IData)(
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
        tracep->fullCData(oldp+770,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+771,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+779,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+780,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullBit(oldp+782,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+783,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+784,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+786,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+787,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp505, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp514[0U] = 0xffffffffU;
            __Vtemp514[1U] = 0xffffffffU;
            __Vtemp514[2U] = 0xffffffffU;
            __Vtemp514[3U] = 0xffffffffU;
        } else {
            __Vtemp514[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp505[0U])
                                   : 0U) : 0U);
            __Vtemp514[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp505[1U])
                                   : 0U) : 0U);
            __Vtemp514[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp505[2U])
                                   : 0U) : 0U);
            __Vtemp514[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp505[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+789,(__Vtemp514),128);
        VL_EXTEND_WQ(128,64, __Vtemp517, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp526[0U] = 0xffffffffU;
            __Vtemp526[1U] = 0xffffffffU;
            __Vtemp526[2U] = 0xffffffffU;
            __Vtemp526[3U] = 0xffffffffU;
        } else {
            __Vtemp526[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp517[0U])
                                   : 0U) : 0U);
            __Vtemp526[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp517[1U])
                                   : 0U) : 0U);
            __Vtemp526[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp517[2U])
                                   : 0U) : 0U);
            __Vtemp526[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp517[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+793,(__Vtemp526),128);
        tracep->fullBit(oldp+797,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+798,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+799,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullIData(oldp+800,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
        tracep->fullBit(oldp+801,((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullCData(oldp+802,(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt),7);
        tracep->fullBit(oldp+803,(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid));
        tracep->fullBit(oldp+804,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        VL_EXTEND_WQ(128,64, __Vtemp529, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp539[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp529[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp539[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp529[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp539[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp529[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp539[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp529[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+805,(__Vtemp539),128);
        VL_EXTEND_WQ(128,64, __Vtemp542, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp552[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp542[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp552[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp542[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp552[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp542[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp552[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp542[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+809,(__Vtemp552),128);
        tracep->fullBit(oldp+813,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+814,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+815,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+825,((1U & ((IData)(vlSelf->top__DOT__fence_id) 
                                         | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullBit(oldp+826,((1U & (~ (((((((IData)(vlSelf->top__DOT__fence_id) 
                                                 | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                               | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+827,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+828,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+829,((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit) 
                                          | (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))))) 
                                   | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk)))));
        tracep->fullBit(oldp+830,((1U & (~ ((((((((
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                    | ((6U 
                                                        == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                       & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                                   & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                  | (1U 
                                                     == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                 | (2U 
                                                    == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                | (7U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                               | (3U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                              | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                                             | (4U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])))));
        tracep->fullBit(oldp+831,((1U & ((((((((((0U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                 | ((6U 
                                                     == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                                & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                               | (1U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                              | (2U 
                                                 == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                             | (7U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                           | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                                          | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                         | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullBit(oldp+832,((1U & (~ ((((((((
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                    | ((6U 
                                                        == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                       & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                                   & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                  | (1U 
                                                     == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                 | (2U 
                                                    == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                | (7U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                               | (3U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                              | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
                                             | (4U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])))));
        tracep->fullBit(oldp+833,((1U & ((((((((((0U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                 | ((6U 
                                                     == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                                & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                               | (1U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                              | (2U 
                                                 == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                             | (7U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                           | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
                                          | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                         | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullQData(oldp+834,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+836,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp557[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           << 0x1cU) | (((IData)(vlSelf->top__DOT__aluctr_id) 
                                         << 0x17U) 
                                        | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                             & (IData)(vlSelf->top__DOT__is_jalr_id)) 
                                            << 0x16U) 
                                           | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                & (IData)(vlSelf->top__DOT__is_jal_id)) 
                                               << 0x15U) 
                                              | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                   & (IData)(vlSelf->top__DOT__is_brc_id)) 
                                                  << 0x14U) 
                                                 | (((IData)(vlSelf->top__DOT__src1sel_id) 
                                                     << 0x13U) 
                                                    | (((IData)(vlSelf->top__DOT__src2sel_id) 
                                                        << 0x11U) 
                                                       | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                            & (IData)(vlSelf->top__DOT__wben_id)) 
                                                           << 0x10U) 
                                                          | (((IData)(vlSelf->top__DOT__rs1_idx_id) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT__rs2_idx_id) 
                                                                 << 6U) 
                                                                | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                     & (IData)(vlSelf->top__DOT__DivEn_id)) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__DivSel_id) 
                                                                       << 2U) 
                                                                      | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                           & (IData)(vlSelf->top__DOT__trap_id)) 
                                                                          << 1U) 
                                                                         | ((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                            & (IData)(vlSelf->top__DOT__fence_id)))))))))))))));
        __Vtemp557[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 4U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp557[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1cU));
        __Vtemp557[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp557[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1cU));
        __Vtemp557[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp557[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1cU));
        __Vtemp557[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 4U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1cU));
        __Vtemp557[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                           >> 4U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                                ? 0ULL
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp557[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 4U);
        tracep->fullWData(oldp+838,(__Vtemp557),316);
        tracep->fullBit(oldp+848,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+849,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+851,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+852,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+853,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+854,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+855,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+857,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+858,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+859,(vlSelf->top__DOT__ex_not_ok));
        tracep->fullBit(oldp+860,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+861,(vlSelf->top__DOT__dataNotOk));
        tracep->fullQData(oldp+862,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+864,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+865,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+866,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+867,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+868,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+870,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+871,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+872,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+873,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+874,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullBit(oldp+875,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n));
        tracep->fullBit(oldp+876,(vlSelf->top__DOT__ls_u__DOT__csr_stall_n));
        tracep->fullCData(oldp+877,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+878,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+879,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullCData(oldp+880,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
        tracep->fullBit(oldp+881,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+882,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+883,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+884,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+885,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+886,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+896,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+898,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+900,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+902,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+904,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+906,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+908,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+910,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+912,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+914,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+916,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+918,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+920,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+922,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+924,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+926,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+928,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+930,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+932,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+934,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+936,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+938,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+940,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+942,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+944,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+946,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+948,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+950,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+952,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+954,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+956,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+958,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+960,(vlSelf->clk));
        tracep->fullBit(oldp+961,(vlSelf->rst_n));
        tracep->fullQData(oldp+962,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+964,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+966,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+967,(vlSelf->regA0),64);
        tracep->fullBit(oldp+969,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+970,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+971,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+972,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+974,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+975,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+976,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+977,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+978,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+979,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+980,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+981,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+982,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+983,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+984,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+985,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+986,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+987,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+989,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+990,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+991,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+992,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+993,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+994,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+996,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+997,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+998,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+999,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+1000,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+1001,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+1002,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+1003,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+1004,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+1005,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+1006,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+1007,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+1008,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+1010,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+1011,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+1012,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+1013,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+1014,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+1015,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+1016,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+1017,(vlSelf->axi_b_user_i));
        tracep->fullQData(oldp+1018,(vlSelf->nh),64);
        tracep->fullQData(oldp+1020,(vlSelf->nr),64);
        tracep->fullQData(oldp+1022,(vlSelf->inh),64);
        tracep->fullQData(oldp+1024,(vlSelf->inr),64);
        tracep->fullBit(oldp+1026,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 0U : 1U) ? 0U
                                     : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+1027,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (3U & 
                                               ((0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x1cU))))
                                                 ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                 : 
                                                ((2U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U))))
                                                  ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                                  : (IData)(vlSelf->axi_r_resp_i)))))),2);
        tracep->fullBit(oldp+1028,(((0xaU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU))))
                                     ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                     : ((2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                         ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)
                                         : (IData)(vlSelf->axi_aw_ready_i)))));
        tracep->fullBit(oldp+1029,(((0xaU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU))))
                                     ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                     : ((2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                         ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid)
                                         : (IData)(vlSelf->axi_b_valid_i)))));
        tracep->fullCData(oldp+1030,(((0xaU == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU))))
                                       ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp)
                                       : ((2U == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                           ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                           : (IData)(vlSelf->axi_b_resp_i)))),2);
        tracep->fullCData(oldp+1031,(((0xaU == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU))))
                                       ? 1U : ((2U 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U))))
                                                ? 1U
                                                : (0xfU 
                                                   & (IData)(vlSelf->axi_b_id_i))))),4);
        tracep->fullBit(oldp+1032,((1U & ((0xaU == 
                                           (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))
                                           ? (IData)(vlSelf->top__DOT__axi_mmio_b_user_i)
                                           : ((2U == 
                                               (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                               ? 0U
                                               : (IData)(vlSelf->axi_b_user_i))))));
        tracep->fullBit(oldp+1033,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 0U : 1U) ? 
                                    (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                     : 0U)));
        tracep->fullCData(oldp+1034,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? (3U & ((0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x1cU))))
                                                 ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                 : 
                                                ((2U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U))))
                                                  ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                                  : (IData)(vlSelf->axi_r_resp_i))))
                                       : 0U)),2);
        tracep->fullQData(oldp+1035,(((((((((- (QData)((IData)(
                                                               ((3U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                     >> 3U))) 
                                                                & (0U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                       >> 0xfU))))))) 
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
                                                                       >> 3U))) 
                                                                  & (4U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                         >> 0xfU))))))) 
                                              & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                          | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                             & (((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h) 
                                                                        >> 0xfU))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
                                         | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))) 
                                            & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                        | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))) 
                                           & (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                                       | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))) 
                                          & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                                      | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld))) 
                                         & vlSelf->top__DOT__ls_sram_rd_data))),64);
        tracep->fullCData(oldp+1037,(((0xaU == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU))))
                                       ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                       : ((2U == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                           ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                           : (IData)(vlSelf->axi_r_resp_i)))),2);
        tracep->fullBit(oldp+1038,((1U & ((0xaU == 
                                           (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))
                                           ? (IData)(vlSelf->top__DOT__axi_mmio_r_user_i)
                                           : ((2U == 
                                               (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                               ? 0U
                                               : (IData)(vlSelf->axi_r_user_i))))));
        tracep->fullBit(oldp+1039,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                    & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+1040,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                    & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+1041,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                       ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                           ? (0x1fffffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))
                                           : 0U) : 0U)),21);
        tracep->fullIData(oldp+1042,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                       ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                           ? 0U : (0x1fffffU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 0xbU))))
                                       : 0U)),21);
        tracep->fullQData(oldp+1043,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                        & (0ULL != vlSelf->top__DOT__pc_new)) 
                                       | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                           & (0ULL 
                                              != vlSelf->top__DOT__pc_new)) 
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
        tracep->fullQData(oldp+1045,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                        & (0ULL != vlSelf->top__DOT__pc_new)) 
                                       | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                           & (0ULL 
                                              != vlSelf->top__DOT__pc_new)) 
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
        tracep->fullBit(oldp+1047,((1U & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 5U) & 
                                          ((~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__resultValidReg_q) 
                                               | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))) 
                                           | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy) 
                                              | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid)))))));
        tracep->fullBit(oldp+1048,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__resultValidReg_q) 
                                    | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))));
        tracep->fullBit(oldp+1049,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__resultValidReg_q));
        tracep->fullIData(oldp+1050,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                       ? ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                           ? ((0x40U 
                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                               ? ((
                                                   ((IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                               >> 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))
                                                   ? 
                                                  ((vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                                    [
                                                    (0x3fU 
                                                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))] 
                                                    << 0xbU) 
                                                   | (0x7e0U 
                                                      & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                                                         << 5U)))
                                                   : 0U)
                                               : ((
                                                   ((IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                               >> 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))
                                                   ? 
                                                  ((vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                                    [
                                                    (0x3fU 
                                                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))] 
                                                    << 0xbU) 
                                                   | (0x7e0U 
                                                      & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                                                         << 5U)))
                                                   : 0U))
                                           : 0U) : 
                                      ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                        ? ((IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 3U)) 
                                           << 3U) : 
                                       ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
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
                                                  << 5U))))))),32);
        tracep->fullBit(oldp+1051,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                    & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                       | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)))))))));
        tracep->fullBit(oldp+1052,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                    & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                       | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)))))))));
        tracep->fullIData(oldp+1053,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+1054,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                       ? (0x1fffffU 
                                          & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                              ? (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 0xbU))
                                              : vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))]))
                                       : 0U)),21);
        tracep->fullQData(oldp+1055,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+1057,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+1059,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
                                    & ((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                    >> 0x20U))) 
                                        & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk))) 
                                       | ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncached)) 
                                          & (((((1U 
                                                 == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U))) 
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
                                                                           >> 5U)))))))) 
                                             | ((((1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
                                                                             >> 5U))))))))))))));
        tracep->fullIData(oldp+1060,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                       ? ((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)) 
                                          << 3U) : 
                                      ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
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
        tracep->fullIData(oldp+1061,(0x40U),32);
        tracep->fullIData(oldp+1062,(4U),32);
        tracep->fullIData(oldp+1063,(8U),32);
        tracep->fullIData(oldp+1064,(1U),32);
        tracep->fullCData(oldp+1065,(0U),3);
        tracep->fullBit(oldp+1066,(0U));
        tracep->fullBit(oldp+1067,(0U));
        tracep->fullCData(oldp+1068,(0U),4);
        tracep->fullBit(oldp+1069,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+1070,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+1071,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+1072,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+1073,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+1074,(1U),2);
        tracep->fullCData(oldp+1075,(2U),4);
        tracep->fullCData(oldp+1076,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+1077,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+1078,(1U),4);
        tracep->fullCData(oldp+1079,(0xfU),4);
        tracep->fullCData(oldp+1080,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+1081,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+1082,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+1084,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+1085,(1U));
        tracep->fullBit(oldp+1086,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+1087,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullBit(oldp+1088,(0U));
        tracep->fullQData(oldp+1089,(0ULL),64);
        tracep->fullCData(oldp+1091,(0U),8);
        tracep->fullCData(oldp+1092,(1U),3);
        tracep->fullCData(oldp+1093,(2U),3);
        tracep->fullCData(oldp+1094,(3U),3);
        tracep->fullCData(oldp+1095,(7U),3);
        tracep->fullCData(oldp+1096,(6U),3);
        tracep->fullBit(oldp+1097,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+1098,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+1099,(0x80U),32);
        tracep->fullIData(oldp+1100,(6U),32);
        __Vtemp558[0U] = 0U;
        __Vtemp558[1U] = 0U;
        __Vtemp558[2U] = 0U;
        __Vtemp558[3U] = 0U;
        tracep->fullWData(oldp+1101,(__Vtemp558),128);
        __Vtemp559[0U] = 0xffffffffU;
        __Vtemp559[1U] = 0xffffffffU;
        __Vtemp559[2U] = 0xffffffffU;
        __Vtemp559[3U] = 0xffffffffU;
        tracep->fullWData(oldp+1105,(__Vtemp559),128);
        tracep->fullCData(oldp+1109,(0U),2);
        tracep->fullCData(oldp+1110,(3U),2);
        tracep->fullCData(oldp+1111,(2U),2);
        tracep->fullIData(oldp+1112,(3U),32);
        tracep->fullIData(oldp+1113,(0x60U),32);
        tracep->fullIData(oldp+1114,(0U),32);
        tracep->fullIData(oldp+1115,(0x13cU),32);
        tracep->fullIData(oldp+1116,(0x108U),32);
        tracep->fullBit(oldp+1117,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+1118,(0xe3U),32);
        tracep->fullCData(oldp+1119,(4U),3);
        tracep->fullBit(oldp+1120,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+1121,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+1122,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullCData(oldp+1123,(3U),8);
        tracep->fullIData(oldp+1124,(0x121U),32);
        tracep->fullIData(oldp+1125,(0x40U),32);
        tracep->fullIData(oldp+1126,(3U),32);
        tracep->fullIData(oldp+1127,(1U),32);
        tracep->fullQData(oldp+1128,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+1130,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
