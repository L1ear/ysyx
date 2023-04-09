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
        tracep->declBit(c+1121,"clk", false,-1);
        tracep->declBit(c+1122,"rst_n", false,-1);
        tracep->declQuad(c+1123,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+1125,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+1127,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+1128,"regA0", false,-1, 63,0);
        tracep->declBit(c+1130,"stall_n_diff", false,-1);
        tracep->declBit(c+1131,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+1132,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+1133,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1135,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1136,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1137,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1138,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1139,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1140,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1141,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+1142,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1143,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1144,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1145,"axi_r_ready_o", false,-1);
        tracep->declBit(c+1146,"axi_r_valid_i", false,-1);
        tracep->declBus(c+1147,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1148,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1150,"axi_r_last_i", false,-1);
        tracep->declBus(c+1151,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1152,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1153,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+1154,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+1155,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1157,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1158,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1159,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1160,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1161,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1162,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1163,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+1164,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1165,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1166,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1167,"axi_w_ready_i", false,-1);
        tracep->declBit(c+1168,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+1169,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1171,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1172,"axi_w_last_o", false,-1);
        tracep->declBus(c+1173,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1174,"axi_b_ready_o", false,-1);
        tracep->declBit(c+1175,"axi_b_valid_i", false,-1);
        tracep->declBus(c+1176,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1177,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1178,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+1216,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1216,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1216,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1216,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1217,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1219,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1121,"top clk", false,-1);
        tracep->declBit(c+1122,"top rst_n", false,-1);
        tracep->declQuad(c+1123,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+1125,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+1127,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+1128,"top regA0", false,-1, 63,0);
        tracep->declBit(c+1130,"top stall_n_diff", false,-1);
        tracep->declBit(c+1131,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+1132,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+1133,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1135,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1136,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1137,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1138,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1139,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1140,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1141,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+1142,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1143,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1144,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1145,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+1146,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+1147,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1148,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1150,"top axi_r_last_i", false,-1);
        tracep->declBus(c+1151,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1152,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1153,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+1154,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+1155,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1157,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1158,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1159,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1160,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1161,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1162,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1163,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+1164,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1165,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1166,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1167,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+1168,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+1169,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1171,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1172,"top axi_w_last_o", false,-1);
        tracep->declBus(c+1173,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1174,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+1175,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+1176,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1177,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1178,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+436,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+587,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+588,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+398,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1221,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+399,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+590,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+591,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1222,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+592,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+400,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+593,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+437,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+438,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+439,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1224,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+1225,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1226,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+441,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+594,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+442,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+444,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1221,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+564,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+445,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+446,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1222,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+447,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+448,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+595,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+565,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+449,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+567,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+1221,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+596,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+450,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+451,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1227,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1228,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top instr_fetching", false,-1);
        tracep->declBit(c+1179,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1220,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1223,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1221,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+597,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+598,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1229,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1222,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+1230,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1231,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+1004,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+1180,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1005,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1007,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+1008,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1232,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1181,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+599,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+452,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1220,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1233,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1221,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+600,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+454,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1229,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1222,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+1234,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1009,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+601,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+602,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+455,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+604,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+1221,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+605,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+1182,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+1183,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1184,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1185,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1186,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1220,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1233,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1221,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+600,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+401,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1229,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1222,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+1230,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1235,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+1010,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+1187,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1011,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1013,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+1008,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1236,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+1237,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+606,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+608,"top is_jump", false,-1);
        tracep->declQuad(c+609,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+982,"top pc_stall_n", false,-1);
        tracep->declBit(c+1014,"top if_stall_n", false,-1);
        tracep->declBit(c+611,"top if_instr_valid", false,-1);
        tracep->declBit(c+1239,"top sram_data_valid", false,-1);
        tracep->declQuad(c+612,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+614,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+1240,"top sram_ren", false,-1);
        tracep->declBit(c+616,"top sram_addr_valid", false,-1);
        tracep->declBit(c+617,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+618,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+619,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+620,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+622,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+990,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+992,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+623,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+625,"top src1sel_id", false,-1);
        tracep->declBus(c+626,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+627,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+628,"top is_brc_id", false,-1);
        tracep->declBit(c+629,"top is_jal_id", false,-1);
        tracep->declBit(c+630,"top is_jalr_id", false,-1);
        tracep->declBit(c+631,"top wben_id", false,-1);
        tracep->declBus(c+632,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+633,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+983,"top id_stall_n", false,-1);
        tracep->declBit(c+634,"top DivEn_id", false,-1);
        tracep->declBus(c+635,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+636,"top in_trap_id", false,-1);
        tracep->declBit(c+637,"top out_trap_id", false,-1);
        tracep->declBit(c+638,"top trap_id", false,-1);
        tracep->declBit(c+639,"top ld_use_hazard", false,-1);
        tracep->declBit(c+640,"top id_flush", false,-1);
        tracep->declQuad(c+641,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+643,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+1015,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+644,"top src1sel_ex", false,-1);
        tracep->declBus(c+645,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+646,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+648,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+650,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+652,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+654,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+655,"top is_brc_ex", false,-1);
        tracep->declBit(c+656,"top is_jal_ex", false,-1);
        tracep->declBit(c+657,"top is_jalr_ex", false,-1);
        tracep->declBit(c+658,"top wben_ex", false,-1);
        tracep->declBit(c+659,"top DivEn_ex", false,-1);
        tracep->declBus(c+660,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+661,"top trap_ex", false,-1);
        tracep->declBit(c+984,"top ex_stall_n", false,-1);
        tracep->declQuad(c+10,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+662,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+663,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+664,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+665,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+666,"top ex_flush", false,-1);
        tracep->declBit(c+667,"top rden_ls", false,-1);
        tracep->declBit(c+668,"top wren_ls", false,-1);
        tracep->declBit(c+985,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+1017,"top ex_not_ok", false,-1);
        tracep->declQuad(c+12,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+18,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+1188,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+19,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+26,"top trap_ls", false,-1);
        tracep->declBit(c+1018,"top ls_stall_n", false,-1);
        tracep->declBit(c+1019,"top ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+402,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+669,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+1241,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+1242,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+1020,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+670,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+671,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+673,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+675,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+677,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+678,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+680,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+681,"top wben_wb", false,-1);
        tracep->declQuad(c+682,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+1018,"top wb_stall_n", false,-1);
        tracep->declQuad(c+684,"top clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1220,"top clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+686,"top clint_axi_arvalid", false,-1);
        tracep->declBit(c+456,"top clint_axi_arready", false,-1);
        tracep->declBus(c+687,"top clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+457,"top clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+458,"top clint_axi_rvalid", false,-1);
        tracep->declBit(c+688,"top clint_axi_rready", false,-1);
        tracep->declBus(c+459,"top clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+460,"top clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1220,"top clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+689,"top clint_axi_awvalid", false,-1);
        tracep->declBit(c+462,"top clint_axi_awready", false,-1);
        tracep->declQuad(c+690,"top clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+463,"top clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+692,"top clint_axi_wvalid", false,-1);
        tracep->declBit(c+464,"top clint_axi_wready", false,-1);
        tracep->declBus(c+457,"top clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+465,"top clint_axi_bvalid", false,-1);
        tracep->declBit(c+693,"top clint_axi_bready", false,-1);
        tracep->declBit(c+694,"top rw_valid_i", false,-1);
        tracep->declBit(c+32,"top rw_ready_o", false,-1);
        tracep->declBus(c+597,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1007,"top rdLast_o", false,-1);
        tracep->declBus(c+404,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+1005,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+1022,"top dataValid_o", false,-1);
        tracep->declBit(c+695,"top fence_id", false,-1);
        tracep->declBit(c+696,"top fence_ex", false,-1);
        tracep->declBit(c+405,"top ld_csr_hazard", false,-1);
        tracep->declBit(c+33,"top ls_flush", false,-1);
        tracep->declBit(c+33,"top in_intr_ls", false,-1);
        tracep->declBit(c+1019,"top dataNotOk", false,-1);
        tracep->declBit(c+34,"top fence_ls", false,-1);
        tracep->declBit(c+697,"top clear_Icache", false,-1);
        tracep->declBit(c+698,"top DcacheRdValid", false,-1);
        tracep->declBit(c+699,"top DcacheWrValid", false,-1);
        tracep->declBit(c+35,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+600,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+1013,"top lsRdLast", false,-1);
        tracep->declQuad(c+700,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+702,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+1011,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+1023,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+704,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+568,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+600,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+705,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+706,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+401,"top lsLoadSize", false,-1, 2,0);
        tracep->declBus(c+1216,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1216,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1216,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1216,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1217,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1219,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+1179,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+1223,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+1221,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+597,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+598,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+1229,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+1222,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+1230,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+1231,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+1004,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+1180,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+1005,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+1007,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+1008,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+1232,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+1181,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+599,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+452,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+1233,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+1221,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+600,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+454,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+1229,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+1222,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+1234,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+1009,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+601,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+602,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+455,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+604,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+1221,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+605,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+1182,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+1183,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+1184,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+1185,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+1186,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+6,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+7,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+1233,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+1221,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+600,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+401,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+1229,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+1222,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+1230,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+1235,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+1010,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+1187,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+1011,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+1013,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+1008,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+1236,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+1153,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+1154,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+1155,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1157,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1158,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1159,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1160,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1161,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1162,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1163,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+1164,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1165,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1166,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1167,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+1168,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+1169,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1171,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1172,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+1173,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1174,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+1175,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+1176,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1177,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1178,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1131,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+1132,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+1133,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1135,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1136,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1137,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1138,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1139,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1140,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1141,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+1142,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1143,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1144,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1145,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+1146,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+1147,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1148,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1150,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+1151,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1152,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+441,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+594,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+442,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+444,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1221,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+564,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+445,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+446,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1222,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+447,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+448,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+595,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+565,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+449,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+567,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+1221,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+596,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+450,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+451,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1233,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1228,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+436,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+587,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+588,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+398,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1221,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+399,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+590,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+591,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1222,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+592,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+400,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+593,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+437,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+438,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+439,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+437,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+1233,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1226,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+684,"top axi_crossbar_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_crossbar_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+686,"top axi_crossbar_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+456,"top axi_crossbar_u clint_axi_arready", false,-1);
        tracep->declBus(c+687,"top axi_crossbar_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top axi_crossbar_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+457,"top axi_crossbar_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+458,"top axi_crossbar_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+688,"top axi_crossbar_u clint_axi_rready", false,-1);
        tracep->declBus(c+459,"top axi_crossbar_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+460,"top axi_crossbar_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_crossbar_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+689,"top axi_crossbar_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+462,"top axi_crossbar_u clint_axi_awready", false,-1);
        tracep->declQuad(c+690,"top axi_crossbar_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+463,"top axi_crossbar_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+692,"top axi_crossbar_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+464,"top axi_crossbar_u clint_axi_wready", false,-1);
        tracep->declBus(c+457,"top axi_crossbar_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+465,"top axi_crossbar_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+693,"top axi_crossbar_u clint_axi_bready", false,-1);
        tracep->declBit(c+1181,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+599,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+452,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+1233,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+1221,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+600,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+454,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1229,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+1222,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+1234,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+1009,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+601,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+602,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+455,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+604,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+1221,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+605,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+1182,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+1183,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+1184,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1185,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+1024,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+36,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+707,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+37,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+1221,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+406,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+709,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1229,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+1243,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+1230,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+710,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+1025,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+1190,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+1026,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+1028,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+1008,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+1191,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+711,"top axi_crossbar_u clint_r_trans", false,-1);
        tracep->declBit(c+466,"top axi_crossbar_u clint_w_trans", false,-1);
        tracep->declBit(c+712,"top axi_crossbar_u perip_r_trans", false,-1);
        tracep->declBit(c+467,"top axi_crossbar_u perip_w_trans", false,-1);
        tracep->declBit(c+1121,"top IF_u clk", false,-1);
        tracep->declBit(c+1122,"top IF_u rst_n", false,-1);
        tracep->declBit(c+608,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+609,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+636,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+637,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+1014,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+606,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+619,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+611,"top IF_u if_instr_valid", false,-1);
        tracep->declBit(c+33,"top IF_u in_intr_ls", false,-1);
        tracep->declQuad(c+612,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+1239,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+617,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+618,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+614,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+1240,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+616,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+614,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+1121,"top cache_dut clk", false,-1);
        tracep->declBit(c+1122,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+713,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+616,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+1222,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+1244,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+1246,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+1014,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+617,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+714,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+618,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+612,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+697,"top cache_dut clrValid", false,-1);
        tracep->declBit(c+694,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+32,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+597,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1007,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+404,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+1005,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+1022,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+1220,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+1247,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+1248,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+1249,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+1250,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+1251,"top cache_dut unCacheOp", false,-1, 2,0);
        tracep->declBus(c+715,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+1029,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+716,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+39,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+40,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+468,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+472,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+476,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+480,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+717,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+721,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+717,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+721,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+725,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+726,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+727,"top cache_dut uncached", false,-1);
        tracep->declBit(c+41,"top cache_dut uncachedOk", false,-1);
        tracep->declBit(c+728,"top cache_dut diffAddr", false,-1);
        tracep->declBit(c+729,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+42,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+44,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+45,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+46,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+47,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+49,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+51,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+52,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+1192,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+1193,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+1194,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+1195,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+53,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+54,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+1252,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+1253,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+730,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+484,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+492,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+1196,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+1198,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+731,"top cache_dut missEn", false,-1);
        tracep->declBit(c+732,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+55,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+500,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+57,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+733,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+734,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+742,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+1254,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1216,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1255,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1254,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+468,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+1121,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+743,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+744,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+1256,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+1030,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+717,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+745,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+725,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+1260,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1254,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1216,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1255,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1254,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+472,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+1121,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+743,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+744,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+1256,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+1030,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+721,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+745,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+725,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+1260,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1254,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1216,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1255,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1254,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+476,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+1121,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+746,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+747,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+1256,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+1031,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+717,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+748,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+726,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+1260,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1254,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1216,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1255,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1254,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+480,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+1121,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+746,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+747,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+1256,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+1031,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+721,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+748,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+726,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+1260,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1216,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1216,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1216,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1216,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1217,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1219,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1121,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+1122,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+694,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+32,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+1005,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+407,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+597,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1007,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+1022,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+1,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+1179,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1223,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1221,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+597,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+598,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1229,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1222,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+1230,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1231,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+1004,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+1180,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1005,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1007,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+1008,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1232,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+1264,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+1229,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+1265,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+1266,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+58,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+1032,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+2,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+5,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+1267,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1223,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+1222,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+597,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+598,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+1121,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+1122,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+606,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+619,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+983,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+640,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+620,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+622,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+749,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+751,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+1268,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1269,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1121,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+1122,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+983,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+752,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+755,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+1121,"top ID_u clk", false,-1);
        tracep->declBit(c+1122,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+620,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+671,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+677,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+622,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+678,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+680,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+681,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+992,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+990,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+623,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+625,"top ID_u src1sel", false,-1);
        tracep->declBus(c+626,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+627,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+630,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+629,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+628,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+631,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+632,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+633,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+1128,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+634,"top ID_u DivEn", false,-1);
        tracep->declBus(c+635,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+638,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+636,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+637,"top ID_u out_trap_id", false,-1);
        tracep->declBit(c+695,"top ID_u fence_id", false,-1);
        tracep->declBus(c+758,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+623,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+992,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+990,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+620,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+622,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+632,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+633,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+758,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+625,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+626,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+627,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+630,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+629,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+628,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+631,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+634,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+635,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+638,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+636,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+637,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBit(c+695,"top ID_u decoder_u fence_id", false,-1);
        tracep->declBus(c+759,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+760,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+761,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+762,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+758,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+623,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+1121,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+671,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+677,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+632,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+992,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+633,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+990,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+680,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+678,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+681,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+1128,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1057+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+622,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+643,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBus(c+18,"top hazard_detect_u instr_ls_i", false,-1, 31,0);
        tracep->declBus(c+677,"top hazard_detect_u instr_wb_i", false,-1, 31,0);
        tracep->declBit(c+639,"top hazard_detect_u ld_use_hazard", false,-1);
        tracep->declBit(c+405,"top hazard_detect_u ld_csr_hazard", false,-1);
        tracep->declBit(c+763,"top hazard_detect_u wb_is_load", false,-1);
        tracep->declBit(c+59,"top hazard_detect_u ls_is_csropi", false,-1);
        tracep->declBit(c+1121,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+1122,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+984,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+666,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+620,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+622,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+623,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+990,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+992,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+627,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+630,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+629,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+628,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+625,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+626,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+631,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+632,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+633,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+634,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+635,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+638,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declBit(c+695,"top EX_reg_u fence_ex_reg_i", false,-1);
        tracep->declQuad(c+641,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+643,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+646,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+648,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+650,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+654,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+657,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+656,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+655,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+644,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+645,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+658,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+664,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+665,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+659,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+660,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+661,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declBit(c+696,"top EX_reg_u fence_ex_reg_o", false,-1);
        tracep->declQuad(c+764,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+766,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+767,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+768,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+769,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+770,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+771,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBit(c+772,"top EX_reg_u fence_ex_reg", false,-1);
        tracep->declBus(c+1270,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1269,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1121,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+1122,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+984,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+994,"top EX_reg_u ex_reg i_din", false,-1, 315,0);
        tracep->declArray(c+773,"top EX_reg_u ex_reg o_dout", false,-1, 315,0);
        tracep->declBit(c+1121,"top ex_stage_u clk", false,-1);
        tracep->declBit(c+1122,"top ex_stage_u rst_n", false,-1);
        tracep->declBus(c+654,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+648,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+646,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+650,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+641,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+643,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+657,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+656,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+655,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+644,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+645,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+662,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+663,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+16,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+678,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+659,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+660,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declBit(c+666,"top ex_stage_u flush_ex_i", false,-1);
        tracep->declQuad(c+1015,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+609,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+652,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+608,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+1017,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+667,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+668,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+985,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+783,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+785,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+787,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+652,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBit(c+1200,"top ex_stage_u aluNotOk", false,-1);
        tracep->declBit(c+1121,"top ex_stage_u u_ALU clk", false,-1);
        tracep->declBit(c+1122,"top ex_stage_u u_ALU rst_n", false,-1);
        tracep->declBus(c+654,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+783,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+785,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+659,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+660,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declBit(c+666,"top ex_stage_u u_ALU flush_alu", false,-1);
        tracep->declQuad(c+1015,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+789,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+790,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declBit(c+1200,"top ex_stage_u u_ALU aluNotOk", false,-1);
        tracep->declQuad(c+1033,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+791,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+792,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+794,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+796,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+796,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+797,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+798,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+799,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+801,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+802,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+803,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+805,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+807,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+60,"top ex_stage_u u_ALU src1Reg", false,-1, 63,0);
        tracep->declQuad(c+62,"top ex_stage_u u_ALU src2Reg", false,-1, 63,0);
        tracep->declBit(c+809,"top ex_stage_u u_ALU diffIn", false,-1);
        tracep->declBit(c+810,"top ex_stage_u u_ALU mul_valid", false,-1);
        tracep->declBit(c+1201,"top ex_stage_u u_ALU mul_resValid", false,-1);
        tracep->declQuad(c+1202,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+409,"top ex_stage_u u_ALU mulOut", false,-1, 63,0);
        tracep->declBit(c+811,"top ex_stage_u u_ALU div_valid", false,-1);
        tracep->declBit(c+64,"top ex_stage_u u_ALU div_resValid", false,-1);
        tracep->declQuad(c+783,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+792,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+791,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+794,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+801,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+790,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+802,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+812,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+798,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+796,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+797,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+791,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+796,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+813,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+783,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+814,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+797,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+796,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+799,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+815,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+817,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+819,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+821,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+823,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+825,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+827,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declBit(c+1121,"top ex_stage_u u_ALU multiplier clk", false,-1);
        tracep->declBit(c+1122,"top ex_stage_u u_ALU multiplier rst_n", false,-1);
        tracep->declBit(c+810,"top ex_stage_u u_ALU multiplier mul_valid", false,-1);
        tracep->declBit(c+666,"top ex_stage_u u_ALU multiplier flush", false,-1);
        tracep->declBus(c+829,"top ex_stage_u u_ALU multiplier mul_type", false,-1, 1,0);
        tracep->declQuad(c+783,"top ex_stage_u u_ALU multiplier multiplicand", false,-1, 63,0);
        tracep->declQuad(c+785,"top ex_stage_u u_ALU multiplier multiplier", false,-1, 63,0);
        tracep->declBit(c+1201,"top ex_stage_u u_ALU multiplier out_valid", false,-1);
        tracep->declQuad(c+409,"top ex_stage_u u_ALU multiplier result", false,-1, 63,0);
        tracep->declBit(c+830,"top ex_stage_u u_ALU multiplier stateReg", false,-1);
        tracep->declBit(c+831,"top ex_stage_u u_ALU multiplier interValid", false,-1);
        tracep->declBit(c+832,"top ex_stage_u u_ALU multiplier resultValidReg_d", false,-1);
        tracep->declBit(c+1204,"top ex_stage_u u_ALU multiplier resultValidReg_q", false,-1);
        tracep->declBus(c+833,"top ex_stage_u u_ALU multiplier mul_signed", false,-1, 1,0);
        tracep->declQuad(c+65,"top ex_stage_u u_ALU multiplier result_hi", false,-1, 63,0);
        tracep->declQuad(c+67,"top ex_stage_u u_ALU multiplier result_lo", false,-1, 63,0);
        tracep->declBus(c+1219,"top ex_stage_u u_ALU multiplier resultValidReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1269,"top ex_stage_u u_ALU multiplier resultValidReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1121,"top ex_stage_u u_ALU multiplier resultValidReg i_clk", false,-1);
        tracep->declBit(c+1035,"top ex_stage_u u_ALU multiplier resultValidReg i_rst_n", false,-1);
        tracep->declBit(c+1240,"top ex_stage_u u_ALU multiplier resultValidReg i_wen", false,-1);
        tracep->declBus(c+832,"top ex_stage_u u_ALU multiplier resultValidReg i_din", false,-1, 0,0);
        tracep->declBus(c+1204,"top ex_stage_u u_ALU multiplier resultValidReg o_dout", false,-1, 0,0);
        tracep->declBit(c+1121,"top ex_stage_u u_ALU multiplier mul64_u clk", false,-1);
        tracep->declBit(c+1122,"top ex_stage_u u_ALU multiplier mul64_u rst_n", false,-1);
        tracep->declBit(c+810,"top ex_stage_u u_ALU multiplier mul64_u mul_valid", false,-1);
        tracep->declBit(c+666,"top ex_stage_u u_ALU multiplier mul64_u flush", false,-1);
        tracep->declBit(c+1222,"top ex_stage_u u_ALU multiplier mul64_u mulw", false,-1);
        tracep->declBus(c+833,"top ex_stage_u u_ALU multiplier mul64_u mul_signed", false,-1, 1,0);
        tracep->declQuad(c+783,"top ex_stage_u u_ALU multiplier mul64_u multiplicand", false,-1, 63,0);
        tracep->declQuad(c+785,"top ex_stage_u u_ALU multiplier mul64_u multiplier", false,-1, 63,0);
        tracep->declBit(c+834,"top ex_stage_u u_ALU multiplier mul64_u mul_ready", false,-1);
        tracep->declBit(c+831,"top ex_stage_u u_ALU multiplier mul64_u out_valid", false,-1);
        tracep->declQuad(c+65,"top ex_stage_u u_ALU multiplier mul64_u result_hi", false,-1, 63,0);
        tracep->declQuad(c+67,"top ex_stage_u u_ALU multiplier mul64_u result_lo", false,-1, 63,0);
        tracep->declBit(c+835,"top ex_stage_u u_ALU multiplier mul64_u src1_is_signed", false,-1);
        tracep->declBit(c+836,"top ex_stage_u u_ALU multiplier mul64_u src2_is_signed", false,-1);
        tracep->declQuad(c+837,"top ex_stage_u u_ALU multiplier mul64_u mul_lo_src1", false,-1, 32,0);
        tracep->declQuad(c+839,"top ex_stage_u u_ALU multiplier mul64_u mul_hi_src1", false,-1, 32,0);
        tracep->declQuad(c+841,"top ex_stage_u u_ALU multiplier mul64_u mul_lo_src2", false,-1, 32,0);
        tracep->declQuad(c+843,"top ex_stage_u u_ALU multiplier mul64_u mul_hi_src2", false,-1, 32,0);
        tracep->declArray(c+845,"top ex_stage_u u_ALU multiplier mul64_u mul_ll_rslt", false,-1, 65,0);
        tracep->declArray(c+848,"top ex_stage_u u_ALU multiplier mul64_u mul_lh_rslt", false,-1, 65,0);
        tracep->declArray(c+851,"top ex_stage_u u_ALU multiplier mul64_u mul_hl_rslt", false,-1, 65,0);
        tracep->declArray(c+854,"top ex_stage_u u_ALU multiplier mul64_u mul_hh_rslt", false,-1, 65,0);
        tracep->declArray(c+69,"top ex_stage_u u_ALU multiplier mul64_u mul_ll_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+72,"top ex_stage_u u_ALU multiplier mul64_u mul_lh_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+75,"top ex_stage_u u_ALU multiplier mul64_u mul_hl_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+78,"top ex_stage_u u_ALU multiplier mul64_u mul_hh_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+81,"top ex_stage_u u_ALU multiplier mul64_u mul_ll_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+86,"top ex_stage_u u_ALU multiplier mul64_u mul_lh_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+91,"top ex_stage_u u_ALU multiplier mul64_u mul_hl_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+96,"top ex_stage_u u_ALU multiplier mul64_u mul_hh_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+101,"top ex_stage_u u_ALU multiplier mul64_u mul_rslt_stg2_ex2", false,-1, 129,0);
        tracep->declBit(c+857,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_set", false,-1);
        tracep->declBit(c+858,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_clr", false,-1);
        tracep->declBit(c+859,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_d", false,-1);
        tracep->declBit(c+831,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_q", false,-1);
        tracep->declBit(c+831,"top ex_stage_u u_ALU multiplier mul64_u int_reg_wr_ready_fin", false,-1);
        tracep->declBus(c+1271,"top ex_stage_u u_ALU multiplier mul64_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1269,"top ex_stage_u u_ALU multiplier mul64_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1121,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_clk", false,-1);
        tracep->declBit(c+1122,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+857,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_wen", false,-1);
        tracep->declArray(c+860,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_din", false,-1, 263,0);
        tracep->declArray(c+106,"top ex_stage_u u_ALU multiplier mul64_u id_reg o_dout", false,-1, 263,0);
        tracep->declBit(c+1121,"top ex_stage_u u_ALU divider clk", false,-1);
        tracep->declBit(c+1122,"top ex_stage_u u_ALU divider rst_n", false,-1);
        tracep->declQuad(c+783,"top ex_stage_u u_ALU divider dividend", false,-1, 63,0);
        tracep->declQuad(c+785,"top ex_stage_u u_ALU divider divisor", false,-1, 63,0);
        tracep->declBit(c+811,"top ex_stage_u u_ALU divider div_valid", false,-1);
        tracep->declBus(c+829,"top ex_stage_u u_ALU divider div_type", false,-1, 1,0);
        tracep->declBit(c+666,"top ex_stage_u u_ALU divider flush", false,-1);
        tracep->declBit(c+64,"top ex_stage_u u_ALU divider div_ready", false,-1);
        tracep->declBit(c+64,"top ex_stage_u u_ALU divider out_valid", false,-1);
        tracep->declQuad(c+1202,"top ex_stage_u u_ALU divider result", false,-1, 63,0);
        tracep->declBus(c+115,"top ex_stage_u u_ALU divider div_type_r", false,-1, 1,0);
        tracep->declQuad(c+869,"top ex_stage_u u_ALU divider dividend_N", false,-1, 63,0);
        tracep->declQuad(c+871,"top ex_stage_u u_ALU divider divisor_N", false,-1, 63,0);
        tracep->declQuad(c+116,"top ex_stage_u u_ALU divider divisor_N_r", false,-1, 63,0);
        tracep->declQuad(c+118,"top ex_stage_u u_ALU divider divisor_P_r", false,-1, 63,0);
        tracep->declArray(c+120,"top ex_stage_u u_ALU divider dividendReg", false,-1, 127,0);
        tracep->declQuad(c+124,"top ex_stage_u u_ALU divider restore_remainder", false,-1, 63,0);
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
        tracep->declQuad(c+141,"top ex_stage_u u_ALU divider cla_64_u1 a_64", false,-1, 63,0);
        tracep->declQuad(c+130,"top ex_stage_u u_ALU divider cla_64_u1 b_64", false,-1, 63,0);
        tracep->declBit(c+1222,"top ex_stage_u u_ALU divider cla_64_u1 cin_64", false,-1);
        tracep->declQuad(c+143,"top ex_stage_u u_ALU divider cla_64_u1 p_64", false,-1, 63,0);
        tracep->declQuad(c+145,"top ex_stage_u u_ALU divider cla_64_u1 g_64", false,-1, 63,0);
        tracep->declQuad(c+132,"top ex_stage_u u_ALU divider cla_64_u1 s_64", false,-1, 63,0);
        tracep->declBit(c+147,"top ex_stage_u u_ALU divider cla_64_u1 gx_64", false,-1);
        tracep->declBit(c+148,"top ex_stage_u u_ALU divider cla_64_u1 px_64", false,-1);
        tracep->declBit(c+149,"top ex_stage_u u_ALU divider cla_64_u1 px1", false,-1);
        tracep->declBit(c+150,"top ex_stage_u u_ALU divider cla_64_u1 px2", false,-1);
        tracep->declBit(c+151,"top ex_stage_u u_ALU divider cla_64_u1 px3", false,-1);
        tracep->declBit(c+152,"top ex_stage_u u_ALU divider cla_64_u1 px4", false,-1);
        tracep->declBit(c+153,"top ex_stage_u u_ALU divider cla_64_u1 gx1", false,-1);
        tracep->declBit(c+154,"top ex_stage_u u_ALU divider cla_64_u1 gx2", false,-1);
        tracep->declBit(c+155,"top ex_stage_u u_ALU divider cla_64_u1 gx3", false,-1);
        tracep->declBit(c+156,"top ex_stage_u u_ALU divider cla_64_u1 gx4", false,-1);
        tracep->declBit(c+153,"top ex_stage_u u_ALU divider cla_64_u1 c15", false,-1);
        tracep->declBit(c+157,"top ex_stage_u u_ALU divider cla_64_u1 c31", false,-1);
        tracep->declBit(c+158,"top ex_stage_u u_ALU divider cla_64_u1 c47", false,-1);
        tracep->declBus(c+159,"top ex_stage_u u_ALU divider cla_64_u1 u1 a_16", false,-1, 15,0);
        tracep->declBus(c+160,"top ex_stage_u u_ALU divider cla_64_u1 u1 b_16", false,-1, 15,0);
        tracep->declBit(c+1222,"top ex_stage_u u_ALU divider cla_64_u1 u1 cin_16", false,-1);
        tracep->declBus(c+161,"top ex_stage_u u_ALU divider cla_64_u1 u1 p_16", false,-1, 15,0);
        tracep->declBus(c+162,"top ex_stage_u u_ALU divider cla_64_u1 u1 g_16", false,-1, 15,0);
        tracep->declBus(c+163,"top ex_stage_u u_ALU divider cla_64_u1 u1 s_16", false,-1, 15,0);
        tracep->declBit(c+153,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx_16", false,-1);
        tracep->declBit(c+149,"top ex_stage_u u_ALU divider cla_64_u1 u1 px_16", false,-1);
        tracep->declBit(c+164,"top ex_stage_u u_ALU divider cla_64_u1 u1 c3", false,-1);
        tracep->declBit(c+165,"top ex_stage_u u_ALU divider cla_64_u1 u1 c7", false,-1);
        tracep->declBit(c+166,"top ex_stage_u u_ALU divider cla_64_u1 u1 c11", false,-1);
        tracep->declBit(c+167,"top ex_stage_u u_ALU divider cla_64_u1 u1 px1", false,-1);
        tracep->declBit(c+168,"top ex_stage_u u_ALU divider cla_64_u1 u1 px2", false,-1);
        tracep->declBit(c+169,"top ex_stage_u u_ALU divider cla_64_u1 u1 px3", false,-1);
        tracep->declBit(c+170,"top ex_stage_u u_ALU divider cla_64_u1 u1 px4", false,-1);
        tracep->declBit(c+164,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx1", false,-1);
        tracep->declBit(c+171,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx2", false,-1);
        tracep->declBit(c+172,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx3", false,-1);
        tracep->declBit(c+173,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx4", false,-1);
        tracep->declBus(c+174,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+175,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+1222,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 cin_4", false,-1);
        tracep->declBus(c+176,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+177,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+178,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+167,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 px_4", false,-1);
        tracep->declBit(c+164,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 gx_4", false,-1);
        tracep->declBus(c+179,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+180,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+181,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+164,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 cin_4", false,-1);
        tracep->declBus(c+182,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+183,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+184,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+168,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 px_4", false,-1);
        tracep->declBit(c+171,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 gx_4", false,-1);
        tracep->declBus(c+185,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+186,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+187,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+165,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 cin_4", false,-1);
        tracep->declBus(c+188,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+189,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+190,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+169,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 px_4", false,-1);
        tracep->declBit(c+172,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 gx_4", false,-1);
        tracep->declBus(c+191,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+192,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+193,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+166,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 cin_4", false,-1);
        tracep->declBus(c+194,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+195,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+196,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+170,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 px_4", false,-1);
        tracep->declBit(c+173,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 gx_4", false,-1);
        tracep->declBus(c+197,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 c_int", false,-1, 3,0);
        tracep->declBus(c+198,"top ex_stage_u u_ALU divider cla_64_u1 u2 a_16", false,-1, 15,0);
        tracep->declBus(c+199,"top ex_stage_u u_ALU divider cla_64_u1 u2 b_16", false,-1, 15,0);
        tracep->declBit(c+153,"top ex_stage_u u_ALU divider cla_64_u1 u2 cin_16", false,-1);
        tracep->declBus(c+200,"top ex_stage_u u_ALU divider cla_64_u1 u2 p_16", false,-1, 15,0);
        tracep->declBus(c+201,"top ex_stage_u u_ALU divider cla_64_u1 u2 g_16", false,-1, 15,0);
        tracep->declBus(c+202,"top ex_stage_u u_ALU divider cla_64_u1 u2 s_16", false,-1, 15,0);
        tracep->declBit(c+154,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx_16", false,-1);
        tracep->declBit(c+150,"top ex_stage_u u_ALU divider cla_64_u1 u2 px_16", false,-1);
        tracep->declBit(c+203,"top ex_stage_u u_ALU divider cla_64_u1 u2 c3", false,-1);
        tracep->declBit(c+204,"top ex_stage_u u_ALU divider cla_64_u1 u2 c7", false,-1);
        tracep->declBit(c+205,"top ex_stage_u u_ALU divider cla_64_u1 u2 c11", false,-1);
        tracep->declBit(c+206,"top ex_stage_u u_ALU divider cla_64_u1 u2 px1", false,-1);
        tracep->declBit(c+207,"top ex_stage_u u_ALU divider cla_64_u1 u2 px2", false,-1);
        tracep->declBit(c+208,"top ex_stage_u u_ALU divider cla_64_u1 u2 px3", false,-1);
        tracep->declBit(c+209,"top ex_stage_u u_ALU divider cla_64_u1 u2 px4", false,-1);
        tracep->declBit(c+210,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx1", false,-1);
        tracep->declBit(c+211,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx2", false,-1);
        tracep->declBit(c+212,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx3", false,-1);
        tracep->declBit(c+213,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx4", false,-1);
        tracep->declBus(c+214,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+215,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+153,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 cin_4", false,-1);
        tracep->declBus(c+216,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+217,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+218,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+206,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 px_4", false,-1);
        tracep->declBit(c+210,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 gx_4", false,-1);
        tracep->declBus(c+219,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+220,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+221,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+203,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 cin_4", false,-1);
        tracep->declBus(c+222,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+223,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+224,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+207,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 px_4", false,-1);
        tracep->declBit(c+211,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 gx_4", false,-1);
        tracep->declBus(c+225,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+226,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+227,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+204,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 cin_4", false,-1);
        tracep->declBus(c+228,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+229,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+230,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+208,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 px_4", false,-1);
        tracep->declBit(c+212,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 gx_4", false,-1);
        tracep->declBus(c+231,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+232,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+233,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+205,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 cin_4", false,-1);
        tracep->declBus(c+234,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+235,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+236,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+209,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 px_4", false,-1);
        tracep->declBit(c+213,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 gx_4", false,-1);
        tracep->declBus(c+237,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 c_int", false,-1, 3,0);
        tracep->declBus(c+238,"top ex_stage_u u_ALU divider cla_64_u1 u3 a_16", false,-1, 15,0);
        tracep->declBus(c+239,"top ex_stage_u u_ALU divider cla_64_u1 u3 b_16", false,-1, 15,0);
        tracep->declBit(c+157,"top ex_stage_u u_ALU divider cla_64_u1 u3 cin_16", false,-1);
        tracep->declBus(c+240,"top ex_stage_u u_ALU divider cla_64_u1 u3 p_16", false,-1, 15,0);
        tracep->declBus(c+241,"top ex_stage_u u_ALU divider cla_64_u1 u3 g_16", false,-1, 15,0);
        tracep->declBus(c+242,"top ex_stage_u u_ALU divider cla_64_u1 u3 s_16", false,-1, 15,0);
        tracep->declBit(c+155,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx_16", false,-1);
        tracep->declBit(c+151,"top ex_stage_u u_ALU divider cla_64_u1 u3 px_16", false,-1);
        tracep->declBit(c+243,"top ex_stage_u u_ALU divider cla_64_u1 u3 c3", false,-1);
        tracep->declBit(c+244,"top ex_stage_u u_ALU divider cla_64_u1 u3 c7", false,-1);
        tracep->declBit(c+245,"top ex_stage_u u_ALU divider cla_64_u1 u3 c11", false,-1);
        tracep->declBit(c+246,"top ex_stage_u u_ALU divider cla_64_u1 u3 px1", false,-1);
        tracep->declBit(c+247,"top ex_stage_u u_ALU divider cla_64_u1 u3 px2", false,-1);
        tracep->declBit(c+248,"top ex_stage_u u_ALU divider cla_64_u1 u3 px3", false,-1);
        tracep->declBit(c+249,"top ex_stage_u u_ALU divider cla_64_u1 u3 px4", false,-1);
        tracep->declBit(c+250,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx1", false,-1);
        tracep->declBit(c+251,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx2", false,-1);
        tracep->declBit(c+252,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx3", false,-1);
        tracep->declBit(c+253,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx4", false,-1);
        tracep->declBus(c+254,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+255,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+157,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 cin_4", false,-1);
        tracep->declBus(c+256,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+257,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+258,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+246,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 px_4", false,-1);
        tracep->declBit(c+250,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 gx_4", false,-1);
        tracep->declBus(c+259,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+260,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+261,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+243,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 cin_4", false,-1);
        tracep->declBus(c+262,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+263,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+264,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+247,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 px_4", false,-1);
        tracep->declBit(c+251,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 gx_4", false,-1);
        tracep->declBus(c+265,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+266,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+267,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+244,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 cin_4", false,-1);
        tracep->declBus(c+268,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+269,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+270,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+248,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 px_4", false,-1);
        tracep->declBit(c+252,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 gx_4", false,-1);
        tracep->declBus(c+271,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+272,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+273,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+245,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 cin_4", false,-1);
        tracep->declBus(c+274,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+275,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+276,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+249,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 px_4", false,-1);
        tracep->declBit(c+253,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 gx_4", false,-1);
        tracep->declBus(c+277,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 c_int", false,-1, 3,0);
        tracep->declBus(c+278,"top ex_stage_u u_ALU divider cla_64_u1 u4 a_16", false,-1, 15,0);
        tracep->declBus(c+279,"top ex_stage_u u_ALU divider cla_64_u1 u4 b_16", false,-1, 15,0);
        tracep->declBit(c+158,"top ex_stage_u u_ALU divider cla_64_u1 u4 cin_16", false,-1);
        tracep->declBus(c+280,"top ex_stage_u u_ALU divider cla_64_u1 u4 p_16", false,-1, 15,0);
        tracep->declBus(c+281,"top ex_stage_u u_ALU divider cla_64_u1 u4 g_16", false,-1, 15,0);
        tracep->declBus(c+282,"top ex_stage_u u_ALU divider cla_64_u1 u4 s_16", false,-1, 15,0);
        tracep->declBit(c+156,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx_16", false,-1);
        tracep->declBit(c+152,"top ex_stage_u u_ALU divider cla_64_u1 u4 px_16", false,-1);
        tracep->declBit(c+283,"top ex_stage_u u_ALU divider cla_64_u1 u4 c3", false,-1);
        tracep->declBit(c+284,"top ex_stage_u u_ALU divider cla_64_u1 u4 c7", false,-1);
        tracep->declBit(c+285,"top ex_stage_u u_ALU divider cla_64_u1 u4 c11", false,-1);
        tracep->declBit(c+286,"top ex_stage_u u_ALU divider cla_64_u1 u4 px1", false,-1);
        tracep->declBit(c+287,"top ex_stage_u u_ALU divider cla_64_u1 u4 px2", false,-1);
        tracep->declBit(c+288,"top ex_stage_u u_ALU divider cla_64_u1 u4 px3", false,-1);
        tracep->declBit(c+289,"top ex_stage_u u_ALU divider cla_64_u1 u4 px4", false,-1);
        tracep->declBit(c+290,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx1", false,-1);
        tracep->declBit(c+291,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx2", false,-1);
        tracep->declBit(c+292,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx3", false,-1);
        tracep->declBit(c+293,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx4", false,-1);
        tracep->declBus(c+294,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+295,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+158,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 cin_4", false,-1);
        tracep->declBus(c+296,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+297,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+298,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+286,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 px_4", false,-1);
        tracep->declBit(c+290,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 gx_4", false,-1);
        tracep->declBus(c+299,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+300,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+301,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+283,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 cin_4", false,-1);
        tracep->declBus(c+302,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+303,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+304,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+287,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 px_4", false,-1);
        tracep->declBit(c+291,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 gx_4", false,-1);
        tracep->declBus(c+305,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+306,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+307,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+284,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 cin_4", false,-1);
        tracep->declBus(c+308,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+309,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+310,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+288,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 px_4", false,-1);
        tracep->declBit(c+292,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 gx_4", false,-1);
        tracep->declBus(c+311,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+312,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+313,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+285,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 cin_4", false,-1);
        tracep->declBus(c+314,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+315,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+316,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+289,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 px_4", false,-1);
        tracep->declBit(c+293,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 gx_4", false,-1);
        tracep->declBus(c+317,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 c_int", false,-1, 3,0);
        tracep->declQuad(c+787,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+652,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+657,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+656,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+655,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+873,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+650,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+641,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+609,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+608,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+874,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+876,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+1272,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+878,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+879,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+880,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+881,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+883,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+885,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+1121,"top forwarding_u clk", false,-1);
        tracep->declBit(c+1122,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+664,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+665,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+318,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+680,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+19,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+681,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+678,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+1018,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+662,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+663,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+10,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+10,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+319,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+320,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+411,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+886,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+412,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+413,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+887,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+414,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+1121,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+1122,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+641,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+652,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+643,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+1015,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+658,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+661,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+1018,"top L_S_reg_u stall_n", false,-1);
        tracep->declBit(c+33,"top L_S_reg_u flush_i", false,-1);
        tracep->declBit(c+696,"top L_S_reg_u fence_ls_reg_i", false,-1);
        tracep->declQuad(c+12,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+18,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+16,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+19,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+26,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBit(c+34,"top L_S_reg_u fence_ls_reg_o", false,-1);
        tracep->declArray(c+428,"top L_S_reg_u bundle", false,-1, 226,0);
        tracep->declBus(c+1273,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1269,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1121,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+1122,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+1018,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+428,"top L_S_reg_u ls_reg i_din", false,-1, 226,0);
        tracep->declArray(c+321,"top L_S_reg_u ls_reg o_dout", false,-1, 226,0);
        tracep->declBit(c+1121,"top ls_u clk", false,-1);
        tracep->declBit(c+1122,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+673,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+677,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+675,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+682,"top ls_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+1018,"top ls_u stall_n", false,-1);
        tracep->declBit(c+1014,"top ls_u if_stall_n", false,-1);
        tracep->declQuad(c+1188,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+1019,"top ls_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top ls_u in_intr_ls", false,-1);
        tracep->declBit(c+405,"top ls_u ld_csr_hazard", false,-1);
        tracep->declQuad(c+671,"top ls_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+641,"top ls_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+620,"top ls_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+606,"top ls_u if_pc", false,-1, 63,0);
        tracep->declQuad(c+684,"top ls_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1220,"top ls_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+686,"top ls_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+456,"top ls_u clint_axi_arready", false,-1);
        tracep->declBus(c+687,"top ls_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+457,"top ls_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+458,"top ls_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+688,"top ls_u clint_axi_rready", false,-1);
        tracep->declBus(c+459,"top ls_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+460,"top ls_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1220,"top ls_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+689,"top ls_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+462,"top ls_u clint_axi_awready", false,-1);
        tracep->declQuad(c+690,"top ls_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+463,"top ls_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+692,"top ls_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+464,"top ls_u clint_axi_wready", false,-1);
        tracep->declBus(c+457,"top ls_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+465,"top ls_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+693,"top ls_u clint_axi_bready", false,-1);
        tracep->declQuad(c+16,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+402,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+669,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+670,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+1019,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+1019,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+1020,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u rden", false,-1);
        tracep->declBus(c+329,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+402,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+888,"top ls_u wren_last", false,-1);
        tracep->declQuad(c+889,"top ls_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+1036,"top ls_u csr_stall_n", false,-1);
        tracep->declBit(c+330,"top ls_u timr_int", false,-1);
        tracep->declBit(c+1121,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+1122,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+329,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+402,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+673,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+888,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+1188,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+1019,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+402,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+669,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+670,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+1019,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+1019,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+1020,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+1020,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+331,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+332,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+333,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+334,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+335,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+336,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+337,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+29,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+1037,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+1038,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+1039,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+670,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+669,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+338,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+339,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+340,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+341,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+18,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+677,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+675,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+682,"top ls_u ls_ctr_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+329,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+402,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+415,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+416,"top ls_u ls_ctr_u csr_st_en", false,-1);
        tracep->declBit(c+1121,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+1122,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+671,"top ls_u CSR_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+641,"top ls_u CSR_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+620,"top ls_u CSR_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+606,"top ls_u CSR_u if_pc", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+889,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+1036,"top ls_u CSR_u stall_n", false,-1);
        tracep->declBit(c+330,"top ls_u CSR_u timer_int_i", false,-1);
        tracep->declBit(c+33,"top ls_u CSR_u in_intr_ls", false,-1);
        tracep->declQuad(c+20,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declQuad(c+342,"top ls_u CSR_u commitPC", false,-1, 63,0);
        tracep->declBit(c+344,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+345,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+346,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+347,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+348,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+349,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+350,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+351,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+352,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declBit(c+353,"top ls_u CSR_u sel_mie", false,-1);
        tracep->declBit(c+354,"top ls_u CSR_u sel_mip", false,-1);
        tracep->declQuad(c+889,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+417,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+419,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+891,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+355,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declBit(c+357,"top ls_u CSR_u mstatus_MIE", false,-1);
        tracep->declQuad(c+358,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+360,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declQuad(c+362,"top ls_u CSR_u mie", false,-1, 63,0);
        tracep->declBit(c+364,"top ls_u CSR_u mie_MTIE", false,-1);
        tracep->declQuad(c+365,"top ls_u CSR_u mip", false,-1, 63,0);
        tracep->declBit(c+367,"top ls_u CSR_u mip_MTIP", false,-1);
        tracep->declBit(c+1121,"top ls_u clint_u clk", false,-1);
        tracep->declBit(c+1122,"top ls_u clint_u rst_n", false,-1);
        tracep->declQuad(c+684,"top ls_u clint_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1220,"top ls_u clint_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+686,"top ls_u clint_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+456,"top ls_u clint_u clint_axi_arready", false,-1);
        tracep->declBus(c+687,"top ls_u clint_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+457,"top ls_u clint_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+458,"top ls_u clint_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+688,"top ls_u clint_u clint_axi_rready", false,-1);
        tracep->declBus(c+459,"top ls_u clint_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+460,"top ls_u clint_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1220,"top ls_u clint_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+689,"top ls_u clint_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+462,"top ls_u clint_u clint_axi_awready", false,-1);
        tracep->declQuad(c+690,"top ls_u clint_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+463,"top ls_u clint_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+692,"top ls_u clint_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+464,"top ls_u clint_u clint_axi_wready", false,-1);
        tracep->declBus(c+457,"top ls_u clint_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+465,"top ls_u clint_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+693,"top ls_u clint_u clint_axi_bready", false,-1);
        tracep->declBit(c+330,"top ls_u clint_u hart0_time_int_o", false,-1);
        tracep->declQuad(c+501,"top ls_u clint_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+462,"top ls_u clint_u axi_awready", false,-1);
        tracep->declBit(c+464,"top ls_u clint_u axi_wready", false,-1);
        tracep->declBus(c+503,"top ls_u clint_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+465,"top ls_u clint_u axi_bvalid", false,-1);
        tracep->declQuad(c+504,"top ls_u clint_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+456,"top ls_u clint_u axi_arready", false,-1);
        tracep->declBus(c+457,"top ls_u clint_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+458,"top ls_u clint_u axi_rvalid", false,-1);
        tracep->declBit(c+506,"top ls_u clint_u aw_en", false,-1);
        tracep->declQuad(c+30,"top ls_u clint_u reg_data_out", false,-1, 63,0);
        tracep->declQuad(c+368,"top ls_u clint_u mtime", false,-1, 63,0);
        tracep->declQuad(c+370,"top ls_u clint_u mtimecmp", false,-1, 63,0);
        tracep->declBit(c+893,"top ls_u clint_u mtimeWrEn", false,-1);
        tracep->declBit(c+894,"top ls_u clint_u mtimecmpWrEn", false,-1);
        tracep->declBit(c+895,"top ls_u clint_u slv_reg_wren", false,-1);
        tracep->declBit(c+576,"top ls_u clint_u slv_reg_rden", false,-1);
        tracep->declBus(c+372,"top ls_u clint_u byte_index", false,-1, 31,0);
        tracep->declBit(c+1121,"top Dcache_u clk", false,-1);
        tracep->declBit(c+1122,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+1040,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+896,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+897,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+898,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+402,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+669,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+1018,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+985,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+1019,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+1020,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBus(c+670,"top Dcache_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top Dcache_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+696,"top Dcache_u fence_clean", false,-1);
        tracep->declBit(c+697,"top Dcache_u clear_Icache", false,-1);
        tracep->declBit(c+698,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+35,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+600,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1013,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+899,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+1205,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declBus(c+401,"top Dcache_u cacheRdSize_o", false,-1, 2,0);
        tracep->declQuad(c+1011,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+1023,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+704,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+699,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+568,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+600,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+705,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+706,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+1220,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+1247,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+1248,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+1249,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+1250,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+1251,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+1274,"top Dcache_u clean", false,-1, 2,0);
        tracep->declBus(c+900,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+1041,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+901,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+902,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+903,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+507,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+511,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+515,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+519,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+904,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+908,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+904,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+908,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+912,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+913,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+914,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+915,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+916,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+918,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+919,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+920,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+373,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+375,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+421,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+422,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+1206,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+1207,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+1208,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+1209,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+423,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+424,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+1275,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+1276,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+377,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+378,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+379,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+921,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+523,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+531,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+1210,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+1212,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+922,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+923,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+924,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+539,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+380,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+926,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+927,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+935,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+381,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+382,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+936,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+383,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+384,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+386,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+938,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+939,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+940,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+942,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+943,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+945,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+949,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+945,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+949,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+953,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+954,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+388,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+1214,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+389,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+390,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+389,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+1215,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+955,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+425,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+1042,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+426,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+391,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+392,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+956,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+393,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBit(c+957,"top Dcache_u cleanEn", false,-1);
        tracep->declBit(c+697,"top Dcache_u clean_OK", false,-1);
        tracep->declBus(c+958,"top Dcache_u cleanCnt", false,-1, 6,0);
        tracep->declBit(c+959,"top Dcache_u cleanWrValid", false,-1);
        tracep->declBus(c+427,"top Dcache_u cleanWrAddr", false,-1, 31,0);
        tracep->declBit(c+395,"top Dcache_u oneCycleDelay", false,-1);
        tracep->declArray(c+577,"top Dcache_u cleanData", false,-1, 255,0);
        tracep->declBus(c+1254,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1216,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1255,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1254,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+507,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+1121,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+986,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+960,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+961,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+1043,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+904,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+987,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+912,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+945,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1254,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1216,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1255,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1254,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+511,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+1121,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+986,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+960,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+965,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+1043,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+908,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+987,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+912,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+949,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1254,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1216,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1255,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1254,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+515,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+1121,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+988,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+969,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+961,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+1044,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+904,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+989,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+913,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+945,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1254,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1216,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1255,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1254,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+519,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+1121,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+988,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+969,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+965,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+1044,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+908,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+989,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+913,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+949,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1216,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1216,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1216,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1216,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1217,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1219,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1121,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+1122,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+698,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+35,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+1011,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+700,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+600,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1013,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+1023,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+699,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+704,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+568,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+600,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+706,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+401,"top axi_ls_u loadSize", false,-1, 2,0);
        tracep->declBus(c+705,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+702,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+1181,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+599,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+452,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1233,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1221,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+600,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+454,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1229,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1222,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+1234,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1009,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+601,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+602,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+455,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+604,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+1221,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+605,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+1182,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+1183,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1184,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1185,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1186,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1220,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1233,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1221,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+600,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+401,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1229,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1222,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+1230,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1235,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+1010,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+1187,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1011,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1013,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+1008,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1236,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+1264,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+1229,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+1265,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+1266,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+970,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+1045,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+599,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+601,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+605,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+1277,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+604,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+452,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+540,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+548,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+454,"top axi_ls_u wrSize_reg", false,-1, 2,0);
        tracep->declBus(c+549,"top axi_ls_u storeLenth_reg", false,-1, 7,0);
        tracep->declBus(c+396,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+1264,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+1229,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+1265,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+1266,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+397,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+1046,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+6,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+9,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+1267,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1233,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+1222,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+1278,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+1249,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+550,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+1121,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+1122,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+1188,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+19,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+1018,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+671,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+677,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+673,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+675,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+681,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+682,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+1279,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1269,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1121,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+1122,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+1018,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+1047,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+971,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+671,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+677,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+673,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+675,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+682,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+680,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+678,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+1121,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+1122,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+639,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+608,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+636,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+637,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+611,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+1017,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+1019,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u in_intr_ls", false,-1);
        tracep->declBit(c+695,"top pipline_ctrl_u fence_id", false,-1);
        tracep->declBit(c+696,"top pipline_ctrl_u fence_ex", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u fence_ls", false,-1);
        tracep->declBit(c+1014,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+982,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+983,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+984,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+1018,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+1018,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+640,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+666,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u ls_flush", false,-1);
        tracep->declBit(c+981,"top pipline_ctrl_u fenceInPip", false,-1);
        tracep->declBus(c+1280,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1280,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+590,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+445,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+1121,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+1122,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+442,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+1220,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+594,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+441,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+565,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+449,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+595,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+448,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+451,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+450,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+596,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+588,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+1220,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+587,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+436,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+439,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+438,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+437,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+593,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+551,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+441,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+448,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+451,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+450,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+553,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+436,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+439,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+438,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+437,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+1281,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+1282,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+555,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+557,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+559,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+561,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+585,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+586,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+1283,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+1285,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+563,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp364;
    VlWide<3>/*95:0*/ __Vtemp367;
    VlWide<3>/*95:0*/ __Vtemp370;
    VlWide<3>/*95:0*/ __Vtemp373;
    VlWide<3>/*95:0*/ __Vtemp376;
    VlWide<5>/*159:0*/ __Vtemp377;
    VlWide<5>/*159:0*/ __Vtemp382;
    VlWide<5>/*159:0*/ __Vtemp387;
    VlWide<5>/*159:0*/ __Vtemp391;
    VlWide<8>/*255:0*/ __Vtemp396;
    VlWide<8>/*255:0*/ __Vtemp401;
    VlWide<8>/*255:0*/ __Vtemp406;
    VlWide<8>/*255:0*/ __Vtemp410;
    VlWide<4>/*127:0*/ __Vtemp411;
    VlWide<4>/*127:0*/ __Vtemp412;
    VlWide<3>/*95:0*/ __Vtemp413;
    VlWide<3>/*95:0*/ __Vtemp415;
    VlWide<3>/*95:0*/ __Vtemp416;
    VlWide<3>/*95:0*/ __Vtemp417;
    VlWide<3>/*95:0*/ __Vtemp418;
    VlWide<3>/*95:0*/ __Vtemp419;
    VlWide<3>/*95:0*/ __Vtemp422;
    VlWide<3>/*95:0*/ __Vtemp423;
    VlWide<3>/*95:0*/ __Vtemp424;
    VlWide<3>/*95:0*/ __Vtemp425;
    VlWide<3>/*95:0*/ __Vtemp426;
    VlWide<3>/*95:0*/ __Vtemp429;
    VlWide<3>/*95:0*/ __Vtemp430;
    VlWide<3>/*95:0*/ __Vtemp431;
    VlWide<3>/*95:0*/ __Vtemp432;
    VlWide<3>/*95:0*/ __Vtemp435;
    VlWide<3>/*95:0*/ __Vtemp436;
    VlWide<3>/*95:0*/ __Vtemp438;
    VlWide<3>/*95:0*/ __Vtemp439;
    VlWide<3>/*95:0*/ __Vtemp440;
    VlWide<3>/*95:0*/ __Vtemp441;
    VlWide<3>/*95:0*/ __Vtemp444;
    VlWide<3>/*95:0*/ __Vtemp445;
    VlWide<3>/*95:0*/ __Vtemp447;
    VlWide<3>/*95:0*/ __Vtemp448;
    VlWide<3>/*95:0*/ __Vtemp449;
    VlWide<3>/*95:0*/ __Vtemp450;
    VlWide<3>/*95:0*/ __Vtemp453;
    VlWide<3>/*95:0*/ __Vtemp454;
    VlWide<3>/*95:0*/ __Vtemp456;
    VlWide<3>/*95:0*/ __Vtemp457;
    VlWide<3>/*95:0*/ __Vtemp458;
    VlWide<3>/*95:0*/ __Vtemp459;
    VlWide<3>/*95:0*/ __Vtemp461;
    VlWide<3>/*95:0*/ __Vtemp462;
    VlWide<3>/*95:0*/ __Vtemp463;
    VlWide<3>/*95:0*/ __Vtemp467;
    VlWide<3>/*95:0*/ __Vtemp468;
    VlWide<3>/*95:0*/ __Vtemp470;
    VlWide<3>/*95:0*/ __Vtemp471;
    VlWide<3>/*95:0*/ __Vtemp472;
    VlWide<3>/*95:0*/ __Vtemp476;
    VlWide<3>/*95:0*/ __Vtemp477;
    VlWide<3>/*95:0*/ __Vtemp479;
    VlWide<3>/*95:0*/ __Vtemp480;
    VlWide<3>/*95:0*/ __Vtemp481;
    VlWide<3>/*95:0*/ __Vtemp485;
    VlWide<3>/*95:0*/ __Vtemp486;
    VlWide<3>/*95:0*/ __Vtemp488;
    VlWide<3>/*95:0*/ __Vtemp489;
    VlWide<3>/*95:0*/ __Vtemp490;
    VlWide<9>/*287:0*/ __Vtemp494;
    VlWide<4>/*127:0*/ __Vtemp497;
    VlWide<4>/*127:0*/ __Vtemp504;
    VlWide<4>/*127:0*/ __Vtemp507;
    VlWide<4>/*127:0*/ __Vtemp514;
    VlWide<4>/*127:0*/ __Vtemp517;
    VlWide<4>/*127:0*/ __Vtemp526;
    VlWide<4>/*127:0*/ __Vtemp529;
    VlWide<4>/*127:0*/ __Vtemp538;
    VlWide<4>/*127:0*/ __Vtemp541;
    VlWide<4>/*127:0*/ __Vtemp551;
    VlWide<4>/*127:0*/ __Vtemp554;
    VlWide<4>/*127:0*/ __Vtemp564;
    VlWide<10>/*319:0*/ __Vtemp569;
    VlWide<4>/*127:0*/ __Vtemp570;
    VlWide<4>/*127:0*/ __Vtemp571;
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
        tracep->fullBit(oldp+64,((1U & (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy)))));
        tracep->fullQData(oldp+65,((((QData)((IData)(
                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[2U])))),64);
        tracep->fullQData(oldp+67,((((QData)((IData)(
                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[0U])))),64);
        __Vtemp364[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp364[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp364[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        tracep->fullWData(oldp+69,(__Vtemp364),66);
        __Vtemp367[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp367[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp367[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                >> 4U));
        tracep->fullWData(oldp+72,(__Vtemp367),66);
        __Vtemp370[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp370[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp370[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                >> 2U));
        tracep->fullWData(oldp+75,(__Vtemp370),66);
        __Vtemp373[0U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp373[1U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp373[2U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        tracep->fullWData(oldp+78,(__Vtemp373),66);
        __Vtemp376[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp376[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp376[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        VL_EXTEND_WW(130,66, __Vtemp377, __Vtemp376);
        tracep->fullWData(oldp+81,(__Vtemp377),130);
        __Vtemp382[0U] = 0U;
        __Vtemp382[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp382[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp382[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                             >> 5U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                           >> 4U)));
        __Vtemp382[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 5U)))) 
                          >> 0x1eU);
        tracep->fullWData(oldp+86,(__Vtemp382),130);
        __Vtemp387[0U] = 0U;
        __Vtemp387[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp387[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp387[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 3U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                           >> 2U)));
        __Vtemp387[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                            >> 3U)))) 
                          >> 0x1eU);
        tracep->fullWData(oldp+91,(__Vtemp387),130);
        __Vtemp391[0U] = 0U;
        __Vtemp391[1U] = 0U;
        __Vtemp391[2U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp391[3U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp391[4U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        tracep->fullWData(oldp+96,(__Vtemp391),130);
        tracep->fullWData(oldp+101,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2),130);
        tracep->fullWData(oldp+106,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout),264);
        tracep->fullCData(oldp+115,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r),2);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r),64);
        tracep->fullWData(oldp+120,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg),128);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__restore_remainder),64);
        tracep->fullCData(oldp+126,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt),6);
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy));
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign));
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign));
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2),64);
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
        tracep->fullQData(oldp+141,((((QData)((IData)(
                                                      vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])) 
                                      << 0x21U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U])) 
                                                    << 1U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                      >> 0x1fU)))),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64),64);
        tracep->fullBit(oldp+147,((1U & ((((((((((IData)(
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
        tracep->fullBit(oldp+148,(((((IData)((0xffffULL 
                                              == (0xffffULL 
                                                  & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                     & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px2)) 
                                    & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3)) 
                                   & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4))));
        tracep->fullBit(oldp+149,((IData)((0xffffULL 
                                           == (0xffffULL 
                                               & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64)))));
        tracep->fullBit(oldp+150,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px2));
        tracep->fullBit(oldp+151,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3));
        tracep->fullBit(oldp+152,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4));
        tracep->fullBit(oldp+153,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx1));
        tracep->fullBit(oldp+154,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx2));
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx3));
        tracep->fullBit(oldp+156,((1U & (((((((IData)(
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
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__c31));
        tracep->fullBit(oldp+158,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__c47));
        tracep->fullSData(oldp+159,((0xffffU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                 << 1U) 
                                                | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
                                                   >> 0x1fU)))),16);
        tracep->fullSData(oldp+160,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2))),16);
        tracep->fullSData(oldp+161,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))),16);
        tracep->fullSData(oldp+162,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64))),16);
        tracep->fullSData(oldp+163,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u1__s_16),16);
        tracep->fullBit(oldp+164,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx1));
        tracep->fullBit(oldp+165,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__c7));
        tracep->fullBit(oldp+166,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__c11));
        tracep->fullBit(oldp+167,((0xfU == (0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64)))));
        tracep->fullBit(oldp+168,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 4U))))));
        tracep->fullBit(oldp+169,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 8U))))));
        tracep->fullBit(oldp+170,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0xcU))))));
        tracep->fullBit(oldp+171,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx2));
        tracep->fullBit(oldp+172,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx3));
        tracep->fullBit(oldp+173,((1U & ((((IData)(
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
        tracep->fullCData(oldp+174,((0xfU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                              << 1U) 
                                             | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
                                                >> 0x1fU)))),4);
        tracep->fullCData(oldp+175,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2))),4);
        tracep->fullCData(oldp+176,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))),4);
        tracep->fullCData(oldp+177,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64))),4);
        tracep->fullCData(oldp+178,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+179,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+180,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 3U))),4);
        tracep->fullCData(oldp+181,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+182,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+183,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+184,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+185,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+186,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 7U))),4);
        tracep->fullCData(oldp+187,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+188,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+189,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+190,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+191,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+192,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0xbU))),4);
        tracep->fullCData(oldp+193,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+194,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+195,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+196,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+197,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u4__DOT__c_int),4);
        tracep->fullSData(oldp+198,((0xffffU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 0xfU))),16);
        tracep->fullSData(oldp+199,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+200,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+201,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+202,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u2__s_16),16);
        tracep->fullBit(oldp+203,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c3));
        tracep->fullBit(oldp+204,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c7));
        tracep->fullBit(oldp+205,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c11));
        tracep->fullBit(oldp+206,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x10U))))));
        tracep->fullBit(oldp+207,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x14U))))));
        tracep->fullBit(oldp+208,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x18U))))));
        tracep->fullBit(oldp+209,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x1cU))))));
        tracep->fullBit(oldp+210,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx1));
        tracep->fullBit(oldp+211,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx2));
        tracep->fullBit(oldp+212,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx3));
        tracep->fullBit(oldp+213,((1U & ((((IData)(
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
        tracep->fullCData(oldp+214,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0xfU))),4);
        tracep->fullCData(oldp+215,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+216,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+217,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+218,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+219,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+220,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0x13U))),4);
        tracep->fullCData(oldp+221,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+222,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+223,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+224,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+225,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+226,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0x17U))),4);
        tracep->fullCData(oldp+227,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+228,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+229,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+230,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+231,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+232,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0x1bU))),4);
        tracep->fullCData(oldp+233,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+234,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+235,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+236,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+237,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u4__DOT__c_int),4);
        tracep->fullSData(oldp+238,((0xffffU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                 << 1U) 
                                                | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                   >> 0x1fU)))),16);
        tracep->fullSData(oldp+239,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+240,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+241,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+242,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u3__s_16),16);
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c3));
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c7));
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c11));
        tracep->fullBit(oldp+246,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x20U))))));
        tracep->fullBit(oldp+247,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x24U))))));
        tracep->fullBit(oldp+248,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x28U))))));
        tracep->fullBit(oldp+249,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x2cU))))));
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx1));
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx2));
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx3));
        tracep->fullBit(oldp+253,((1U & ((((IData)(
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
        tracep->fullCData(oldp+254,((0xfU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                              << 1U) 
                                             | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 0x1fU)))),4);
        tracep->fullCData(oldp+255,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+256,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+257,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+258,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+259,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+260,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 3U))),4);
        tracep->fullCData(oldp+261,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+262,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+263,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+264,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+265,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+266,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 7U))),4);
        tracep->fullCData(oldp+267,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+268,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+269,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+270,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+271,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+272,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0xbU))),4);
        tracep->fullCData(oldp+273,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+274,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+275,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+276,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+277,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u4__DOT__c_int),4);
        tracep->fullSData(oldp+278,((0xffffU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                >> 0xfU))),16);
        tracep->fullSData(oldp+279,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+280,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+281,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+282,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u4__s_16),16);
        tracep->fullBit(oldp+283,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c3));
        tracep->fullBit(oldp+284,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c7));
        tracep->fullBit(oldp+285,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c11));
        tracep->fullBit(oldp+286,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x30U))))));
        tracep->fullBit(oldp+287,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x34U))))));
        tracep->fullBit(oldp+288,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x38U))))));
        tracep->fullBit(oldp+289,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x3cU))))));
        tracep->fullBit(oldp+290,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx1));
        tracep->fullBit(oldp+291,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx2));
        tracep->fullBit(oldp+292,((1U & ((((IData)(
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
        tracep->fullBit(oldp+293,((1U & ((((IData)(
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
        tracep->fullCData(oldp+294,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0xfU))),4);
        tracep->fullCData(oldp+295,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+296,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+297,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+298,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+299,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+300,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0x13U))),4);
        tracep->fullCData(oldp+301,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+302,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+303,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+304,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+305,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+306,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0x17U))),4);
        tracep->fullCData(oldp+307,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+308,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+309,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+310,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+311,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+312,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0x1bU))),4);
        tracep->fullCData(oldp+313,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+314,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+315,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+316,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+317,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u4__DOT__c_int),4);
        tracep->fullCData(oldp+318,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0xaU))),5);
        tracep->fullBit(oldp+319,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+320,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+321,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),227);
        tracep->fullCData(oldp+329,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xfU))),3);
        tracep->fullBit(oldp+330,(vlSelf->top__DOT__ls_u__DOT__timr_int));
        tracep->fullBit(oldp+331,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 3U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+332,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 3U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
        tracep->fullBit(oldp+335,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
        tracep->fullBit(oldp+338,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+339,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+340,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+341,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullQData(oldp+342,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC),64);
        tracep->fullBit(oldp+344,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw));
        tracep->fullBit(oldp+345,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs));
        tracep->fullBit(oldp+346,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc));
        tracep->fullBit(oldp+347,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 5U)))));
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+349,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+350,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+351,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+352,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullBit(oldp+353,(((0x304U == (0xfffU 
                                               & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                   << 9U) 
                                                  | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 0x17U)))) 
                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullBit(oldp+354,(((0x344U == (0xfffU 
                                               & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                   << 9U) 
                                                  | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 0x17U)))) 
                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullQData(oldp+355,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullBit(oldp+357,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                 >> 3U)))));
        tracep->fullQData(oldp+358,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U)))
                                      ? 0xbULL : ((IData)(vlSelf->top__DOT__in_intr_ls)
                                                   ? 0x8000000000000007ULL
                                                   : 0ULL))),64);
        tracep->fullQData(oldp+360,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+362,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie),64);
        tracep->fullBit(oldp+364,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                                 >> 7U)))));
        tracep->fullQData(oldp+365,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip),64);
        tracep->fullBit(oldp+367,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                 >> 7U)))));
        tracep->fullQData(oldp+368,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime),64);
        tracep->fullQData(oldp+370,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp),64);
        tracep->fullIData(oldp+372,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index),32);
        tracep->fullQData(oldp+373,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+377,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullIData(oldp+378,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [0x23U]),21);
        tracep->fullBit(oldp+379,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+380,(vlSelf->top__DOT__Dcache_u__DOT__missFlag));
        tracep->fullBit(oldp+381,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+382,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+383,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+388,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+389,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+390,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullBit(oldp+391,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
        tracep->fullBit(oldp+392,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
        tracep->fullBit(oldp+395,(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay));
        tracep->fullCData(oldp+396,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+397,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+398,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+399,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+400,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+401,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullQData(oldp+402,((((0U == (0x1fU 
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
        tracep->fullIData(oldp+404,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullBit(oldp+405,((((3U == (0x7fU & 
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
        tracep->fullCData(oldp+406,((0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
        tracep->fullQData(oldp+407,((QData)((IData)(
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
        tracep->fullQData(oldp+409,(((0U == (3U & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 2U)))
                                      ? (((QData)((IData)(
                                                          vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[0U])))
                                      : (((QData)((IData)(
                                                          vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[2U]))))),64);
        tracep->fullBit(oldp+411,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+412,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+413,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+414,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+415,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x17U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+416,((((0x73U == (0x7fU 
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
        tracep->fullQData(oldp+417,((vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                                     | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+419,(((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullBit(oldp+421,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+422,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+423,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+424,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+425,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        tracep->fullBit(oldp+426,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullIData(oldp+427,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        if (vlSelf->top__DOT__in_intr_ls) {
            __Vtemp396[0U] = Vtop__ConstPool__CONST_d5724acc_0[0U];
            __Vtemp396[1U] = Vtop__ConstPool__CONST_d5724acc_0[1U];
            __Vtemp396[2U] = Vtop__ConstPool__CONST_d5724acc_0[2U];
            __Vtemp396[3U] = Vtop__ConstPool__CONST_d5724acc_0[3U];
            __Vtemp396[4U] = Vtop__ConstPool__CONST_d5724acc_0[4U];
            __Vtemp396[5U] = Vtop__ConstPool__CONST_d5724acc_0[5U];
            __Vtemp396[6U] = Vtop__ConstPool__CONST_d5724acc_0[6U];
            __Vtemp396[7U] = Vtop__ConstPool__CONST_d5724acc_0[7U];
        } else {
            __Vtemp396[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 3U) | ((4U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (3U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp396[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp396[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 3U));
            __Vtemp396[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp396[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp396[5U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp396[6U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp396[7U] = (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
        }
        tracep->fullWData(oldp+428,(__Vtemp396),227);
        tracep->fullBit(oldp+436,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+437,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+438,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+439,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+441,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+442,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg)),64);
        tracep->fullCData(oldp+444,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+445,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)))),3);
        tracep->fullCData(oldp+446,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+447,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 0xfU)),4);
        tracep->fullBit(oldp+448,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+449,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (0xffU 
                                              & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)))),8);
        tracep->fullBit(oldp+450,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+451,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+452,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+454,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
        tracep->fullCData(oldp+455,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+456,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready));
        tracep->fullCData(oldp+457,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp),2);
        tracep->fullBit(oldp+458,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+459,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                      : 0U)),3);
        tracep->fullQData(oldp+460,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+462,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready));
        tracep->fullCData(oldp+463,(vlSelf->top__DOT__clint_axi_wstrb),8);
        tracep->fullBit(oldp+464,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready));
        tracep->fullBit(oldp+465,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid));
        tracep->fullBit(oldp+466,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+467,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))));
        tracep->fullWData(oldp+468,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+472,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+476,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+480,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+484,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+492,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullIData(oldp+500,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr),64);
        tracep->fullCData(oldp+503,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+504,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr),64);
        tracep->fullBit(oldp+506,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en));
        tracep->fullWData(oldp+507,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+511,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+515,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+519,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+523,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+531,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullBit(oldp+539,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullWData(oldp+540,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+548,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+549,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
        tracep->fullCData(oldp+550,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+551,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+553,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+555,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+557,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+561,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+563,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullCData(oldp+564,((((0xaU != (0xfU 
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
        tracep->fullQData(oldp+565,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o)),64);
        tracep->fullBit(oldp+567,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))));
        VL_EXTEND_WQ(256,64, __Vtemp401, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp406[0U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U]);
            __Vtemp406[1U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U]);
            __Vtemp406[2U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U]);
            __Vtemp406[3U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U]);
            __Vtemp406[4U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U]);
            __Vtemp406[5U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U]);
            __Vtemp406[6U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U]);
            __Vtemp406[7U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U]);
        } else {
            __Vtemp406[0U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp401[0U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
            __Vtemp406[1U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp401[1U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
            __Vtemp406[2U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp401[2U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
            __Vtemp406[3U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp401[3U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
            __Vtemp406[4U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp401[4U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
            __Vtemp406[5U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp401[5U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
            __Vtemp406[6U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp401[6U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
            __Vtemp406[7U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp401[7U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
        }
        tracep->fullWData(oldp+568,(__Vtemp406),256);
        tracep->fullBit(oldp+576,((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))));
        if ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))) {
            __Vtemp410[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U];
            __Vtemp410[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U];
            __Vtemp410[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U];
            __Vtemp410[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U];
            __Vtemp410[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U];
            __Vtemp410[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U];
            __Vtemp410[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U];
            __Vtemp410[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U];
        } else {
            __Vtemp410[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U];
            __Vtemp410[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U];
            __Vtemp410[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U];
            __Vtemp410[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U];
            __Vtemp410[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U];
            __Vtemp410[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U];
            __Vtemp410[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U];
            __Vtemp410[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U];
        }
        tracep->fullWData(oldp+577,(__Vtemp410),256);
        tracep->fullBit(oldp+585,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+586,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        tracep->fullBit(oldp+587,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+588,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr)),64);
        tracep->fullCData(oldp+590,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)))),3);
        tracep->fullCData(oldp+591,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+592,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 2U)),4);
        tracep->fullBit(oldp+593,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))));
        tracep->fullBit(oldp+594,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+595,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+596,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullCData(oldp+597,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+598,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                              ? 0U : 3U))
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+599,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+600,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+601,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+602,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+604,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+605,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+606,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+608,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+609,(((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+611,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+612,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+614,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+616,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+617,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+618,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+619,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+620,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+622,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+623,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+625,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+626,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+627,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+628,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+629,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+630,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+631,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+632,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+633,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+634,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+635,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+636,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+637,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+638,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+639,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+640,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+641,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullIData(oldp+643,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1cU))),32);
        tracep->fullBit(oldp+644,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+645,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x11U))),2);
        tracep->fullQData(oldp+646,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+648,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+650,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+652,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+654,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x17U))),5);
        tracep->fullBit(oldp+655,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+656,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+657,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+658,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+659,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+660,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),3);
        tracep->fullBit(oldp+661,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullCData(oldp+662,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+663,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+664,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xbU))),5);
        tracep->fullCData(oldp+665,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 6U))),5);
        tracep->fullBit(oldp+666,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+667,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 4U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1cU))))));
        tracep->fullBit(oldp+668,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 2U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1eU))))));
        tracep->fullCData(oldp+669,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+670,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+671,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+673,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+675,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+677,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+678,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+680,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+681,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+682,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+684,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullBit(oldp+686,(vlSelf->top__DOT__clint_axi_arvalid));
        tracep->fullCData(oldp+687,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                      : 0U)),3);
        tracep->fullBit(oldp+688,(((2U == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+689,(vlSelf->top__DOT__clint_axi_awvalid));
        tracep->fullQData(oldp+690,(vlSelf->top__DOT__clint_axi_wdata),64);
        tracep->fullBit(oldp+692,(vlSelf->top__DOT__clint_axi_wvalid));
        tracep->fullBit(oldp+693,(vlSelf->top__DOT__clint_axi_bready));
        tracep->fullBit(oldp+694,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+695,(vlSelf->top__DOT__fence_id));
        tracep->fullBit(oldp+696,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+697,(vlSelf->top__DOT__Dcache_u__DOT__clean_OK));
        tracep->fullBit(oldp+698,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+699,(vlSelf->top__DOT__DcacheWrValid));
        tracep->fullQData(oldp+700,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+702,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+704,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+705,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullCData(oldp+706,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                      : 3U)),3);
        tracep->fullQData(oldp+707,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+709,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullBit(oldp+710,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+711,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+712,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))));
        tracep->fullIData(oldp+713,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+714,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+715,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+716,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        __Vtemp411[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp411[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp411[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp411[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+717,(__Vtemp411),128);
        __Vtemp412[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp412[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp412[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp412[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+721,(__Vtemp412),128);
        tracep->fullBit(oldp+725,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+726,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+727,(vlSelf->top__DOT__cache_dut__DOT__uncached));
        tracep->fullBit(oldp+728,(vlSelf->top__DOT__cache_dut__DOT__diffAddr));
        tracep->fullBit(oldp+729,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+730,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+731,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+732,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+733,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+734,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+742,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+743,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+744,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+745,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+746,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+747,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+748,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+749,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+751,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp413[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp413[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp413[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+752,(__Vtemp413),96);
        tracep->fullWData(oldp+755,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+758,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+759,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+760,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+761,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+762,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullBit(oldp+763,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U)))));
        tracep->fullQData(oldp+764,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+766,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+767,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+768,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+769,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+770,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+771,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullBit(oldp+772,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__fence_id))));
        tracep->fullWData(oldp+773,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),316);
        tracep->fullQData(oldp+783,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+785,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+787,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp415, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp416, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp417, __Vtemp415, __Vtemp416);
        VL_EXTEND_WI(65,1, __Vtemp418, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp419, __Vtemp417, __Vtemp418);
        tracep->fullBit(oldp+789,((1U & ((0x4000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp419[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+790,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullBit(oldp+791,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+792,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+794,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+796,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+797,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullCData(oldp+798,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x17U))),3);
        tracep->fullQData(oldp+799,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp422, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp423, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp424, __Vtemp422, __Vtemp423);
        VL_EXTEND_WI(65,1, __Vtemp425, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp426, __Vtemp424, __Vtemp425);
        tracep->fullBit(oldp+801,((1U & __Vtemp426[2U])));
        tracep->fullBit(oldp+802,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+803,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+805,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+807,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullBit(oldp+809,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn));
        tracep->fullBit(oldp+810,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid));
        tracep->fullBit(oldp+811,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid));
        tracep->fullCData(oldp+812,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x17U))),4);
        tracep->fullBit(oldp+813,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+814,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+815,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+817,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+819,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+821,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+823,(((0x8000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+825,(((0x8000000U & 
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
        tracep->fullQData(oldp+827,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+829,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),2);
        tracep->fullBit(oldp+830,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__stateReg));
        tracep->fullBit(oldp+831,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q));
        tracep->fullBit(oldp+832,((1U & ((~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__stateReg)) 
                                         | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__stateReg) 
                                            & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))))));
        tracep->fullCData(oldp+833,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul_signed),2);
        tracep->fullBit(oldp+834,(1U));
        tracep->fullBit(oldp+835,((1U & ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul_signed) 
                                         >> 1U))));
        tracep->fullBit(oldp+836,((1U & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul_signed))));
        tracep->fullQData(oldp+837,((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1))),33);
        tracep->fullQData(oldp+839,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1),33);
        tracep->fullQData(oldp+841,((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),33);
        tracep->fullQData(oldp+843,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2),33);
        VL_EXTEND_WI(66,32, __Vtemp429, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1));
        VL_EXTEND_WI(66,32, __Vtemp430, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2));
        VL_MUL_W(3, __Vtemp431, __Vtemp429, __Vtemp430);
        __Vtemp432[0U] = __Vtemp431[0U];
        __Vtemp432[1U] = __Vtemp431[1U];
        __Vtemp432[2U] = (3U & __Vtemp431[2U]);
        tracep->fullWData(oldp+845,(__Vtemp432),66);
        VL_EXTENDS_WQ(66,33, __Vtemp435, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1)));
        __Vtemp436[0U] = __Vtemp435[0U];
        __Vtemp436[1U] = __Vtemp435[1U];
        __Vtemp436[2U] = (3U & __Vtemp435[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp438, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp439[0U] = __Vtemp438[0U];
        __Vtemp439[1U] = __Vtemp438[1U];
        __Vtemp439[2U] = (3U & __Vtemp438[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp440, __Vtemp436, __Vtemp439);
        __Vtemp441[0U] = __Vtemp440[0U];
        __Vtemp441[1U] = __Vtemp440[1U];
        __Vtemp441[2U] = (3U & __Vtemp440[2U]);
        tracep->fullWData(oldp+848,(__Vtemp441),66);
        VL_EXTENDS_WQ(66,33, __Vtemp444, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp445[0U] = __Vtemp444[0U];
        __Vtemp445[1U] = __Vtemp444[1U];
        __Vtemp445[2U] = (3U & __Vtemp444[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp447, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
        __Vtemp448[0U] = __Vtemp447[0U];
        __Vtemp448[1U] = __Vtemp447[1U];
        __Vtemp448[2U] = (3U & __Vtemp447[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp449, __Vtemp445, __Vtemp448);
        __Vtemp450[0U] = __Vtemp449[0U];
        __Vtemp450[1U] = __Vtemp449[1U];
        __Vtemp450[2U] = (3U & __Vtemp449[2U]);
        tracep->fullWData(oldp+851,(__Vtemp450),66);
        VL_EXTENDS_WQ(66,33, __Vtemp453, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp454[0U] = __Vtemp453[0U];
        __Vtemp454[1U] = __Vtemp453[1U];
        __Vtemp454[2U] = (3U & __Vtemp453[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp456, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp457[0U] = __Vtemp456[0U];
        __Vtemp457[1U] = __Vtemp456[1U];
        __Vtemp457[2U] = (3U & __Vtemp456[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp458, __Vtemp454, __Vtemp457);
        __Vtemp459[0U] = __Vtemp458[0U];
        __Vtemp459[1U] = __Vtemp458[1U];
        __Vtemp459[2U] = (3U & __Vtemp458[2U]);
        tracep->fullWData(oldp+854,(__Vtemp459),66);
        tracep->fullBit(oldp+857,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set));
        tracep->fullBit(oldp+858,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                   | (IData)(vlSelf->top__DOT__ex_flush))));
        tracep->fullBit(oldp+859,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set) 
                                   | (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                       & (~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                             | (IData)(vlSelf->top__DOT__ex_flush)))) 
                                      & (~ (IData)(vlSelf->top__DOT__ex_flush))))));
        VL_EXTEND_WI(66,32, __Vtemp461, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1));
        VL_EXTEND_WI(66,32, __Vtemp462, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2));
        VL_MUL_W(3, __Vtemp463, __Vtemp461, __Vtemp462);
        VL_EXTENDS_WQ(66,33, __Vtemp467, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1)));
        __Vtemp468[0U] = __Vtemp467[0U];
        __Vtemp468[1U] = __Vtemp467[1U];
        __Vtemp468[2U] = (3U & __Vtemp467[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp470, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp471[0U] = __Vtemp470[0U];
        __Vtemp471[1U] = __Vtemp470[1U];
        __Vtemp471[2U] = (3U & __Vtemp470[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp472, __Vtemp468, __Vtemp471);
        VL_EXTENDS_WQ(66,33, __Vtemp476, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp477[0U] = __Vtemp476[0U];
        __Vtemp477[1U] = __Vtemp476[1U];
        __Vtemp477[2U] = (3U & __Vtemp476[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp479, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
        __Vtemp480[0U] = __Vtemp479[0U];
        __Vtemp480[1U] = __Vtemp479[1U];
        __Vtemp480[2U] = (3U & __Vtemp479[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp481, __Vtemp477, __Vtemp480);
        VL_EXTENDS_WQ(66,33, __Vtemp485, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp486[0U] = __Vtemp485[0U];
        __Vtemp486[1U] = __Vtemp485[1U];
        __Vtemp486[2U] = (3U & __Vtemp485[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp488, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp489[0U] = __Vtemp488[0U];
        __Vtemp489[1U] = __Vtemp488[1U];
        __Vtemp489[2U] = (3U & __Vtemp488[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp490, __Vtemp486, __Vtemp489);
        __Vtemp494[0U] = __Vtemp490[0U];
        __Vtemp494[1U] = __Vtemp490[1U];
        __Vtemp494[2U] = ((__Vtemp481[0U] << 2U) | 
                          (3U & __Vtemp490[2U]));
        __Vtemp494[3U] = ((__Vtemp481[0U] >> 0x1eU) 
                          | (__Vtemp481[1U] << 2U));
        __Vtemp494[4U] = ((__Vtemp472[0U] << 4U) | 
                          ((__Vtemp481[1U] >> 0x1eU) 
                           | (0xcU & (__Vtemp481[2U] 
                                      << 2U))));
        __Vtemp494[5U] = ((__Vtemp472[0U] >> 0x1cU) 
                          | (__Vtemp472[1U] << 4U));
        __Vtemp494[6U] = ((__Vtemp463[0U] << 6U) | 
                          ((__Vtemp472[1U] >> 0x1cU) 
                           | (0x30U & (__Vtemp472[2U] 
                                       << 4U))));
        __Vtemp494[7U] = ((__Vtemp463[0U] >> 0x1aU) 
                          | (__Vtemp463[1U] << 6U));
        __Vtemp494[8U] = ((__Vtemp463[1U] >> 0x1aU) 
                          | (0xc0U & (__Vtemp463[2U] 
                                      << 6U)));
        tracep->fullWData(oldp+860,(__Vtemp494),264);
        tracep->fullQData(oldp+869,((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src1))),64);
        tracep->fullQData(oldp+871,((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src2))),64);
        tracep->fullCData(oldp+873,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 8U))),3);
        tracep->fullQData(oldp+874,(((((QData)((IData)(
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
        tracep->fullQData(oldp+876,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU))))),64);
        tracep->fullBit(oldp+878,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+879,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+880,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+881,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+883,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+885,((1U & ((0x400U & 
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
        tracep->fullBit(oldp+886,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+887,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+888,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullQData(oldp+889,(vlSelf->top__DOT__ls_u__DOT__csr_wr_data),64);
        tracep->fullQData(oldp+891,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullBit(oldp+893,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn));
        tracep->fullBit(oldp+894,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn));
        tracep->fullBit(oldp+895,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren));
        tracep->fullBit(oldp+896,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+897,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+898,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 4U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1cU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 2U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1eU)))))));
        tracep->fullIData(oldp+899,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+900,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+901,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+902,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+903,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp497, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp504[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp504[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp504[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp504[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp504[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp497[0U])
                               : 0U);
            __Vtemp504[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp497[1U])
                               : 0U);
            __Vtemp504[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp497[2U])
                               : 0U);
            __Vtemp504[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp497[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+904,(__Vtemp504),128);
        VL_EXTEND_WQ(128,64, __Vtemp507, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp514[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp514[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp514[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp514[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp514[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp507[0U])
                               : 0U);
            __Vtemp514[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp507[1U])
                               : 0U);
            __Vtemp514[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp507[2U])
                               : 0U);
            __Vtemp514[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp507[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+908,(__Vtemp514),128);
        tracep->fullBit(oldp+912,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+913,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+914,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+915,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+916,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+918,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+919,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+920,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+921,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+922,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+923,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+924,((((QData)((IData)(
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
        tracep->fullCData(oldp+926,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+927,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+935,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+936,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullBit(oldp+938,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+939,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+940,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+942,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+943,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp517, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp526[0U] = 0xffffffffU;
            __Vtemp526[1U] = 0xffffffffU;
            __Vtemp526[2U] = 0xffffffffU;
            __Vtemp526[3U] = 0xffffffffU;
        } else {
            __Vtemp526[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp517[0U])
                                   : 0U) : 0U);
            __Vtemp526[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp517[1U])
                                   : 0U) : 0U);
            __Vtemp526[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp517[2U])
                                   : 0U) : 0U);
            __Vtemp526[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp517[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+945,(__Vtemp526),128);
        VL_EXTEND_WQ(128,64, __Vtemp529, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp538[0U] = 0xffffffffU;
            __Vtemp538[1U] = 0xffffffffU;
            __Vtemp538[2U] = 0xffffffffU;
            __Vtemp538[3U] = 0xffffffffU;
        } else {
            __Vtemp538[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp529[0U])
                                   : 0U) : 0U);
            __Vtemp538[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp529[1U])
                                   : 0U) : 0U);
            __Vtemp538[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp529[2U])
                                   : 0U) : 0U);
            __Vtemp538[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp529[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+949,(__Vtemp538),128);
        tracep->fullBit(oldp+953,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+954,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+955,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullIData(oldp+956,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
        tracep->fullBit(oldp+957,((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullCData(oldp+958,(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt),7);
        tracep->fullBit(oldp+959,(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid));
        tracep->fullBit(oldp+960,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        VL_EXTEND_WQ(128,64, __Vtemp541, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp551[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp541[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp551[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp541[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp551[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp541[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp551[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp541[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+961,(__Vtemp551),128);
        VL_EXTEND_WQ(128,64, __Vtemp554, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp564[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp554[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp564[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp554[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp564[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp554[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp564[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp554[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+965,(__Vtemp564),128);
        tracep->fullBit(oldp+969,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+970,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+971,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+981,((1U & ((IData)(vlSelf->top__DOT__fence_id) 
                                         | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullBit(oldp+982,((1U & (~ (((((((IData)(vlSelf->top__DOT__fence_id) 
                                                 | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                               | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+983,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+984,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+985,((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit) 
                                          | (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))))) 
                                   | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk)))));
        tracep->fullBit(oldp+986,((1U & (~ ((((((((
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
        tracep->fullBit(oldp+987,((1U & ((((((((((0U 
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
        tracep->fullBit(oldp+988,((1U & (~ ((((((((
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
        tracep->fullBit(oldp+989,((1U & ((((((((((0U 
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
        tracep->fullQData(oldp+990,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+992,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp569[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp569[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 4U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp569[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1cU));
        __Vtemp569[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp569[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1cU));
        __Vtemp569[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp569[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1cU));
        __Vtemp569[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 4U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1cU));
        __Vtemp569[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp569[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 4U);
        tracep->fullWData(oldp+994,(__Vtemp569),316);
        tracep->fullBit(oldp+1004,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+1005,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+1007,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+1008,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+1009,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+1010,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                     : 0U)));
        tracep->fullQData(oldp+1011,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+1013,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+1014,(vlSelf->top__DOT__if_stall_n));
        tracep->fullQData(oldp+1015,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+1017,(vlSelf->top__DOT__ex_not_ok));
        tracep->fullBit(oldp+1018,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+1019,(vlSelf->top__DOT__dataNotOk));
        tracep->fullQData(oldp+1020,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+1022,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+1023,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+1024,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+1025,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+1026,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+1028,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+1029,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+1030,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+1031,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+1032,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullQData(oldp+1033,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+1035,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT____Vcellinp__resultValidReg__i_rst_n));
        tracep->fullBit(oldp+1036,(vlSelf->top__DOT__ls_u__DOT__csr_stall_n));
        tracep->fullCData(oldp+1037,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+1038,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+1039,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullIData(oldp+1040,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullCData(oldp+1041,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
        tracep->fullBit(oldp+1042,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+1043,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+1044,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+1045,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+1046,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+1047,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+1057,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+1059,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+1061,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+1063,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+1065,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+1067,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+1069,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+1071,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+1073,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+1075,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+1077,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+1079,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+1081,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+1083,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+1085,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+1087,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+1089,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+1091,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+1093,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+1095,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+1097,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+1099,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+1101,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+1103,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+1105,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+1107,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+1109,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+1111,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+1113,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+1115,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+1117,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+1119,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+1121,(vlSelf->clk));
        tracep->fullBit(oldp+1122,(vlSelf->rst_n));
        tracep->fullQData(oldp+1123,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+1125,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+1127,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+1128,(vlSelf->regA0),64);
        tracep->fullBit(oldp+1130,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+1131,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+1132,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+1133,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+1135,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+1136,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+1137,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+1138,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+1139,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+1140,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+1141,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+1142,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+1143,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+1144,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+1145,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+1146,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+1147,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+1148,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+1150,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+1151,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+1152,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+1153,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+1154,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+1155,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+1157,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+1158,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+1159,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+1160,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+1161,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+1162,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+1163,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+1164,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+1165,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+1166,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+1167,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+1168,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+1169,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+1171,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+1172,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+1173,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+1174,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+1175,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+1176,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+1177,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+1178,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+1179,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 0U : 1U) ? 0U
                                     : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+1180,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
        tracep->fullBit(oldp+1181,(((0xaU == (0xfU 
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
        tracep->fullBit(oldp+1182,(((0xaU == (0xfU 
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
        tracep->fullCData(oldp+1183,(((0xaU == (0xfU 
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
        tracep->fullCData(oldp+1184,(((0xaU == (0xfU 
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
        tracep->fullBit(oldp+1185,((1U & ((0xaU == 
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
        tracep->fullBit(oldp+1186,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 0U : 1U) ? 
                                    (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                     : 0U)));
        tracep->fullCData(oldp+1187,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
        tracep->fullQData(oldp+1188,(((((((((- (QData)((IData)(
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
        tracep->fullCData(oldp+1190,(((0xaU == (0xfU 
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
        tracep->fullBit(oldp+1191,((1U & ((0xaU == 
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
        tracep->fullBit(oldp+1192,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                    & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+1193,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                    & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+1194,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                       ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                           ? (0x1fffffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))
                                           : 0U) : 0U)),21);
        tracep->fullIData(oldp+1195,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                       ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                           ? 0U : (0x1fffffU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 0xbU))))
                                       : 0U)),21);
        tracep->fullQData(oldp+1196,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+1198,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+1200,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid) 
                                    & (~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__resultValidReg_q) 
                                          | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))))));
        tracep->fullBit(oldp+1201,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__resultValidReg_q) 
                                    | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))));
        tracep->fullQData(oldp+1202,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__DivOut),64);
        tracep->fullBit(oldp+1204,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__resultValidReg_q));
        tracep->fullIData(oldp+1205,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullBit(oldp+1206,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                    & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                       | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)))))))));
        tracep->fullBit(oldp+1207,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                    & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                       | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)))))))));
        tracep->fullIData(oldp+1208,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+1209,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+1210,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+1212,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+1214,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
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
        tracep->fullIData(oldp+1215,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullIData(oldp+1216,(0x40U),32);
        tracep->fullIData(oldp+1217,(4U),32);
        tracep->fullIData(oldp+1218,(8U),32);
        tracep->fullIData(oldp+1219,(1U),32);
        tracep->fullCData(oldp+1220,(0U),3);
        tracep->fullBit(oldp+1221,(0U));
        tracep->fullBit(oldp+1222,(0U));
        tracep->fullCData(oldp+1223,(0U),4);
        tracep->fullBit(oldp+1224,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+1225,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+1226,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+1227,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+1228,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+1229,(1U),2);
        tracep->fullCData(oldp+1230,(2U),4);
        tracep->fullCData(oldp+1231,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+1232,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+1233,(1U),4);
        tracep->fullCData(oldp+1234,(0xfU),4);
        tracep->fullCData(oldp+1235,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+1236,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+1237,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+1239,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+1240,(1U));
        tracep->fullBit(oldp+1241,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+1242,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullBit(oldp+1243,(0U));
        tracep->fullQData(oldp+1244,(0ULL),64);
        tracep->fullCData(oldp+1246,(0U),8);
        tracep->fullCData(oldp+1247,(1U),3);
        tracep->fullCData(oldp+1248,(2U),3);
        tracep->fullCData(oldp+1249,(3U),3);
        tracep->fullCData(oldp+1250,(7U),3);
        tracep->fullCData(oldp+1251,(6U),3);
        tracep->fullBit(oldp+1252,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+1253,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+1254,(0x80U),32);
        tracep->fullIData(oldp+1255,(6U),32);
        __Vtemp570[0U] = 0U;
        __Vtemp570[1U] = 0U;
        __Vtemp570[2U] = 0U;
        __Vtemp570[3U] = 0U;
        tracep->fullWData(oldp+1256,(__Vtemp570),128);
        __Vtemp571[0U] = 0xffffffffU;
        __Vtemp571[1U] = 0xffffffffU;
        __Vtemp571[2U] = 0xffffffffU;
        __Vtemp571[3U] = 0xffffffffU;
        tracep->fullWData(oldp+1260,(__Vtemp571),128);
        tracep->fullCData(oldp+1264,(0U),2);
        tracep->fullCData(oldp+1265,(3U),2);
        tracep->fullCData(oldp+1266,(2U),2);
        tracep->fullIData(oldp+1267,(3U),32);
        tracep->fullIData(oldp+1268,(0x60U),32);
        tracep->fullIData(oldp+1269,(0U),32);
        tracep->fullIData(oldp+1270,(0x13cU),32);
        tracep->fullIData(oldp+1271,(0x108U),32);
        tracep->fullBit(oldp+1272,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+1273,(0xe3U),32);
        tracep->fullCData(oldp+1274,(4U),3);
        tracep->fullBit(oldp+1275,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+1276,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+1277,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullCData(oldp+1278,(3U),8);
        tracep->fullIData(oldp+1279,(0x121U),32);
        tracep->fullIData(oldp+1280,(0x40U),32);
        tracep->fullIData(oldp+1281,(3U),32);
        tracep->fullIData(oldp+1282,(1U),32);
        tracep->fullQData(oldp+1283,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+1285,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
