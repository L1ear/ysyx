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
        tracep->declBit(c+1039,"clk", false,-1);
        tracep->declBit(c+1040,"rst_n", false,-1);
        tracep->declQuad(c+1041,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+1043,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+1045,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+1046,"regA0", false,-1, 63,0);
        tracep->declBit(c+1048,"stall_n_diff", false,-1);
        tracep->declBit(c+1049,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+1050,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+1051,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1053,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1054,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1055,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1056,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1057,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1058,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1059,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+1060,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1061,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1062,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1063,"axi_r_ready_o", false,-1);
        tracep->declBit(c+1064,"axi_r_valid_i", false,-1);
        tracep->declBus(c+1065,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1066,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1068,"axi_r_last_i", false,-1);
        tracep->declBus(c+1069,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1070,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1071,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+1072,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+1073,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1075,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1076,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1077,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1078,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1079,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1080,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1081,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+1082,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1083,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1084,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1085,"axi_w_ready_i", false,-1);
        tracep->declBit(c+1086,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+1087,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1089,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1090,"axi_w_last_o", false,-1);
        tracep->declBus(c+1091,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1092,"axi_b_ready_o", false,-1);
        tracep->declBit(c+1093,"axi_b_valid_i", false,-1);
        tracep->declBus(c+1094,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1095,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1096,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+1129,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1129,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1129,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1129,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1130,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1131,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1039,"top clk", false,-1);
        tracep->declBit(c+1040,"top rst_n", false,-1);
        tracep->declQuad(c+1041,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+1043,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+1045,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+1046,"top regA0", false,-1, 63,0);
        tracep->declBit(c+1048,"top stall_n_diff", false,-1);
        tracep->declBit(c+1049,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+1050,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+1051,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1053,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1054,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1055,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1056,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1057,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1058,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1059,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+1060,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1061,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1062,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1063,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+1064,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+1065,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1066,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1068,"top axi_r_last_i", false,-1);
        tracep->declBus(c+1069,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1070,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1071,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+1072,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+1073,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1075,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1076,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1077,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1078,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1079,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1080,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1081,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+1082,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1083,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1084,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1085,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+1086,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+1087,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1089,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1090,"top axi_w_last_o", false,-1);
        tracep->declBus(c+1091,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1092,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+1093,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+1094,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1095,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1096,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+387,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+538,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+539,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+349,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1134,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+350,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+541,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+542,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1135,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+543,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+351,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+544,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+388,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+389,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+390,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1137,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+1138,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1139,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+392,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+545,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+393,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+395,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1134,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+515,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+396,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+397,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1135,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+398,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+399,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+546,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+516,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+400,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+518,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+1134,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+547,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+401,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+402,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1140,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1141,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top instr_fetching", false,-1);
        tracep->declBit(c+1097,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1133,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1136,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1134,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+548,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+549,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1142,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1135,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+1143,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1144,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+926,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+1098,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+927,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+929,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+930,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1145,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1099,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+550,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+403,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1133,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1146,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1134,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+551,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+405,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1142,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1135,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+1147,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+931,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+552,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+553,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+406,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+555,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+1134,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+556,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+1100,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+1101,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1102,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1103,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1104,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1133,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1146,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1134,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+551,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+352,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1142,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1135,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+1143,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1148,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+932,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+1105,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+933,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+935,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+930,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1149,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+1150,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+557,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+559,"top is_jump", false,-1);
        tracep->declQuad(c+560,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+904,"top pc_stall_n", false,-1);
        tracep->declBit(c+936,"top if_stall_n", false,-1);
        tracep->declBit(c+562,"top if_instr_valid", false,-1);
        tracep->declBit(c+1152,"top sram_data_valid", false,-1);
        tracep->declQuad(c+563,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+565,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+1153,"top sram_ren", false,-1);
        tracep->declBit(c+567,"top sram_addr_valid", false,-1);
        tracep->declBit(c+568,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+569,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+570,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+571,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+573,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+912,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+914,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+574,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+576,"top src1sel_id", false,-1);
        tracep->declBus(c+577,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+578,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+579,"top is_brc_id", false,-1);
        tracep->declBit(c+580,"top is_jal_id", false,-1);
        tracep->declBit(c+581,"top is_jalr_id", false,-1);
        tracep->declBit(c+582,"top wben_id", false,-1);
        tracep->declBus(c+583,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+584,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+905,"top id_stall_n", false,-1);
        tracep->declBit(c+585,"top DivEn_id", false,-1);
        tracep->declBus(c+586,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+587,"top in_trap_id", false,-1);
        tracep->declBit(c+588,"top out_trap_id", false,-1);
        tracep->declBit(c+589,"top trap_id", false,-1);
        tracep->declBit(c+590,"top ld_use_hazard", false,-1);
        tracep->declBit(c+591,"top id_flush", false,-1);
        tracep->declQuad(c+592,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+594,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+595,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+597,"top src1sel_ex", false,-1);
        tracep->declBus(c+598,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+599,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+601,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+603,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+605,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+607,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+608,"top is_brc_ex", false,-1);
        tracep->declBit(c+609,"top is_jal_ex", false,-1);
        tracep->declBit(c+610,"top is_jalr_ex", false,-1);
        tracep->declBit(c+611,"top wben_ex", false,-1);
        tracep->declBit(c+612,"top DivEn_ex", false,-1);
        tracep->declBus(c+613,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+614,"top trap_ex", false,-1);
        tracep->declBit(c+906,"top ex_stall_n", false,-1);
        tracep->declQuad(c+10,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+615,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+616,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+617,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+618,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+619,"top ex_flush", false,-1);
        tracep->declBit(c+620,"top rden_ls", false,-1);
        tracep->declBit(c+621,"top wren_ls", false,-1);
        tracep->declBit(c+907,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+937,"top ex_not_ok", false,-1);
        tracep->declQuad(c+12,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+18,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+1106,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+19,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+26,"top trap_ls", false,-1);
        tracep->declBit(c+938,"top ls_stall_n", false,-1);
        tracep->declBit(c+939,"top ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+353,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+622,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+1154,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+1155,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+940,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+623,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+624,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+626,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+628,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+630,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+631,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+633,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+634,"top wben_wb", false,-1);
        tracep->declQuad(c+635,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+938,"top wb_stall_n", false,-1);
        tracep->declQuad(c+637,"top clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1133,"top clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+639,"top clint_axi_arvalid", false,-1);
        tracep->declBit(c+407,"top clint_axi_arready", false,-1);
        tracep->declBus(c+640,"top clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+408,"top clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+409,"top clint_axi_rvalid", false,-1);
        tracep->declBit(c+641,"top clint_axi_rready", false,-1);
        tracep->declBus(c+410,"top clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+411,"top clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1133,"top clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+642,"top clint_axi_awvalid", false,-1);
        tracep->declBit(c+413,"top clint_axi_awready", false,-1);
        tracep->declQuad(c+643,"top clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+414,"top clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+645,"top clint_axi_wvalid", false,-1);
        tracep->declBit(c+415,"top clint_axi_wready", false,-1);
        tracep->declBus(c+408,"top clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+416,"top clint_axi_bvalid", false,-1);
        tracep->declBit(c+646,"top clint_axi_bready", false,-1);
        tracep->declBit(c+647,"top rw_valid_i", false,-1);
        tracep->declBit(c+32,"top rw_ready_o", false,-1);
        tracep->declBus(c+548,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+929,"top rdLast_o", false,-1);
        tracep->declBus(c+355,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+927,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+942,"top dataValid_o", false,-1);
        tracep->declBit(c+648,"top fence_id", false,-1);
        tracep->declBit(c+649,"top fence_ex", false,-1);
        tracep->declBit(c+356,"top ld_csr_hazard", false,-1);
        tracep->declBit(c+33,"top ls_flush", false,-1);
        tracep->declBit(c+33,"top in_intr_ls", false,-1);
        tracep->declBit(c+939,"top dataNotOk", false,-1);
        tracep->declBit(c+34,"top fence_ls", false,-1);
        tracep->declBit(c+650,"top clear_Icache", false,-1);
        tracep->declBit(c+651,"top DcacheRdValid", false,-1);
        tracep->declBit(c+652,"top DcacheWrValid", false,-1);
        tracep->declBit(c+35,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+551,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+935,"top lsRdLast", false,-1);
        tracep->declQuad(c+653,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+655,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+933,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+943,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+657,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+519,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+551,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+658,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+659,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+352,"top lsLoadSize", false,-1, 2,0);
        tracep->declBus(c+1129,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1129,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1129,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1129,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1130,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1131,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+1097,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+1136,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+1134,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+548,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+549,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+1142,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+1135,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+1143,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+1144,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+926,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+1098,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+927,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+929,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+930,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+1145,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+1099,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+550,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+403,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+1146,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+1134,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+551,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+405,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+1142,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+1135,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+1147,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+931,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+552,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+553,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+406,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+555,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+1134,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+556,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+1100,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+1101,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+1102,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+1103,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+1104,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+6,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+7,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+1146,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+1134,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+551,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+352,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+1142,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+1135,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+1143,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+1148,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+932,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+1105,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+933,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+935,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+930,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+1149,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+1071,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+1072,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+1073,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1075,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1076,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1077,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1078,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1079,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1080,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1081,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+1082,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1083,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1084,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1085,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+1086,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+1087,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1089,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1090,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+1091,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1092,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+1093,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+1094,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1095,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1096,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1049,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+1050,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+1051,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1053,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1054,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1055,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1056,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1057,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1058,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1059,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+1060,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1061,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1062,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1063,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+1064,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+1065,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1066,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1068,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+1069,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1070,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+392,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+545,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+393,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+395,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1134,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+515,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+396,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+397,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1135,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+398,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+399,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+546,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+516,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+400,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+518,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+1134,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+547,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+401,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+402,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1146,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1141,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+387,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+538,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+539,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+349,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1134,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+350,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+541,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+542,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1135,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+543,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+351,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+544,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+388,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+389,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+390,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+388,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+1146,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1139,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+637,"top axi_crossbar_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_crossbar_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+639,"top axi_crossbar_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+407,"top axi_crossbar_u clint_axi_arready", false,-1);
        tracep->declBus(c+640,"top axi_crossbar_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top axi_crossbar_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+408,"top axi_crossbar_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+409,"top axi_crossbar_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+641,"top axi_crossbar_u clint_axi_rready", false,-1);
        tracep->declBus(c+410,"top axi_crossbar_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+411,"top axi_crossbar_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_crossbar_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+642,"top axi_crossbar_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+413,"top axi_crossbar_u clint_axi_awready", false,-1);
        tracep->declQuad(c+643,"top axi_crossbar_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+414,"top axi_crossbar_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+645,"top axi_crossbar_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+415,"top axi_crossbar_u clint_axi_wready", false,-1);
        tracep->declBus(c+408,"top axi_crossbar_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+416,"top axi_crossbar_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+646,"top axi_crossbar_u clint_axi_bready", false,-1);
        tracep->declBit(c+1099,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+550,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+403,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+1146,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+1134,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+551,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+405,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1142,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+1135,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+1147,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+931,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+552,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+553,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+406,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+555,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+1134,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+556,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+1100,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+1101,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+1102,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1103,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+944,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+36,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+660,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+37,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+1134,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+357,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+662,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1142,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+1156,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+1143,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+663,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+945,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+1108,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+946,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+948,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+930,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+1109,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+664,"top axi_crossbar_u clint_r_trans", false,-1);
        tracep->declBit(c+417,"top axi_crossbar_u clint_w_trans", false,-1);
        tracep->declBit(c+665,"top axi_crossbar_u perip_r_trans", false,-1);
        tracep->declBit(c+418,"top axi_crossbar_u perip_w_trans", false,-1);
        tracep->declBit(c+1039,"top IF_u clk", false,-1);
        tracep->declBit(c+1040,"top IF_u rst_n", false,-1);
        tracep->declBit(c+559,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+560,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+587,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+588,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+936,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+557,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+570,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+562,"top IF_u if_instr_valid", false,-1);
        tracep->declBit(c+33,"top IF_u in_intr_ls", false,-1);
        tracep->declQuad(c+563,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+1152,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+568,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+569,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+565,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+1153,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+567,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+565,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+1039,"top cache_dut clk", false,-1);
        tracep->declBit(c+1040,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+666,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+567,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+1135,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+1157,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+1159,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+936,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+568,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+667,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+569,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+563,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+650,"top cache_dut clrValid", false,-1);
        tracep->declBit(c+647,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+32,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+548,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+929,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+355,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+927,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+942,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+1133,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+1160,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+1161,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+1162,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+1163,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+1164,"top cache_dut unCacheOp", false,-1, 2,0);
        tracep->declBus(c+668,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+949,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+669,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+39,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+40,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+419,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+423,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+427,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+431,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+670,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+674,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+670,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+674,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+678,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+679,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+680,"top cache_dut uncached", false,-1);
        tracep->declBit(c+41,"top cache_dut uncachedOk", false,-1);
        tracep->declBit(c+681,"top cache_dut diffAddr", false,-1);
        tracep->declBit(c+682,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+42,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+44,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+45,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+46,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+47,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+49,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+51,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+52,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+1110,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+1111,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+1112,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+1113,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+53,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+54,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+1165,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+1166,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+683,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+435,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+443,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+1114,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+1116,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+684,"top cache_dut missEn", false,-1);
        tracep->declBit(c+685,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+55,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+451,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+57,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+686,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+687,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+695,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+1167,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1129,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1168,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1167,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+419,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+1039,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+696,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+697,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+1169,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+950,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+670,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+698,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+678,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+1173,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1167,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1129,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1168,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1167,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+423,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+1039,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+699,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+697,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+1169,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+951,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+674,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+700,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+678,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+1173,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1167,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1129,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1168,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1167,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+427,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+1039,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+701,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+702,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+1169,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+952,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+670,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+703,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+679,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+1173,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1167,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1129,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1168,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1167,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+431,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+1039,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+704,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+702,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+1169,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+953,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+674,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+705,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+679,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+1173,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1129,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1129,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1129,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1129,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1130,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1131,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1039,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+1040,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+647,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+32,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+927,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+358,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+548,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+929,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+942,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+1,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+1097,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1136,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1134,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+548,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+549,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1142,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1135,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+1143,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1144,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+926,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+1098,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+927,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+929,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+930,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1145,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+1177,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+1142,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+1178,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+1179,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+58,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+954,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+2,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+5,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+1180,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1136,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+1135,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+548,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+549,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+1039,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+1040,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+557,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+570,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+905,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+591,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+571,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+573,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+706,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+708,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+1181,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1182,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1039,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+1040,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+905,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+709,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+712,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+1039,"top ID_u clk", false,-1);
        tracep->declBit(c+1040,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+571,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+624,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+630,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+573,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+631,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+633,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+634,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+914,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+912,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+574,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+576,"top ID_u src1sel", false,-1);
        tracep->declBus(c+577,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+578,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+581,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+580,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+579,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+582,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+583,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+584,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+1046,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+585,"top ID_u DivEn", false,-1);
        tracep->declBus(c+586,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+589,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+587,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+588,"top ID_u out_trap_id", false,-1);
        tracep->declBit(c+648,"top ID_u fence_id", false,-1);
        tracep->declBus(c+715,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+574,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+914,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+912,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+571,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+573,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+583,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+584,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+715,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+576,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+577,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+578,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+581,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+580,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+579,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+582,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+585,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+586,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+589,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+587,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+588,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBit(c+648,"top ID_u decoder_u fence_id", false,-1);
        tracep->declBus(c+716,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+717,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+718,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+719,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+715,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+574,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+1039,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+624,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+630,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+583,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+914,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+584,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+912,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+633,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+631,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+634,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+1046,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+975+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+573,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+594,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBus(c+18,"top hazard_detect_u instr_ls_i", false,-1, 31,0);
        tracep->declBus(c+630,"top hazard_detect_u instr_wb_i", false,-1, 31,0);
        tracep->declBit(c+590,"top hazard_detect_u ld_use_hazard", false,-1);
        tracep->declBit(c+356,"top hazard_detect_u ld_csr_hazard", false,-1);
        tracep->declBit(c+720,"top hazard_detect_u wb_is_load", false,-1);
        tracep->declBit(c+59,"top hazard_detect_u ls_is_csropi", false,-1);
        tracep->declBit(c+1039,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+1040,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+906,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+619,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+571,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+573,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+574,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+912,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+914,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+578,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+581,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+580,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+579,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+576,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+577,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+582,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+583,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+584,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+585,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+586,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+589,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declBit(c+648,"top EX_reg_u fence_ex_reg_i", false,-1);
        tracep->declQuad(c+592,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+594,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+599,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+601,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+603,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+607,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+610,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+609,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+608,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+597,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+598,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+611,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+617,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+618,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+612,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+613,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+614,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declBit(c+649,"top EX_reg_u fence_ex_reg_o", false,-1);
        tracep->declQuad(c+721,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+723,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+724,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+725,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+726,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+727,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+728,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBit(c+729,"top EX_reg_u fence_ex_reg", false,-1);
        tracep->declBus(c+1183,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1182,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1039,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+1040,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+906,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+916,"top EX_reg_u ex_reg i_din", false,-1, 315,0);
        tracep->declArray(c+730,"top EX_reg_u ex_reg o_dout", false,-1, 315,0);
        tracep->declBit(c+1039,"top ex_stage_u clk", false,-1);
        tracep->declBit(c+1040,"top ex_stage_u rst_n", false,-1);
        tracep->declBus(c+607,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+601,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+599,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+603,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+592,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+594,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+610,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+609,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+608,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+597,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+598,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+615,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+616,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+16,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+631,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+612,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+613,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declBit(c+619,"top ex_stage_u flush_ex_i", false,-1);
        tracep->declQuad(c+595,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+560,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+605,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+559,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+937,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+620,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+621,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+907,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+740,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+742,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+744,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+605,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBit(c+746,"top ex_stage_u aluNotOk", false,-1);
        tracep->declBit(c+1039,"top ex_stage_u u_ALU clk", false,-1);
        tracep->declBit(c+1040,"top ex_stage_u u_ALU rst_n", false,-1);
        tracep->declBus(c+607,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+740,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+742,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+612,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+613,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declBit(c+619,"top ex_stage_u u_ALU flush_alu", false,-1);
        tracep->declQuad(c+595,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+747,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+748,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declBit(c+746,"top ex_stage_u u_ALU aluNotOk", false,-1);
        tracep->declQuad(c+749,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+751,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+752,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+754,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+756,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+756,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+757,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+758,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+759,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+761,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+762,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+763,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+765,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+767,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+60,"top ex_stage_u u_ALU src1Reg", false,-1, 63,0);
        tracep->declQuad(c+62,"top ex_stage_u u_ALU src2Reg", false,-1, 63,0);
        tracep->declBit(c+769,"top ex_stage_u u_ALU diffIn", false,-1);
        tracep->declBit(c+770,"top ex_stage_u u_ALU mul_valid", false,-1);
        tracep->declBit(c+1184,"top ex_stage_u u_ALU mul_resValid", false,-1);
        tracep->declQuad(c+360,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+1185,"top ex_stage_u u_ALU mulOut", false,-1, 63,0);
        tracep->declQuad(c+64,"top ex_stage_u u_ALU divOut", false,-1, 63,0);
        tracep->declBit(c+771,"top ex_stage_u u_ALU div_valid", false,-1);
        tracep->declBit(c+66,"top ex_stage_u u_ALU div_resValid", false,-1);
        tracep->declQuad(c+740,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+752,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+751,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+754,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+761,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+748,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+762,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+772,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+758,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+756,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+757,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+751,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+756,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+773,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+740,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+774,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+757,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+756,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+759,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+775,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+777,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+779,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+781,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+783,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+785,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+787,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declBit(c+1039,"top ex_stage_u u_ALU divider clk", false,-1);
        tracep->declBit(c+1040,"top ex_stage_u u_ALU divider rst_n", false,-1);
        tracep->declQuad(c+740,"top ex_stage_u u_ALU divider dividend", false,-1, 63,0);
        tracep->declQuad(c+742,"top ex_stage_u u_ALU divider divisor", false,-1, 63,0);
        tracep->declBit(c+771,"top ex_stage_u u_ALU divider div_valid", false,-1);
        tracep->declBus(c+789,"top ex_stage_u u_ALU divider div_type", false,-1, 1,0);
        tracep->declBit(c+619,"top ex_stage_u u_ALU divider flush", false,-1);
        tracep->declBit(c+66,"top ex_stage_u u_ALU divider out_valid", false,-1);
        tracep->declQuad(c+64,"top ex_stage_u u_ALU divider result", false,-1, 63,0);
        tracep->declBus(c+67,"top ex_stage_u u_ALU divider div_type_r", false,-1, 1,0);
        tracep->declQuad(c+790,"top ex_stage_u u_ALU divider dividend_N", false,-1, 63,0);
        tracep->declQuad(c+792,"top ex_stage_u u_ALU divider divisor_N", false,-1, 63,0);
        tracep->declQuad(c+68,"top ex_stage_u u_ALU divider divisor_N_r", false,-1, 63,0);
        tracep->declQuad(c+70,"top ex_stage_u u_ALU divider divisor_P_r", false,-1, 63,0);
        tracep->declArray(c+72,"top ex_stage_u u_ALU divider dividendReg", false,-1, 127,0);
        tracep->declQuad(c+76,"top ex_stage_u u_ALU divider restore_remainder", false,-1, 63,0);
        tracep->declBus(c+78,"top ex_stage_u u_ALU divider div_cnt", false,-1, 5,0);
        tracep->declBit(c+79,"top ex_stage_u u_ALU divider div_busy", false,-1);
        tracep->declBit(c+80,"top ex_stage_u u_ALU divider dividend_sign", false,-1);
        tracep->declBit(c+81,"top ex_stage_u u_ALU divider divisor_sign", false,-1);
        tracep->declQuad(c+82,"top ex_stage_u u_ALU divider x2", false,-1, 63,0);
        tracep->declQuad(c+84,"top ex_stage_u u_ALU divider r_64", false,-1, 63,0);
        tracep->declBit(c+86,"top ex_stage_u u_ALU divider partial_q", false,-1);
        tracep->declQuad(c+87,"top ex_stage_u u_ALU divider quotient", false,-1, 63,0);
        tracep->declQuad(c+89,"top ex_stage_u u_ALU divider remainder", false,-1, 63,0);
        tracep->declQuad(c+91,"top ex_stage_u u_ALU divider remainder_s", false,-1, 63,0);
        tracep->declQuad(c+93,"top ex_stage_u u_ALU divider cla_64_u1 a_64", false,-1, 63,0);
        tracep->declQuad(c+82,"top ex_stage_u u_ALU divider cla_64_u1 b_64", false,-1, 63,0);
        tracep->declBit(c+1135,"top ex_stage_u u_ALU divider cla_64_u1 cin_64", false,-1);
        tracep->declQuad(c+95,"top ex_stage_u u_ALU divider cla_64_u1 p_64", false,-1, 63,0);
        tracep->declQuad(c+97,"top ex_stage_u u_ALU divider cla_64_u1 g_64", false,-1, 63,0);
        tracep->declQuad(c+84,"top ex_stage_u u_ALU divider cla_64_u1 s_64", false,-1, 63,0);
        tracep->declBit(c+99,"top ex_stage_u u_ALU divider cla_64_u1 gx_64", false,-1);
        tracep->declBit(c+100,"top ex_stage_u u_ALU divider cla_64_u1 px_64", false,-1);
        tracep->declBit(c+101,"top ex_stage_u u_ALU divider cla_64_u1 px1", false,-1);
        tracep->declBit(c+102,"top ex_stage_u u_ALU divider cla_64_u1 px2", false,-1);
        tracep->declBit(c+103,"top ex_stage_u u_ALU divider cla_64_u1 px3", false,-1);
        tracep->declBit(c+104,"top ex_stage_u u_ALU divider cla_64_u1 px4", false,-1);
        tracep->declBit(c+105,"top ex_stage_u u_ALU divider cla_64_u1 gx1", false,-1);
        tracep->declBit(c+106,"top ex_stage_u u_ALU divider cla_64_u1 gx2", false,-1);
        tracep->declBit(c+107,"top ex_stage_u u_ALU divider cla_64_u1 gx3", false,-1);
        tracep->declBit(c+108,"top ex_stage_u u_ALU divider cla_64_u1 gx4", false,-1);
        tracep->declBit(c+105,"top ex_stage_u u_ALU divider cla_64_u1 c15", false,-1);
        tracep->declBit(c+109,"top ex_stage_u u_ALU divider cla_64_u1 c31", false,-1);
        tracep->declBit(c+110,"top ex_stage_u u_ALU divider cla_64_u1 c47", false,-1);
        tracep->declBus(c+111,"top ex_stage_u u_ALU divider cla_64_u1 u1 a_16", false,-1, 15,0);
        tracep->declBus(c+112,"top ex_stage_u u_ALU divider cla_64_u1 u1 b_16", false,-1, 15,0);
        tracep->declBit(c+1135,"top ex_stage_u u_ALU divider cla_64_u1 u1 cin_16", false,-1);
        tracep->declBus(c+113,"top ex_stage_u u_ALU divider cla_64_u1 u1 p_16", false,-1, 15,0);
        tracep->declBus(c+114,"top ex_stage_u u_ALU divider cla_64_u1 u1 g_16", false,-1, 15,0);
        tracep->declBus(c+115,"top ex_stage_u u_ALU divider cla_64_u1 u1 s_16", false,-1, 15,0);
        tracep->declBit(c+105,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx_16", false,-1);
        tracep->declBit(c+101,"top ex_stage_u u_ALU divider cla_64_u1 u1 px_16", false,-1);
        tracep->declBit(c+116,"top ex_stage_u u_ALU divider cla_64_u1 u1 c3", false,-1);
        tracep->declBit(c+117,"top ex_stage_u u_ALU divider cla_64_u1 u1 c7", false,-1);
        tracep->declBit(c+118,"top ex_stage_u u_ALU divider cla_64_u1 u1 c11", false,-1);
        tracep->declBit(c+119,"top ex_stage_u u_ALU divider cla_64_u1 u1 px1", false,-1);
        tracep->declBit(c+120,"top ex_stage_u u_ALU divider cla_64_u1 u1 px2", false,-1);
        tracep->declBit(c+121,"top ex_stage_u u_ALU divider cla_64_u1 u1 px3", false,-1);
        tracep->declBit(c+122,"top ex_stage_u u_ALU divider cla_64_u1 u1 px4", false,-1);
        tracep->declBit(c+116,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx1", false,-1);
        tracep->declBit(c+123,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx2", false,-1);
        tracep->declBit(c+124,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx3", false,-1);
        tracep->declBit(c+125,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx4", false,-1);
        tracep->declBus(c+126,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+127,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+1135,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 cin_4", false,-1);
        tracep->declBus(c+128,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+129,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+130,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+119,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 px_4", false,-1);
        tracep->declBit(c+116,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 gx_4", false,-1);
        tracep->declBus(c+131,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+132,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+133,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+116,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 cin_4", false,-1);
        tracep->declBus(c+134,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+135,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+136,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+120,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 px_4", false,-1);
        tracep->declBit(c+123,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 gx_4", false,-1);
        tracep->declBus(c+137,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+138,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+139,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+117,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 cin_4", false,-1);
        tracep->declBus(c+140,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+141,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+142,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+121,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 px_4", false,-1);
        tracep->declBit(c+124,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 gx_4", false,-1);
        tracep->declBus(c+143,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+144,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+145,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+118,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 cin_4", false,-1);
        tracep->declBus(c+146,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+147,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+148,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+122,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 px_4", false,-1);
        tracep->declBit(c+125,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 gx_4", false,-1);
        tracep->declBus(c+149,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 c_int", false,-1, 3,0);
        tracep->declBus(c+150,"top ex_stage_u u_ALU divider cla_64_u1 u2 a_16", false,-1, 15,0);
        tracep->declBus(c+151,"top ex_stage_u u_ALU divider cla_64_u1 u2 b_16", false,-1, 15,0);
        tracep->declBit(c+105,"top ex_stage_u u_ALU divider cla_64_u1 u2 cin_16", false,-1);
        tracep->declBus(c+152,"top ex_stage_u u_ALU divider cla_64_u1 u2 p_16", false,-1, 15,0);
        tracep->declBus(c+153,"top ex_stage_u u_ALU divider cla_64_u1 u2 g_16", false,-1, 15,0);
        tracep->declBus(c+154,"top ex_stage_u u_ALU divider cla_64_u1 u2 s_16", false,-1, 15,0);
        tracep->declBit(c+106,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx_16", false,-1);
        tracep->declBit(c+102,"top ex_stage_u u_ALU divider cla_64_u1 u2 px_16", false,-1);
        tracep->declBit(c+155,"top ex_stage_u u_ALU divider cla_64_u1 u2 c3", false,-1);
        tracep->declBit(c+156,"top ex_stage_u u_ALU divider cla_64_u1 u2 c7", false,-1);
        tracep->declBit(c+157,"top ex_stage_u u_ALU divider cla_64_u1 u2 c11", false,-1);
        tracep->declBit(c+158,"top ex_stage_u u_ALU divider cla_64_u1 u2 px1", false,-1);
        tracep->declBit(c+159,"top ex_stage_u u_ALU divider cla_64_u1 u2 px2", false,-1);
        tracep->declBit(c+160,"top ex_stage_u u_ALU divider cla_64_u1 u2 px3", false,-1);
        tracep->declBit(c+161,"top ex_stage_u u_ALU divider cla_64_u1 u2 px4", false,-1);
        tracep->declBit(c+162,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx1", false,-1);
        tracep->declBit(c+163,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx2", false,-1);
        tracep->declBit(c+164,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx3", false,-1);
        tracep->declBit(c+165,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx4", false,-1);
        tracep->declBus(c+166,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+167,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+105,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 cin_4", false,-1);
        tracep->declBus(c+168,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+169,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+170,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+158,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 px_4", false,-1);
        tracep->declBit(c+162,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 gx_4", false,-1);
        tracep->declBus(c+171,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+172,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+173,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+155,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 cin_4", false,-1);
        tracep->declBus(c+174,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+175,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+176,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+159,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 px_4", false,-1);
        tracep->declBit(c+163,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 gx_4", false,-1);
        tracep->declBus(c+177,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+178,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+179,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+156,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 cin_4", false,-1);
        tracep->declBus(c+180,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+181,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+182,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+160,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 px_4", false,-1);
        tracep->declBit(c+164,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 gx_4", false,-1);
        tracep->declBus(c+183,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+184,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+185,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+157,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 cin_4", false,-1);
        tracep->declBus(c+186,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+187,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+188,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+161,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 px_4", false,-1);
        tracep->declBit(c+165,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 gx_4", false,-1);
        tracep->declBus(c+189,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 c_int", false,-1, 3,0);
        tracep->declBus(c+190,"top ex_stage_u u_ALU divider cla_64_u1 u3 a_16", false,-1, 15,0);
        tracep->declBus(c+191,"top ex_stage_u u_ALU divider cla_64_u1 u3 b_16", false,-1, 15,0);
        tracep->declBit(c+109,"top ex_stage_u u_ALU divider cla_64_u1 u3 cin_16", false,-1);
        tracep->declBus(c+192,"top ex_stage_u u_ALU divider cla_64_u1 u3 p_16", false,-1, 15,0);
        tracep->declBus(c+193,"top ex_stage_u u_ALU divider cla_64_u1 u3 g_16", false,-1, 15,0);
        tracep->declBus(c+194,"top ex_stage_u u_ALU divider cla_64_u1 u3 s_16", false,-1, 15,0);
        tracep->declBit(c+107,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx_16", false,-1);
        tracep->declBit(c+103,"top ex_stage_u u_ALU divider cla_64_u1 u3 px_16", false,-1);
        tracep->declBit(c+195,"top ex_stage_u u_ALU divider cla_64_u1 u3 c3", false,-1);
        tracep->declBit(c+196,"top ex_stage_u u_ALU divider cla_64_u1 u3 c7", false,-1);
        tracep->declBit(c+197,"top ex_stage_u u_ALU divider cla_64_u1 u3 c11", false,-1);
        tracep->declBit(c+198,"top ex_stage_u u_ALU divider cla_64_u1 u3 px1", false,-1);
        tracep->declBit(c+199,"top ex_stage_u u_ALU divider cla_64_u1 u3 px2", false,-1);
        tracep->declBit(c+200,"top ex_stage_u u_ALU divider cla_64_u1 u3 px3", false,-1);
        tracep->declBit(c+201,"top ex_stage_u u_ALU divider cla_64_u1 u3 px4", false,-1);
        tracep->declBit(c+202,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx1", false,-1);
        tracep->declBit(c+203,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx2", false,-1);
        tracep->declBit(c+204,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx3", false,-1);
        tracep->declBit(c+205,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx4", false,-1);
        tracep->declBus(c+206,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+207,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+109,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 cin_4", false,-1);
        tracep->declBus(c+208,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+209,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+210,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+198,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 px_4", false,-1);
        tracep->declBit(c+202,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 gx_4", false,-1);
        tracep->declBus(c+211,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+212,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+213,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+195,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 cin_4", false,-1);
        tracep->declBus(c+214,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+215,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+216,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+199,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 px_4", false,-1);
        tracep->declBit(c+203,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 gx_4", false,-1);
        tracep->declBus(c+217,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+218,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+219,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+196,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 cin_4", false,-1);
        tracep->declBus(c+220,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+221,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+222,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+200,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 px_4", false,-1);
        tracep->declBit(c+204,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 gx_4", false,-1);
        tracep->declBus(c+223,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+224,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+225,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+197,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 cin_4", false,-1);
        tracep->declBus(c+226,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+227,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+228,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+201,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 px_4", false,-1);
        tracep->declBit(c+205,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 gx_4", false,-1);
        tracep->declBus(c+229,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 c_int", false,-1, 3,0);
        tracep->declBus(c+230,"top ex_stage_u u_ALU divider cla_64_u1 u4 a_16", false,-1, 15,0);
        tracep->declBus(c+231,"top ex_stage_u u_ALU divider cla_64_u1 u4 b_16", false,-1, 15,0);
        tracep->declBit(c+110,"top ex_stage_u u_ALU divider cla_64_u1 u4 cin_16", false,-1);
        tracep->declBus(c+232,"top ex_stage_u u_ALU divider cla_64_u1 u4 p_16", false,-1, 15,0);
        tracep->declBus(c+233,"top ex_stage_u u_ALU divider cla_64_u1 u4 g_16", false,-1, 15,0);
        tracep->declBus(c+234,"top ex_stage_u u_ALU divider cla_64_u1 u4 s_16", false,-1, 15,0);
        tracep->declBit(c+108,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx_16", false,-1);
        tracep->declBit(c+104,"top ex_stage_u u_ALU divider cla_64_u1 u4 px_16", false,-1);
        tracep->declBit(c+235,"top ex_stage_u u_ALU divider cla_64_u1 u4 c3", false,-1);
        tracep->declBit(c+236,"top ex_stage_u u_ALU divider cla_64_u1 u4 c7", false,-1);
        tracep->declBit(c+237,"top ex_stage_u u_ALU divider cla_64_u1 u4 c11", false,-1);
        tracep->declBit(c+238,"top ex_stage_u u_ALU divider cla_64_u1 u4 px1", false,-1);
        tracep->declBit(c+239,"top ex_stage_u u_ALU divider cla_64_u1 u4 px2", false,-1);
        tracep->declBit(c+240,"top ex_stage_u u_ALU divider cla_64_u1 u4 px3", false,-1);
        tracep->declBit(c+241,"top ex_stage_u u_ALU divider cla_64_u1 u4 px4", false,-1);
        tracep->declBit(c+242,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx1", false,-1);
        tracep->declBit(c+243,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx2", false,-1);
        tracep->declBit(c+244,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx3", false,-1);
        tracep->declBit(c+245,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx4", false,-1);
        tracep->declBus(c+246,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+247,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+110,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 cin_4", false,-1);
        tracep->declBus(c+248,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+249,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+250,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+238,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 px_4", false,-1);
        tracep->declBit(c+242,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 gx_4", false,-1);
        tracep->declBus(c+251,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+252,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+253,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+235,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 cin_4", false,-1);
        tracep->declBus(c+254,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+255,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+256,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+239,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 px_4", false,-1);
        tracep->declBit(c+243,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 gx_4", false,-1);
        tracep->declBus(c+257,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+258,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+259,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+236,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 cin_4", false,-1);
        tracep->declBus(c+260,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+261,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+262,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+240,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 px_4", false,-1);
        tracep->declBit(c+244,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 gx_4", false,-1);
        tracep->declBus(c+263,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+264,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+265,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+237,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 cin_4", false,-1);
        tracep->declBus(c+266,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+267,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+268,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+241,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 px_4", false,-1);
        tracep->declBit(c+245,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 gx_4", false,-1);
        tracep->declBus(c+269,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 c_int", false,-1, 3,0);
        tracep->declQuad(c+744,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+605,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+610,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+609,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+608,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+794,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+603,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+592,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+560,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+559,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+795,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+797,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+1187,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+799,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+800,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+801,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+802,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+804,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+806,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+1039,"top forwarding_u clk", false,-1);
        tracep->declBit(c+1040,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+617,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+618,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+270,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+633,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+19,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+634,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+631,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+938,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+615,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+616,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+10,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+10,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+271,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+272,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+362,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+807,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+363,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+364,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+808,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+365,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+1039,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+1040,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+592,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+605,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+594,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+595,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+611,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+614,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+938,"top L_S_reg_u stall_n", false,-1);
        tracep->declBit(c+33,"top L_S_reg_u flush_i", false,-1);
        tracep->declBit(c+649,"top L_S_reg_u fence_ls_reg_i", false,-1);
        tracep->declQuad(c+12,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+18,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+16,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+19,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+26,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBit(c+34,"top L_S_reg_u fence_ls_reg_o", false,-1);
        tracep->declArray(c+366,"top L_S_reg_u bundle", false,-1, 226,0);
        tracep->declBus(c+1188,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1182,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1039,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+1040,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+938,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+366,"top L_S_reg_u ls_reg i_din", false,-1, 226,0);
        tracep->declArray(c+273,"top L_S_reg_u ls_reg o_dout", false,-1, 226,0);
        tracep->declBit(c+1039,"top ls_u clk", false,-1);
        tracep->declBit(c+1040,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+626,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+630,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+628,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+635,"top ls_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+938,"top ls_u stall_n", false,-1);
        tracep->declBit(c+936,"top ls_u if_stall_n", false,-1);
        tracep->declQuad(c+1106,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+939,"top ls_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top ls_u in_intr_ls", false,-1);
        tracep->declBit(c+356,"top ls_u ld_csr_hazard", false,-1);
        tracep->declQuad(c+624,"top ls_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+592,"top ls_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+571,"top ls_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+557,"top ls_u if_pc", false,-1, 63,0);
        tracep->declQuad(c+637,"top ls_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1133,"top ls_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+639,"top ls_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+407,"top ls_u clint_axi_arready", false,-1);
        tracep->declBus(c+640,"top ls_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+408,"top ls_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+409,"top ls_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+641,"top ls_u clint_axi_rready", false,-1);
        tracep->declBus(c+410,"top ls_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+411,"top ls_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1133,"top ls_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+642,"top ls_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+413,"top ls_u clint_axi_awready", false,-1);
        tracep->declQuad(c+643,"top ls_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+414,"top ls_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+645,"top ls_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+415,"top ls_u clint_axi_wready", false,-1);
        tracep->declBus(c+408,"top ls_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+416,"top ls_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+646,"top ls_u clint_axi_bready", false,-1);
        tracep->declQuad(c+16,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+353,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+622,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+623,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+939,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+939,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+940,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u rden", false,-1);
        tracep->declBus(c+281,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+353,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+809,"top ls_u wren_last", false,-1);
        tracep->declQuad(c+810,"top ls_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+955,"top ls_u csr_stall_n", false,-1);
        tracep->declBit(c+282,"top ls_u timr_int", false,-1);
        tracep->declBit(c+1039,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+1040,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+281,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+353,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+626,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+809,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+1106,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+939,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+353,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+622,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+623,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+939,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+939,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+940,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+940,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+283,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+284,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+285,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+286,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+287,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+288,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+289,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+29,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+956,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+957,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+958,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+623,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+622,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+290,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+291,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+292,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+293,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+18,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+630,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+628,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+635,"top ls_u ls_ctr_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+281,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+353,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+374,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+375,"top ls_u ls_ctr_u csr_st_en", false,-1);
        tracep->declBit(c+1039,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+1040,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+624,"top ls_u CSR_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+592,"top ls_u CSR_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+571,"top ls_u CSR_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+557,"top ls_u CSR_u if_pc", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+810,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+955,"top ls_u CSR_u stall_n", false,-1);
        tracep->declBit(c+282,"top ls_u CSR_u timer_int_i", false,-1);
        tracep->declBit(c+33,"top ls_u CSR_u in_intr_ls", false,-1);
        tracep->declQuad(c+20,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declQuad(c+294,"top ls_u CSR_u commitPC", false,-1, 63,0);
        tracep->declBit(c+296,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+297,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+298,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+299,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+300,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+301,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+302,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+303,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+304,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declBit(c+305,"top ls_u CSR_u sel_mie", false,-1);
        tracep->declBit(c+306,"top ls_u CSR_u sel_mip", false,-1);
        tracep->declQuad(c+810,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+376,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+378,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+812,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+307,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declBit(c+309,"top ls_u CSR_u mstatus_MIE", false,-1);
        tracep->declQuad(c+310,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+312,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declQuad(c+314,"top ls_u CSR_u mie", false,-1, 63,0);
        tracep->declBit(c+316,"top ls_u CSR_u mie_MTIE", false,-1);
        tracep->declQuad(c+317,"top ls_u CSR_u mip", false,-1, 63,0);
        tracep->declBit(c+319,"top ls_u CSR_u mip_MTIP", false,-1);
        tracep->declBit(c+1039,"top ls_u clint_u clk", false,-1);
        tracep->declBit(c+1040,"top ls_u clint_u rst_n", false,-1);
        tracep->declQuad(c+637,"top ls_u clint_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1133,"top ls_u clint_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+639,"top ls_u clint_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+407,"top ls_u clint_u clint_axi_arready", false,-1);
        tracep->declBus(c+640,"top ls_u clint_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+408,"top ls_u clint_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+409,"top ls_u clint_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+641,"top ls_u clint_u clint_axi_rready", false,-1);
        tracep->declBus(c+410,"top ls_u clint_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+411,"top ls_u clint_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1133,"top ls_u clint_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+642,"top ls_u clint_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+413,"top ls_u clint_u clint_axi_awready", false,-1);
        tracep->declQuad(c+643,"top ls_u clint_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+414,"top ls_u clint_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+645,"top ls_u clint_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+415,"top ls_u clint_u clint_axi_wready", false,-1);
        tracep->declBus(c+408,"top ls_u clint_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+416,"top ls_u clint_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+646,"top ls_u clint_u clint_axi_bready", false,-1);
        tracep->declBit(c+282,"top ls_u clint_u hart0_time_int_o", false,-1);
        tracep->declQuad(c+452,"top ls_u clint_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+413,"top ls_u clint_u axi_awready", false,-1);
        tracep->declBit(c+415,"top ls_u clint_u axi_wready", false,-1);
        tracep->declBus(c+454,"top ls_u clint_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+416,"top ls_u clint_u axi_bvalid", false,-1);
        tracep->declQuad(c+455,"top ls_u clint_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+407,"top ls_u clint_u axi_arready", false,-1);
        tracep->declBus(c+408,"top ls_u clint_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+409,"top ls_u clint_u axi_rvalid", false,-1);
        tracep->declBit(c+457,"top ls_u clint_u aw_en", false,-1);
        tracep->declQuad(c+30,"top ls_u clint_u reg_data_out", false,-1, 63,0);
        tracep->declQuad(c+320,"top ls_u clint_u mtime", false,-1, 63,0);
        tracep->declQuad(c+322,"top ls_u clint_u mtimecmp", false,-1, 63,0);
        tracep->declBit(c+814,"top ls_u clint_u mtimeWrEn", false,-1);
        tracep->declBit(c+815,"top ls_u clint_u mtimecmpWrEn", false,-1);
        tracep->declBit(c+816,"top ls_u clint_u slv_reg_wren", false,-1);
        tracep->declBit(c+527,"top ls_u clint_u slv_reg_rden", false,-1);
        tracep->declBus(c+324,"top ls_u clint_u byte_index", false,-1, 31,0);
        tracep->declBit(c+1039,"top Dcache_u clk", false,-1);
        tracep->declBit(c+1040,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+817,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+818,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+819,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+820,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+353,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+622,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+938,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+907,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+939,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+940,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBus(c+623,"top Dcache_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top Dcache_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+649,"top Dcache_u fence_clean", false,-1);
        tracep->declBit(c+650,"top Dcache_u clear_Icache", false,-1);
        tracep->declBit(c+651,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+35,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+551,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+935,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+821,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+1118,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declBus(c+352,"top Dcache_u cacheRdSize_o", false,-1, 2,0);
        tracep->declQuad(c+933,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+943,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+657,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+652,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+519,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+551,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+658,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+659,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+1133,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+1160,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+1161,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+1162,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+1163,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+1164,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+1189,"top Dcache_u clean", false,-1, 2,0);
        tracep->declBus(c+822,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+959,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+823,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+824,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+825,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+458,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+462,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+466,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+470,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+826,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+830,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+826,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+830,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+834,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+835,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+836,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+837,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+838,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+840,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+841,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+842,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+325,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+327,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+380,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+381,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+1119,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+1120,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+1121,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+1122,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+382,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+383,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+1190,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+1191,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+329,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+330,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+331,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+843,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+474,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+482,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+1123,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+1125,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+844,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+845,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+846,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+490,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+331,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+848,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+849,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+857,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+332,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+333,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+858,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+334,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+335,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+337,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+860,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+861,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+862,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+864,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+865,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+867,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+871,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+867,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+871,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+875,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+876,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+339,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+1127,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+340,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+341,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+340,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+1128,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+877,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+384,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+960,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+385,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+342,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+343,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+878,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+344,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBit(c+879,"top Dcache_u cleanEn", false,-1);
        tracep->declBit(c+650,"top Dcache_u clean_OK", false,-1);
        tracep->declBus(c+880,"top Dcache_u cleanCnt", false,-1, 6,0);
        tracep->declBit(c+881,"top Dcache_u cleanWrValid", false,-1);
        tracep->declBus(c+386,"top Dcache_u cleanWrAddr", false,-1, 31,0);
        tracep->declBit(c+346,"top Dcache_u oneCycleDelay", false,-1);
        tracep->declArray(c+528,"top Dcache_u cleanData", false,-1, 255,0);
        tracep->declBus(c+1167,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1129,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1168,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1167,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+458,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+1039,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+908,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+882,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+883,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+961,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+826,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+909,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+834,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+867,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1167,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1129,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1168,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1167,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+462,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+1039,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+908,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+882,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+887,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+961,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+830,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+909,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+834,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+871,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1167,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1129,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1168,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1167,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+466,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+1039,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+910,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+891,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+883,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+962,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+826,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+911,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+835,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+867,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1167,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1129,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1168,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1167,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+470,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+1039,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+910,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+891,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+887,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+962,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+830,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+911,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+835,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+871,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1129,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1129,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1129,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1129,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1130,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1131,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1039,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+1040,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+651,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+35,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+933,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+653,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+551,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+935,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+943,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+652,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+657,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+519,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+551,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+659,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+352,"top axi_ls_u loadSize", false,-1, 2,0);
        tracep->declBus(c+658,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+655,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+1099,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+550,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+403,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1146,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1134,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+551,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+405,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1142,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1135,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+1147,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+931,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+552,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+553,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+406,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+555,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+1134,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+556,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+1100,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+1101,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1102,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1103,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1104,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1133,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1146,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1134,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+551,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+352,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1142,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1135,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+1143,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1136,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1148,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+932,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+1105,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+933,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+935,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+930,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1149,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+1177,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+1142,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+1178,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+1179,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+892,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+963,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+550,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+552,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+556,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+1192,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+555,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+403,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+491,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+499,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+405,"top axi_ls_u wrSize_reg", false,-1, 2,0);
        tracep->declBus(c+500,"top axi_ls_u storeLenth_reg", false,-1, 7,0);
        tracep->declBus(c+347,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+1177,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+1142,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+1178,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+1179,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+348,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+964,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+6,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+9,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+1180,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1146,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+1135,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+1193,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+1162,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+501,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+1039,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+1040,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+1106,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+19,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+938,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+624,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+630,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+626,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+628,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+634,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+635,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+1194,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1182,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1039,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+1040,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+938,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+965,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+893,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+624,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+630,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+626,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+628,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+635,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+633,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+631,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+1039,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+1040,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+590,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+559,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+587,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+588,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+562,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+937,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+939,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u in_intr_ls", false,-1);
        tracep->declBit(c+648,"top pipline_ctrl_u fence_id", false,-1);
        tracep->declBit(c+649,"top pipline_ctrl_u fence_ex", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u fence_ls", false,-1);
        tracep->declBit(c+936,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+904,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+905,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+906,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+938,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+938,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+591,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+619,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u ls_flush", false,-1);
        tracep->declBit(c+903,"top pipline_ctrl_u fenceInPip", false,-1);
        tracep->declBus(c+1195,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1195,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+541,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+396,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+1039,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+1040,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+393,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+1133,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+545,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+392,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+516,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+400,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+546,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+399,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+402,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+401,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+547,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+539,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+1133,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+538,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+387,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+390,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+389,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+388,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+544,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+502,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+392,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+399,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+402,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+401,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+504,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+387,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+390,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+389,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+388,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+1196,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+1197,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+506,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+508,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+510,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+512,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+536,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+537,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+1198,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+1200,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+514,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<8>/*255:0*/ __Vtemp273;
    VlWide<8>/*255:0*/ __Vtemp278;
    VlWide<8>/*255:0*/ __Vtemp283;
    VlWide<8>/*255:0*/ __Vtemp287;
    VlWide<4>/*127:0*/ __Vtemp288;
    VlWide<4>/*127:0*/ __Vtemp289;
    VlWide<3>/*95:0*/ __Vtemp290;
    VlWide<3>/*95:0*/ __Vtemp292;
    VlWide<3>/*95:0*/ __Vtemp293;
    VlWide<3>/*95:0*/ __Vtemp294;
    VlWide<3>/*95:0*/ __Vtemp295;
    VlWide<3>/*95:0*/ __Vtemp296;
    VlWide<3>/*95:0*/ __Vtemp299;
    VlWide<3>/*95:0*/ __Vtemp300;
    VlWide<3>/*95:0*/ __Vtemp301;
    VlWide<3>/*95:0*/ __Vtemp302;
    VlWide<3>/*95:0*/ __Vtemp303;
    VlWide<4>/*127:0*/ __Vtemp307;
    VlWide<4>/*127:0*/ __Vtemp314;
    VlWide<4>/*127:0*/ __Vtemp317;
    VlWide<4>/*127:0*/ __Vtemp324;
    VlWide<4>/*127:0*/ __Vtemp327;
    VlWide<4>/*127:0*/ __Vtemp336;
    VlWide<4>/*127:0*/ __Vtemp339;
    VlWide<4>/*127:0*/ __Vtemp348;
    VlWide<4>/*127:0*/ __Vtemp351;
    VlWide<4>/*127:0*/ __Vtemp361;
    VlWide<4>/*127:0*/ __Vtemp364;
    VlWide<4>/*127:0*/ __Vtemp374;
    VlWide<10>/*319:0*/ __Vtemp379;
    VlWide<4>/*127:0*/ __Vtemp380;
    VlWide<4>/*127:0*/ __Vtemp381;
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
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+44,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+45,((0x3fU & (IData)(
                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                     >> 5U)))),6);
        tracep->fullIData(oldp+46,((0x1fffffU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))),21);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+51,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullBit(oldp+52,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullIData(oldp+53,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullIData(oldp+54,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullQData(oldp+55,((((QData)((IData)(
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
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullBit(oldp+59,(((0x73U == (0x7fU 
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
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src1Reg),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2Reg),64);
        tracep->fullQData(oldp+64,(((2U & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r))
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
        tracep->fullBit(oldp+66,((1U & (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy)))));
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r),2);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r),64);
        tracep->fullWData(oldp+72,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg),128);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__restore_remainder),64);
        tracep->fullCData(oldp+78,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt),6);
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy));
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign));
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64),64);
        tracep->fullBit(oldp+86,(((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64 
                                                 >> 0x3fU)))
                                   ? 0U : 1U)));
        tracep->fullQData(oldp+87,((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign) 
                                     ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign))
                                     ? (1ULL + (~ (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])))))
                                     : (((QData)((IData)(
                                                         vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U]))))),64);
        tracep->fullQData(oldp+89,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign)
                                     ? (1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s)),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s),64);
        tracep->fullQData(oldp+93,((((QData)((IData)(
                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])) 
                                     << 0x21U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U])) 
                                                   << 1U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                     >> 0x1fU)))),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64),64);
        tracep->fullBit(oldp+99,((1U & ((((((((((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                         >> 0x3fU)) 
                                                | ((IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x3fU)) 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                              >> 0x3eU)))) 
                                               | ((IData)(
                                                          (0xc000000000000000ULL 
                                                           == 
                                                           (0xc000000000000000ULL 
                                                            & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                             >> 0x3dU)))) 
                                              | ((IData)(
                                                         (0xe000000000000000ULL 
                                                          == 
                                                          (0xe000000000000000ULL 
                                                           & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                            >> 0x3cU)))) 
                                             | ((0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                             >> 0x3cU)))) 
                                                & ((((IData)(
                                                             (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                              >> 0x3bU)) 
                                                     | ((IData)(
                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                                 >> 0x3bU)) 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                   >> 0x3aU)))) 
                                                    | ((IData)(
                                                               (0xc00000000000000ULL 
                                                                == 
                                                                (0xc00000000000000ULL 
                                                                 & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                  >> 0x39U)))) 
                                                   | ((IData)(
                                                              (0xe00000000000000ULL 
                                                               == 
                                                               (0xe00000000000000ULL 
                                                                & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                 >> 0x38U)))))) 
                                            | ((IData)(
                                                       (0xff00000000000000ULL 
                                                        == 
                                                        (0xff00000000000000ULL 
                                                         & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx2))) 
                                           | ((IData)(
                                                      (0xfff0000000000000ULL 
                                                       == 
                                                       (0xfff0000000000000ULL 
                                                        & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx1))) 
                                          | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4) 
                                             & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx3))) 
                                         | (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4) 
                                             & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3)) 
                                            & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx2))) 
                                        | ((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4) 
                                             & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3)) 
                                            & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px2)) 
                                           & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx1))))));
        tracep->fullBit(oldp+100,(((((IData)((0xffffULL 
                                              == (0xffffULL 
                                                  & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                     & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px2)) 
                                    & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3)) 
                                   & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4))));
        tracep->fullBit(oldp+101,((IData)((0xffffULL 
                                           == (0xffffULL 
                                               & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64)))));
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px2));
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3));
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4));
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx1));
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx2));
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx3));
        tracep->fullBit(oldp+108,((1U & (((((((IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                       >> 0x3fU)) 
                                              | ((IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                            >> 0x3eU)))) 
                                             | ((IData)(
                                                        (0xc000000000000000ULL 
                                                         == 
                                                         (0xc000000000000000ULL 
                                                          & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                           >> 0x3dU)))) 
                                            | ((IData)(
                                                       (0xe000000000000000ULL 
                                                        == 
                                                        (0xe000000000000000ULL 
                                                         & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                          >> 0x3cU)))) 
                                           | ((0xfU 
                                               == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                              >> 0x3cU)))) 
                                              & ((((IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                            >> 0x3bU)) 
                                                   | ((IData)(
                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                               >> 0x3bU)) 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                 >> 0x3aU)))) 
                                                  | ((IData)(
                                                             (0xc00000000000000ULL 
                                                              == 
                                                              (0xc00000000000000ULL 
                                                               & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                >> 0x39U)))) 
                                                 | ((IData)(
                                                            (0xe00000000000000ULL 
                                                             == 
                                                             (0xe00000000000000ULL 
                                                              & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                               >> 0x38U)))))) 
                                          | ((IData)(
                                                     (0xff00000000000000ULL 
                                                      == 
                                                      (0xff00000000000000ULL 
                                                       & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                             & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx2))) 
                                         | ((IData)(
                                                    (0xfff0000000000000ULL 
                                                     == 
                                                     (0xfff0000000000000ULL 
                                                      & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                            & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx1))))));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__c31));
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__c47));
        tracep->fullSData(oldp+111,((0xffffU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                 << 1U) 
                                                | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
                                                   >> 0x1fU)))),16);
        tracep->fullSData(oldp+112,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2))),16);
        tracep->fullSData(oldp+113,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))),16);
        tracep->fullSData(oldp+114,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64))),16);
        tracep->fullSData(oldp+115,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u1__s_16),16);
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx1));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__c7));
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__c11));
        tracep->fullBit(oldp+119,((0xfU == (0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64)))));
        tracep->fullBit(oldp+120,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 4U))))));
        tracep->fullBit(oldp+121,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 8U))))));
        tracep->fullBit(oldp+122,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0xcU))))));
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx2));
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx3));
        tracep->fullBit(oldp+125,((1U & ((((IData)(
                                                   (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                    >> 0xfU)) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                       >> 0xfU)) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                         >> 0xeU)))) 
                                          | ((IData)(
                                                     (0xc000ULL 
                                                      == 
                                                      (0xc000ULL 
                                                       & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0xdU)))) 
                                         | ((IData)(
                                                    (0xe000ULL 
                                                     == 
                                                     (0xe000ULL 
                                                      & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                       >> 0xcU)))))));
        tracep->fullCData(oldp+126,((0xfU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                              << 1U) 
                                             | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
                                                >> 0x1fU)))),4);
        tracep->fullCData(oldp+127,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2))),4);
        tracep->fullCData(oldp+128,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))),4);
        tracep->fullCData(oldp+129,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64))),4);
        tracep->fullCData(oldp+130,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+131,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+132,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 3U))),4);
        tracep->fullCData(oldp+133,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+134,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+135,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+136,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+137,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+138,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 7U))),4);
        tracep->fullCData(oldp+139,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+140,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+141,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+142,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+144,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0xbU))),4);
        tracep->fullCData(oldp+145,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+146,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+147,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+148,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+149,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u4__DOT__c_int),4);
        tracep->fullSData(oldp+150,((0xffffU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 0xfU))),16);
        tracep->fullSData(oldp+151,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+152,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+153,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+154,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u2__s_16),16);
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c3));
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c7));
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c11));
        tracep->fullBit(oldp+158,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x10U))))));
        tracep->fullBit(oldp+159,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x14U))))));
        tracep->fullBit(oldp+160,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x18U))))));
        tracep->fullBit(oldp+161,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x1cU))))));
        tracep->fullBit(oldp+162,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx1));
        tracep->fullBit(oldp+163,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx2));
        tracep->fullBit(oldp+164,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx3));
        tracep->fullBit(oldp+165,((1U & ((((IData)(
                                                   (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                    >> 0x1fU)) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                       >> 0x1fU)) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                         >> 0x1eU)))) 
                                          | ((IData)(
                                                     (0xc0000000ULL 
                                                      == 
                                                      (0xc0000000ULL 
                                                       & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x1dU)))) 
                                         | ((IData)(
                                                    (0xe0000000ULL 
                                                     == 
                                                     (0xe0000000ULL 
                                                      & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                       >> 0x1cU)))))));
        tracep->fullCData(oldp+166,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0xfU))),4);
        tracep->fullCData(oldp+167,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+168,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+169,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+170,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+171,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+172,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0x13U))),4);
        tracep->fullCData(oldp+173,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+174,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+175,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+176,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+177,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+178,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0x17U))),4);
        tracep->fullCData(oldp+179,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+180,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+181,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+182,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+183,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+184,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0x1bU))),4);
        tracep->fullCData(oldp+185,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+186,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+187,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+188,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+189,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u4__DOT__c_int),4);
        tracep->fullSData(oldp+190,((0xffffU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                 << 1U) 
                                                | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                   >> 0x1fU)))),16);
        tracep->fullSData(oldp+191,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+192,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+193,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+194,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u3__s_16),16);
        tracep->fullBit(oldp+195,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c3));
        tracep->fullBit(oldp+196,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c7));
        tracep->fullBit(oldp+197,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c11));
        tracep->fullBit(oldp+198,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x20U))))));
        tracep->fullBit(oldp+199,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x24U))))));
        tracep->fullBit(oldp+200,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x28U))))));
        tracep->fullBit(oldp+201,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x2cU))))));
        tracep->fullBit(oldp+202,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx1));
        tracep->fullBit(oldp+203,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx2));
        tracep->fullBit(oldp+204,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx3));
        tracep->fullBit(oldp+205,((1U & ((((IData)(
                                                   (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                    >> 0x2fU)) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                       >> 0x2fU)) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                         >> 0x2eU)))) 
                                          | ((IData)(
                                                     (0xc00000000000ULL 
                                                      == 
                                                      (0xc00000000000ULL 
                                                       & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x2dU)))) 
                                         | ((IData)(
                                                    (0xe00000000000ULL 
                                                     == 
                                                     (0xe00000000000ULL 
                                                      & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                       >> 0x2cU)))))));
        tracep->fullCData(oldp+206,((0xfU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                              << 1U) 
                                             | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 0x1fU)))),4);
        tracep->fullCData(oldp+207,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+208,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+209,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+210,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+211,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+212,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 3U))),4);
        tracep->fullCData(oldp+213,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+214,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+215,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+216,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+217,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+218,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 7U))),4);
        tracep->fullCData(oldp+219,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+220,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+221,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+222,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+223,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+224,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0xbU))),4);
        tracep->fullCData(oldp+225,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+226,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+227,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+228,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+229,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u4__DOT__c_int),4);
        tracep->fullSData(oldp+230,((0xffffU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                >> 0xfU))),16);
        tracep->fullSData(oldp+231,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+232,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+233,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+234,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u4__s_16),16);
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c3));
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c7));
        tracep->fullBit(oldp+237,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c11));
        tracep->fullBit(oldp+238,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x30U))))));
        tracep->fullBit(oldp+239,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x34U))))));
        tracep->fullBit(oldp+240,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x38U))))));
        tracep->fullBit(oldp+241,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x3cU))))));
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx1));
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx2));
        tracep->fullBit(oldp+244,((1U & ((((IData)(
                                                   (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                    >> 0x3bU)) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                       >> 0x3bU)) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                         >> 0x3aU)))) 
                                          | ((IData)(
                                                     (0xc00000000000000ULL 
                                                      == 
                                                      (0xc00000000000000ULL 
                                                       & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x39U)))) 
                                         | ((IData)(
                                                    (0xe00000000000000ULL 
                                                     == 
                                                     (0xe00000000000000ULL 
                                                      & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                       >> 0x38U)))))));
        tracep->fullBit(oldp+245,((1U & ((((IData)(
                                                   (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                    >> 0x3fU)) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                       >> 0x3fU)) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                         >> 0x3eU)))) 
                                          | ((IData)(
                                                     (0xc000000000000000ULL 
                                                      == 
                                                      (0xc000000000000000ULL 
                                                       & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x3dU)))) 
                                         | ((IData)(
                                                    (0xe000000000000000ULL 
                                                     == 
                                                     (0xe000000000000000ULL 
                                                      & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                       >> 0x3cU)))))));
        tracep->fullCData(oldp+246,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0xfU))),4);
        tracep->fullCData(oldp+247,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+248,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+249,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+250,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+251,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+252,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0x13U))),4);
        tracep->fullCData(oldp+253,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+254,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+255,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+256,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+257,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+258,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0x17U))),4);
        tracep->fullCData(oldp+259,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+260,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+261,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+262,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+263,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+264,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0x1bU))),4);
        tracep->fullCData(oldp+265,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+266,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+267,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+268,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+269,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u4__DOT__c_int),4);
        tracep->fullCData(oldp+270,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0xaU))),5);
        tracep->fullBit(oldp+271,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+272,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+273,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),227);
        tracep->fullCData(oldp+281,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xfU))),3);
        tracep->fullBit(oldp+282,(vlSelf->top__DOT__ls_u__DOT__timr_int));
        tracep->fullBit(oldp+283,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 3U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+284,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 3U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+285,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
        tracep->fullBit(oldp+289,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
        tracep->fullBit(oldp+290,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+291,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+292,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+293,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC),64);
        tracep->fullBit(oldp+296,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw));
        tracep->fullBit(oldp+297,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs));
        tracep->fullBit(oldp+298,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc));
        tracep->fullBit(oldp+299,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 5U)))));
        tracep->fullBit(oldp+300,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+301,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+302,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+303,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+304,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullBit(oldp+305,(((0x304U == (0xfffU 
                                               & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                   << 9U) 
                                                  | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 0x17U)))) 
                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullBit(oldp+306,(((0x344U == (0xfffU 
                                               & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                   << 9U) 
                                                  | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 0x17U)))) 
                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullBit(oldp+309,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                 >> 3U)))));
        tracep->fullQData(oldp+310,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U)))
                                      ? 0xbULL : ((IData)(vlSelf->top__DOT__in_intr_ls)
                                                   ? 0x8000000000000007ULL
                                                   : 0ULL))),64);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie),64);
        tracep->fullBit(oldp+316,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                                 >> 7U)))));
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip),64);
        tracep->fullBit(oldp+319,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                 >> 7U)))));
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime),64);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp),64);
        tracep->fullIData(oldp+324,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index),32);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+329,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullIData(oldp+330,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [0x23U]),21);
        tracep->fullBit(oldp+331,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+332,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+334,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+340,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+341,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullBit(oldp+342,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
        tracep->fullBit(oldp+343,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullQData(oldp+344,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
        tracep->fullBit(oldp+346,(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay));
        tracep->fullCData(oldp+347,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+348,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+349,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? 0U
                                               : 1U))),4);
        tracep->fullCData(oldp+350,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
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
        tracep->fullCData(oldp+351,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (0xfU 
                                              & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                                  : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))))),4);
        tracep->fullCData(oldp+352,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullQData(oldp+353,((((0U == (0x1fU 
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
        tracep->fullIData(oldp+355,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullBit(oldp+356,((((3U == (0x7fU & 
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
        tracep->fullCData(oldp+357,((0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
        tracep->fullQData(oldp+358,((QData)((IData)(
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
        tracep->fullQData(oldp+360,(((0x10U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? ((2U & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r))
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
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mulOut)),64);
        tracep->fullBit(oldp+362,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+363,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+364,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+365,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        if (vlSelf->top__DOT__in_intr_ls) {
            __Vtemp273[0U] = Vtop__ConstPool__CONST_d5724acc_0[0U];
            __Vtemp273[1U] = Vtop__ConstPool__CONST_d5724acc_0[1U];
            __Vtemp273[2U] = Vtop__ConstPool__CONST_d5724acc_0[2U];
            __Vtemp273[3U] = Vtop__ConstPool__CONST_d5724acc_0[3U];
            __Vtemp273[4U] = Vtop__ConstPool__CONST_d5724acc_0[4U];
            __Vtemp273[5U] = Vtop__ConstPool__CONST_d5724acc_0[5U];
            __Vtemp273[6U] = Vtop__ConstPool__CONST_d5724acc_0[6U];
            __Vtemp273[7U] = Vtop__ConstPool__CONST_d5724acc_0[7U];
        } else {
            __Vtemp273[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 3U) | ((4U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (3U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp273[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp273[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 3U));
            __Vtemp273[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp273[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp273[5U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp273[6U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp273[7U] = (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
        }
        tracep->fullWData(oldp+366,(__Vtemp273),227);
        tracep->fullBit(oldp+374,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x17U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+375,((((0x73U == (0x7fU 
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
        tracep->fullQData(oldp+376,((vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                                     | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+378,(((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullBit(oldp+380,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+381,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+382,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+383,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+384,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        tracep->fullBit(oldp+385,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullIData(oldp+386,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullBit(oldp+387,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+388,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+389,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+392,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+393,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg)),64);
        tracep->fullCData(oldp+395,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+396,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)))),3);
        tracep->fullCData(oldp+397,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+398,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 0xfU)),4);
        tracep->fullBit(oldp+399,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+400,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (0xffU 
                                              & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)))),8);
        tracep->fullBit(oldp+401,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+402,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+403,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+405,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
        tracep->fullCData(oldp+406,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+407,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready));
        tracep->fullCData(oldp+408,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp),2);
        tracep->fullBit(oldp+409,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+410,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                      : 0U)),3);
        tracep->fullQData(oldp+411,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+413,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready));
        tracep->fullCData(oldp+414,(vlSelf->top__DOT__clint_axi_wstrb),8);
        tracep->fullBit(oldp+415,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready));
        tracep->fullBit(oldp+416,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid));
        tracep->fullBit(oldp+417,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+418,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))));
        tracep->fullWData(oldp+419,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+423,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+427,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+431,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+435,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+443,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullIData(oldp+451,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullQData(oldp+452,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr),64);
        tracep->fullCData(oldp+454,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+455,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr),64);
        tracep->fullBit(oldp+457,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en));
        tracep->fullWData(oldp+458,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+462,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+466,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+470,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+474,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+482,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullBit(oldp+490,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullWData(oldp+491,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+499,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+500,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
        tracep->fullCData(oldp+501,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+504,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+506,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+508,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+512,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+514,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullCData(oldp+515,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                               ? 0U
                                               : 3U))),8);
        tracep->fullQData(oldp+516,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o)),64);
        tracep->fullBit(oldp+518,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))));
        VL_EXTEND_WQ(256,64, __Vtemp278, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp283[0U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U]);
            __Vtemp283[1U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U]);
            __Vtemp283[2U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U]);
            __Vtemp283[3U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U]);
            __Vtemp283[4U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U]);
            __Vtemp283[5U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U]);
            __Vtemp283[6U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U]);
            __Vtemp283[7U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U]);
        } else {
            __Vtemp283[0U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp278[0U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
            __Vtemp283[1U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp278[1U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
            __Vtemp283[2U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp278[2U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
            __Vtemp283[3U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp278[3U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
            __Vtemp283[4U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp278[4U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
            __Vtemp283[5U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp278[5U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
            __Vtemp283[6U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp278[6U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
            __Vtemp283[7U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp278[7U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
        }
        tracep->fullWData(oldp+519,(__Vtemp283),256);
        tracep->fullBit(oldp+527,((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))));
        if ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))) {
            __Vtemp287[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U];
            __Vtemp287[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U];
            __Vtemp287[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U];
            __Vtemp287[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U];
            __Vtemp287[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U];
            __Vtemp287[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U];
            __Vtemp287[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U];
            __Vtemp287[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U];
        } else {
            __Vtemp287[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U];
            __Vtemp287[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U];
            __Vtemp287[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U];
            __Vtemp287[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U];
            __Vtemp287[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U];
            __Vtemp287[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U];
            __Vtemp287[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U];
            __Vtemp287[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U];
        }
        tracep->fullWData(oldp+528,(__Vtemp287),256);
        tracep->fullBit(oldp+536,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+537,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        tracep->fullBit(oldp+538,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+539,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr)),64);
        tracep->fullCData(oldp+541,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)))),3);
        tracep->fullCData(oldp+542,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+543,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 2U)),4);
        tracep->fullBit(oldp+544,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))));
        tracep->fullBit(oldp+545,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+546,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+547,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullCData(oldp+548,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+549,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                              ? 0U : 3U))
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+550,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+551,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+552,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+553,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+555,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+556,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+557,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+559,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+560,(((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+562,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+563,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+565,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+567,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+568,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+569,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+570,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+571,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+573,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+574,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+576,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+577,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+578,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+579,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+580,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+581,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+582,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+583,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+584,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+585,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+586,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+587,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+588,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+589,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+590,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+591,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+592,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullIData(oldp+594,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1cU))),32);
        tracep->fullQData(oldp+595,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+597,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+598,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x11U))),2);
        tracep->fullQData(oldp+599,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+601,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+603,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+605,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+607,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x17U))),5);
        tracep->fullBit(oldp+608,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+609,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+610,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+611,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+612,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+613,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),3);
        tracep->fullBit(oldp+614,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullCData(oldp+615,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+616,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+617,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xbU))),5);
        tracep->fullCData(oldp+618,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 6U))),5);
        tracep->fullBit(oldp+619,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+620,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 4U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1cU))))));
        tracep->fullBit(oldp+621,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 2U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1eU))))));
        tracep->fullCData(oldp+622,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+623,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+624,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+626,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+628,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+630,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+631,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+633,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+634,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+635,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+637,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullBit(oldp+639,(vlSelf->top__DOT__clint_axi_arvalid));
        tracep->fullCData(oldp+640,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                      : 0U)),3);
        tracep->fullBit(oldp+641,(((2U == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+642,(vlSelf->top__DOT__clint_axi_awvalid));
        tracep->fullQData(oldp+643,(vlSelf->top__DOT__clint_axi_wdata),64);
        tracep->fullBit(oldp+645,(vlSelf->top__DOT__clint_axi_wvalid));
        tracep->fullBit(oldp+646,(vlSelf->top__DOT__clint_axi_bready));
        tracep->fullBit(oldp+647,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+648,(vlSelf->top__DOT__fence_id));
        tracep->fullBit(oldp+649,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+650,(vlSelf->top__DOT__Dcache_u__DOT__clean_OK));
        tracep->fullBit(oldp+651,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+652,(vlSelf->top__DOT__DcacheWrValid));
        tracep->fullQData(oldp+653,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+655,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+657,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+658,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullCData(oldp+659,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                      : 3U)),3);
        tracep->fullQData(oldp+660,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+662,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullBit(oldp+663,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+664,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+665,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))));
        tracep->fullIData(oldp+666,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+667,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+668,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+669,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        __Vtemp288[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp288[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp288[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp288[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+670,(__Vtemp288),128);
        __Vtemp289[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp289[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp289[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp289[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+674,(__Vtemp289),128);
        tracep->fullBit(oldp+678,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+679,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+680,(vlSelf->top__DOT__cache_dut__DOT__uncached));
        tracep->fullBit(oldp+681,(vlSelf->top__DOT__cache_dut__DOT__diffAddr));
        tracep->fullBit(oldp+682,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+683,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+684,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+685,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+686,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+687,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+695,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+696,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN));
        tracep->fullBit(oldp+697,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+698,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)))));
        tracep->fullBit(oldp+699,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+700,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+701,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN));
        tracep->fullBit(oldp+702,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+703,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)))));
        tracep->fullBit(oldp+704,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+705,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+706,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+708,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp290[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp290[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp290[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+709,(__Vtemp290),96);
        tracep->fullWData(oldp+712,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+715,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+716,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+717,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+718,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+719,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullBit(oldp+720,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U)))));
        tracep->fullQData(oldp+721,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+723,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+724,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+725,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+726,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+727,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+728,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullBit(oldp+729,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__fence_id))));
        tracep->fullWData(oldp+730,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),316);
        tracep->fullQData(oldp+740,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+742,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+744,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        tracep->fullBit(oldp+746,(((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn) 
                                     & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 5U)) & (~ 
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                    >> 4U))) 
                                   & (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_resValid)))));
        VL_EXTEND_WQ(65,64, __Vtemp292, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp293, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp294, __Vtemp292, __Vtemp293);
        VL_EXTEND_WI(65,1, __Vtemp295, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp296, __Vtemp294, __Vtemp295);
        tracep->fullBit(oldp+747,((1U & ((0x4000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp296[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+748,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+749,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+751,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+752,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+754,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+756,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+757,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullCData(oldp+758,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x17U))),3);
        tracep->fullQData(oldp+759,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp299, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp300, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp301, __Vtemp299, __Vtemp300);
        VL_EXTEND_WI(65,1, __Vtemp302, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp303, __Vtemp301, __Vtemp302);
        tracep->fullBit(oldp+761,((1U & __Vtemp303[2U])));
        tracep->fullBit(oldp+762,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+763,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+765,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+767,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullBit(oldp+769,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn));
        tracep->fullBit(oldp+770,((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn) 
                                    & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                       >> 5U)) & (~ 
                                                  (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 4U)))));
        tracep->fullBit(oldp+771,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid));
        tracep->fullCData(oldp+772,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x17U))),4);
        tracep->fullBit(oldp+773,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+774,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+775,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+777,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+779,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+781,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+783,(((0x8000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+785,(((0x8000000U & 
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
        tracep->fullQData(oldp+787,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+789,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),2);
        tracep->fullQData(oldp+790,((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src1))),64);
        tracep->fullQData(oldp+792,((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src2))),64);
        tracep->fullCData(oldp+794,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 8U))),3);
        tracep->fullQData(oldp+795,(((((QData)((IData)(
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
        tracep->fullQData(oldp+797,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU))))),64);
        tracep->fullBit(oldp+799,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+800,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+801,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+802,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+804,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+806,((1U & ((0x400U & 
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
        tracep->fullBit(oldp+807,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+808,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+809,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullQData(oldp+810,(vlSelf->top__DOT__ls_u__DOT__csr_wr_data),64);
        tracep->fullQData(oldp+812,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullBit(oldp+814,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn));
        tracep->fullBit(oldp+815,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn));
        tracep->fullBit(oldp+816,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren));
        tracep->fullIData(oldp+817,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+818,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+819,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+820,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 4U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1cU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 2U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1eU)))))));
        tracep->fullIData(oldp+821,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+822,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+823,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+824,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+825,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp307, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp314[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp314[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp314[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp314[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp314[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp307[0U])
                               : 0U);
            __Vtemp314[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp307[1U])
                               : 0U);
            __Vtemp314[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp307[2U])
                               : 0U);
            __Vtemp314[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp307[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+826,(__Vtemp314),128);
        VL_EXTEND_WQ(128,64, __Vtemp317, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp324[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp324[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp324[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp324[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp324[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp317[0U])
                               : 0U);
            __Vtemp324[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp317[1U])
                               : 0U);
            __Vtemp324[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp317[2U])
                               : 0U);
            __Vtemp324[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp317[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+830,(__Vtemp324),128);
        tracep->fullBit(oldp+834,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+835,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+836,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+837,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+838,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+840,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+841,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+842,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+843,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+844,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+845,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+846,((((QData)((IData)(
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
        tracep->fullCData(oldp+848,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+849,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+857,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+858,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullBit(oldp+860,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+861,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+862,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+864,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+865,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp327, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp336[0U] = 0xffffffffU;
            __Vtemp336[1U] = 0xffffffffU;
            __Vtemp336[2U] = 0xffffffffU;
            __Vtemp336[3U] = 0xffffffffU;
        } else {
            __Vtemp336[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp327[0U])
                                   : 0U) : 0U);
            __Vtemp336[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp327[1U])
                                   : 0U) : 0U);
            __Vtemp336[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp327[2U])
                                   : 0U) : 0U);
            __Vtemp336[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp327[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+867,(__Vtemp336),128);
        VL_EXTEND_WQ(128,64, __Vtemp339, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp348[0U] = 0xffffffffU;
            __Vtemp348[1U] = 0xffffffffU;
            __Vtemp348[2U] = 0xffffffffU;
            __Vtemp348[3U] = 0xffffffffU;
        } else {
            __Vtemp348[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp339[0U])
                                   : 0U) : 0U);
            __Vtemp348[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp339[1U])
                                   : 0U) : 0U);
            __Vtemp348[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp339[2U])
                                   : 0U) : 0U);
            __Vtemp348[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp339[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+871,(__Vtemp348),128);
        tracep->fullBit(oldp+875,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+876,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+877,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullIData(oldp+878,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
        tracep->fullBit(oldp+879,((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullCData(oldp+880,(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt),7);
        tracep->fullBit(oldp+881,(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid));
        tracep->fullBit(oldp+882,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        VL_EXTEND_WQ(128,64, __Vtemp351, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp361[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp351[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp361[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp351[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp361[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp351[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp361[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp351[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+883,(__Vtemp361),128);
        VL_EXTEND_WQ(128,64, __Vtemp364, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp374[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp364[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp374[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp364[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp374[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp364[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp374[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp364[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+887,(__Vtemp374),128);
        tracep->fullBit(oldp+891,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+892,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+893,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+903,((1U & ((IData)(vlSelf->top__DOT__fence_id) 
                                         | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullBit(oldp+904,((1U & (~ (((((((IData)(vlSelf->top__DOT__fence_id) 
                                                 | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                               | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+905,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+906,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+907,((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit) 
                                          | (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))))) 
                                   | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk)))));
        tracep->fullBit(oldp+908,((1U & (~ ((((((((
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
        tracep->fullBit(oldp+909,((1U & ((((((((((0U 
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
        tracep->fullBit(oldp+910,((1U & (~ ((((((((
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
        tracep->fullBit(oldp+911,((1U & ((((((((((0U 
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
        tracep->fullQData(oldp+912,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+914,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp379[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
                                                                | (((IData)(vlSelf->top__DOT__DivEn_id) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__DivSel_id) 
                                                                       << 2U) 
                                                                      | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                           & (IData)(vlSelf->top__DOT__trap_id)) 
                                                                          << 1U) 
                                                                         | ((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                            & (IData)(vlSelf->top__DOT__fence_id)))))))))))))));
        __Vtemp379[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 4U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp379[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1cU));
        __Vtemp379[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp379[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1cU));
        __Vtemp379[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp379[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1cU));
        __Vtemp379[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 4U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1cU));
        __Vtemp379[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp379[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 4U);
        tracep->fullWData(oldp+916,(__Vtemp379),316);
        tracep->fullBit(oldp+926,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+927,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+929,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+930,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+931,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+932,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+933,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+935,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+936,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+937,(vlSelf->top__DOT__ex_not_ok));
        tracep->fullBit(oldp+938,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+939,(vlSelf->top__DOT__dataNotOk));
        tracep->fullQData(oldp+940,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+942,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+943,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+944,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+945,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+946,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+948,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+949,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+950,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__A),6);
        tracep->fullCData(oldp+951,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+952,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__A),6);
        tracep->fullCData(oldp+953,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+954,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullBit(oldp+955,(vlSelf->top__DOT__ls_u__DOT__csr_stall_n));
        tracep->fullCData(oldp+956,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+957,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+958,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullCData(oldp+959,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
        tracep->fullBit(oldp+960,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+961,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+962,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+963,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+964,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+965,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+975,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+977,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+979,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+981,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+983,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+985,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+987,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+989,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+991,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+993,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+995,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+997,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+999,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+1001,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+1003,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+1005,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+1007,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+1009,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+1011,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+1013,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+1015,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+1017,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+1019,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+1021,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+1023,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+1025,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+1027,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+1029,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+1031,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+1033,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+1035,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+1037,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+1039,(vlSelf->clk));
        tracep->fullBit(oldp+1040,(vlSelf->rst_n));
        tracep->fullQData(oldp+1041,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+1043,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+1045,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+1046,(vlSelf->regA0),64);
        tracep->fullBit(oldp+1048,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+1049,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+1050,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+1051,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+1053,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+1054,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+1055,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+1056,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+1057,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+1058,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+1059,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+1060,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+1061,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+1062,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+1063,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+1064,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+1065,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+1066,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+1068,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+1069,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+1070,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+1071,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+1072,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+1073,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+1075,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+1076,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+1077,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+1078,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+1079,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+1080,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+1081,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+1082,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+1083,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+1084,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+1085,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+1086,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+1087,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+1089,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+1090,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+1091,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+1092,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+1093,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+1094,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+1095,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+1096,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+1097,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 0U : 1U) ? 0U
                                     : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+1098,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U))))
                                                  ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                                  : (IData)(vlSelf->axi_r_resp_i)))))),2);
        tracep->fullBit(oldp+1099,(((0xaU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU))))
                                     ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                     : ((2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                         ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)
                                         : (IData)(vlSelf->axi_aw_ready_i)))));
        tracep->fullBit(oldp+1100,(((0xaU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU))))
                                     ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                     : ((2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                         ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid)
                                         : (IData)(vlSelf->axi_b_valid_i)))));
        tracep->fullCData(oldp+1101,(((0xaU == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU))))
                                       ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp)
                                       : ((2U == (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                           ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                           : (IData)(vlSelf->axi_b_resp_i)))),2);
        tracep->fullCData(oldp+1102,(((0xaU == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU))))
                                       ? 1U : ((2U 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U))))
                                                ? 1U
                                                : (0xfU 
                                                   & (IData)(vlSelf->axi_b_id_i))))),4);
        tracep->fullBit(oldp+1103,((1U & ((0xaU == 
                                           (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))
                                           ? (IData)(vlSelf->top__DOT__axi_mmio_b_user_i)
                                           : ((2U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                               ? 0U
                                               : (IData)(vlSelf->axi_b_user_i))))));
        tracep->fullBit(oldp+1104,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 0U : 1U) ? 
                                    (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                     : 0U)));
        tracep->fullCData(oldp+1105,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U))))
                                                  ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                                  : (IData)(vlSelf->axi_r_resp_i))))
                                       : 0U)),2);
        tracep->fullQData(oldp+1106,(((((((((- (QData)((IData)(
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
        tracep->fullCData(oldp+1108,(((0xaU == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU))))
                                       ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                       : ((2U == (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                           ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                           : (IData)(vlSelf->axi_r_resp_i)))),2);
        tracep->fullBit(oldp+1109,((1U & ((0xaU == 
                                           (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))
                                           ? (IData)(vlSelf->top__DOT__axi_mmio_r_user_i)
                                           : ((2U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                               ? 0U
                                               : (IData)(vlSelf->axi_r_user_i))))));
        tracep->fullBit(oldp+1110,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                    & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+1111,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                    & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+1112,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                       ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                           ? (0x1fffffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))
                                           : 0U) : 0U)),21);
        tracep->fullIData(oldp+1113,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                       ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                           ? 0U : (0x1fffffU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 0xbU))))
                                       : 0U)),21);
        tracep->fullQData(oldp+1114,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+1116,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+1118,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullBit(oldp+1119,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                    & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                       | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)))))))));
        tracep->fullBit(oldp+1120,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                    & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                       | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)))))))));
        tracep->fullIData(oldp+1121,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+1122,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+1123,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
                                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                               : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                               : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
        tracep->fullQData(oldp+1125,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
                                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                               : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                               : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
        tracep->fullBit(oldp+1127,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
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
        tracep->fullIData(oldp+1128,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullIData(oldp+1129,(0x40U),32);
        tracep->fullIData(oldp+1130,(4U),32);
        tracep->fullIData(oldp+1131,(8U),32);
        tracep->fullIData(oldp+1132,(1U),32);
        tracep->fullCData(oldp+1133,(0U),3);
        tracep->fullBit(oldp+1134,(0U));
        tracep->fullBit(oldp+1135,(0U));
        tracep->fullCData(oldp+1136,(0U),4);
        tracep->fullBit(oldp+1137,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+1138,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+1139,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+1140,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+1141,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+1142,(1U),2);
        tracep->fullCData(oldp+1143,(2U),4);
        tracep->fullCData(oldp+1144,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+1145,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+1146,(1U),4);
        tracep->fullCData(oldp+1147,(0xfU),4);
        tracep->fullCData(oldp+1148,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+1149,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+1150,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+1152,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+1153,(1U));
        tracep->fullBit(oldp+1154,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+1155,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullBit(oldp+1156,(0U));
        tracep->fullQData(oldp+1157,(0ULL),64);
        tracep->fullCData(oldp+1159,(0U),8);
        tracep->fullCData(oldp+1160,(1U),3);
        tracep->fullCData(oldp+1161,(2U),3);
        tracep->fullCData(oldp+1162,(3U),3);
        tracep->fullCData(oldp+1163,(7U),3);
        tracep->fullCData(oldp+1164,(6U),3);
        tracep->fullBit(oldp+1165,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+1166,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+1167,(0x80U),32);
        tracep->fullIData(oldp+1168,(6U),32);
        __Vtemp380[0U] = 0U;
        __Vtemp380[1U] = 0U;
        __Vtemp380[2U] = 0U;
        __Vtemp380[3U] = 0U;
        tracep->fullWData(oldp+1169,(__Vtemp380),128);
        __Vtemp381[0U] = 0xffffffffU;
        __Vtemp381[1U] = 0xffffffffU;
        __Vtemp381[2U] = 0xffffffffU;
        __Vtemp381[3U] = 0xffffffffU;
        tracep->fullWData(oldp+1173,(__Vtemp381),128);
        tracep->fullCData(oldp+1177,(0U),2);
        tracep->fullCData(oldp+1178,(3U),2);
        tracep->fullCData(oldp+1179,(2U),2);
        tracep->fullIData(oldp+1180,(3U),32);
        tracep->fullIData(oldp+1181,(0x60U),32);
        tracep->fullIData(oldp+1182,(0U),32);
        tracep->fullIData(oldp+1183,(0x13cU),32);
        tracep->fullBit(oldp+1184,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_resValid));
        tracep->fullQData(oldp+1185,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mulOut),64);
        tracep->fullBit(oldp+1187,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+1188,(0xe3U),32);
        tracep->fullCData(oldp+1189,(4U),3);
        tracep->fullBit(oldp+1190,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+1191,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+1192,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullCData(oldp+1193,(3U),8);
        tracep->fullIData(oldp+1194,(0x121U),32);
        tracep->fullIData(oldp+1195,(0x40U),32);
        tracep->fullIData(oldp+1196,(3U),32);
        tracep->fullIData(oldp+1197,(1U),32);
        tracep->fullQData(oldp+1198,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+1200,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
