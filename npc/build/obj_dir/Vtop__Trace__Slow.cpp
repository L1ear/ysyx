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
        tracep->declBit(c+1125,"clk", false,-1);
        tracep->declBit(c+1126,"rst_n", false,-1);
        tracep->declQuad(c+1127,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+1129,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+1131,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+1132,"regA0", false,-1, 63,0);
        tracep->declBit(c+1134,"stall_n_diff", false,-1);
        tracep->declBit(c+1135,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+1136,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+1137,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1139,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1140,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1141,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1142,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1143,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1144,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1145,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+1146,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1147,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1148,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1149,"axi_r_ready_o", false,-1);
        tracep->declBit(c+1150,"axi_r_valid_i", false,-1);
        tracep->declBus(c+1151,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1152,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1154,"axi_r_last_i", false,-1);
        tracep->declBus(c+1155,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1156,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1157,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+1158,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+1159,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1161,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1162,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1163,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1164,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1165,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1166,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1167,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+1168,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1169,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1170,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1171,"axi_w_ready_i", false,-1);
        tracep->declBit(c+1172,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+1173,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1175,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1176,"axi_w_last_o", false,-1);
        tracep->declBus(c+1177,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1178,"axi_b_ready_o", false,-1);
        tracep->declBit(c+1179,"axi_b_valid_i", false,-1);
        tracep->declBus(c+1180,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1181,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1182,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+1218,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1219,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1220,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1221,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1125,"top clk", false,-1);
        tracep->declBit(c+1126,"top rst_n", false,-1);
        tracep->declQuad(c+1127,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+1129,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+1131,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+1132,"top regA0", false,-1, 63,0);
        tracep->declBit(c+1134,"top stall_n_diff", false,-1);
        tracep->declBit(c+1135,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+1136,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+1137,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1139,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1140,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1141,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1142,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1143,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1144,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1145,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+1146,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1147,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1148,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1149,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+1150,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+1151,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1152,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1154,"top axi_r_last_i", false,-1);
        tracep->declBus(c+1155,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1156,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1157,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+1158,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+1159,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1161,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1162,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1163,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1164,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1165,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1166,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1167,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+1168,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1169,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1170,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1171,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+1172,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+1173,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1175,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1176,"top axi_w_last_o", false,-1);
        tracep->declBus(c+1177,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1178,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+1179,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+1180,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1181,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1182,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+438,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+589,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+590,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+400,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+401,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+592,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+593,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1224,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+594,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+402,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+595,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+439,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+440,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+441,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1226,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+1227,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1228,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+443,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+596,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+444,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+446,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+566,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+447,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+448,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1224,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+449,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+450,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+597,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+567,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+451,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+569,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+1223,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+598,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+452,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+453,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1229,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1230,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top instr_fetching", false,-1);
        tracep->declBit(c+1183,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1222,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1225,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+599,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+600,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1231,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1224,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+1232,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1233,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+1006,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+1184,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1007,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1009,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+1010,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1234,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1185,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+601,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+454,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1222,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1235,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+602,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+456,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1231,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1224,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+1236,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1011,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+603,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+604,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+457,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+606,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+1223,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+607,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+1186,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+1187,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1188,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1189,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1190,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1222,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1235,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+602,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+403,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1231,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1224,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+1232,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1237,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+1012,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+1191,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1013,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1015,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+1010,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1238,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+1239,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+608,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+610,"top is_jump", false,-1);
        tracep->declQuad(c+611,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+984,"top pc_stall_n", false,-1);
        tracep->declBit(c+1016,"top if_stall_n", false,-1);
        tracep->declBit(c+613,"top if_instr_valid", false,-1);
        tracep->declBit(c+1241,"top sram_data_valid", false,-1);
        tracep->declQuad(c+614,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+616,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+1242,"top sram_ren", false,-1);
        tracep->declBit(c+618,"top sram_addr_valid", false,-1);
        tracep->declBit(c+619,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+620,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+621,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+622,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+624,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+992,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+994,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+625,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+627,"top src1sel_id", false,-1);
        tracep->declBus(c+628,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+629,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+630,"top is_brc_id", false,-1);
        tracep->declBit(c+631,"top is_jal_id", false,-1);
        tracep->declBit(c+632,"top is_jalr_id", false,-1);
        tracep->declBit(c+633,"top wben_id", false,-1);
        tracep->declBus(c+634,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+635,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+985,"top id_stall_n", false,-1);
        tracep->declBit(c+636,"top DivEn_id", false,-1);
        tracep->declBus(c+637,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+638,"top in_trap_id", false,-1);
        tracep->declBit(c+639,"top out_trap_id", false,-1);
        tracep->declBit(c+640,"top trap_id", false,-1);
        tracep->declBit(c+641,"top ld_use_hazard", false,-1);
        tracep->declBit(c+642,"top id_flush", false,-1);
        tracep->declQuad(c+643,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+645,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+1017,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+646,"top src1sel_ex", false,-1);
        tracep->declBus(c+647,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+648,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+650,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+652,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+654,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+656,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+657,"top is_brc_ex", false,-1);
        tracep->declBit(c+658,"top is_jal_ex", false,-1);
        tracep->declBit(c+659,"top is_jalr_ex", false,-1);
        tracep->declBit(c+660,"top wben_ex", false,-1);
        tracep->declBit(c+661,"top DivEn_ex", false,-1);
        tracep->declBus(c+662,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+663,"top trap_ex", false,-1);
        tracep->declBit(c+986,"top ex_stall_n", false,-1);
        tracep->declQuad(c+10,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+664,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+665,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+666,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+667,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+668,"top ex_flush", false,-1);
        tracep->declBit(c+669,"top rden_ls", false,-1);
        tracep->declBit(c+670,"top wren_ls", false,-1);
        tracep->declBit(c+987,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+1019,"top ex_not_ok", false,-1);
        tracep->declQuad(c+12,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+18,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+1192,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+19,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+26,"top trap_ls", false,-1);
        tracep->declBit(c+1020,"top ls_stall_n", false,-1);
        tracep->declBit(c+1021,"top ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+404,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+671,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+1243,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+1244,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+1022,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+672,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+673,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+675,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+677,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+679,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+680,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+682,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+683,"top wben_wb", false,-1);
        tracep->declQuad(c+684,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+1020,"top wb_stall_n", false,-1);
        tracep->declQuad(c+686,"top clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1222,"top clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+688,"top clint_axi_arvalid", false,-1);
        tracep->declBit(c+458,"top clint_axi_arready", false,-1);
        tracep->declBus(c+689,"top clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+459,"top clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+460,"top clint_axi_rvalid", false,-1);
        tracep->declBit(c+690,"top clint_axi_rready", false,-1);
        tracep->declBus(c+461,"top clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+462,"top clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1222,"top clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+691,"top clint_axi_awvalid", false,-1);
        tracep->declBit(c+464,"top clint_axi_awready", false,-1);
        tracep->declQuad(c+692,"top clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+465,"top clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+694,"top clint_axi_wvalid", false,-1);
        tracep->declBit(c+466,"top clint_axi_wready", false,-1);
        tracep->declBus(c+459,"top clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+467,"top clint_axi_bvalid", false,-1);
        tracep->declBit(c+695,"top clint_axi_bready", false,-1);
        tracep->declBit(c+696,"top rw_valid_i", false,-1);
        tracep->declBit(c+32,"top rw_ready_o", false,-1);
        tracep->declBus(c+599,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1009,"top rdLast_o", false,-1);
        tracep->declBus(c+406,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+1007,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+1024,"top dataValid_o", false,-1);
        tracep->declBit(c+697,"top fence_id", false,-1);
        tracep->declBit(c+698,"top fence_ex", false,-1);
        tracep->declBit(c+407,"top ld_csr_hazard", false,-1);
        tracep->declBit(c+33,"top ls_flush", false,-1);
        tracep->declBit(c+33,"top in_intr_ls", false,-1);
        tracep->declBit(c+1021,"top dataNotOk", false,-1);
        tracep->declBit(c+34,"top fence_ls", false,-1);
        tracep->declBit(c+699,"top clear_Icache", false,-1);
        tracep->declBit(c+700,"top DcacheRdValid", false,-1);
        tracep->declBit(c+701,"top DcacheWrValid", false,-1);
        tracep->declBit(c+35,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+602,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+1015,"top lsRdLast", false,-1);
        tracep->declQuad(c+702,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+704,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+1013,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+1025,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+706,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+570,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+602,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+707,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+708,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+403,"top lsLoadSize", false,-1, 2,0);
        tracep->declBus(c+1218,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1219,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1220,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1221,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+1183,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+1225,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+599,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+600,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+1231,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+1224,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+1232,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+1233,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+1006,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+1184,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+1007,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+1009,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+1010,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+1234,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+1185,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+601,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+454,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+1235,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+602,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+456,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+1231,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+1224,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+1236,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+1011,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+603,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+604,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+457,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+606,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+1223,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+607,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+1186,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+1187,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+1188,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+1189,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+1190,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+6,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+7,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+1235,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+602,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+403,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+1231,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+1224,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+1232,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+1237,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+1012,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+1191,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+1013,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+1015,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+1010,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+1238,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+1157,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+1158,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+1159,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1161,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1162,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1163,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1164,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1165,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1166,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1167,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+1168,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1169,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1170,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1171,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+1172,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+1173,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1175,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1176,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+1177,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1178,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+1179,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+1180,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1181,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1182,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1135,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+1136,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+1137,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1139,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1140,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1141,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1142,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1143,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1144,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1145,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+1146,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1147,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1148,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1149,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+1150,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+1151,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1152,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1154,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+1155,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1156,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+443,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+596,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+444,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+446,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+566,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+447,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+448,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1224,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+449,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+450,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+597,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+567,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+451,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+569,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+1223,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+598,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+452,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+453,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1235,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1230,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+438,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+589,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+590,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+400,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+401,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+592,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+593,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1224,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+594,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+402,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+595,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+439,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+440,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+441,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+439,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+1235,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1228,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+686,"top axi_crossbar_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_crossbar_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+688,"top axi_crossbar_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+458,"top axi_crossbar_u clint_axi_arready", false,-1);
        tracep->declBus(c+689,"top axi_crossbar_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top axi_crossbar_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+459,"top axi_crossbar_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+460,"top axi_crossbar_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+690,"top axi_crossbar_u clint_axi_rready", false,-1);
        tracep->declBus(c+461,"top axi_crossbar_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+462,"top axi_crossbar_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_crossbar_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+691,"top axi_crossbar_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+464,"top axi_crossbar_u clint_axi_awready", false,-1);
        tracep->declQuad(c+692,"top axi_crossbar_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+465,"top axi_crossbar_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+694,"top axi_crossbar_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+466,"top axi_crossbar_u clint_axi_wready", false,-1);
        tracep->declBus(c+459,"top axi_crossbar_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+467,"top axi_crossbar_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+695,"top axi_crossbar_u clint_axi_bready", false,-1);
        tracep->declBit(c+1185,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+601,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+454,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+1235,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+602,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+456,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1231,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+1224,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+1236,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+1011,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+603,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+604,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+457,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+606,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+1223,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+607,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+1186,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+1187,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+1188,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1189,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+1026,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+36,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+709,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+37,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+408,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+711,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1231,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+1245,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+1232,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+712,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+1027,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+1194,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+1028,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+1030,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+1010,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+1195,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+713,"top axi_crossbar_u clint_r_trans", false,-1);
        tracep->declBit(c+468,"top axi_crossbar_u clint_w_trans", false,-1);
        tracep->declBit(c+714,"top axi_crossbar_u perip_r_trans", false,-1);
        tracep->declBit(c+469,"top axi_crossbar_u perip_w_trans", false,-1);
        tracep->declBit(c+1125,"top IF_u clk", false,-1);
        tracep->declBit(c+1126,"top IF_u rst_n", false,-1);
        tracep->declBit(c+610,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+611,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+638,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+639,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+1016,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+608,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+621,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+613,"top IF_u if_instr_valid", false,-1);
        tracep->declBit(c+33,"top IF_u in_intr_ls", false,-1);
        tracep->declQuad(c+614,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+1241,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+619,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+620,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+616,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+1242,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+618,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+616,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+1125,"top cache_dut clk", false,-1);
        tracep->declBit(c+1126,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+715,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+618,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+1224,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+1246,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+1248,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+1016,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+619,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+716,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+620,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+614,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+699,"top cache_dut clrValid", false,-1);
        tracep->declBit(c+696,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+32,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+599,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1009,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+406,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+1007,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+1024,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+1222,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+1249,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+1250,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+1251,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+1252,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+1253,"top cache_dut unCacheOp", false,-1, 2,0);
        tracep->declBus(c+717,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+1031,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+718,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+39,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+40,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+470,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+474,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+478,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+482,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+719,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+723,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+719,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+723,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+727,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+728,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+729,"top cache_dut uncached", false,-1);
        tracep->declBit(c+41,"top cache_dut uncachedOk", false,-1);
        tracep->declBit(c+730,"top cache_dut diffAddr", false,-1);
        tracep->declBit(c+731,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+42,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+44,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+45,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+46,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+47,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+49,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+51,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+52,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+1196,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+1197,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+1198,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+1199,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+53,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+54,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+1254,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+1255,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+732,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+486,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+494,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+1200,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+1202,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+733,"top cache_dut missEn", false,-1);
        tracep->declBit(c+734,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+55,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+502,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+57,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+735,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+736,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+744,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+1256,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1218,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1257,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1256,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+470,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+1125,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+745,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+746,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+1258,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+1032,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+719,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+747,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+727,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+1262,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1256,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1218,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1257,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1256,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+474,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+1125,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+745,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+746,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+1258,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+1032,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+723,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+747,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+727,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+1262,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1256,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1218,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1257,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1256,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+478,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+1125,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+748,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+749,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+1258,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+1033,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+719,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+750,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+728,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+1262,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1256,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1218,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1257,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1256,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+482,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+1125,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+748,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+749,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+1258,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+1033,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+723,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+750,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+728,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+1262,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1218,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1219,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1220,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1221,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1125,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+1126,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+696,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+32,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+1007,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+409,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+599,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1009,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+1024,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+1,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+1183,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1225,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+599,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+600,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1231,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1224,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+1232,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1233,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+1006,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+1184,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1007,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1009,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+1010,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1234,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+1266,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+1231,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+1267,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+1268,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+58,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+1034,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+2,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+5,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+1269,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1225,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+1224,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+599,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+600,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+1125,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+1126,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+608,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+621,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+985,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+642,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+622,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+624,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+751,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+753,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+1270,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1271,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1125,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+1126,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+985,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+754,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+757,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+1125,"top ID_u clk", false,-1);
        tracep->declBit(c+1126,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+622,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+673,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+679,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+624,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+680,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+682,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+683,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+994,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+992,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+625,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+627,"top ID_u src1sel", false,-1);
        tracep->declBus(c+628,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+629,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+632,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+631,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+630,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+633,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+634,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+635,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+1132,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+636,"top ID_u DivEn", false,-1);
        tracep->declBus(c+637,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+640,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+638,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+639,"top ID_u out_trap_id", false,-1);
        tracep->declBit(c+697,"top ID_u fence_id", false,-1);
        tracep->declBus(c+760,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+625,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+994,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+992,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+622,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+624,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+634,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+635,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+760,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+627,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+628,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+629,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+632,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+631,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+630,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+633,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+636,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+637,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+640,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+638,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+639,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBit(c+697,"top ID_u decoder_u fence_id", false,-1);
        tracep->declBus(c+761,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+762,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+763,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+764,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+760,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+625,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+1125,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+673,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+679,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+634,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+994,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+635,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+992,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+682,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+680,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+683,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+1132,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1061+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+624,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+645,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBus(c+18,"top hazard_detect_u instr_ls_i", false,-1, 31,0);
        tracep->declBus(c+679,"top hazard_detect_u instr_wb_i", false,-1, 31,0);
        tracep->declBit(c+641,"top hazard_detect_u ld_use_hazard", false,-1);
        tracep->declBit(c+407,"top hazard_detect_u ld_csr_hazard", false,-1);
        tracep->declBit(c+765,"top hazard_detect_u wb_is_load", false,-1);
        tracep->declBit(c+59,"top hazard_detect_u ls_is_csropi", false,-1);
        tracep->declBit(c+1125,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+1126,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+986,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+668,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+622,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+624,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+625,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+992,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+994,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+629,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+632,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+631,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+630,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+627,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+628,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+633,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+634,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+635,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+636,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+637,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+640,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declBit(c+697,"top EX_reg_u fence_ex_reg_i", false,-1);
        tracep->declQuad(c+643,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+645,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+648,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+650,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+652,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+656,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+659,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+658,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+657,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+646,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+647,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+660,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+666,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+667,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+661,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+662,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+663,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declBit(c+698,"top EX_reg_u fence_ex_reg_o", false,-1);
        tracep->declQuad(c+766,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+768,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+769,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+770,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+771,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+772,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+773,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBit(c+774,"top EX_reg_u fence_ex_reg", false,-1);
        tracep->declBus(c+1272,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1271,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1125,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+1126,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+986,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+996,"top EX_reg_u ex_reg i_din", false,-1, 315,0);
        tracep->declArray(c+775,"top EX_reg_u ex_reg o_dout", false,-1, 315,0);
        tracep->declBit(c+1125,"top ex_stage_u clk", false,-1);
        tracep->declBit(c+1126,"top ex_stage_u rst_n", false,-1);
        tracep->declBus(c+656,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+650,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+648,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+652,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+643,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+645,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+659,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+658,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+657,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+646,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+647,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+664,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+665,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+16,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+680,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+661,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+662,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declBit(c+668,"top ex_stage_u flush_ex_i", false,-1);
        tracep->declQuad(c+1017,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+611,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+654,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+610,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+1019,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+669,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+670,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+987,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+785,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+787,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+789,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+654,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBit(c+1204,"top ex_stage_u aluNotOk", false,-1);
        tracep->declBit(c+1125,"top ex_stage_u u_ALU clk", false,-1);
        tracep->declBit(c+1126,"top ex_stage_u u_ALU rst_n", false,-1);
        tracep->declBus(c+656,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+785,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+787,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+661,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+662,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declBit(c+668,"top ex_stage_u u_ALU flush_alu", false,-1);
        tracep->declQuad(c+1017,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+791,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+792,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declBit(c+1204,"top ex_stage_u u_ALU aluNotOk", false,-1);
        tracep->declQuad(c+1035,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+793,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+794,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+796,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+798,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+798,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+799,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+800,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+801,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+803,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+804,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+805,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+807,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+809,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+60,"top ex_stage_u u_ALU src1Reg", false,-1, 63,0);
        tracep->declQuad(c+62,"top ex_stage_u u_ALU src2Reg", false,-1, 63,0);
        tracep->declBit(c+811,"top ex_stage_u u_ALU diffIn", false,-1);
        tracep->declBit(c+812,"top ex_stage_u u_ALU mul_valid", false,-1);
        tracep->declBit(c+1205,"top ex_stage_u u_ALU mul_resValid", false,-1);
        tracep->declQuad(c+1037,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+411,"top ex_stage_u u_ALU mulOut", false,-1, 63,0);
        tracep->declQuad(c+64,"top ex_stage_u u_ALU divOut", false,-1, 63,0);
        tracep->declBit(c+813,"top ex_stage_u u_ALU div_valid", false,-1);
        tracep->declBit(c+66,"top ex_stage_u u_ALU div_resValid", false,-1);
        tracep->declQuad(c+785,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+794,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+793,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+796,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+803,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+792,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+804,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+814,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+800,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+798,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+799,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+793,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+798,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+815,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+785,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+816,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+799,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+798,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+801,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+817,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+819,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+821,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+823,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+825,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+827,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+829,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declBit(c+1125,"top ex_stage_u u_ALU multiplier clk", false,-1);
        tracep->declBit(c+1126,"top ex_stage_u u_ALU multiplier rst_n", false,-1);
        tracep->declBit(c+812,"top ex_stage_u u_ALU multiplier mul_valid", false,-1);
        tracep->declBit(c+668,"top ex_stage_u u_ALU multiplier flush", false,-1);
        tracep->declBus(c+831,"top ex_stage_u u_ALU multiplier mul_type", false,-1, 1,0);
        tracep->declQuad(c+785,"top ex_stage_u u_ALU multiplier multiplicand", false,-1, 63,0);
        tracep->declQuad(c+787,"top ex_stage_u u_ALU multiplier multiplier", false,-1, 63,0);
        tracep->declBit(c+1205,"top ex_stage_u u_ALU multiplier out_valid", false,-1);
        tracep->declQuad(c+411,"top ex_stage_u u_ALU multiplier result", false,-1, 63,0);
        tracep->declBit(c+832,"top ex_stage_u u_ALU multiplier stateReg", false,-1);
        tracep->declBit(c+833,"top ex_stage_u u_ALU multiplier interValid", false,-1);
        tracep->declBit(c+834,"top ex_stage_u u_ALU multiplier resultValidReg_d", false,-1);
        tracep->declBit(c+1206,"top ex_stage_u u_ALU multiplier resultValidReg_q", false,-1);
        tracep->declBus(c+835,"top ex_stage_u u_ALU multiplier mul_signed", false,-1, 1,0);
        tracep->declQuad(c+67,"top ex_stage_u u_ALU multiplier result_hi", false,-1, 63,0);
        tracep->declQuad(c+69,"top ex_stage_u u_ALU multiplier result_lo", false,-1, 63,0);
        tracep->declBus(c+1221,"top ex_stage_u u_ALU multiplier resultValidReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1271,"top ex_stage_u u_ALU multiplier resultValidReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1125,"top ex_stage_u u_ALU multiplier resultValidReg i_clk", false,-1);
        tracep->declBit(c+1039,"top ex_stage_u u_ALU multiplier resultValidReg i_rst_n", false,-1);
        tracep->declBit(c+1242,"top ex_stage_u u_ALU multiplier resultValidReg i_wen", false,-1);
        tracep->declBus(c+834,"top ex_stage_u u_ALU multiplier resultValidReg i_din", false,-1, 0,0);
        tracep->declBus(c+1206,"top ex_stage_u u_ALU multiplier resultValidReg o_dout", false,-1, 0,0);
        tracep->declBit(c+1125,"top ex_stage_u u_ALU multiplier mul64_u clk", false,-1);
        tracep->declBit(c+1126,"top ex_stage_u u_ALU multiplier mul64_u rst_n", false,-1);
        tracep->declBit(c+812,"top ex_stage_u u_ALU multiplier mul64_u mul_valid", false,-1);
        tracep->declBit(c+668,"top ex_stage_u u_ALU multiplier mul64_u flush", false,-1);
        tracep->declBit(c+1224,"top ex_stage_u u_ALU multiplier mul64_u mulw", false,-1);
        tracep->declBus(c+835,"top ex_stage_u u_ALU multiplier mul64_u mul_signed", false,-1, 1,0);
        tracep->declQuad(c+785,"top ex_stage_u u_ALU multiplier mul64_u multiplicand", false,-1, 63,0);
        tracep->declQuad(c+787,"top ex_stage_u u_ALU multiplier mul64_u multiplier", false,-1, 63,0);
        tracep->declBit(c+836,"top ex_stage_u u_ALU multiplier mul64_u mul_ready", false,-1);
        tracep->declBit(c+833,"top ex_stage_u u_ALU multiplier mul64_u out_valid", false,-1);
        tracep->declQuad(c+67,"top ex_stage_u u_ALU multiplier mul64_u result_hi", false,-1, 63,0);
        tracep->declQuad(c+69,"top ex_stage_u u_ALU multiplier mul64_u result_lo", false,-1, 63,0);
        tracep->declBit(c+837,"top ex_stage_u u_ALU multiplier mul64_u src1_is_signed", false,-1);
        tracep->declBit(c+838,"top ex_stage_u u_ALU multiplier mul64_u src2_is_signed", false,-1);
        tracep->declQuad(c+839,"top ex_stage_u u_ALU multiplier mul64_u mul_lo_src1", false,-1, 32,0);
        tracep->declQuad(c+841,"top ex_stage_u u_ALU multiplier mul64_u mul_hi_src1", false,-1, 32,0);
        tracep->declQuad(c+843,"top ex_stage_u u_ALU multiplier mul64_u mul_lo_src2", false,-1, 32,0);
        tracep->declQuad(c+845,"top ex_stage_u u_ALU multiplier mul64_u mul_hi_src2", false,-1, 32,0);
        tracep->declArray(c+847,"top ex_stage_u u_ALU multiplier mul64_u mul_ll_rslt", false,-1, 65,0);
        tracep->declArray(c+850,"top ex_stage_u u_ALU multiplier mul64_u mul_lh_rslt", false,-1, 65,0);
        tracep->declArray(c+853,"top ex_stage_u u_ALU multiplier mul64_u mul_hl_rslt", false,-1, 65,0);
        tracep->declArray(c+856,"top ex_stage_u u_ALU multiplier mul64_u mul_hh_rslt", false,-1, 65,0);
        tracep->declArray(c+71,"top ex_stage_u u_ALU multiplier mul64_u mul_ll_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+74,"top ex_stage_u u_ALU multiplier mul64_u mul_lh_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+77,"top ex_stage_u u_ALU multiplier mul64_u mul_hl_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+80,"top ex_stage_u u_ALU multiplier mul64_u mul_hh_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+83,"top ex_stage_u u_ALU multiplier mul64_u mul_ll_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+88,"top ex_stage_u u_ALU multiplier mul64_u mul_lh_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+93,"top ex_stage_u u_ALU multiplier mul64_u mul_hl_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+98,"top ex_stage_u u_ALU multiplier mul64_u mul_hh_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+103,"top ex_stage_u u_ALU multiplier mul64_u mul_rslt_stg2_ex2", false,-1, 129,0);
        tracep->declBit(c+859,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_set", false,-1);
        tracep->declBit(c+860,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_clr", false,-1);
        tracep->declBit(c+861,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_d", false,-1);
        tracep->declBit(c+833,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_q", false,-1);
        tracep->declBit(c+833,"top ex_stage_u u_ALU multiplier mul64_u int_reg_wr_ready_fin", false,-1);
        tracep->declBus(c+1273,"top ex_stage_u u_ALU multiplier mul64_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1271,"top ex_stage_u u_ALU multiplier mul64_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1125,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_clk", false,-1);
        tracep->declBit(c+1126,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+859,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_wen", false,-1);
        tracep->declArray(c+862,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_din", false,-1, 263,0);
        tracep->declArray(c+108,"top ex_stage_u u_ALU multiplier mul64_u id_reg o_dout", false,-1, 263,0);
        tracep->declBit(c+1125,"top ex_stage_u u_ALU divider clk", false,-1);
        tracep->declBit(c+1126,"top ex_stage_u u_ALU divider rst_n", false,-1);
        tracep->declQuad(c+785,"top ex_stage_u u_ALU divider dividend", false,-1, 63,0);
        tracep->declQuad(c+787,"top ex_stage_u u_ALU divider divisor", false,-1, 63,0);
        tracep->declBit(c+813,"top ex_stage_u u_ALU divider div_valid", false,-1);
        tracep->declBus(c+831,"top ex_stage_u u_ALU divider div_type", false,-1, 1,0);
        tracep->declBit(c+668,"top ex_stage_u u_ALU divider flush", false,-1);
        tracep->declBit(c+66,"top ex_stage_u u_ALU divider div_ready", false,-1);
        tracep->declBit(c+66,"top ex_stage_u u_ALU divider out_valid", false,-1);
        tracep->declQuad(c+64,"top ex_stage_u u_ALU divider result", false,-1, 63,0);
        tracep->declBus(c+117,"top ex_stage_u u_ALU divider div_type_r", false,-1, 1,0);
        tracep->declQuad(c+871,"top ex_stage_u u_ALU divider dividend_N", false,-1, 63,0);
        tracep->declQuad(c+873,"top ex_stage_u u_ALU divider divisor_N", false,-1, 63,0);
        tracep->declQuad(c+118,"top ex_stage_u u_ALU divider divisor_N_r", false,-1, 63,0);
        tracep->declQuad(c+120,"top ex_stage_u u_ALU divider divisor_P_r", false,-1, 63,0);
        tracep->declArray(c+122,"top ex_stage_u u_ALU divider dividendReg", false,-1, 127,0);
        tracep->declQuad(c+126,"top ex_stage_u u_ALU divider restore_remainder", false,-1, 63,0);
        tracep->declBus(c+128,"top ex_stage_u u_ALU divider div_cnt", false,-1, 5,0);
        tracep->declBit(c+129,"top ex_stage_u u_ALU divider div_busy", false,-1);
        tracep->declBit(c+130,"top ex_stage_u u_ALU divider dividend_sign", false,-1);
        tracep->declBit(c+131,"top ex_stage_u u_ALU divider divisor_sign", false,-1);
        tracep->declQuad(c+132,"top ex_stage_u u_ALU divider x2", false,-1, 63,0);
        tracep->declQuad(c+134,"top ex_stage_u u_ALU divider r_64", false,-1, 63,0);
        tracep->declBit(c+136,"top ex_stage_u u_ALU divider partial_q", false,-1);
        tracep->declQuad(c+137,"top ex_stage_u u_ALU divider quotient", false,-1, 63,0);
        tracep->declQuad(c+139,"top ex_stage_u u_ALU divider remainder", false,-1, 63,0);
        tracep->declQuad(c+141,"top ex_stage_u u_ALU divider remainder_s", false,-1, 63,0);
        tracep->declQuad(c+143,"top ex_stage_u u_ALU divider cla_64_u1 a_64", false,-1, 63,0);
        tracep->declQuad(c+132,"top ex_stage_u u_ALU divider cla_64_u1 b_64", false,-1, 63,0);
        tracep->declBit(c+1224,"top ex_stage_u u_ALU divider cla_64_u1 cin_64", false,-1);
        tracep->declQuad(c+145,"top ex_stage_u u_ALU divider cla_64_u1 p_64", false,-1, 63,0);
        tracep->declQuad(c+147,"top ex_stage_u u_ALU divider cla_64_u1 g_64", false,-1, 63,0);
        tracep->declQuad(c+134,"top ex_stage_u u_ALU divider cla_64_u1 s_64", false,-1, 63,0);
        tracep->declBit(c+149,"top ex_stage_u u_ALU divider cla_64_u1 gx_64", false,-1);
        tracep->declBit(c+150,"top ex_stage_u u_ALU divider cla_64_u1 px_64", false,-1);
        tracep->declBit(c+151,"top ex_stage_u u_ALU divider cla_64_u1 px1", false,-1);
        tracep->declBit(c+152,"top ex_stage_u u_ALU divider cla_64_u1 px2", false,-1);
        tracep->declBit(c+153,"top ex_stage_u u_ALU divider cla_64_u1 px3", false,-1);
        tracep->declBit(c+154,"top ex_stage_u u_ALU divider cla_64_u1 px4", false,-1);
        tracep->declBit(c+155,"top ex_stage_u u_ALU divider cla_64_u1 gx1", false,-1);
        tracep->declBit(c+156,"top ex_stage_u u_ALU divider cla_64_u1 gx2", false,-1);
        tracep->declBit(c+157,"top ex_stage_u u_ALU divider cla_64_u1 gx3", false,-1);
        tracep->declBit(c+158,"top ex_stage_u u_ALU divider cla_64_u1 gx4", false,-1);
        tracep->declBit(c+155,"top ex_stage_u u_ALU divider cla_64_u1 c15", false,-1);
        tracep->declBit(c+159,"top ex_stage_u u_ALU divider cla_64_u1 c31", false,-1);
        tracep->declBit(c+160,"top ex_stage_u u_ALU divider cla_64_u1 c47", false,-1);
        tracep->declBus(c+161,"top ex_stage_u u_ALU divider cla_64_u1 u1 a_16", false,-1, 15,0);
        tracep->declBus(c+162,"top ex_stage_u u_ALU divider cla_64_u1 u1 b_16", false,-1, 15,0);
        tracep->declBit(c+1224,"top ex_stage_u u_ALU divider cla_64_u1 u1 cin_16", false,-1);
        tracep->declBus(c+163,"top ex_stage_u u_ALU divider cla_64_u1 u1 p_16", false,-1, 15,0);
        tracep->declBus(c+164,"top ex_stage_u u_ALU divider cla_64_u1 u1 g_16", false,-1, 15,0);
        tracep->declBus(c+165,"top ex_stage_u u_ALU divider cla_64_u1 u1 s_16", false,-1, 15,0);
        tracep->declBit(c+155,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx_16", false,-1);
        tracep->declBit(c+151,"top ex_stage_u u_ALU divider cla_64_u1 u1 px_16", false,-1);
        tracep->declBit(c+166,"top ex_stage_u u_ALU divider cla_64_u1 u1 c3", false,-1);
        tracep->declBit(c+167,"top ex_stage_u u_ALU divider cla_64_u1 u1 c7", false,-1);
        tracep->declBit(c+168,"top ex_stage_u u_ALU divider cla_64_u1 u1 c11", false,-1);
        tracep->declBit(c+169,"top ex_stage_u u_ALU divider cla_64_u1 u1 px1", false,-1);
        tracep->declBit(c+170,"top ex_stage_u u_ALU divider cla_64_u1 u1 px2", false,-1);
        tracep->declBit(c+171,"top ex_stage_u u_ALU divider cla_64_u1 u1 px3", false,-1);
        tracep->declBit(c+172,"top ex_stage_u u_ALU divider cla_64_u1 u1 px4", false,-1);
        tracep->declBit(c+166,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx1", false,-1);
        tracep->declBit(c+173,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx2", false,-1);
        tracep->declBit(c+174,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx3", false,-1);
        tracep->declBit(c+175,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx4", false,-1);
        tracep->declBus(c+176,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+177,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+1224,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 cin_4", false,-1);
        tracep->declBus(c+178,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+179,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+180,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+169,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 px_4", false,-1);
        tracep->declBit(c+166,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 gx_4", false,-1);
        tracep->declBus(c+181,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+182,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+183,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+166,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 cin_4", false,-1);
        tracep->declBus(c+184,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+185,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+186,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+170,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 px_4", false,-1);
        tracep->declBit(c+173,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 gx_4", false,-1);
        tracep->declBus(c+187,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+188,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+189,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+167,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 cin_4", false,-1);
        tracep->declBus(c+190,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+191,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+192,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+171,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 px_4", false,-1);
        tracep->declBit(c+174,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 gx_4", false,-1);
        tracep->declBus(c+193,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+194,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+195,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+168,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 cin_4", false,-1);
        tracep->declBus(c+196,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+197,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+198,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+172,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 px_4", false,-1);
        tracep->declBit(c+175,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 gx_4", false,-1);
        tracep->declBus(c+199,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 c_int", false,-1, 3,0);
        tracep->declBus(c+200,"top ex_stage_u u_ALU divider cla_64_u1 u2 a_16", false,-1, 15,0);
        tracep->declBus(c+201,"top ex_stage_u u_ALU divider cla_64_u1 u2 b_16", false,-1, 15,0);
        tracep->declBit(c+155,"top ex_stage_u u_ALU divider cla_64_u1 u2 cin_16", false,-1);
        tracep->declBus(c+202,"top ex_stage_u u_ALU divider cla_64_u1 u2 p_16", false,-1, 15,0);
        tracep->declBus(c+203,"top ex_stage_u u_ALU divider cla_64_u1 u2 g_16", false,-1, 15,0);
        tracep->declBus(c+204,"top ex_stage_u u_ALU divider cla_64_u1 u2 s_16", false,-1, 15,0);
        tracep->declBit(c+156,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx_16", false,-1);
        tracep->declBit(c+152,"top ex_stage_u u_ALU divider cla_64_u1 u2 px_16", false,-1);
        tracep->declBit(c+205,"top ex_stage_u u_ALU divider cla_64_u1 u2 c3", false,-1);
        tracep->declBit(c+206,"top ex_stage_u u_ALU divider cla_64_u1 u2 c7", false,-1);
        tracep->declBit(c+207,"top ex_stage_u u_ALU divider cla_64_u1 u2 c11", false,-1);
        tracep->declBit(c+208,"top ex_stage_u u_ALU divider cla_64_u1 u2 px1", false,-1);
        tracep->declBit(c+209,"top ex_stage_u u_ALU divider cla_64_u1 u2 px2", false,-1);
        tracep->declBit(c+210,"top ex_stage_u u_ALU divider cla_64_u1 u2 px3", false,-1);
        tracep->declBit(c+211,"top ex_stage_u u_ALU divider cla_64_u1 u2 px4", false,-1);
        tracep->declBit(c+212,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx1", false,-1);
        tracep->declBit(c+213,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx2", false,-1);
        tracep->declBit(c+214,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx3", false,-1);
        tracep->declBit(c+215,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx4", false,-1);
        tracep->declBus(c+216,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+217,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+155,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 cin_4", false,-1);
        tracep->declBus(c+218,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+219,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+220,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+208,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 px_4", false,-1);
        tracep->declBit(c+212,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 gx_4", false,-1);
        tracep->declBus(c+221,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+222,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+223,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+205,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 cin_4", false,-1);
        tracep->declBus(c+224,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+225,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+226,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+209,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 px_4", false,-1);
        tracep->declBit(c+213,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 gx_4", false,-1);
        tracep->declBus(c+227,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+228,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+229,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+206,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 cin_4", false,-1);
        tracep->declBus(c+230,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+231,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+232,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+210,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 px_4", false,-1);
        tracep->declBit(c+214,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 gx_4", false,-1);
        tracep->declBus(c+233,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+234,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+235,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+207,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 cin_4", false,-1);
        tracep->declBus(c+236,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+237,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+238,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+211,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 px_4", false,-1);
        tracep->declBit(c+215,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 gx_4", false,-1);
        tracep->declBus(c+239,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 c_int", false,-1, 3,0);
        tracep->declBus(c+240,"top ex_stage_u u_ALU divider cla_64_u1 u3 a_16", false,-1, 15,0);
        tracep->declBus(c+241,"top ex_stage_u u_ALU divider cla_64_u1 u3 b_16", false,-1, 15,0);
        tracep->declBit(c+159,"top ex_stage_u u_ALU divider cla_64_u1 u3 cin_16", false,-1);
        tracep->declBus(c+242,"top ex_stage_u u_ALU divider cla_64_u1 u3 p_16", false,-1, 15,0);
        tracep->declBus(c+243,"top ex_stage_u u_ALU divider cla_64_u1 u3 g_16", false,-1, 15,0);
        tracep->declBus(c+244,"top ex_stage_u u_ALU divider cla_64_u1 u3 s_16", false,-1, 15,0);
        tracep->declBit(c+157,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx_16", false,-1);
        tracep->declBit(c+153,"top ex_stage_u u_ALU divider cla_64_u1 u3 px_16", false,-1);
        tracep->declBit(c+245,"top ex_stage_u u_ALU divider cla_64_u1 u3 c3", false,-1);
        tracep->declBit(c+246,"top ex_stage_u u_ALU divider cla_64_u1 u3 c7", false,-1);
        tracep->declBit(c+247,"top ex_stage_u u_ALU divider cla_64_u1 u3 c11", false,-1);
        tracep->declBit(c+248,"top ex_stage_u u_ALU divider cla_64_u1 u3 px1", false,-1);
        tracep->declBit(c+249,"top ex_stage_u u_ALU divider cla_64_u1 u3 px2", false,-1);
        tracep->declBit(c+250,"top ex_stage_u u_ALU divider cla_64_u1 u3 px3", false,-1);
        tracep->declBit(c+251,"top ex_stage_u u_ALU divider cla_64_u1 u3 px4", false,-1);
        tracep->declBit(c+252,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx1", false,-1);
        tracep->declBit(c+253,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx2", false,-1);
        tracep->declBit(c+254,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx3", false,-1);
        tracep->declBit(c+255,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx4", false,-1);
        tracep->declBus(c+256,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+257,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+159,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 cin_4", false,-1);
        tracep->declBus(c+258,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+259,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+260,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+248,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 px_4", false,-1);
        tracep->declBit(c+252,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 gx_4", false,-1);
        tracep->declBus(c+261,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+262,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+263,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+245,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 cin_4", false,-1);
        tracep->declBus(c+264,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+265,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+266,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+249,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 px_4", false,-1);
        tracep->declBit(c+253,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 gx_4", false,-1);
        tracep->declBus(c+267,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+268,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+269,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+246,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 cin_4", false,-1);
        tracep->declBus(c+270,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+271,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+272,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+250,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 px_4", false,-1);
        tracep->declBit(c+254,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 gx_4", false,-1);
        tracep->declBus(c+273,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+274,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+275,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+247,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 cin_4", false,-1);
        tracep->declBus(c+276,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+277,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+278,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+251,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 px_4", false,-1);
        tracep->declBit(c+255,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 gx_4", false,-1);
        tracep->declBus(c+279,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 c_int", false,-1, 3,0);
        tracep->declBus(c+280,"top ex_stage_u u_ALU divider cla_64_u1 u4 a_16", false,-1, 15,0);
        tracep->declBus(c+281,"top ex_stage_u u_ALU divider cla_64_u1 u4 b_16", false,-1, 15,0);
        tracep->declBit(c+160,"top ex_stage_u u_ALU divider cla_64_u1 u4 cin_16", false,-1);
        tracep->declBus(c+282,"top ex_stage_u u_ALU divider cla_64_u1 u4 p_16", false,-1, 15,0);
        tracep->declBus(c+283,"top ex_stage_u u_ALU divider cla_64_u1 u4 g_16", false,-1, 15,0);
        tracep->declBus(c+284,"top ex_stage_u u_ALU divider cla_64_u1 u4 s_16", false,-1, 15,0);
        tracep->declBit(c+158,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx_16", false,-1);
        tracep->declBit(c+154,"top ex_stage_u u_ALU divider cla_64_u1 u4 px_16", false,-1);
        tracep->declBit(c+285,"top ex_stage_u u_ALU divider cla_64_u1 u4 c3", false,-1);
        tracep->declBit(c+286,"top ex_stage_u u_ALU divider cla_64_u1 u4 c7", false,-1);
        tracep->declBit(c+287,"top ex_stage_u u_ALU divider cla_64_u1 u4 c11", false,-1);
        tracep->declBit(c+288,"top ex_stage_u u_ALU divider cla_64_u1 u4 px1", false,-1);
        tracep->declBit(c+289,"top ex_stage_u u_ALU divider cla_64_u1 u4 px2", false,-1);
        tracep->declBit(c+290,"top ex_stage_u u_ALU divider cla_64_u1 u4 px3", false,-1);
        tracep->declBit(c+291,"top ex_stage_u u_ALU divider cla_64_u1 u4 px4", false,-1);
        tracep->declBit(c+292,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx1", false,-1);
        tracep->declBit(c+293,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx2", false,-1);
        tracep->declBit(c+294,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx3", false,-1);
        tracep->declBit(c+295,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx4", false,-1);
        tracep->declBus(c+296,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+297,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+160,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 cin_4", false,-1);
        tracep->declBus(c+298,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+299,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+300,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+288,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 px_4", false,-1);
        tracep->declBit(c+292,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 gx_4", false,-1);
        tracep->declBus(c+301,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+302,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+303,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+285,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 cin_4", false,-1);
        tracep->declBus(c+304,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+305,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+306,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+289,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 px_4", false,-1);
        tracep->declBit(c+293,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 gx_4", false,-1);
        tracep->declBus(c+307,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+308,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+309,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+286,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 cin_4", false,-1);
        tracep->declBus(c+310,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+311,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+312,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+290,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 px_4", false,-1);
        tracep->declBit(c+294,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 gx_4", false,-1);
        tracep->declBus(c+313,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+314,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+315,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+287,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 cin_4", false,-1);
        tracep->declBus(c+316,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+317,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+318,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+291,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 px_4", false,-1);
        tracep->declBit(c+295,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 gx_4", false,-1);
        tracep->declBus(c+319,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 c_int", false,-1, 3,0);
        tracep->declQuad(c+789,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+654,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+659,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+658,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+657,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+875,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+652,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+643,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+611,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+610,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+876,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+878,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+1274,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+880,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+881,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+882,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+883,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+885,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+887,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+1125,"top forwarding_u clk", false,-1);
        tracep->declBit(c+1126,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+666,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+667,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+320,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+682,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+19,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+683,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+680,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+1020,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+664,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+665,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+10,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+10,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+321,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+322,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+413,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+888,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+414,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+415,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+889,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+416,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+1125,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+1126,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+643,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+654,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+645,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+1017,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+660,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+663,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+1020,"top L_S_reg_u stall_n", false,-1);
        tracep->declBit(c+33,"top L_S_reg_u flush_i", false,-1);
        tracep->declBit(c+698,"top L_S_reg_u fence_ls_reg_i", false,-1);
        tracep->declQuad(c+12,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+18,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+16,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+19,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+26,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBit(c+34,"top L_S_reg_u fence_ls_reg_o", false,-1);
        tracep->declArray(c+430,"top L_S_reg_u bundle", false,-1, 226,0);
        tracep->declBus(c+1275,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1271,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1125,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+1126,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+1020,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+430,"top L_S_reg_u ls_reg i_din", false,-1, 226,0);
        tracep->declArray(c+323,"top L_S_reg_u ls_reg o_dout", false,-1, 226,0);
        tracep->declBit(c+1125,"top ls_u clk", false,-1);
        tracep->declBit(c+1126,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+675,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+679,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+677,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+684,"top ls_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+1020,"top ls_u stall_n", false,-1);
        tracep->declBit(c+1016,"top ls_u if_stall_n", false,-1);
        tracep->declQuad(c+1192,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+1021,"top ls_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top ls_u in_intr_ls", false,-1);
        tracep->declBit(c+407,"top ls_u ld_csr_hazard", false,-1);
        tracep->declQuad(c+673,"top ls_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+643,"top ls_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+622,"top ls_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+608,"top ls_u if_pc", false,-1, 63,0);
        tracep->declQuad(c+686,"top ls_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1222,"top ls_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+688,"top ls_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+458,"top ls_u clint_axi_arready", false,-1);
        tracep->declBus(c+689,"top ls_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+459,"top ls_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+460,"top ls_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+690,"top ls_u clint_axi_rready", false,-1);
        tracep->declBus(c+461,"top ls_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+462,"top ls_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1222,"top ls_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+691,"top ls_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+464,"top ls_u clint_axi_awready", false,-1);
        tracep->declQuad(c+692,"top ls_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+465,"top ls_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+694,"top ls_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+466,"top ls_u clint_axi_wready", false,-1);
        tracep->declBus(c+459,"top ls_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+467,"top ls_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+695,"top ls_u clint_axi_bready", false,-1);
        tracep->declQuad(c+16,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+404,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+671,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+672,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+1021,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+1021,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+1022,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u rden", false,-1);
        tracep->declBus(c+331,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+404,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+890,"top ls_u wren_last", false,-1);
        tracep->declQuad(c+891,"top ls_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+1040,"top ls_u csr_stall_n", false,-1);
        tracep->declBit(c+332,"top ls_u timr_int", false,-1);
        tracep->declBit(c+1125,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+1126,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+331,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+404,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+675,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+890,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+1192,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+1021,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+404,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+671,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+672,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+1021,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+1021,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+1022,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+1022,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+333,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+334,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+335,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+336,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+337,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+338,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+339,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+29,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+1041,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+1042,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+1043,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+672,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+671,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+340,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+341,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+342,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+343,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+18,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+679,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+677,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+684,"top ls_u ls_ctr_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+331,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+404,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+417,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+418,"top ls_u ls_ctr_u csr_st_en", false,-1);
        tracep->declBit(c+1125,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+1126,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+673,"top ls_u CSR_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+643,"top ls_u CSR_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+622,"top ls_u CSR_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+608,"top ls_u CSR_u if_pc", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+891,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+1040,"top ls_u CSR_u stall_n", false,-1);
        tracep->declBit(c+332,"top ls_u CSR_u timer_int_i", false,-1);
        tracep->declBit(c+33,"top ls_u CSR_u in_intr_ls", false,-1);
        tracep->declQuad(c+20,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declQuad(c+344,"top ls_u CSR_u commitPC", false,-1, 63,0);
        tracep->declBit(c+346,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+347,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+348,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+349,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+350,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+351,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+352,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+353,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+354,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declBit(c+355,"top ls_u CSR_u sel_mie", false,-1);
        tracep->declBit(c+356,"top ls_u CSR_u sel_mip", false,-1);
        tracep->declQuad(c+891,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+419,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+421,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+893,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+357,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declBit(c+359,"top ls_u CSR_u mstatus_MIE", false,-1);
        tracep->declQuad(c+360,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+362,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declQuad(c+364,"top ls_u CSR_u mie", false,-1, 63,0);
        tracep->declBit(c+366,"top ls_u CSR_u mie_MTIE", false,-1);
        tracep->declQuad(c+367,"top ls_u CSR_u mip", false,-1, 63,0);
        tracep->declBit(c+369,"top ls_u CSR_u mip_MTIP", false,-1);
        tracep->declBit(c+1125,"top ls_u clint_u clk", false,-1);
        tracep->declBit(c+1126,"top ls_u clint_u rst_n", false,-1);
        tracep->declQuad(c+686,"top ls_u clint_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1222,"top ls_u clint_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+688,"top ls_u clint_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+458,"top ls_u clint_u clint_axi_arready", false,-1);
        tracep->declBus(c+689,"top ls_u clint_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+459,"top ls_u clint_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+460,"top ls_u clint_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+690,"top ls_u clint_u clint_axi_rready", false,-1);
        tracep->declBus(c+461,"top ls_u clint_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+462,"top ls_u clint_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1222,"top ls_u clint_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+691,"top ls_u clint_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+464,"top ls_u clint_u clint_axi_awready", false,-1);
        tracep->declQuad(c+692,"top ls_u clint_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+465,"top ls_u clint_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+694,"top ls_u clint_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+466,"top ls_u clint_u clint_axi_wready", false,-1);
        tracep->declBus(c+459,"top ls_u clint_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+467,"top ls_u clint_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+695,"top ls_u clint_u clint_axi_bready", false,-1);
        tracep->declBit(c+332,"top ls_u clint_u hart0_time_int_o", false,-1);
        tracep->declQuad(c+503,"top ls_u clint_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+464,"top ls_u clint_u axi_awready", false,-1);
        tracep->declBit(c+466,"top ls_u clint_u axi_wready", false,-1);
        tracep->declBus(c+505,"top ls_u clint_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+467,"top ls_u clint_u axi_bvalid", false,-1);
        tracep->declQuad(c+506,"top ls_u clint_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+458,"top ls_u clint_u axi_arready", false,-1);
        tracep->declBus(c+459,"top ls_u clint_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+460,"top ls_u clint_u axi_rvalid", false,-1);
        tracep->declBit(c+508,"top ls_u clint_u aw_en", false,-1);
        tracep->declQuad(c+30,"top ls_u clint_u reg_data_out", false,-1, 63,0);
        tracep->declQuad(c+370,"top ls_u clint_u mtime", false,-1, 63,0);
        tracep->declQuad(c+372,"top ls_u clint_u mtimecmp", false,-1, 63,0);
        tracep->declBit(c+895,"top ls_u clint_u mtimeWrEn", false,-1);
        tracep->declBit(c+896,"top ls_u clint_u mtimecmpWrEn", false,-1);
        tracep->declBit(c+897,"top ls_u clint_u slv_reg_wren", false,-1);
        tracep->declBit(c+578,"top ls_u clint_u slv_reg_rden", false,-1);
        tracep->declBus(c+374,"top ls_u clint_u byte_index", false,-1, 31,0);
        tracep->declBit(c+1125,"top Dcache_u clk", false,-1);
        tracep->declBit(c+1126,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+1044,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+898,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+899,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+900,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+404,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+671,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+1020,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+987,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+1021,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+1022,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBus(c+672,"top Dcache_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top Dcache_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+698,"top Dcache_u fence_clean", false,-1);
        tracep->declBit(c+699,"top Dcache_u clear_Icache", false,-1);
        tracep->declBit(c+700,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+35,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+602,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1015,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+901,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+1207,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declBus(c+403,"top Dcache_u cacheRdSize_o", false,-1, 2,0);
        tracep->declQuad(c+1013,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+1025,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+706,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+701,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+570,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+602,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+707,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+708,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+1222,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+1249,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+1250,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+1251,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+1252,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+1253,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+1276,"top Dcache_u clean", false,-1, 2,0);
        tracep->declBus(c+902,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+1045,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+903,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+904,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+905,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+509,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+513,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+517,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+521,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+906,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+910,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+906,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+910,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+914,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+915,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+916,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+917,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+918,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+920,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+921,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+922,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+375,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+377,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+423,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+424,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+1208,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+1209,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+1210,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+1211,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+425,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+426,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+1277,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+1278,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+379,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+380,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+381,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+923,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+525,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+533,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+1212,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+1214,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+924,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+925,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+926,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+541,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+382,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+928,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+929,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+937,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+383,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+384,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+938,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+385,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+386,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+388,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+940,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+941,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+942,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+944,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+945,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+947,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+951,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+947,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+951,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+955,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+956,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+390,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+1216,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+391,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+392,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+391,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+1217,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+957,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+427,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+1046,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+428,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+393,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+394,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+958,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+395,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBit(c+959,"top Dcache_u cleanEn", false,-1);
        tracep->declBit(c+699,"top Dcache_u clean_OK", false,-1);
        tracep->declBus(c+960,"top Dcache_u cleanCnt", false,-1, 6,0);
        tracep->declBit(c+961,"top Dcache_u cleanWrValid", false,-1);
        tracep->declBus(c+429,"top Dcache_u cleanWrAddr", false,-1, 31,0);
        tracep->declBit(c+397,"top Dcache_u oneCycleDelay", false,-1);
        tracep->declArray(c+579,"top Dcache_u cleanData", false,-1, 255,0);
        tracep->declBus(c+1256,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1218,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1257,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1256,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+509,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+1125,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+988,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+962,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+963,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+1047,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+906,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+989,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+914,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+947,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1256,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1218,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1257,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1256,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+513,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+1125,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+988,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+962,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+967,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+1047,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+910,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+989,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+914,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+951,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1256,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1218,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1257,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1256,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+517,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+1125,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+990,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+971,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+963,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+1048,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+906,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+991,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+915,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+947,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1256,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1218,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1257,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1256,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+521,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+1125,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+990,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+971,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+967,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+1048,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+910,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+991,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+915,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+951,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1218,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1218,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1219,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1220,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1221,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1125,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+1126,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+700,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+35,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+1013,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+702,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+602,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1015,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+1025,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+701,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+706,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+570,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+602,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+708,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+403,"top axi_ls_u loadSize", false,-1, 2,0);
        tracep->declBus(c+707,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+704,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+1185,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+601,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+454,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1235,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+602,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+456,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1231,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1224,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+1236,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1011,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+603,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+604,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+457,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+606,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+1223,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+607,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+1186,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+1187,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1188,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1189,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1190,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1222,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1235,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1223,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+602,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+403,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1231,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1224,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+1232,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1225,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1237,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+1012,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+1191,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1013,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1015,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+1010,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1238,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+1266,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+1231,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+1267,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+1268,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+972,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+1049,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+601,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+603,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+607,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+1279,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+606,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+454,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+542,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+550,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+456,"top axi_ls_u wrSize_reg", false,-1, 2,0);
        tracep->declBus(c+551,"top axi_ls_u storeLenth_reg", false,-1, 7,0);
        tracep->declBus(c+398,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+1266,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+1231,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+1267,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+1268,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+399,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+1050,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+6,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+9,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+1269,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1235,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+1224,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+1280,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+1251,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+552,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+1125,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+1126,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+1192,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+19,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+1020,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+673,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+679,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+675,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+677,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+683,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+684,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+1281,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1271,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1125,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+1126,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+1020,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+1051,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+973,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+673,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+679,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+675,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+677,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+684,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+682,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+680,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+1125,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+1126,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+641,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+610,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+638,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+639,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+613,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+1019,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+1021,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u in_intr_ls", false,-1);
        tracep->declBit(c+697,"top pipline_ctrl_u fence_id", false,-1);
        tracep->declBit(c+698,"top pipline_ctrl_u fence_ex", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u fence_ls", false,-1);
        tracep->declBit(c+1016,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+984,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+985,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+986,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+1020,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+1020,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+642,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+668,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u ls_flush", false,-1);
        tracep->declBit(c+983,"top pipline_ctrl_u fenceInPip", false,-1);
        tracep->declBus(c+1282,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1282,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+592,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+447,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+1125,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+1126,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+444,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+1222,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+596,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+443,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+567,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+451,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+597,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+450,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+453,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+452,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+598,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+590,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+1222,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+589,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+438,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+441,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+440,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+439,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+595,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+553,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+443,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+450,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+453,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+452,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+555,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+438,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+441,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+440,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+439,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+1283,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+1284,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+557,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+559,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+561,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+563,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+587,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+588,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+1285,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+1287,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+565,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp354;
    VlWide<3>/*95:0*/ __Vtemp357;
    VlWide<3>/*95:0*/ __Vtemp360;
    VlWide<3>/*95:0*/ __Vtemp363;
    VlWide<3>/*95:0*/ __Vtemp366;
    VlWide<5>/*159:0*/ __Vtemp367;
    VlWide<5>/*159:0*/ __Vtemp372;
    VlWide<5>/*159:0*/ __Vtemp377;
    VlWide<5>/*159:0*/ __Vtemp381;
    VlWide<8>/*255:0*/ __Vtemp386;
    VlWide<8>/*255:0*/ __Vtemp391;
    VlWide<8>/*255:0*/ __Vtemp396;
    VlWide<8>/*255:0*/ __Vtemp400;
    VlWide<4>/*127:0*/ __Vtemp401;
    VlWide<4>/*127:0*/ __Vtemp402;
    VlWide<3>/*95:0*/ __Vtemp403;
    VlWide<3>/*95:0*/ __Vtemp405;
    VlWide<3>/*95:0*/ __Vtemp406;
    VlWide<3>/*95:0*/ __Vtemp407;
    VlWide<3>/*95:0*/ __Vtemp408;
    VlWide<3>/*95:0*/ __Vtemp409;
    VlWide<3>/*95:0*/ __Vtemp412;
    VlWide<3>/*95:0*/ __Vtemp413;
    VlWide<3>/*95:0*/ __Vtemp414;
    VlWide<3>/*95:0*/ __Vtemp415;
    VlWide<3>/*95:0*/ __Vtemp416;
    VlWide<3>/*95:0*/ __Vtemp419;
    VlWide<3>/*95:0*/ __Vtemp420;
    VlWide<3>/*95:0*/ __Vtemp421;
    VlWide<3>/*95:0*/ __Vtemp422;
    VlWide<3>/*95:0*/ __Vtemp425;
    VlWide<3>/*95:0*/ __Vtemp426;
    VlWide<3>/*95:0*/ __Vtemp428;
    VlWide<3>/*95:0*/ __Vtemp429;
    VlWide<3>/*95:0*/ __Vtemp430;
    VlWide<3>/*95:0*/ __Vtemp431;
    VlWide<3>/*95:0*/ __Vtemp434;
    VlWide<3>/*95:0*/ __Vtemp435;
    VlWide<3>/*95:0*/ __Vtemp437;
    VlWide<3>/*95:0*/ __Vtemp438;
    VlWide<3>/*95:0*/ __Vtemp439;
    VlWide<3>/*95:0*/ __Vtemp440;
    VlWide<3>/*95:0*/ __Vtemp443;
    VlWide<3>/*95:0*/ __Vtemp444;
    VlWide<3>/*95:0*/ __Vtemp446;
    VlWide<3>/*95:0*/ __Vtemp447;
    VlWide<3>/*95:0*/ __Vtemp448;
    VlWide<3>/*95:0*/ __Vtemp449;
    VlWide<3>/*95:0*/ __Vtemp451;
    VlWide<3>/*95:0*/ __Vtemp452;
    VlWide<3>/*95:0*/ __Vtemp453;
    VlWide<3>/*95:0*/ __Vtemp457;
    VlWide<3>/*95:0*/ __Vtemp458;
    VlWide<3>/*95:0*/ __Vtemp460;
    VlWide<3>/*95:0*/ __Vtemp461;
    VlWide<3>/*95:0*/ __Vtemp462;
    VlWide<3>/*95:0*/ __Vtemp466;
    VlWide<3>/*95:0*/ __Vtemp467;
    VlWide<3>/*95:0*/ __Vtemp469;
    VlWide<3>/*95:0*/ __Vtemp470;
    VlWide<3>/*95:0*/ __Vtemp471;
    VlWide<3>/*95:0*/ __Vtemp475;
    VlWide<3>/*95:0*/ __Vtemp476;
    VlWide<3>/*95:0*/ __Vtemp478;
    VlWide<3>/*95:0*/ __Vtemp479;
    VlWide<3>/*95:0*/ __Vtemp480;
    VlWide<9>/*287:0*/ __Vtemp484;
    VlWide<4>/*127:0*/ __Vtemp487;
    VlWide<4>/*127:0*/ __Vtemp494;
    VlWide<4>/*127:0*/ __Vtemp497;
    VlWide<4>/*127:0*/ __Vtemp504;
    VlWide<4>/*127:0*/ __Vtemp507;
    VlWide<4>/*127:0*/ __Vtemp516;
    VlWide<4>/*127:0*/ __Vtemp519;
    VlWide<4>/*127:0*/ __Vtemp528;
    VlWide<4>/*127:0*/ __Vtemp531;
    VlWide<4>/*127:0*/ __Vtemp541;
    VlWide<4>/*127:0*/ __Vtemp544;
    VlWide<4>/*127:0*/ __Vtemp554;
    VlWide<10>/*319:0*/ __Vtemp559;
    VlWide<4>/*127:0*/ __Vtemp560;
    VlWide<4>/*127:0*/ __Vtemp561;
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
        tracep->fullQData(oldp+67,((((QData)((IData)(
                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[2U])))),64);
        tracep->fullQData(oldp+69,((((QData)((IData)(
                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[0U])))),64);
        __Vtemp354[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp354[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp354[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        tracep->fullWData(oldp+71,(__Vtemp354),66);
        __Vtemp357[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp357[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp357[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                >> 4U));
        tracep->fullWData(oldp+74,(__Vtemp357),66);
        __Vtemp360[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp360[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp360[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                >> 2U));
        tracep->fullWData(oldp+77,(__Vtemp360),66);
        __Vtemp363[0U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp363[1U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp363[2U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        tracep->fullWData(oldp+80,(__Vtemp363),66);
        __Vtemp366[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp366[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp366[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        VL_EXTEND_WW(130,66, __Vtemp367, __Vtemp366);
        tracep->fullWData(oldp+83,(__Vtemp367),130);
        __Vtemp372[0U] = 0U;
        __Vtemp372[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp372[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp372[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                             >> 5U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                           >> 4U)));
        __Vtemp372[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 5U)))) 
                          >> 0x1eU);
        tracep->fullWData(oldp+88,(__Vtemp372),130);
        __Vtemp377[0U] = 0U;
        __Vtemp377[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp377[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp377[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 3U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                           >> 2U)));
        __Vtemp377[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                            >> 3U)))) 
                          >> 0x1eU);
        tracep->fullWData(oldp+93,(__Vtemp377),130);
        __Vtemp381[0U] = 0U;
        __Vtemp381[1U] = 0U;
        __Vtemp381[2U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp381[3U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp381[4U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        tracep->fullWData(oldp+98,(__Vtemp381),130);
        tracep->fullWData(oldp+103,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2),130);
        tracep->fullWData(oldp+108,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout),264);
        tracep->fullCData(oldp+117,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r),2);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r),64);
        tracep->fullWData(oldp+122,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg),128);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__restore_remainder),64);
        tracep->fullCData(oldp+128,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt),6);
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy));
        tracep->fullBit(oldp+130,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign));
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign));
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64),64);
        tracep->fullBit(oldp+136,(((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64 
                                                  >> 0x3fU)))
                                    ? 0U : 1U)));
        tracep->fullQData(oldp+137,((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign) 
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
        tracep->fullQData(oldp+139,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign)
                                      ? (1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s)),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s),64);
        tracep->fullQData(oldp+143,((((QData)((IData)(
                                                      vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])) 
                                      << 0x21U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U])) 
                                                    << 1U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                      >> 0x1fU)))),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64),64);
        tracep->fullBit(oldp+149,((1U & ((((((((((IData)(
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
        tracep->fullBit(oldp+150,(((((IData)((0xffffULL 
                                              == (0xffffULL 
                                                  & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                     & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px2)) 
                                    & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3)) 
                                   & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4))));
        tracep->fullBit(oldp+151,((IData)((0xffffULL 
                                           == (0xffffULL 
                                               & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64)))));
        tracep->fullBit(oldp+152,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px2));
        tracep->fullBit(oldp+153,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3));
        tracep->fullBit(oldp+154,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4));
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx1));
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx2));
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx3));
        tracep->fullBit(oldp+158,((1U & (((((((IData)(
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
        tracep->fullBit(oldp+159,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__c31));
        tracep->fullBit(oldp+160,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__c47));
        tracep->fullSData(oldp+161,((0xffffU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                 << 1U) 
                                                | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
                                                   >> 0x1fU)))),16);
        tracep->fullSData(oldp+162,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2))),16);
        tracep->fullSData(oldp+163,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))),16);
        tracep->fullSData(oldp+164,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64))),16);
        tracep->fullSData(oldp+165,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u1__s_16),16);
        tracep->fullBit(oldp+166,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx1));
        tracep->fullBit(oldp+167,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__c7));
        tracep->fullBit(oldp+168,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__c11));
        tracep->fullBit(oldp+169,((0xfU == (0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64)))));
        tracep->fullBit(oldp+170,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 4U))))));
        tracep->fullBit(oldp+171,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 8U))))));
        tracep->fullBit(oldp+172,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0xcU))))));
        tracep->fullBit(oldp+173,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx2));
        tracep->fullBit(oldp+174,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx3));
        tracep->fullBit(oldp+175,((1U & ((((IData)(
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
        tracep->fullCData(oldp+176,((0xfU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                              << 1U) 
                                             | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
                                                >> 0x1fU)))),4);
        tracep->fullCData(oldp+177,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2))),4);
        tracep->fullCData(oldp+178,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))),4);
        tracep->fullCData(oldp+179,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64))),4);
        tracep->fullCData(oldp+180,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+181,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+182,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 3U))),4);
        tracep->fullCData(oldp+183,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+184,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+185,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+186,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+187,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+188,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 7U))),4);
        tracep->fullCData(oldp+189,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+190,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+191,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+192,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+193,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+194,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0xbU))),4);
        tracep->fullCData(oldp+195,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+196,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+197,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+198,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+199,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u4__DOT__c_int),4);
        tracep->fullSData(oldp+200,((0xffffU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 0xfU))),16);
        tracep->fullSData(oldp+201,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+202,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+203,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+204,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u2__s_16),16);
        tracep->fullBit(oldp+205,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c3));
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c7));
        tracep->fullBit(oldp+207,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c11));
        tracep->fullBit(oldp+208,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x10U))))));
        tracep->fullBit(oldp+209,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x14U))))));
        tracep->fullBit(oldp+210,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x18U))))));
        tracep->fullBit(oldp+211,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x1cU))))));
        tracep->fullBit(oldp+212,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx1));
        tracep->fullBit(oldp+213,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx2));
        tracep->fullBit(oldp+214,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx3));
        tracep->fullBit(oldp+215,((1U & ((((IData)(
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
        tracep->fullCData(oldp+216,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0xfU))),4);
        tracep->fullCData(oldp+217,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+218,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+219,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+220,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+221,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+222,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0x13U))),4);
        tracep->fullCData(oldp+223,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+224,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+225,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+226,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+227,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+228,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0x17U))),4);
        tracep->fullCData(oldp+229,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+230,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+231,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+232,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+233,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+234,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0x1bU))),4);
        tracep->fullCData(oldp+235,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+236,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+237,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+238,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+239,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u4__DOT__c_int),4);
        tracep->fullSData(oldp+240,((0xffffU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                 << 1U) 
                                                | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                   >> 0x1fU)))),16);
        tracep->fullSData(oldp+241,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+242,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+243,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+244,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u3__s_16),16);
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c3));
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c7));
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c11));
        tracep->fullBit(oldp+248,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x20U))))));
        tracep->fullBit(oldp+249,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x24U))))));
        tracep->fullBit(oldp+250,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x28U))))));
        tracep->fullBit(oldp+251,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x2cU))))));
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx1));
        tracep->fullBit(oldp+253,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx2));
        tracep->fullBit(oldp+254,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx3));
        tracep->fullBit(oldp+255,((1U & ((((IData)(
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
        tracep->fullCData(oldp+256,((0xfU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                              << 1U) 
                                             | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 0x1fU)))),4);
        tracep->fullCData(oldp+257,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+258,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+259,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+260,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+261,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+262,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 3U))),4);
        tracep->fullCData(oldp+263,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+264,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+265,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+266,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+267,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+268,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 7U))),4);
        tracep->fullCData(oldp+269,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+270,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+271,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+272,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+273,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+274,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0xbU))),4);
        tracep->fullCData(oldp+275,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+276,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+277,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+278,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+279,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u4__DOT__c_int),4);
        tracep->fullSData(oldp+280,((0xffffU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                >> 0xfU))),16);
        tracep->fullSData(oldp+281,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+282,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+283,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+284,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u4__s_16),16);
        tracep->fullBit(oldp+285,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c3));
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c7));
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c11));
        tracep->fullBit(oldp+288,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x30U))))));
        tracep->fullBit(oldp+289,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x34U))))));
        tracep->fullBit(oldp+290,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x38U))))));
        tracep->fullBit(oldp+291,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x3cU))))));
        tracep->fullBit(oldp+292,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx1));
        tracep->fullBit(oldp+293,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx2));
        tracep->fullBit(oldp+294,((1U & ((((IData)(
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
        tracep->fullBit(oldp+295,((1U & ((((IData)(
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
        tracep->fullCData(oldp+296,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0xfU))),4);
        tracep->fullCData(oldp+297,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+298,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+299,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+300,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+301,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+302,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0x13U))),4);
        tracep->fullCData(oldp+303,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+304,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+305,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+306,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+307,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+308,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0x17U))),4);
        tracep->fullCData(oldp+309,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+310,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+311,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+312,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+313,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+314,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0x1bU))),4);
        tracep->fullCData(oldp+315,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+316,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+317,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+318,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+319,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u4__DOT__c_int),4);
        tracep->fullCData(oldp+320,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0xaU))),5);
        tracep->fullBit(oldp+321,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+322,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+323,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),227);
        tracep->fullCData(oldp+331,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xfU))),3);
        tracep->fullBit(oldp+332,(vlSelf->top__DOT__ls_u__DOT__timr_int));
        tracep->fullBit(oldp+333,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 3U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+334,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 3U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+335,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
        tracep->fullBit(oldp+338,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
        tracep->fullBit(oldp+340,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+341,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+342,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+343,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullQData(oldp+344,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC),64);
        tracep->fullBit(oldp+346,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw));
        tracep->fullBit(oldp+347,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs));
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc));
        tracep->fullBit(oldp+349,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 5U)))));
        tracep->fullBit(oldp+350,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+351,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+352,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+353,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+354,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullBit(oldp+355,(((0x304U == (0xfffU 
                                               & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                   << 9U) 
                                                  | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 0x17U)))) 
                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullBit(oldp+356,(((0x344U == (0xfffU 
                                               & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                   << 9U) 
                                                  | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 0x17U)))) 
                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullQData(oldp+357,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullBit(oldp+359,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                 >> 3U)))));
        tracep->fullQData(oldp+360,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U)))
                                      ? 0xbULL : ((IData)(vlSelf->top__DOT__in_intr_ls)
                                                   ? 0x8000000000000007ULL
                                                   : 0ULL))),64);
        tracep->fullQData(oldp+362,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+364,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie),64);
        tracep->fullBit(oldp+366,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                                 >> 7U)))));
        tracep->fullQData(oldp+367,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip),64);
        tracep->fullBit(oldp+369,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                 >> 7U)))));
        tracep->fullQData(oldp+370,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime),64);
        tracep->fullQData(oldp+372,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp),64);
        tracep->fullIData(oldp+374,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index),32);
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+377,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+379,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullIData(oldp+380,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [0x23U]),21);
        tracep->fullBit(oldp+381,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+382,(vlSelf->top__DOT__Dcache_u__DOT__missFlag));
        tracep->fullBit(oldp+383,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+384,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+385,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+390,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+391,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+392,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullBit(oldp+393,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
        tracep->fullBit(oldp+394,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
        tracep->fullBit(oldp+397,(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay));
        tracep->fullCData(oldp+398,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+399,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+400,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+401,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+402,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+403,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullQData(oldp+404,((((0U == (0x1fU 
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
        tracep->fullIData(oldp+406,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullBit(oldp+407,((((3U == (0x7fU & 
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
        tracep->fullCData(oldp+408,((0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
        tracep->fullQData(oldp+409,((QData)((IData)(
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
        tracep->fullQData(oldp+411,(((0U == (3U & (
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
        tracep->fullBit(oldp+413,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+414,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+415,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+416,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+417,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x17U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+418,((((0x73U == (0x7fU 
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
        tracep->fullQData(oldp+419,((vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                                     | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+421,(((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullBit(oldp+423,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+424,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+425,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+426,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+427,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        tracep->fullBit(oldp+428,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullIData(oldp+429,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
            __Vtemp386[0U] = Vtop__ConstPool__CONST_d5724acc_0[0U];
            __Vtemp386[1U] = Vtop__ConstPool__CONST_d5724acc_0[1U];
            __Vtemp386[2U] = Vtop__ConstPool__CONST_d5724acc_0[2U];
            __Vtemp386[3U] = Vtop__ConstPool__CONST_d5724acc_0[3U];
            __Vtemp386[4U] = Vtop__ConstPool__CONST_d5724acc_0[4U];
            __Vtemp386[5U] = Vtop__ConstPool__CONST_d5724acc_0[5U];
            __Vtemp386[6U] = Vtop__ConstPool__CONST_d5724acc_0[6U];
            __Vtemp386[7U] = Vtop__ConstPool__CONST_d5724acc_0[7U];
        } else {
            __Vtemp386[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 3U) | ((4U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (3U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp386[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp386[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 3U));
            __Vtemp386[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp386[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp386[5U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp386[6U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp386[7U] = (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
        }
        tracep->fullWData(oldp+430,(__Vtemp386),227);
        tracep->fullBit(oldp+438,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+439,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+440,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+443,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+444,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg)),64);
        tracep->fullCData(oldp+446,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+447,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)))),3);
        tracep->fullCData(oldp+448,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+449,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 0xfU)),4);
        tracep->fullBit(oldp+450,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+451,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (0xffU 
                                              & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)))),8);
        tracep->fullBit(oldp+452,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+453,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+454,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+456,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
        tracep->fullCData(oldp+457,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+458,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready));
        tracep->fullCData(oldp+459,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp),2);
        tracep->fullBit(oldp+460,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+461,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                      : 0U)),3);
        tracep->fullQData(oldp+462,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+464,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready));
        tracep->fullCData(oldp+465,(vlSelf->top__DOT__clint_axi_wstrb),8);
        tracep->fullBit(oldp+466,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready));
        tracep->fullBit(oldp+467,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid));
        tracep->fullBit(oldp+468,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+469,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))));
        tracep->fullWData(oldp+470,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+474,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+478,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+482,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+486,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+494,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullIData(oldp+502,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr),64);
        tracep->fullCData(oldp+505,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+506,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr),64);
        tracep->fullBit(oldp+508,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en));
        tracep->fullWData(oldp+509,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+513,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+517,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+521,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+525,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+533,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullBit(oldp+541,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullWData(oldp+542,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+550,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+551,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
        tracep->fullCData(oldp+552,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+553,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+555,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+557,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+561,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+563,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+565,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullCData(oldp+566,((((0xaU != (0xfU 
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
        tracep->fullQData(oldp+567,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o)),64);
        tracep->fullBit(oldp+569,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))));
        VL_EXTEND_WQ(256,64, __Vtemp391, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp396[0U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U]);
            __Vtemp396[1U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U]);
            __Vtemp396[2U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U]);
            __Vtemp396[3U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U]);
            __Vtemp396[4U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U]);
            __Vtemp396[5U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U]);
            __Vtemp396[6U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U]);
            __Vtemp396[7U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U]);
        } else {
            __Vtemp396[0U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp391[0U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
            __Vtemp396[1U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp391[1U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
            __Vtemp396[2U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp391[2U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
            __Vtemp396[3U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp391[3U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
            __Vtemp396[4U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp391[4U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
            __Vtemp396[5U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp391[5U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
            __Vtemp396[6U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp391[6U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
            __Vtemp396[7U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp391[7U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
        }
        tracep->fullWData(oldp+570,(__Vtemp396),256);
        tracep->fullBit(oldp+578,((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))));
        if ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))) {
            __Vtemp400[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U];
            __Vtemp400[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U];
            __Vtemp400[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U];
            __Vtemp400[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U];
            __Vtemp400[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U];
            __Vtemp400[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U];
            __Vtemp400[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U];
            __Vtemp400[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U];
        } else {
            __Vtemp400[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U];
            __Vtemp400[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U];
            __Vtemp400[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U];
            __Vtemp400[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U];
            __Vtemp400[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U];
            __Vtemp400[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U];
            __Vtemp400[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U];
            __Vtemp400[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U];
        }
        tracep->fullWData(oldp+579,(__Vtemp400),256);
        tracep->fullBit(oldp+587,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+588,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        tracep->fullBit(oldp+589,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+590,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr)),64);
        tracep->fullCData(oldp+592,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)))),3);
        tracep->fullCData(oldp+593,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+594,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 2U)),4);
        tracep->fullBit(oldp+595,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))));
        tracep->fullBit(oldp+596,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+597,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+598,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullCData(oldp+599,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+600,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                              ? 0U : 3U))
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+601,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+602,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+603,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+604,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+606,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+607,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+608,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+610,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+611,(((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+613,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+614,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+616,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+618,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+619,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+620,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+621,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+622,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+624,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+625,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+627,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+628,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+629,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+630,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+631,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+632,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+633,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+634,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+635,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+636,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+637,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+638,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+639,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+640,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+641,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+642,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+643,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullIData(oldp+645,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1cU))),32);
        tracep->fullBit(oldp+646,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+647,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x11U))),2);
        tracep->fullQData(oldp+648,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+650,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+652,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+654,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+656,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x17U))),5);
        tracep->fullBit(oldp+657,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+658,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+659,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+660,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+661,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+662,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),3);
        tracep->fullBit(oldp+663,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullCData(oldp+664,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+665,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+666,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xbU))),5);
        tracep->fullCData(oldp+667,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 6U))),5);
        tracep->fullBit(oldp+668,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+669,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 4U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1cU))))));
        tracep->fullBit(oldp+670,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 2U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1eU))))));
        tracep->fullCData(oldp+671,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+672,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+673,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+675,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+677,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+679,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+680,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+682,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+683,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+684,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+686,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullBit(oldp+688,(vlSelf->top__DOT__clint_axi_arvalid));
        tracep->fullCData(oldp+689,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                      : 0U)),3);
        tracep->fullBit(oldp+690,(((2U == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+691,(vlSelf->top__DOT__clint_axi_awvalid));
        tracep->fullQData(oldp+692,(vlSelf->top__DOT__clint_axi_wdata),64);
        tracep->fullBit(oldp+694,(vlSelf->top__DOT__clint_axi_wvalid));
        tracep->fullBit(oldp+695,(vlSelf->top__DOT__clint_axi_bready));
        tracep->fullBit(oldp+696,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+697,(vlSelf->top__DOT__fence_id));
        tracep->fullBit(oldp+698,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+699,(vlSelf->top__DOT__Dcache_u__DOT__clean_OK));
        tracep->fullBit(oldp+700,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+701,(vlSelf->top__DOT__DcacheWrValid));
        tracep->fullQData(oldp+702,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+704,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+706,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+707,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullCData(oldp+708,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                      : 3U)),3);
        tracep->fullQData(oldp+709,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+711,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullBit(oldp+712,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+713,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+714,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))));
        tracep->fullIData(oldp+715,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+716,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+717,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+718,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        __Vtemp401[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp401[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp401[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp401[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+719,(__Vtemp401),128);
        __Vtemp402[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp402[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp402[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp402[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+723,(__Vtemp402),128);
        tracep->fullBit(oldp+727,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+728,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+729,(vlSelf->top__DOT__cache_dut__DOT__uncached));
        tracep->fullBit(oldp+730,(vlSelf->top__DOT__cache_dut__DOT__diffAddr));
        tracep->fullBit(oldp+731,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+732,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+733,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+734,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+735,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+736,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+744,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+745,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+746,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+747,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+748,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+749,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+750,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+751,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+753,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp403[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp403[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp403[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+754,(__Vtemp403),96);
        tracep->fullWData(oldp+757,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+760,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+761,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+762,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+763,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+764,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullBit(oldp+765,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U)))));
        tracep->fullQData(oldp+766,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+768,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+769,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+770,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+771,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+772,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+773,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullBit(oldp+774,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__fence_id))));
        tracep->fullWData(oldp+775,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),316);
        tracep->fullQData(oldp+785,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+787,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+789,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp405, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp406, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp407, __Vtemp405, __Vtemp406);
        VL_EXTEND_WI(65,1, __Vtemp408, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp409, __Vtemp407, __Vtemp408);
        tracep->fullBit(oldp+791,((1U & ((0x4000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp409[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+792,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullBit(oldp+793,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+794,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+796,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+798,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+799,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullCData(oldp+800,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x17U))),3);
        tracep->fullQData(oldp+801,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp412, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp413, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp414, __Vtemp412, __Vtemp413);
        VL_EXTEND_WI(65,1, __Vtemp415, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp416, __Vtemp414, __Vtemp415);
        tracep->fullBit(oldp+803,((1U & __Vtemp416[2U])));
        tracep->fullBit(oldp+804,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+805,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+807,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+809,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullBit(oldp+811,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn));
        tracep->fullBit(oldp+812,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid));
        tracep->fullBit(oldp+813,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid));
        tracep->fullCData(oldp+814,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x17U))),4);
        tracep->fullBit(oldp+815,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+816,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+817,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+819,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+821,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+823,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+825,(((0x8000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+827,(((0x8000000U & 
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
        tracep->fullQData(oldp+829,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+831,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),2);
        tracep->fullBit(oldp+832,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__stateReg));
        tracep->fullBit(oldp+833,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q));
        tracep->fullBit(oldp+834,((1U & ((~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__stateReg)) 
                                         | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__stateReg) 
                                            & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))))));
        tracep->fullCData(oldp+835,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul_signed),2);
        tracep->fullBit(oldp+836,(1U));
        tracep->fullBit(oldp+837,((1U & ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul_signed) 
                                         >> 1U))));
        tracep->fullBit(oldp+838,((1U & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul_signed))));
        tracep->fullQData(oldp+839,((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1))),33);
        tracep->fullQData(oldp+841,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1),33);
        tracep->fullQData(oldp+843,((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),33);
        tracep->fullQData(oldp+845,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2),33);
        VL_EXTEND_WI(66,32, __Vtemp419, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1));
        VL_EXTEND_WI(66,32, __Vtemp420, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2));
        VL_MUL_W(3, __Vtemp421, __Vtemp419, __Vtemp420);
        __Vtemp422[0U] = __Vtemp421[0U];
        __Vtemp422[1U] = __Vtemp421[1U];
        __Vtemp422[2U] = (3U & __Vtemp421[2U]);
        tracep->fullWData(oldp+847,(__Vtemp422),66);
        VL_EXTENDS_WQ(66,33, __Vtemp425, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1)));
        __Vtemp426[0U] = __Vtemp425[0U];
        __Vtemp426[1U] = __Vtemp425[1U];
        __Vtemp426[2U] = (3U & __Vtemp425[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp428, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp429[0U] = __Vtemp428[0U];
        __Vtemp429[1U] = __Vtemp428[1U];
        __Vtemp429[2U] = (3U & __Vtemp428[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp430, __Vtemp426, __Vtemp429);
        __Vtemp431[0U] = __Vtemp430[0U];
        __Vtemp431[1U] = __Vtemp430[1U];
        __Vtemp431[2U] = (3U & __Vtemp430[2U]);
        tracep->fullWData(oldp+850,(__Vtemp431),66);
        VL_EXTENDS_WQ(66,33, __Vtemp434, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp435[0U] = __Vtemp434[0U];
        __Vtemp435[1U] = __Vtemp434[1U];
        __Vtemp435[2U] = (3U & __Vtemp434[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp437, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
        __Vtemp438[0U] = __Vtemp437[0U];
        __Vtemp438[1U] = __Vtemp437[1U];
        __Vtemp438[2U] = (3U & __Vtemp437[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp439, __Vtemp435, __Vtemp438);
        __Vtemp440[0U] = __Vtemp439[0U];
        __Vtemp440[1U] = __Vtemp439[1U];
        __Vtemp440[2U] = (3U & __Vtemp439[2U]);
        tracep->fullWData(oldp+853,(__Vtemp440),66);
        VL_EXTENDS_WQ(66,33, __Vtemp443, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp444[0U] = __Vtemp443[0U];
        __Vtemp444[1U] = __Vtemp443[1U];
        __Vtemp444[2U] = (3U & __Vtemp443[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp446, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp447[0U] = __Vtemp446[0U];
        __Vtemp447[1U] = __Vtemp446[1U];
        __Vtemp447[2U] = (3U & __Vtemp446[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp448, __Vtemp444, __Vtemp447);
        __Vtemp449[0U] = __Vtemp448[0U];
        __Vtemp449[1U] = __Vtemp448[1U];
        __Vtemp449[2U] = (3U & __Vtemp448[2U]);
        tracep->fullWData(oldp+856,(__Vtemp449),66);
        tracep->fullBit(oldp+859,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set));
        tracep->fullBit(oldp+860,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                   | (IData)(vlSelf->top__DOT__ex_flush))));
        tracep->fullBit(oldp+861,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set) 
                                   | (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                       & (~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                             | (IData)(vlSelf->top__DOT__ex_flush)))) 
                                      & (~ (IData)(vlSelf->top__DOT__ex_flush))))));
        VL_EXTEND_WI(66,32, __Vtemp451, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1));
        VL_EXTEND_WI(66,32, __Vtemp452, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2));
        VL_MUL_W(3, __Vtemp453, __Vtemp451, __Vtemp452);
        VL_EXTENDS_WQ(66,33, __Vtemp457, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1)));
        __Vtemp458[0U] = __Vtemp457[0U];
        __Vtemp458[1U] = __Vtemp457[1U];
        __Vtemp458[2U] = (3U & __Vtemp457[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp460, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp461[0U] = __Vtemp460[0U];
        __Vtemp461[1U] = __Vtemp460[1U];
        __Vtemp461[2U] = (3U & __Vtemp460[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp462, __Vtemp458, __Vtemp461);
        VL_EXTENDS_WQ(66,33, __Vtemp466, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp467[0U] = __Vtemp466[0U];
        __Vtemp467[1U] = __Vtemp466[1U];
        __Vtemp467[2U] = (3U & __Vtemp466[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp469, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
        __Vtemp470[0U] = __Vtemp469[0U];
        __Vtemp470[1U] = __Vtemp469[1U];
        __Vtemp470[2U] = (3U & __Vtemp469[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp471, __Vtemp467, __Vtemp470);
        VL_EXTENDS_WQ(66,33, __Vtemp475, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp476[0U] = __Vtemp475[0U];
        __Vtemp476[1U] = __Vtemp475[1U];
        __Vtemp476[2U] = (3U & __Vtemp475[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp478, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp479[0U] = __Vtemp478[0U];
        __Vtemp479[1U] = __Vtemp478[1U];
        __Vtemp479[2U] = (3U & __Vtemp478[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp480, __Vtemp476, __Vtemp479);
        __Vtemp484[0U] = __Vtemp480[0U];
        __Vtemp484[1U] = __Vtemp480[1U];
        __Vtemp484[2U] = ((__Vtemp471[0U] << 2U) | 
                          (3U & __Vtemp480[2U]));
        __Vtemp484[3U] = ((__Vtemp471[0U] >> 0x1eU) 
                          | (__Vtemp471[1U] << 2U));
        __Vtemp484[4U] = ((__Vtemp462[0U] << 4U) | 
                          ((__Vtemp471[1U] >> 0x1eU) 
                           | (0xcU & (__Vtemp471[2U] 
                                      << 2U))));
        __Vtemp484[5U] = ((__Vtemp462[0U] >> 0x1cU) 
                          | (__Vtemp462[1U] << 4U));
        __Vtemp484[6U] = ((__Vtemp453[0U] << 6U) | 
                          ((__Vtemp462[1U] >> 0x1cU) 
                           | (0x30U & (__Vtemp462[2U] 
                                       << 4U))));
        __Vtemp484[7U] = ((__Vtemp453[0U] >> 0x1aU) 
                          | (__Vtemp453[1U] << 6U));
        __Vtemp484[8U] = ((__Vtemp453[1U] >> 0x1aU) 
                          | (0xc0U & (__Vtemp453[2U] 
                                      << 6U)));
        tracep->fullWData(oldp+862,(__Vtemp484),264);
        tracep->fullQData(oldp+871,((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src1))),64);
        tracep->fullQData(oldp+873,((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src2))),64);
        tracep->fullCData(oldp+875,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 8U))),3);
        tracep->fullQData(oldp+876,(((((QData)((IData)(
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
        tracep->fullQData(oldp+878,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU))))),64);
        tracep->fullBit(oldp+880,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+881,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+882,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+883,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+885,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+887,((1U & ((0x400U & 
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
        tracep->fullBit(oldp+888,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+889,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+890,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullQData(oldp+891,(vlSelf->top__DOT__ls_u__DOT__csr_wr_data),64);
        tracep->fullQData(oldp+893,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullBit(oldp+895,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn));
        tracep->fullBit(oldp+896,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn));
        tracep->fullBit(oldp+897,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren));
        tracep->fullBit(oldp+898,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+899,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+900,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 4U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1cU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 2U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1eU)))))));
        tracep->fullIData(oldp+901,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+902,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+903,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+904,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+905,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp487, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp494[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp494[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp494[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp494[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp494[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp487[0U])
                               : 0U);
            __Vtemp494[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp487[1U])
                               : 0U);
            __Vtemp494[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp487[2U])
                               : 0U);
            __Vtemp494[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp487[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+906,(__Vtemp494),128);
        VL_EXTEND_WQ(128,64, __Vtemp497, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp504[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp504[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp504[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp504[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
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
        tracep->fullWData(oldp+910,(__Vtemp504),128);
        tracep->fullBit(oldp+914,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+915,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+916,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+917,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+918,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+920,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+921,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+922,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+923,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+924,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+925,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+926,((((QData)((IData)(
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
        tracep->fullCData(oldp+928,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+929,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+937,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+938,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullBit(oldp+940,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+941,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+942,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+944,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+945,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp507, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp516[0U] = 0xffffffffU;
            __Vtemp516[1U] = 0xffffffffU;
            __Vtemp516[2U] = 0xffffffffU;
            __Vtemp516[3U] = 0xffffffffU;
        } else {
            __Vtemp516[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp507[0U])
                                   : 0U) : 0U);
            __Vtemp516[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp507[1U])
                                   : 0U) : 0U);
            __Vtemp516[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp507[2U])
                                   : 0U) : 0U);
            __Vtemp516[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp507[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+947,(__Vtemp516),128);
        VL_EXTEND_WQ(128,64, __Vtemp519, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp528[0U] = 0xffffffffU;
            __Vtemp528[1U] = 0xffffffffU;
            __Vtemp528[2U] = 0xffffffffU;
            __Vtemp528[3U] = 0xffffffffU;
        } else {
            __Vtemp528[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp519[0U])
                                   : 0U) : 0U);
            __Vtemp528[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp519[1U])
                                   : 0U) : 0U);
            __Vtemp528[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp519[2U])
                                   : 0U) : 0U);
            __Vtemp528[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp519[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+951,(__Vtemp528),128);
        tracep->fullBit(oldp+955,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+956,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+957,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullIData(oldp+958,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
        tracep->fullBit(oldp+959,((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullCData(oldp+960,(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt),7);
        tracep->fullBit(oldp+961,(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid));
        tracep->fullBit(oldp+962,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        VL_EXTEND_WQ(128,64, __Vtemp531, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp541[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp531[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp541[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp531[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp541[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp531[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp541[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp531[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+963,(__Vtemp541),128);
        VL_EXTEND_WQ(128,64, __Vtemp544, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp554[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp544[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp554[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp544[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp554[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp544[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp554[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp544[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+967,(__Vtemp554),128);
        tracep->fullBit(oldp+971,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+972,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+973,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+983,((1U & ((IData)(vlSelf->top__DOT__fence_id) 
                                         | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullBit(oldp+984,((1U & (~ (((((((IData)(vlSelf->top__DOT__fence_id) 
                                                 | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                               | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+985,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+986,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+987,((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit) 
                                          | (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))))) 
                                   | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk)))));
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
                                              | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
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
                                           | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                                          | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                         | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullBit(oldp+990,((1U & (~ ((((((((
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
        tracep->fullBit(oldp+991,((1U & ((((((((((0U 
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
        tracep->fullQData(oldp+992,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+994,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp559[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp559[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 4U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp559[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1cU));
        __Vtemp559[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp559[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1cU));
        __Vtemp559[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp559[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1cU));
        __Vtemp559[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 4U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1cU));
        __Vtemp559[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp559[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 4U);
        tracep->fullWData(oldp+996,(__Vtemp559),316);
        tracep->fullBit(oldp+1006,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+1007,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+1009,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+1010,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+1011,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+1012,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                     : 0U)));
        tracep->fullQData(oldp+1013,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+1015,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+1016,(vlSelf->top__DOT__if_stall_n));
        tracep->fullQData(oldp+1017,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+1019,(vlSelf->top__DOT__ex_not_ok));
        tracep->fullBit(oldp+1020,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+1021,(vlSelf->top__DOT__dataNotOk));
        tracep->fullQData(oldp+1022,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+1024,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+1025,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+1026,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+1027,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+1028,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+1030,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+1031,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+1032,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+1033,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+1034,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullQData(oldp+1035,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullQData(oldp+1037,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__DivOut),64);
        tracep->fullBit(oldp+1039,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT____Vcellinp__resultValidReg__i_rst_n));
        tracep->fullBit(oldp+1040,(vlSelf->top__DOT__ls_u__DOT__csr_stall_n));
        tracep->fullCData(oldp+1041,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+1042,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+1043,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullIData(oldp+1044,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullCData(oldp+1045,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
        tracep->fullBit(oldp+1046,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+1047,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+1048,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+1049,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+1050,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+1051,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+1061,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+1063,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+1065,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+1067,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+1069,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+1071,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+1073,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+1075,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+1077,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+1079,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+1081,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+1083,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+1085,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+1087,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+1089,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+1091,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+1093,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+1095,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+1097,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+1099,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+1101,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+1103,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+1105,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+1107,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+1109,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+1111,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+1113,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+1115,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+1117,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+1119,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+1121,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+1123,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+1125,(vlSelf->clk));
        tracep->fullBit(oldp+1126,(vlSelf->rst_n));
        tracep->fullQData(oldp+1127,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+1129,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+1131,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+1132,(vlSelf->regA0),64);
        tracep->fullBit(oldp+1134,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+1135,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+1136,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+1137,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+1139,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+1140,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+1141,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+1142,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+1143,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+1144,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+1145,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+1146,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+1147,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+1148,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+1149,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+1150,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+1151,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+1152,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+1154,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+1155,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+1156,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+1157,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+1158,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+1159,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+1161,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+1162,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+1163,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+1164,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+1165,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+1166,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+1167,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+1168,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+1169,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+1170,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+1171,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+1172,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+1173,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+1175,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+1176,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+1177,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+1178,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+1179,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+1180,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+1181,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+1182,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+1183,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 0U : 1U) ? 0U
                                     : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+1184,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
        tracep->fullBit(oldp+1185,(((0xaU == (0xfU 
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
        tracep->fullBit(oldp+1186,(((0xaU == (0xfU 
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
        tracep->fullCData(oldp+1187,(((0xaU == (0xfU 
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
        tracep->fullCData(oldp+1188,(((0xaU == (0xfU 
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
        tracep->fullBit(oldp+1189,((1U & ((0xaU == 
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
        tracep->fullBit(oldp+1190,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 0U : 1U) ? 
                                    (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                     : 0U)));
        tracep->fullCData(oldp+1191,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
        tracep->fullQData(oldp+1192,(((((((((- (QData)((IData)(
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
        tracep->fullCData(oldp+1194,(((0xaU == (0xfU 
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
        tracep->fullBit(oldp+1195,((1U & ((0xaU == 
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
        tracep->fullBit(oldp+1196,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                    & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+1197,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                    & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+1198,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                       ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                           ? (0x1fffffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))
                                           : 0U) : 0U)),21);
        tracep->fullIData(oldp+1199,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                       ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                           ? 0U : (0x1fffffU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 0xbU))))
                                       : 0U)),21);
        tracep->fullQData(oldp+1200,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+1202,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+1204,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid) 
                                    & (~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__resultValidReg_q) 
                                          | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))))));
        tracep->fullBit(oldp+1205,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__resultValidReg_q) 
                                    | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))));
        tracep->fullBit(oldp+1206,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__resultValidReg_q));
        tracep->fullIData(oldp+1207,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullBit(oldp+1208,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                    & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                       | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)))))))));
        tracep->fullBit(oldp+1209,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                    & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                       | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)))))))));
        tracep->fullIData(oldp+1210,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+1211,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+1214,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+1216,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
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
        tracep->fullIData(oldp+1217,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullIData(oldp+1218,(0x40U),32);
        tracep->fullIData(oldp+1219,(4U),32);
        tracep->fullIData(oldp+1220,(8U),32);
        tracep->fullIData(oldp+1221,(1U),32);
        tracep->fullCData(oldp+1222,(0U),3);
        tracep->fullBit(oldp+1223,(0U));
        tracep->fullBit(oldp+1224,(0U));
        tracep->fullCData(oldp+1225,(0U),4);
        tracep->fullBit(oldp+1226,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+1227,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+1228,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+1229,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+1230,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+1231,(1U),2);
        tracep->fullCData(oldp+1232,(2U),4);
        tracep->fullCData(oldp+1233,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+1234,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+1235,(1U),4);
        tracep->fullCData(oldp+1236,(0xfU),4);
        tracep->fullCData(oldp+1237,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+1238,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+1239,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+1241,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+1242,(1U));
        tracep->fullBit(oldp+1243,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+1244,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullBit(oldp+1245,(0U));
        tracep->fullQData(oldp+1246,(0ULL),64);
        tracep->fullCData(oldp+1248,(0U),8);
        tracep->fullCData(oldp+1249,(1U),3);
        tracep->fullCData(oldp+1250,(2U),3);
        tracep->fullCData(oldp+1251,(3U),3);
        tracep->fullCData(oldp+1252,(7U),3);
        tracep->fullCData(oldp+1253,(6U),3);
        tracep->fullBit(oldp+1254,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+1255,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+1256,(0x80U),32);
        tracep->fullIData(oldp+1257,(6U),32);
        __Vtemp560[0U] = 0U;
        __Vtemp560[1U] = 0U;
        __Vtemp560[2U] = 0U;
        __Vtemp560[3U] = 0U;
        tracep->fullWData(oldp+1258,(__Vtemp560),128);
        __Vtemp561[0U] = 0xffffffffU;
        __Vtemp561[1U] = 0xffffffffU;
        __Vtemp561[2U] = 0xffffffffU;
        __Vtemp561[3U] = 0xffffffffU;
        tracep->fullWData(oldp+1262,(__Vtemp561),128);
        tracep->fullCData(oldp+1266,(0U),2);
        tracep->fullCData(oldp+1267,(3U),2);
        tracep->fullCData(oldp+1268,(2U),2);
        tracep->fullIData(oldp+1269,(3U),32);
        tracep->fullIData(oldp+1270,(0x60U),32);
        tracep->fullIData(oldp+1271,(0U),32);
        tracep->fullIData(oldp+1272,(0x13cU),32);
        tracep->fullIData(oldp+1273,(0x108U),32);
        tracep->fullBit(oldp+1274,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+1275,(0xe3U),32);
        tracep->fullCData(oldp+1276,(4U),3);
        tracep->fullBit(oldp+1277,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+1278,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+1279,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullCData(oldp+1280,(3U),8);
        tracep->fullIData(oldp+1281,(0x121U),32);
        tracep->fullIData(oldp+1282,(0x40U),32);
        tracep->fullIData(oldp+1283,(3U),32);
        tracep->fullIData(oldp+1284,(1U),32);
        tracep->fullQData(oldp+1285,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+1287,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
