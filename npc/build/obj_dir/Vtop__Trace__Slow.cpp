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
        tracep->declBit(c+1210,"clk", false,-1);
        tracep->declBit(c+1211,"rst_n", false,-1);
        tracep->declQuad(c+1212,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+1214,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+1216,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+1217,"regA0", false,-1, 63,0);
        tracep->declBit(c+1219,"stall_n_diff", false,-1);
        tracep->declBit(c+1220,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+1221,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+1222,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1224,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1225,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1226,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1227,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1228,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1229,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1230,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+1231,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1232,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1233,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1234,"axi_r_ready_o", false,-1);
        tracep->declBit(c+1235,"axi_r_valid_i", false,-1);
        tracep->declBus(c+1236,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1237,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1239,"axi_r_last_i", false,-1);
        tracep->declBus(c+1240,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1241,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1242,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+1243,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+1244,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1246,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1247,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1248,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1249,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1250,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1251,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1252,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+1253,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1254,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1255,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1256,"axi_w_ready_i", false,-1);
        tracep->declBit(c+1257,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+1258,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1260,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1261,"axi_w_last_o", false,-1);
        tracep->declBus(c+1262,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1263,"axi_b_ready_o", false,-1);
        tracep->declBit(c+1264,"axi_b_valid_i", false,-1);
        tracep->declBus(c+1265,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1266,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1267,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+1305,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1305,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1305,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1305,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1306,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1307,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1308,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1210,"top clk", false,-1);
        tracep->declBit(c+1211,"top rst_n", false,-1);
        tracep->declQuad(c+1212,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+1214,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+1216,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+1217,"top regA0", false,-1, 63,0);
        tracep->declBit(c+1219,"top stall_n_diff", false,-1);
        tracep->declBit(c+1220,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+1221,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+1222,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1224,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1225,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1226,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1227,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1228,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1229,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1230,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+1231,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1232,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1233,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1234,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+1235,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+1236,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1237,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1239,"top axi_r_last_i", false,-1);
        tracep->declBus(c+1240,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1241,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1242,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+1243,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+1244,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1246,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1247,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1248,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1249,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1250,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1251,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1252,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+1253,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1254,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1255,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1256,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+1257,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+1258,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1260,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1261,"top axi_w_last_o", false,-1);
        tracep->declBus(c+1262,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1263,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+1264,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+1265,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1266,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1267,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+493,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+644,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+645,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+450,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1310,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+451,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+647,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+648,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1311,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+649,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+452,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+650,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+494,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+495,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+496,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1313,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+1314,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1315,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+498,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+651,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+499,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+501,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1310,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+621,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+502,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+503,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1311,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+504,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+505,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+652,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+622,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+506,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+624,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+1310,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+653,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+507,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+508,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1316,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1317,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top instr_fetching", false,-1);
        tracep->declBit(c+1268,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1309,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1312,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1310,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+654,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+655,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1318,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1311,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+1319,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1320,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+1098,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+1269,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1099,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1101,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+1102,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1321,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1270,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+656,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+509,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1309,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1322,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1310,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+657,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+511,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1318,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1311,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+1323,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1103,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+658,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+659,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+512,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+661,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+1310,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+662,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+1271,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+1272,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1273,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1274,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1275,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1309,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1322,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1310,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+657,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+453,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1318,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1311,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+1319,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1324,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+1104,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+1276,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1105,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1107,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+1102,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1325,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+1326,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+663,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+665,"top is_jump", false,-1);
        tracep->declQuad(c+666,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+1076,"top pc_stall_n", false,-1);
        tracep->declBit(c+1108,"top if_stall_n", false,-1);
        tracep->declBit(c+668,"top if_instr_valid", false,-1);
        tracep->declBit(c+1328,"top sram_data_valid", false,-1);
        tracep->declQuad(c+669,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+671,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+1329,"top sram_ren", false,-1);
        tracep->declBit(c+673,"top sram_addr_valid", false,-1);
        tracep->declBit(c+674,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+675,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+676,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+677,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+679,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+1084,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+1086,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+680,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+682,"top src1sel_id", false,-1);
        tracep->declBus(c+683,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+684,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+685,"top is_brc_id", false,-1);
        tracep->declBit(c+686,"top is_jal_id", false,-1);
        tracep->declBit(c+687,"top is_jalr_id", false,-1);
        tracep->declBit(c+688,"top wben_id", false,-1);
        tracep->declBus(c+689,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+690,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+1077,"top id_stall_n", false,-1);
        tracep->declBit(c+691,"top DivEn_id", false,-1);
        tracep->declBus(c+692,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+693,"top in_trap_id", false,-1);
        tracep->declBit(c+694,"top out_trap_id", false,-1);
        tracep->declBit(c+695,"top trap_id", false,-1);
        tracep->declBit(c+696,"top ld_use_hazard", false,-1);
        tracep->declBit(c+697,"top id_flush", false,-1);
        tracep->declQuad(c+698,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+700,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+701,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+703,"top src1sel_ex", false,-1);
        tracep->declBus(c+704,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+705,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+707,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+709,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+711,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+713,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+714,"top is_brc_ex", false,-1);
        tracep->declBit(c+715,"top is_jal_ex", false,-1);
        tracep->declBit(c+716,"top is_jalr_ex", false,-1);
        tracep->declBit(c+717,"top wben_ex", false,-1);
        tracep->declBit(c+718,"top DivEn_ex", false,-1);
        tracep->declBus(c+719,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+720,"top trap_ex", false,-1);
        tracep->declBit(c+1078,"top ex_stall_n", false,-1);
        tracep->declQuad(c+10,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+721,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+722,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+723,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+724,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+725,"top ex_flush", false,-1);
        tracep->declBit(c+726,"top rden_ls", false,-1);
        tracep->declBit(c+727,"top wren_ls", false,-1);
        tracep->declBit(c+1079,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+1109,"top ex_not_ok", false,-1);
        tracep->declQuad(c+12,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+18,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+1277,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+19,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+26,"top trap_ls", false,-1);
        tracep->declBit(c+1110,"top ls_stall_n", false,-1);
        tracep->declBit(c+1111,"top ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+454,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+728,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+1330,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+1331,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+1112,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+729,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+730,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+732,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+734,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+736,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+737,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+739,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+740,"top wben_wb", false,-1);
        tracep->declQuad(c+741,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+1110,"top wb_stall_n", false,-1);
        tracep->declQuad(c+743,"top clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1309,"top clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+745,"top clint_axi_arvalid", false,-1);
        tracep->declBit(c+513,"top clint_axi_arready", false,-1);
        tracep->declBus(c+746,"top clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+514,"top clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+515,"top clint_axi_rvalid", false,-1);
        tracep->declBit(c+747,"top clint_axi_rready", false,-1);
        tracep->declBus(c+516,"top clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+517,"top clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1309,"top clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+748,"top clint_axi_awvalid", false,-1);
        tracep->declBit(c+519,"top clint_axi_awready", false,-1);
        tracep->declQuad(c+749,"top clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+520,"top clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+751,"top clint_axi_wvalid", false,-1);
        tracep->declBit(c+521,"top clint_axi_wready", false,-1);
        tracep->declBus(c+514,"top clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+522,"top clint_axi_bvalid", false,-1);
        tracep->declBit(c+752,"top clint_axi_bready", false,-1);
        tracep->declBit(c+753,"top rw_valid_i", false,-1);
        tracep->declBit(c+32,"top rw_ready_o", false,-1);
        tracep->declBus(c+654,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1101,"top rdLast_o", false,-1);
        tracep->declBus(c+456,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+1099,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+1114,"top dataValid_o", false,-1);
        tracep->declBit(c+754,"top fence_id", false,-1);
        tracep->declBit(c+755,"top fence_ex", false,-1);
        tracep->declBit(c+457,"top ld_csr_hazard", false,-1);
        tracep->declBit(c+33,"top ls_flush", false,-1);
        tracep->declBit(c+33,"top in_intr_ls", false,-1);
        tracep->declBit(c+1111,"top dataNotOk", false,-1);
        tracep->declBit(c+34,"top fence_ls", false,-1);
        tracep->declBit(c+756,"top clear_Icache", false,-1);
        tracep->declBit(c+757,"top DcacheRdValid", false,-1);
        tracep->declBit(c+758,"top DcacheWrValid", false,-1);
        tracep->declBit(c+35,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+657,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+1107,"top lsRdLast", false,-1);
        tracep->declQuad(c+759,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+761,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+1105,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+1115,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+763,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+625,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+657,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+764,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+765,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+453,"top lsLoadSize", false,-1, 2,0);
        tracep->declBus(c+1305,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1305,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1305,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1305,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1306,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1307,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1308,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+1268,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+1312,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+1310,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+654,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+655,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+1318,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+1311,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+1319,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+1320,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+1098,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+1269,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+1099,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+1101,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+1102,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+1321,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+1270,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+656,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+509,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+1322,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+1310,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+657,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+511,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+1318,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+1311,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+1323,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+1103,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+658,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+659,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+512,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+661,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+1310,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+662,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+1271,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+1272,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+1273,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+1274,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+1275,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+6,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+7,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+1322,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+1310,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+657,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+453,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+1318,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+1311,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+1319,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+1324,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+1104,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+1276,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+1105,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+1107,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+1102,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+1325,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+1242,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+1243,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+1244,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1246,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1247,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1248,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1249,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1250,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1251,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1252,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+1253,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1254,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1255,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1256,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+1257,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+1258,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1260,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1261,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+1262,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1263,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+1264,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+1265,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1266,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1267,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1220,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+1221,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+1222,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1224,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1225,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1226,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1227,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1228,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1229,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1230,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+1231,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1232,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1233,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1234,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+1235,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+1236,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1237,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1239,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+1240,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1241,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+498,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+651,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+499,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+501,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1310,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+621,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+502,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+503,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1311,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+504,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+505,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+652,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+622,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+506,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+624,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+1310,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+653,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+507,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+508,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1322,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1317,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+493,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+644,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+645,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+450,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1310,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+451,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+647,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+648,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1311,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+649,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+452,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+650,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+494,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+495,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+496,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+494,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+1322,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1315,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+743,"top axi_crossbar_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_crossbar_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+745,"top axi_crossbar_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+513,"top axi_crossbar_u clint_axi_arready", false,-1);
        tracep->declBus(c+746,"top axi_crossbar_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top axi_crossbar_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+514,"top axi_crossbar_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+515,"top axi_crossbar_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+747,"top axi_crossbar_u clint_axi_rready", false,-1);
        tracep->declBus(c+516,"top axi_crossbar_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+517,"top axi_crossbar_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_crossbar_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+748,"top axi_crossbar_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+519,"top axi_crossbar_u clint_axi_awready", false,-1);
        tracep->declQuad(c+749,"top axi_crossbar_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+520,"top axi_crossbar_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+751,"top axi_crossbar_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+521,"top axi_crossbar_u clint_axi_wready", false,-1);
        tracep->declBus(c+514,"top axi_crossbar_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+522,"top axi_crossbar_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+752,"top axi_crossbar_u clint_axi_bready", false,-1);
        tracep->declBit(c+1270,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+656,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+509,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+1322,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+1310,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+657,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+511,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1318,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+1311,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+1323,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+1103,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+658,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+659,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+512,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+661,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+1310,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+662,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+1271,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+1272,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+1273,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1274,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+1116,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+36,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+766,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+37,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+1310,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+458,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+768,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1318,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+1332,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+1319,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+769,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+1117,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+1279,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+1118,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+1120,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+1102,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+1280,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+770,"top axi_crossbar_u clint_r_trans", false,-1);
        tracep->declBit(c+523,"top axi_crossbar_u clint_w_trans", false,-1);
        tracep->declBit(c+771,"top axi_crossbar_u perip_r_trans", false,-1);
        tracep->declBit(c+524,"top axi_crossbar_u perip_w_trans", false,-1);
        tracep->declBit(c+1210,"top IF_u clk", false,-1);
        tracep->declBit(c+1211,"top IF_u rst_n", false,-1);
        tracep->declBit(c+665,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+666,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+693,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+694,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+1108,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+663,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+676,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+668,"top IF_u if_instr_valid", false,-1);
        tracep->declBit(c+33,"top IF_u in_intr_ls", false,-1);
        tracep->declQuad(c+669,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+1328,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+674,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+675,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+671,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+1329,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+673,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+671,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+1210,"top cache_dut clk", false,-1);
        tracep->declBit(c+1211,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+772,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+673,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+1311,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+1333,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+1335,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+1108,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+674,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+773,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+675,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+669,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+756,"top cache_dut clrValid", false,-1);
        tracep->declBit(c+753,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+32,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+654,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1101,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+456,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+1099,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+1114,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+1309,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+1336,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+1337,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+1338,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+1339,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+1340,"top cache_dut unCacheOp", false,-1, 2,0);
        tracep->declBus(c+774,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+1121,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+775,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+39,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+40,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+525,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+529,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+533,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+537,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+776,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+780,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+776,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+780,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+784,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+785,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+786,"top cache_dut uncached", false,-1);
        tracep->declBit(c+41,"top cache_dut uncachedOk", false,-1);
        tracep->declBit(c+787,"top cache_dut diffAddr", false,-1);
        tracep->declBit(c+788,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+42,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+44,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+45,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+46,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+47,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+49,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+51,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+52,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+1281,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+1282,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+1283,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+1284,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+53,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+54,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+1341,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+1342,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+789,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+541,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+549,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+1285,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+1287,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+790,"top cache_dut missEn", false,-1);
        tracep->declBit(c+791,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+55,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+557,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+57,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+792,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+793,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+801,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+1343,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1305,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1344,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1343,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+525,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+1210,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+802,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+803,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+1345,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+1122,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+776,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+804,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+784,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+1349,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1343,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1305,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1344,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1343,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+529,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+1210,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+802,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+803,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+1345,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+1122,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+780,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+804,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+784,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+1349,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1343,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1305,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1344,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1343,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+533,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+1210,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+805,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+806,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+1345,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+1123,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+776,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+807,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+785,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+1349,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1343,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1305,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1344,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1343,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+537,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+1210,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+805,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+806,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+1345,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+1123,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+780,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+807,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+785,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+1349,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1305,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1305,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1305,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1305,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1306,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1307,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1308,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1210,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+1211,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+753,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+32,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+1099,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+459,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+654,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1101,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+1114,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+1,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+1268,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1312,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1310,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+654,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+655,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1318,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1311,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+1319,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1320,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+1098,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+1269,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1099,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1101,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+1102,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1321,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+1353,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+1318,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+1354,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+1355,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+58,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+1124,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+2,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+5,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+1356,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1312,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+1311,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+654,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+655,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+1210,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+1211,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+663,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+676,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+1077,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+697,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+677,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+679,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+808,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+810,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+1357,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1358,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1210,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+1211,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+1077,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+811,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+814,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+1210,"top ID_u clk", false,-1);
        tracep->declBit(c+1211,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+677,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+730,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+736,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+679,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+737,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+739,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+740,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+1086,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+1084,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+680,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+682,"top ID_u src1sel", false,-1);
        tracep->declBus(c+683,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+684,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+687,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+686,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+685,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+688,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+689,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+690,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+1217,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+691,"top ID_u DivEn", false,-1);
        tracep->declBus(c+692,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+695,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+693,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+694,"top ID_u out_trap_id", false,-1);
        tracep->declBit(c+754,"top ID_u fence_id", false,-1);
        tracep->declBus(c+817,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+680,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+1086,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+1084,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+677,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+679,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+689,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+690,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+817,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+682,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+683,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+684,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+687,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+686,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+685,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+688,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+691,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+692,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+695,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+693,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+694,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBit(c+754,"top ID_u decoder_u fence_id", false,-1);
        tracep->declBus(c+818,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+819,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+820,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+821,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+817,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+680,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+1210,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+730,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+736,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+689,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+1086,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+690,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+1084,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+739,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+737,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+740,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+1217,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1146+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+679,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+700,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBus(c+18,"top hazard_detect_u instr_ls_i", false,-1, 31,0);
        tracep->declBus(c+736,"top hazard_detect_u instr_wb_i", false,-1, 31,0);
        tracep->declBit(c+696,"top hazard_detect_u ld_use_hazard", false,-1);
        tracep->declBit(c+457,"top hazard_detect_u ld_csr_hazard", false,-1);
        tracep->declBit(c+822,"top hazard_detect_u wb_is_load", false,-1);
        tracep->declBit(c+59,"top hazard_detect_u ls_is_csropi", false,-1);
        tracep->declBit(c+1210,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+1211,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+1078,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+725,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+677,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+679,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+680,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+1084,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+1086,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+684,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+687,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+686,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+685,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+682,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+683,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+688,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+689,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+690,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+691,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+692,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+695,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declBit(c+754,"top EX_reg_u fence_ex_reg_i", false,-1);
        tracep->declQuad(c+698,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+700,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+705,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+707,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+709,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+713,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+716,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+715,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+714,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+703,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+704,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+717,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+723,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+724,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+718,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+719,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+720,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declBit(c+755,"top EX_reg_u fence_ex_reg_o", false,-1);
        tracep->declQuad(c+823,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+825,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+826,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+827,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+828,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+829,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+830,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBit(c+831,"top EX_reg_u fence_ex_reg", false,-1);
        tracep->declBus(c+1359,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1358,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1210,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+1211,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+1078,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+1088,"top EX_reg_u ex_reg i_din", false,-1, 315,0);
        tracep->declArray(c+832,"top EX_reg_u ex_reg o_dout", false,-1, 315,0);
        tracep->declBit(c+1210,"top ex_stage_u clk", false,-1);
        tracep->declBit(c+1211,"top ex_stage_u rst_n", false,-1);
        tracep->declBus(c+713,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+707,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+705,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+709,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+698,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+700,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+716,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+715,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+714,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+703,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+704,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+721,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+722,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+16,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+737,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+718,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+719,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declBit(c+725,"top ex_stage_u flush_ex_i", false,-1);
        tracep->declQuad(c+701,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+666,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+711,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+665,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+1109,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+726,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+727,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+1079,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+842,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+844,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+846,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+711,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBit(c+1289,"top ex_stage_u aluNotOk", false,-1);
        tracep->declBit(c+1210,"top ex_stage_u u_ALU clk", false,-1);
        tracep->declBit(c+1211,"top ex_stage_u u_ALU rst_n", false,-1);
        tracep->declBus(c+713,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+842,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+844,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+718,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+719,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declBit(c+725,"top ex_stage_u u_ALU flush_alu", false,-1);
        tracep->declQuad(c+701,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+848,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+849,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declBit(c+1289,"top ex_stage_u u_ALU aluNotOk", false,-1);
        tracep->declQuad(c+850,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+852,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+853,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+855,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+857,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+857,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+858,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+859,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+860,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+862,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+863,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+864,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+866,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+868,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+60,"top ex_stage_u u_ALU src1Reg", false,-1, 63,0);
        tracep->declQuad(c+62,"top ex_stage_u u_ALU src2Reg", false,-1, 63,0);
        tracep->declBit(c+870,"top ex_stage_u u_ALU diffIn", false,-1);
        tracep->declBit(c+871,"top ex_stage_u u_ALU mul_valid", false,-1);
        tracep->declBit(c+1290,"top ex_stage_u u_ALU mul_resValid", false,-1);
        tracep->declQuad(c+461,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+463,"top ex_stage_u u_ALU mulOut", false,-1, 63,0);
        tracep->declQuad(c+64,"top ex_stage_u u_ALU divOut", false,-1, 63,0);
        tracep->declBit(c+872,"top ex_stage_u u_ALU div_valid", false,-1);
        tracep->declBit(c+66,"top ex_stage_u u_ALU div_resValid", false,-1);
        tracep->declBit(c+1291,"top ex_stage_u u_ALU mul_resValid2", false,-1);
        tracep->declBit(c+465,"top ex_stage_u u_ALU mulOut2", false,-1);
        tracep->declQuad(c+842,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+853,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+852,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+855,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+862,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+849,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+863,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+873,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+859,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+857,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+858,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+852,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+857,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+874,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+842,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+875,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+858,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+857,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+860,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+876,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+878,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+880,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+882,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+884,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+886,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+888,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declBit(c+1210,"top ex_stage_u u_ALU multiplier clk", false,-1);
        tracep->declBit(c+1211,"top ex_stage_u u_ALU multiplier rst_n", false,-1);
        tracep->declBit(c+871,"top ex_stage_u u_ALU multiplier mul_valid", false,-1);
        tracep->declBit(c+725,"top ex_stage_u u_ALU multiplier flush", false,-1);
        tracep->declBus(c+890,"top ex_stage_u u_ALU multiplier mul_type", false,-1, 1,0);
        tracep->declQuad(c+842,"top ex_stage_u u_ALU multiplier multiplicand", false,-1, 63,0);
        tracep->declQuad(c+844,"top ex_stage_u u_ALU multiplier multiplier", false,-1, 63,0);
        tracep->declBit(c+1290,"top ex_stage_u u_ALU multiplier out_valid", false,-1);
        tracep->declQuad(c+463,"top ex_stage_u u_ALU multiplier result", false,-1, 63,0);
        tracep->declBit(c+891,"top ex_stage_u u_ALU multiplier stateReg", false,-1);
        tracep->declBit(c+892,"top ex_stage_u u_ALU multiplier interValid", false,-1);
        tracep->declBit(c+893,"top ex_stage_u u_ALU multiplier resultValidReg_d", false,-1);
        tracep->declBit(c+1292,"top ex_stage_u u_ALU multiplier resultValidReg_q", false,-1);
        tracep->declBus(c+894,"top ex_stage_u u_ALU multiplier mul_signed", false,-1, 1,0);
        tracep->declQuad(c+67,"top ex_stage_u u_ALU multiplier result_hi", false,-1, 63,0);
        tracep->declQuad(c+69,"top ex_stage_u u_ALU multiplier result_lo", false,-1, 63,0);
        tracep->declBus(c+1308,"top ex_stage_u u_ALU multiplier resultValidReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1358,"top ex_stage_u u_ALU multiplier resultValidReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1210,"top ex_stage_u u_ALU multiplier resultValidReg i_clk", false,-1);
        tracep->declBit(c+1125,"top ex_stage_u u_ALU multiplier resultValidReg i_rst_n", false,-1);
        tracep->declBit(c+1329,"top ex_stage_u u_ALU multiplier resultValidReg i_wen", false,-1);
        tracep->declBus(c+893,"top ex_stage_u u_ALU multiplier resultValidReg i_din", false,-1, 0,0);
        tracep->declBus(c+1292,"top ex_stage_u u_ALU multiplier resultValidReg o_dout", false,-1, 0,0);
        tracep->declBit(c+1210,"top ex_stage_u u_ALU multiplier mul64_u clk", false,-1);
        tracep->declBit(c+1211,"top ex_stage_u u_ALU multiplier mul64_u rst_n", false,-1);
        tracep->declBit(c+871,"top ex_stage_u u_ALU multiplier mul64_u mul_valid", false,-1);
        tracep->declBit(c+725,"top ex_stage_u u_ALU multiplier mul64_u flush", false,-1);
        tracep->declBit(c+1311,"top ex_stage_u u_ALU multiplier mul64_u mulw", false,-1);
        tracep->declBus(c+894,"top ex_stage_u u_ALU multiplier mul64_u mul_signed", false,-1, 1,0);
        tracep->declQuad(c+842,"top ex_stage_u u_ALU multiplier mul64_u multiplicand", false,-1, 63,0);
        tracep->declQuad(c+844,"top ex_stage_u u_ALU multiplier mul64_u multiplier", false,-1, 63,0);
        tracep->declBit(c+895,"top ex_stage_u u_ALU multiplier mul64_u mul_ready", false,-1);
        tracep->declBit(c+892,"top ex_stage_u u_ALU multiplier mul64_u out_valid", false,-1);
        tracep->declQuad(c+67,"top ex_stage_u u_ALU multiplier mul64_u result_hi", false,-1, 63,0);
        tracep->declQuad(c+69,"top ex_stage_u u_ALU multiplier mul64_u result_lo", false,-1, 63,0);
        tracep->declBit(c+896,"top ex_stage_u u_ALU multiplier mul64_u src1_is_signed", false,-1);
        tracep->declBit(c+897,"top ex_stage_u u_ALU multiplier mul64_u src2_is_signed", false,-1);
        tracep->declQuad(c+898,"top ex_stage_u u_ALU multiplier mul64_u mul_lo_src1", false,-1, 32,0);
        tracep->declQuad(c+900,"top ex_stage_u u_ALU multiplier mul64_u mul_hi_src1", false,-1, 32,0);
        tracep->declQuad(c+902,"top ex_stage_u u_ALU multiplier mul64_u mul_lo_src2", false,-1, 32,0);
        tracep->declQuad(c+904,"top ex_stage_u u_ALU multiplier mul64_u mul_hi_src2", false,-1, 32,0);
        tracep->declArray(c+906,"top ex_stage_u u_ALU multiplier mul64_u mul_ll_rslt", false,-1, 65,0);
        tracep->declArray(c+909,"top ex_stage_u u_ALU multiplier mul64_u mul_lh_rslt", false,-1, 65,0);
        tracep->declArray(c+912,"top ex_stage_u u_ALU multiplier mul64_u mul_hl_rslt", false,-1, 65,0);
        tracep->declArray(c+915,"top ex_stage_u u_ALU multiplier mul64_u mul_hh_rslt", false,-1, 65,0);
        tracep->declArray(c+71,"top ex_stage_u u_ALU multiplier mul64_u mul_ll_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+74,"top ex_stage_u u_ALU multiplier mul64_u mul_lh_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+77,"top ex_stage_u u_ALU multiplier mul64_u mul_hl_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+80,"top ex_stage_u u_ALU multiplier mul64_u mul_hh_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+83,"top ex_stage_u u_ALU multiplier mul64_u mul_ll_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+88,"top ex_stage_u u_ALU multiplier mul64_u mul_lh_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+93,"top ex_stage_u u_ALU multiplier mul64_u mul_hl_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+98,"top ex_stage_u u_ALU multiplier mul64_u mul_hh_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+103,"top ex_stage_u u_ALU multiplier mul64_u mul_rslt_stg2_ex2", false,-1, 129,0);
        tracep->declBit(c+918,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_set", false,-1);
        tracep->declBit(c+919,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_clr", false,-1);
        tracep->declBit(c+920,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_d", false,-1);
        tracep->declBit(c+892,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_q", false,-1);
        tracep->declBit(c+892,"top ex_stage_u u_ALU multiplier mul64_u int_reg_wr_ready_fin", false,-1);
        tracep->declBus(c+1360,"top ex_stage_u u_ALU multiplier mul64_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1358,"top ex_stage_u u_ALU multiplier mul64_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1210,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_clk", false,-1);
        tracep->declBit(c+1211,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+918,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_wen", false,-1);
        tracep->declArray(c+921,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_din", false,-1, 263,0);
        tracep->declArray(c+108,"top ex_stage_u u_ALU multiplier mul64_u id_reg o_dout", false,-1, 263,0);
        tracep->declBit(c+1210,"top ex_stage_u u_ALU multiplier2 clk", false,-1);
        tracep->declBit(c+1211,"top ex_stage_u u_ALU multiplier2 rst_n", false,-1);
        tracep->declBit(c+871,"top ex_stage_u u_ALU multiplier2 mul_valid", false,-1);
        tracep->declBit(c+725,"top ex_stage_u u_ALU multiplier2 flush", false,-1);
        tracep->declBus(c+890,"top ex_stage_u u_ALU multiplier2 mul_type", false,-1, 1,0);
        tracep->declQuad(c+842,"top ex_stage_u u_ALU multiplier2 multiplicand", false,-1, 63,0);
        tracep->declQuad(c+844,"top ex_stage_u u_ALU multiplier2 multiplier", false,-1, 63,0);
        tracep->declBit(c+1291,"top ex_stage_u u_ALU multiplier2 out_valid", false,-1);
        tracep->declQuad(c+466,"top ex_stage_u u_ALU multiplier2 result", false,-1, 63,0);
        tracep->declBit(c+930,"top ex_stage_u u_ALU multiplier2 stateReg", false,-1);
        tracep->declBit(c+931,"top ex_stage_u u_ALU multiplier2 interValid", false,-1);
        tracep->declBit(c+932,"top ex_stage_u u_ALU multiplier2 resultValidReg_d", false,-1);
        tracep->declBit(c+1293,"top ex_stage_u u_ALU multiplier2 resultValidReg_q", false,-1);
        tracep->declBus(c+933,"top ex_stage_u u_ALU multiplier2 mul_signed", false,-1, 1,0);
        tracep->declQuad(c+117,"top ex_stage_u u_ALU multiplier2 result_hi", false,-1, 63,0);
        tracep->declQuad(c+119,"top ex_stage_u u_ALU multiplier2 result_lo", false,-1, 63,0);
        tracep->declBus(c+1308,"top ex_stage_u u_ALU multiplier2 resultValidReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1358,"top ex_stage_u u_ALU multiplier2 resultValidReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1210,"top ex_stage_u u_ALU multiplier2 resultValidReg i_clk", false,-1);
        tracep->declBit(c+1125,"top ex_stage_u u_ALU multiplier2 resultValidReg i_rst_n", false,-1);
        tracep->declBit(c+1329,"top ex_stage_u u_ALU multiplier2 resultValidReg i_wen", false,-1);
        tracep->declBus(c+932,"top ex_stage_u u_ALU multiplier2 resultValidReg i_din", false,-1, 0,0);
        tracep->declBus(c+1293,"top ex_stage_u u_ALU multiplier2 resultValidReg o_dout", false,-1, 0,0);
        tracep->declBit(c+1210,"top ex_stage_u u_ALU multiplier2 mul64_u clk", false,-1);
        tracep->declBit(c+1211,"top ex_stage_u u_ALU multiplier2 mul64_u rst_n", false,-1);
        tracep->declBit(c+871,"top ex_stage_u u_ALU multiplier2 mul64_u mul_valid", false,-1);
        tracep->declBit(c+725,"top ex_stage_u u_ALU multiplier2 mul64_u flush", false,-1);
        tracep->declBit(c+1311,"top ex_stage_u u_ALU multiplier2 mul64_u mulw", false,-1);
        tracep->declBus(c+933,"top ex_stage_u u_ALU multiplier2 mul64_u mul_signed", false,-1, 1,0);
        tracep->declQuad(c+842,"top ex_stage_u u_ALU multiplier2 mul64_u multiplicand", false,-1, 63,0);
        tracep->declQuad(c+844,"top ex_stage_u u_ALU multiplier2 mul64_u multiplier", false,-1, 63,0);
        tracep->declBit(c+934,"top ex_stage_u u_ALU multiplier2 mul64_u mul_ready", false,-1);
        tracep->declBit(c+931,"top ex_stage_u u_ALU multiplier2 mul64_u out_valid", false,-1);
        tracep->declQuad(c+117,"top ex_stage_u u_ALU multiplier2 mul64_u result_hi", false,-1, 63,0);
        tracep->declQuad(c+119,"top ex_stage_u u_ALU multiplier2 mul64_u result_lo", false,-1, 63,0);
        tracep->declBit(c+935,"top ex_stage_u u_ALU multiplier2 mul64_u src1_is_signed", false,-1);
        tracep->declBit(c+936,"top ex_stage_u u_ALU multiplier2 mul64_u src2_is_signed", false,-1);
        tracep->declQuad(c+898,"top ex_stage_u u_ALU multiplier2 mul64_u mul_lo_src1", false,-1, 32,0);
        tracep->declQuad(c+937,"top ex_stage_u u_ALU multiplier2 mul64_u mul_hi_src1", false,-1, 32,0);
        tracep->declQuad(c+902,"top ex_stage_u u_ALU multiplier2 mul64_u mul_lo_src2", false,-1, 32,0);
        tracep->declQuad(c+939,"top ex_stage_u u_ALU multiplier2 mul64_u mul_hi_src2", false,-1, 32,0);
        tracep->declArray(c+906,"top ex_stage_u u_ALU multiplier2 mul64_u mul_ll_rslt", false,-1, 65,0);
        tracep->declArray(c+941,"top ex_stage_u u_ALU multiplier2 mul64_u mul_lh_rslt", false,-1, 65,0);
        tracep->declArray(c+944,"top ex_stage_u u_ALU multiplier2 mul64_u mul_hl_rslt", false,-1, 65,0);
        tracep->declArray(c+947,"top ex_stage_u u_ALU multiplier2 mul64_u mul_hh_rslt", false,-1, 65,0);
        tracep->declArray(c+121,"top ex_stage_u u_ALU multiplier2 mul64_u mul_ll_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+124,"top ex_stage_u u_ALU multiplier2 mul64_u mul_lh_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+127,"top ex_stage_u u_ALU multiplier2 mul64_u mul_hl_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+130,"top ex_stage_u u_ALU multiplier2 mul64_u mul_hh_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+133,"top ex_stage_u u_ALU multiplier2 mul64_u mul_ll_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+138,"top ex_stage_u u_ALU multiplier2 mul64_u mul_lh_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+143,"top ex_stage_u u_ALU multiplier2 mul64_u mul_hl_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+148,"top ex_stage_u u_ALU multiplier2 mul64_u mul_hh_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+153,"top ex_stage_u u_ALU multiplier2 mul64_u mul_rslt_stg2_ex2", false,-1, 129,0);
        tracep->declBit(c+950,"top ex_stage_u u_ALU multiplier2 mul64_u mul_stg1_vld_set", false,-1);
        tracep->declBit(c+951,"top ex_stage_u u_ALU multiplier2 mul64_u mul_stg1_vld_clr", false,-1);
        tracep->declBit(c+952,"top ex_stage_u u_ALU multiplier2 mul64_u mul_stg1_vld_d", false,-1);
        tracep->declBit(c+931,"top ex_stage_u u_ALU multiplier2 mul64_u mul_stg1_vld_q", false,-1);
        tracep->declBit(c+931,"top ex_stage_u u_ALU multiplier2 mul64_u int_reg_wr_ready_fin", false,-1);
        tracep->declBus(c+1360,"top ex_stage_u u_ALU multiplier2 mul64_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1358,"top ex_stage_u u_ALU multiplier2 mul64_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1210,"top ex_stage_u u_ALU multiplier2 mul64_u id_reg i_clk", false,-1);
        tracep->declBit(c+1211,"top ex_stage_u u_ALU multiplier2 mul64_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+950,"top ex_stage_u u_ALU multiplier2 mul64_u id_reg i_wen", false,-1);
        tracep->declArray(c+953,"top ex_stage_u u_ALU multiplier2 mul64_u id_reg i_din", false,-1, 263,0);
        tracep->declArray(c+158,"top ex_stage_u u_ALU multiplier2 mul64_u id_reg o_dout", false,-1, 263,0);
        tracep->declBit(c+1210,"top ex_stage_u u_ALU divider clk", false,-1);
        tracep->declBit(c+1211,"top ex_stage_u u_ALU divider rst_n", false,-1);
        tracep->declQuad(c+842,"top ex_stage_u u_ALU divider dividend", false,-1, 63,0);
        tracep->declQuad(c+844,"top ex_stage_u u_ALU divider divisor", false,-1, 63,0);
        tracep->declBit(c+872,"top ex_stage_u u_ALU divider div_valid", false,-1);
        tracep->declBus(c+890,"top ex_stage_u u_ALU divider div_type", false,-1, 1,0);
        tracep->declBit(c+725,"top ex_stage_u u_ALU divider flush", false,-1);
        tracep->declBit(c+66,"top ex_stage_u u_ALU divider out_valid", false,-1);
        tracep->declQuad(c+64,"top ex_stage_u u_ALU divider result", false,-1, 63,0);
        tracep->declBus(c+167,"top ex_stage_u u_ALU divider div_type_r", false,-1, 1,0);
        tracep->declQuad(c+962,"top ex_stage_u u_ALU divider dividend_N", false,-1, 63,0);
        tracep->declQuad(c+964,"top ex_stage_u u_ALU divider divisor_N", false,-1, 63,0);
        tracep->declQuad(c+168,"top ex_stage_u u_ALU divider divisor_N_r", false,-1, 63,0);
        tracep->declQuad(c+170,"top ex_stage_u u_ALU divider divisor_P_r", false,-1, 63,0);
        tracep->declArray(c+172,"top ex_stage_u u_ALU divider dividendReg", false,-1, 127,0);
        tracep->declQuad(c+176,"top ex_stage_u u_ALU divider restore_remainder", false,-1, 63,0);
        tracep->declBus(c+178,"top ex_stage_u u_ALU divider div_cnt", false,-1, 5,0);
        tracep->declBit(c+179,"top ex_stage_u u_ALU divider div_busy", false,-1);
        tracep->declBit(c+180,"top ex_stage_u u_ALU divider dividend_sign", false,-1);
        tracep->declBit(c+181,"top ex_stage_u u_ALU divider divisor_sign", false,-1);
        tracep->declQuad(c+182,"top ex_stage_u u_ALU divider x2", false,-1, 63,0);
        tracep->declQuad(c+184,"top ex_stage_u u_ALU divider r_64", false,-1, 63,0);
        tracep->declBit(c+186,"top ex_stage_u u_ALU divider partial_q", false,-1);
        tracep->declQuad(c+187,"top ex_stage_u u_ALU divider quotient", false,-1, 63,0);
        tracep->declQuad(c+189,"top ex_stage_u u_ALU divider remainder", false,-1, 63,0);
        tracep->declQuad(c+191,"top ex_stage_u u_ALU divider remainder_s", false,-1, 63,0);
        tracep->declQuad(c+193,"top ex_stage_u u_ALU divider cla_64_u1 a_64", false,-1, 63,0);
        tracep->declQuad(c+182,"top ex_stage_u u_ALU divider cla_64_u1 b_64", false,-1, 63,0);
        tracep->declBit(c+1311,"top ex_stage_u u_ALU divider cla_64_u1 cin_64", false,-1);
        tracep->declQuad(c+195,"top ex_stage_u u_ALU divider cla_64_u1 p_64", false,-1, 63,0);
        tracep->declQuad(c+197,"top ex_stage_u u_ALU divider cla_64_u1 g_64", false,-1, 63,0);
        tracep->declQuad(c+184,"top ex_stage_u u_ALU divider cla_64_u1 s_64", false,-1, 63,0);
        tracep->declBit(c+199,"top ex_stage_u u_ALU divider cla_64_u1 gx_64", false,-1);
        tracep->declBit(c+200,"top ex_stage_u u_ALU divider cla_64_u1 px_64", false,-1);
        tracep->declBit(c+201,"top ex_stage_u u_ALU divider cla_64_u1 px1", false,-1);
        tracep->declBit(c+202,"top ex_stage_u u_ALU divider cla_64_u1 px2", false,-1);
        tracep->declBit(c+203,"top ex_stage_u u_ALU divider cla_64_u1 px3", false,-1);
        tracep->declBit(c+204,"top ex_stage_u u_ALU divider cla_64_u1 px4", false,-1);
        tracep->declBit(c+205,"top ex_stage_u u_ALU divider cla_64_u1 gx1", false,-1);
        tracep->declBit(c+206,"top ex_stage_u u_ALU divider cla_64_u1 gx2", false,-1);
        tracep->declBit(c+207,"top ex_stage_u u_ALU divider cla_64_u1 gx3", false,-1);
        tracep->declBit(c+208,"top ex_stage_u u_ALU divider cla_64_u1 gx4", false,-1);
        tracep->declBit(c+205,"top ex_stage_u u_ALU divider cla_64_u1 c15", false,-1);
        tracep->declBit(c+209,"top ex_stage_u u_ALU divider cla_64_u1 c31", false,-1);
        tracep->declBit(c+210,"top ex_stage_u u_ALU divider cla_64_u1 c47", false,-1);
        tracep->declBus(c+211,"top ex_stage_u u_ALU divider cla_64_u1 u1 a_16", false,-1, 15,0);
        tracep->declBus(c+212,"top ex_stage_u u_ALU divider cla_64_u1 u1 b_16", false,-1, 15,0);
        tracep->declBit(c+1311,"top ex_stage_u u_ALU divider cla_64_u1 u1 cin_16", false,-1);
        tracep->declBus(c+213,"top ex_stage_u u_ALU divider cla_64_u1 u1 p_16", false,-1, 15,0);
        tracep->declBus(c+214,"top ex_stage_u u_ALU divider cla_64_u1 u1 g_16", false,-1, 15,0);
        tracep->declBus(c+215,"top ex_stage_u u_ALU divider cla_64_u1 u1 s_16", false,-1, 15,0);
        tracep->declBit(c+205,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx_16", false,-1);
        tracep->declBit(c+201,"top ex_stage_u u_ALU divider cla_64_u1 u1 px_16", false,-1);
        tracep->declBit(c+216,"top ex_stage_u u_ALU divider cla_64_u1 u1 c3", false,-1);
        tracep->declBit(c+217,"top ex_stage_u u_ALU divider cla_64_u1 u1 c7", false,-1);
        tracep->declBit(c+218,"top ex_stage_u u_ALU divider cla_64_u1 u1 c11", false,-1);
        tracep->declBit(c+219,"top ex_stage_u u_ALU divider cla_64_u1 u1 px1", false,-1);
        tracep->declBit(c+220,"top ex_stage_u u_ALU divider cla_64_u1 u1 px2", false,-1);
        tracep->declBit(c+221,"top ex_stage_u u_ALU divider cla_64_u1 u1 px3", false,-1);
        tracep->declBit(c+222,"top ex_stage_u u_ALU divider cla_64_u1 u1 px4", false,-1);
        tracep->declBit(c+216,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx1", false,-1);
        tracep->declBit(c+223,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx2", false,-1);
        tracep->declBit(c+224,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx3", false,-1);
        tracep->declBit(c+225,"top ex_stage_u u_ALU divider cla_64_u1 u1 gx4", false,-1);
        tracep->declBus(c+226,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+227,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+1311,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 cin_4", false,-1);
        tracep->declBus(c+228,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+229,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+230,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+219,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 px_4", false,-1);
        tracep->declBit(c+216,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 gx_4", false,-1);
        tracep->declBus(c+231,"top ex_stage_u u_ALU divider cla_64_u1 u1 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+232,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+233,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+216,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 cin_4", false,-1);
        tracep->declBus(c+234,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+235,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+236,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+220,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 px_4", false,-1);
        tracep->declBit(c+223,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 gx_4", false,-1);
        tracep->declBus(c+237,"top ex_stage_u u_ALU divider cla_64_u1 u1 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+238,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+239,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+217,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 cin_4", false,-1);
        tracep->declBus(c+240,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+241,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+242,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+221,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 px_4", false,-1);
        tracep->declBit(c+224,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 gx_4", false,-1);
        tracep->declBus(c+243,"top ex_stage_u u_ALU divider cla_64_u1 u1 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+244,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+245,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+218,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 cin_4", false,-1);
        tracep->declBus(c+246,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+247,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+248,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+222,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 px_4", false,-1);
        tracep->declBit(c+225,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 gx_4", false,-1);
        tracep->declBus(c+249,"top ex_stage_u u_ALU divider cla_64_u1 u1 u4 c_int", false,-1, 3,0);
        tracep->declBus(c+250,"top ex_stage_u u_ALU divider cla_64_u1 u2 a_16", false,-1, 15,0);
        tracep->declBus(c+251,"top ex_stage_u u_ALU divider cla_64_u1 u2 b_16", false,-1, 15,0);
        tracep->declBit(c+205,"top ex_stage_u u_ALU divider cla_64_u1 u2 cin_16", false,-1);
        tracep->declBus(c+252,"top ex_stage_u u_ALU divider cla_64_u1 u2 p_16", false,-1, 15,0);
        tracep->declBus(c+253,"top ex_stage_u u_ALU divider cla_64_u1 u2 g_16", false,-1, 15,0);
        tracep->declBus(c+254,"top ex_stage_u u_ALU divider cla_64_u1 u2 s_16", false,-1, 15,0);
        tracep->declBit(c+206,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx_16", false,-1);
        tracep->declBit(c+202,"top ex_stage_u u_ALU divider cla_64_u1 u2 px_16", false,-1);
        tracep->declBit(c+255,"top ex_stage_u u_ALU divider cla_64_u1 u2 c3", false,-1);
        tracep->declBit(c+256,"top ex_stage_u u_ALU divider cla_64_u1 u2 c7", false,-1);
        tracep->declBit(c+257,"top ex_stage_u u_ALU divider cla_64_u1 u2 c11", false,-1);
        tracep->declBit(c+258,"top ex_stage_u u_ALU divider cla_64_u1 u2 px1", false,-1);
        tracep->declBit(c+259,"top ex_stage_u u_ALU divider cla_64_u1 u2 px2", false,-1);
        tracep->declBit(c+260,"top ex_stage_u u_ALU divider cla_64_u1 u2 px3", false,-1);
        tracep->declBit(c+261,"top ex_stage_u u_ALU divider cla_64_u1 u2 px4", false,-1);
        tracep->declBit(c+262,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx1", false,-1);
        tracep->declBit(c+263,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx2", false,-1);
        tracep->declBit(c+264,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx3", false,-1);
        tracep->declBit(c+265,"top ex_stage_u u_ALU divider cla_64_u1 u2 gx4", false,-1);
        tracep->declBus(c+266,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+267,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+205,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 cin_4", false,-1);
        tracep->declBus(c+268,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+269,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+270,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+258,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 px_4", false,-1);
        tracep->declBit(c+262,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 gx_4", false,-1);
        tracep->declBus(c+271,"top ex_stage_u u_ALU divider cla_64_u1 u2 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+272,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+273,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+255,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 cin_4", false,-1);
        tracep->declBus(c+274,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+275,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+276,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+259,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 px_4", false,-1);
        tracep->declBit(c+263,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 gx_4", false,-1);
        tracep->declBus(c+277,"top ex_stage_u u_ALU divider cla_64_u1 u2 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+278,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+279,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+256,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 cin_4", false,-1);
        tracep->declBus(c+280,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+281,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+282,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+260,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 px_4", false,-1);
        tracep->declBit(c+264,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 gx_4", false,-1);
        tracep->declBus(c+283,"top ex_stage_u u_ALU divider cla_64_u1 u2 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+284,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+285,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+257,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 cin_4", false,-1);
        tracep->declBus(c+286,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+287,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+288,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+261,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 px_4", false,-1);
        tracep->declBit(c+265,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 gx_4", false,-1);
        tracep->declBus(c+289,"top ex_stage_u u_ALU divider cla_64_u1 u2 u4 c_int", false,-1, 3,0);
        tracep->declBus(c+290,"top ex_stage_u u_ALU divider cla_64_u1 u3 a_16", false,-1, 15,0);
        tracep->declBus(c+291,"top ex_stage_u u_ALU divider cla_64_u1 u3 b_16", false,-1, 15,0);
        tracep->declBit(c+209,"top ex_stage_u u_ALU divider cla_64_u1 u3 cin_16", false,-1);
        tracep->declBus(c+292,"top ex_stage_u u_ALU divider cla_64_u1 u3 p_16", false,-1, 15,0);
        tracep->declBus(c+293,"top ex_stage_u u_ALU divider cla_64_u1 u3 g_16", false,-1, 15,0);
        tracep->declBus(c+294,"top ex_stage_u u_ALU divider cla_64_u1 u3 s_16", false,-1, 15,0);
        tracep->declBit(c+207,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx_16", false,-1);
        tracep->declBit(c+203,"top ex_stage_u u_ALU divider cla_64_u1 u3 px_16", false,-1);
        tracep->declBit(c+295,"top ex_stage_u u_ALU divider cla_64_u1 u3 c3", false,-1);
        tracep->declBit(c+296,"top ex_stage_u u_ALU divider cla_64_u1 u3 c7", false,-1);
        tracep->declBit(c+297,"top ex_stage_u u_ALU divider cla_64_u1 u3 c11", false,-1);
        tracep->declBit(c+298,"top ex_stage_u u_ALU divider cla_64_u1 u3 px1", false,-1);
        tracep->declBit(c+299,"top ex_stage_u u_ALU divider cla_64_u1 u3 px2", false,-1);
        tracep->declBit(c+300,"top ex_stage_u u_ALU divider cla_64_u1 u3 px3", false,-1);
        tracep->declBit(c+301,"top ex_stage_u u_ALU divider cla_64_u1 u3 px4", false,-1);
        tracep->declBit(c+302,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx1", false,-1);
        tracep->declBit(c+303,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx2", false,-1);
        tracep->declBit(c+304,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx3", false,-1);
        tracep->declBit(c+305,"top ex_stage_u u_ALU divider cla_64_u1 u3 gx4", false,-1);
        tracep->declBus(c+306,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+307,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+209,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 cin_4", false,-1);
        tracep->declBus(c+308,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+309,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+310,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+298,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 px_4", false,-1);
        tracep->declBit(c+302,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 gx_4", false,-1);
        tracep->declBus(c+311,"top ex_stage_u u_ALU divider cla_64_u1 u3 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+312,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+313,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+295,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 cin_4", false,-1);
        tracep->declBus(c+314,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+315,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+316,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+299,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 px_4", false,-1);
        tracep->declBit(c+303,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 gx_4", false,-1);
        tracep->declBus(c+317,"top ex_stage_u u_ALU divider cla_64_u1 u3 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+318,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+319,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+296,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 cin_4", false,-1);
        tracep->declBus(c+320,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+321,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+322,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+300,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 px_4", false,-1);
        tracep->declBit(c+304,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 gx_4", false,-1);
        tracep->declBus(c+323,"top ex_stage_u u_ALU divider cla_64_u1 u3 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+324,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+325,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+297,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 cin_4", false,-1);
        tracep->declBus(c+326,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+327,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+328,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+301,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 px_4", false,-1);
        tracep->declBit(c+305,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 gx_4", false,-1);
        tracep->declBus(c+329,"top ex_stage_u u_ALU divider cla_64_u1 u3 u4 c_int", false,-1, 3,0);
        tracep->declBus(c+330,"top ex_stage_u u_ALU divider cla_64_u1 u4 a_16", false,-1, 15,0);
        tracep->declBus(c+331,"top ex_stage_u u_ALU divider cla_64_u1 u4 b_16", false,-1, 15,0);
        tracep->declBit(c+210,"top ex_stage_u u_ALU divider cla_64_u1 u4 cin_16", false,-1);
        tracep->declBus(c+332,"top ex_stage_u u_ALU divider cla_64_u1 u4 p_16", false,-1, 15,0);
        tracep->declBus(c+333,"top ex_stage_u u_ALU divider cla_64_u1 u4 g_16", false,-1, 15,0);
        tracep->declBus(c+334,"top ex_stage_u u_ALU divider cla_64_u1 u4 s_16", false,-1, 15,0);
        tracep->declBit(c+208,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx_16", false,-1);
        tracep->declBit(c+204,"top ex_stage_u u_ALU divider cla_64_u1 u4 px_16", false,-1);
        tracep->declBit(c+335,"top ex_stage_u u_ALU divider cla_64_u1 u4 c3", false,-1);
        tracep->declBit(c+336,"top ex_stage_u u_ALU divider cla_64_u1 u4 c7", false,-1);
        tracep->declBit(c+337,"top ex_stage_u u_ALU divider cla_64_u1 u4 c11", false,-1);
        tracep->declBit(c+338,"top ex_stage_u u_ALU divider cla_64_u1 u4 px1", false,-1);
        tracep->declBit(c+339,"top ex_stage_u u_ALU divider cla_64_u1 u4 px2", false,-1);
        tracep->declBit(c+340,"top ex_stage_u u_ALU divider cla_64_u1 u4 px3", false,-1);
        tracep->declBit(c+341,"top ex_stage_u u_ALU divider cla_64_u1 u4 px4", false,-1);
        tracep->declBit(c+342,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx1", false,-1);
        tracep->declBit(c+343,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx2", false,-1);
        tracep->declBit(c+344,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx3", false,-1);
        tracep->declBit(c+345,"top ex_stage_u u_ALU divider cla_64_u1 u4 gx4", false,-1);
        tracep->declBus(c+346,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 a_4", false,-1, 3,0);
        tracep->declBus(c+347,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 b_4", false,-1, 3,0);
        tracep->declBit(c+210,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 cin_4", false,-1);
        tracep->declBus(c+348,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 p_4", false,-1, 3,0);
        tracep->declBus(c+349,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 g_4", false,-1, 3,0);
        tracep->declBus(c+350,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 s_4", false,-1, 3,0);
        tracep->declBit(c+338,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 px_4", false,-1);
        tracep->declBit(c+342,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 gx_4", false,-1);
        tracep->declBus(c+351,"top ex_stage_u u_ALU divider cla_64_u1 u4 u1 c_int", false,-1, 3,0);
        tracep->declBus(c+352,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 a_4", false,-1, 3,0);
        tracep->declBus(c+353,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 b_4", false,-1, 3,0);
        tracep->declBit(c+335,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 cin_4", false,-1);
        tracep->declBus(c+354,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 p_4", false,-1, 3,0);
        tracep->declBus(c+355,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 g_4", false,-1, 3,0);
        tracep->declBus(c+356,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 s_4", false,-1, 3,0);
        tracep->declBit(c+339,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 px_4", false,-1);
        tracep->declBit(c+343,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 gx_4", false,-1);
        tracep->declBus(c+357,"top ex_stage_u u_ALU divider cla_64_u1 u4 u2 c_int", false,-1, 3,0);
        tracep->declBus(c+358,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 a_4", false,-1, 3,0);
        tracep->declBus(c+359,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 b_4", false,-1, 3,0);
        tracep->declBit(c+336,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 cin_4", false,-1);
        tracep->declBus(c+360,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 p_4", false,-1, 3,0);
        tracep->declBus(c+361,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 g_4", false,-1, 3,0);
        tracep->declBus(c+362,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 s_4", false,-1, 3,0);
        tracep->declBit(c+340,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 px_4", false,-1);
        tracep->declBit(c+344,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 gx_4", false,-1);
        tracep->declBus(c+363,"top ex_stage_u u_ALU divider cla_64_u1 u4 u3 c_int", false,-1, 3,0);
        tracep->declBus(c+364,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 a_4", false,-1, 3,0);
        tracep->declBus(c+365,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 b_4", false,-1, 3,0);
        tracep->declBit(c+337,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 cin_4", false,-1);
        tracep->declBus(c+366,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 p_4", false,-1, 3,0);
        tracep->declBus(c+367,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 g_4", false,-1, 3,0);
        tracep->declBus(c+368,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 s_4", false,-1, 3,0);
        tracep->declBit(c+341,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 px_4", false,-1);
        tracep->declBit(c+345,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 gx_4", false,-1);
        tracep->declBus(c+369,"top ex_stage_u u_ALU divider cla_64_u1 u4 u4 c_int", false,-1, 3,0);
        tracep->declQuad(c+846,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+711,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+716,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+715,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+714,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+966,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+709,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+698,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+666,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+665,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+967,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+969,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+1361,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+971,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+972,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+973,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+974,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+976,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+978,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+1210,"top forwarding_u clk", false,-1);
        tracep->declBit(c+1211,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+723,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+724,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+370,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+739,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+19,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+740,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+737,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+1110,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+721,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+722,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+10,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+10,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+371,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+372,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+468,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+979,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+469,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+470,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+980,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+471,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+1210,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+1211,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+698,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+711,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+700,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+701,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+717,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+720,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+1110,"top L_S_reg_u stall_n", false,-1);
        tracep->declBit(c+33,"top L_S_reg_u flush_i", false,-1);
        tracep->declBit(c+755,"top L_S_reg_u fence_ls_reg_i", false,-1);
        tracep->declQuad(c+12,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+18,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+16,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+19,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+26,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBit(c+34,"top L_S_reg_u fence_ls_reg_o", false,-1);
        tracep->declArray(c+472,"top L_S_reg_u bundle", false,-1, 226,0);
        tracep->declBus(c+1362,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1358,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1210,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+1211,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+1110,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+472,"top L_S_reg_u ls_reg i_din", false,-1, 226,0);
        tracep->declArray(c+373,"top L_S_reg_u ls_reg o_dout", false,-1, 226,0);
        tracep->declBit(c+1210,"top ls_u clk", false,-1);
        tracep->declBit(c+1211,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+732,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+736,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+734,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+741,"top ls_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+1110,"top ls_u stall_n", false,-1);
        tracep->declBit(c+1108,"top ls_u if_stall_n", false,-1);
        tracep->declQuad(c+1277,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+1111,"top ls_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top ls_u in_intr_ls", false,-1);
        tracep->declBit(c+457,"top ls_u ld_csr_hazard", false,-1);
        tracep->declQuad(c+730,"top ls_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+698,"top ls_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+677,"top ls_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+663,"top ls_u if_pc", false,-1, 63,0);
        tracep->declQuad(c+743,"top ls_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1309,"top ls_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+745,"top ls_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+513,"top ls_u clint_axi_arready", false,-1);
        tracep->declBus(c+746,"top ls_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+514,"top ls_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+515,"top ls_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+747,"top ls_u clint_axi_rready", false,-1);
        tracep->declBus(c+516,"top ls_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+517,"top ls_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1309,"top ls_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+748,"top ls_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+519,"top ls_u clint_axi_awready", false,-1);
        tracep->declQuad(c+749,"top ls_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+520,"top ls_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+751,"top ls_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+521,"top ls_u clint_axi_wready", false,-1);
        tracep->declBus(c+514,"top ls_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+522,"top ls_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+752,"top ls_u clint_axi_bready", false,-1);
        tracep->declQuad(c+16,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+454,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+728,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+729,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+1111,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+1111,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+1112,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u rden", false,-1);
        tracep->declBus(c+381,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+454,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+981,"top ls_u wren_last", false,-1);
        tracep->declQuad(c+982,"top ls_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+1126,"top ls_u csr_stall_n", false,-1);
        tracep->declBit(c+382,"top ls_u timr_int", false,-1);
        tracep->declBit(c+1210,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+1211,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+381,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+454,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+732,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+981,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+1277,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+1111,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+454,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+728,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+729,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+1111,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+1111,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+1112,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+1112,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+383,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+384,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+385,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+386,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+387,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+388,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+389,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+29,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+1127,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+1128,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+1129,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+729,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+728,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+390,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+391,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+392,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+393,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+18,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+736,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+734,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+741,"top ls_u ls_ctr_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+381,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+454,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+480,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+481,"top ls_u ls_ctr_u csr_st_en", false,-1);
        tracep->declBit(c+1210,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+1211,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+730,"top ls_u CSR_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+698,"top ls_u CSR_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+677,"top ls_u CSR_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+663,"top ls_u CSR_u if_pc", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+982,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+1126,"top ls_u CSR_u stall_n", false,-1);
        tracep->declBit(c+382,"top ls_u CSR_u timer_int_i", false,-1);
        tracep->declBit(c+33,"top ls_u CSR_u in_intr_ls", false,-1);
        tracep->declQuad(c+20,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declQuad(c+394,"top ls_u CSR_u commitPC", false,-1, 63,0);
        tracep->declBit(c+396,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+397,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+398,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+399,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+400,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+401,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+402,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+403,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+404,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declBit(c+405,"top ls_u CSR_u sel_mie", false,-1);
        tracep->declBit(c+406,"top ls_u CSR_u sel_mip", false,-1);
        tracep->declQuad(c+982,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+482,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+484,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+984,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+407,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declBit(c+409,"top ls_u CSR_u mstatus_MIE", false,-1);
        tracep->declQuad(c+410,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+412,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declQuad(c+414,"top ls_u CSR_u mie", false,-1, 63,0);
        tracep->declBit(c+416,"top ls_u CSR_u mie_MTIE", false,-1);
        tracep->declQuad(c+417,"top ls_u CSR_u mip", false,-1, 63,0);
        tracep->declBit(c+419,"top ls_u CSR_u mip_MTIP", false,-1);
        tracep->declBit(c+1210,"top ls_u clint_u clk", false,-1);
        tracep->declBit(c+1211,"top ls_u clint_u rst_n", false,-1);
        tracep->declQuad(c+743,"top ls_u clint_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1309,"top ls_u clint_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+745,"top ls_u clint_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+513,"top ls_u clint_u clint_axi_arready", false,-1);
        tracep->declBus(c+746,"top ls_u clint_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+514,"top ls_u clint_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+515,"top ls_u clint_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+747,"top ls_u clint_u clint_axi_rready", false,-1);
        tracep->declBus(c+516,"top ls_u clint_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+517,"top ls_u clint_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1309,"top ls_u clint_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+748,"top ls_u clint_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+519,"top ls_u clint_u clint_axi_awready", false,-1);
        tracep->declQuad(c+749,"top ls_u clint_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+520,"top ls_u clint_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+751,"top ls_u clint_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+521,"top ls_u clint_u clint_axi_wready", false,-1);
        tracep->declBus(c+514,"top ls_u clint_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+522,"top ls_u clint_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+752,"top ls_u clint_u clint_axi_bready", false,-1);
        tracep->declBit(c+382,"top ls_u clint_u hart0_time_int_o", false,-1);
        tracep->declQuad(c+558,"top ls_u clint_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+519,"top ls_u clint_u axi_awready", false,-1);
        tracep->declBit(c+521,"top ls_u clint_u axi_wready", false,-1);
        tracep->declBus(c+560,"top ls_u clint_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+522,"top ls_u clint_u axi_bvalid", false,-1);
        tracep->declQuad(c+561,"top ls_u clint_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+513,"top ls_u clint_u axi_arready", false,-1);
        tracep->declBus(c+514,"top ls_u clint_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+515,"top ls_u clint_u axi_rvalid", false,-1);
        tracep->declBit(c+563,"top ls_u clint_u aw_en", false,-1);
        tracep->declQuad(c+30,"top ls_u clint_u reg_data_out", false,-1, 63,0);
        tracep->declQuad(c+420,"top ls_u clint_u mtime", false,-1, 63,0);
        tracep->declQuad(c+422,"top ls_u clint_u mtimecmp", false,-1, 63,0);
        tracep->declBit(c+986,"top ls_u clint_u mtimeWrEn", false,-1);
        tracep->declBit(c+987,"top ls_u clint_u mtimecmpWrEn", false,-1);
        tracep->declBit(c+988,"top ls_u clint_u slv_reg_wren", false,-1);
        tracep->declBit(c+633,"top ls_u clint_u slv_reg_rden", false,-1);
        tracep->declBus(c+424,"top ls_u clint_u byte_index", false,-1, 31,0);
        tracep->declBit(c+1210,"top Dcache_u clk", false,-1);
        tracep->declBit(c+1211,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+989,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+990,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+991,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+992,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+454,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+728,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+1110,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+1079,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+1111,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+1112,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBus(c+729,"top Dcache_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top Dcache_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+755,"top Dcache_u fence_clean", false,-1);
        tracep->declBit(c+756,"top Dcache_u clear_Icache", false,-1);
        tracep->declBit(c+757,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+35,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+657,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1107,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+993,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+1294,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declBus(c+453,"top Dcache_u cacheRdSize_o", false,-1, 2,0);
        tracep->declQuad(c+1105,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+1115,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+763,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+758,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+625,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+657,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+764,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+765,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+1309,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+1336,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+1337,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+1338,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+1339,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+1340,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+1363,"top Dcache_u clean", false,-1, 2,0);
        tracep->declBus(c+994,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+1130,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+995,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+996,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+997,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+564,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+568,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+572,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+576,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+998,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+1002,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+998,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+1002,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+1006,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+1007,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+1008,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+1009,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+1010,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+1012,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+1013,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+1014,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+425,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+427,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+486,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+487,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+1295,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+1296,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+1297,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+1298,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+488,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+489,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+1364,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+1365,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+429,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+430,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+431,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+1015,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+580,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+588,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+1299,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+1301,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+1016,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+1017,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+1018,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+596,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+432,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+1020,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+1021,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+1029,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+433,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+434,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+1030,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+435,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+436,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+438,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+1032,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+1033,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+1034,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+1036,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+1037,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+1039,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+1043,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+1039,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+1043,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+1047,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+1048,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+440,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+1303,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+441,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+442,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+441,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+1304,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+1049,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+490,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+1131,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+491,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+443,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+444,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+1050,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+445,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBit(c+1051,"top Dcache_u cleanEn", false,-1);
        tracep->declBit(c+756,"top Dcache_u clean_OK", false,-1);
        tracep->declBus(c+1052,"top Dcache_u cleanCnt", false,-1, 6,0);
        tracep->declBit(c+1053,"top Dcache_u cleanWrValid", false,-1);
        tracep->declBus(c+492,"top Dcache_u cleanWrAddr", false,-1, 31,0);
        tracep->declBit(c+447,"top Dcache_u oneCycleDelay", false,-1);
        tracep->declArray(c+634,"top Dcache_u cleanData", false,-1, 255,0);
        tracep->declBus(c+1343,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1305,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1344,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1343,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+564,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+1210,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+1080,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+1054,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+1055,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+1132,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+998,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+1081,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+1006,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+1039,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1343,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1305,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1344,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1343,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+568,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+1210,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+1080,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+1054,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+1059,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+1132,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+1002,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+1081,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+1006,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+1043,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1343,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1305,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1344,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1343,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+572,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+1210,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+1082,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+1063,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+1055,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+1133,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+998,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+1083,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+1007,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+1039,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1343,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1305,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1344,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1343,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+576,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+1210,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+1082,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+1063,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+1059,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+1133,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+1002,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+1083,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+1007,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+1043,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1305,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1305,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1305,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1305,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1306,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1307,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1308,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1210,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+1211,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+757,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+35,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+1105,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+759,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+657,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+1107,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+1115,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+758,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+763,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+625,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+657,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+765,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+453,"top axi_ls_u loadSize", false,-1, 2,0);
        tracep->declBus(c+764,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+761,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+1270,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+656,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+509,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1322,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1310,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+657,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+511,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1318,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1311,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+1323,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1103,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+658,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+659,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+512,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+661,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+1310,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+662,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+1271,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+1272,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1273,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1274,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1275,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1309,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1322,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1310,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+657,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+453,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1318,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1311,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+1319,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1312,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1324,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+1104,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+1276,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1105,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1107,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+1102,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1325,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+1353,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+1318,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+1354,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+1355,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+1064,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+1134,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+656,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+658,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+662,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+1366,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+661,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+509,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+597,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+605,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+511,"top axi_ls_u wrSize_reg", false,-1, 2,0);
        tracep->declBus(c+606,"top axi_ls_u storeLenth_reg", false,-1, 7,0);
        tracep->declBus(c+448,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+1353,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+1318,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+1354,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+1355,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+449,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+1135,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+6,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+9,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+1356,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1322,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+1311,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+1367,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+1338,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+607,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+1210,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+1211,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+1277,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+19,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+1110,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+730,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+736,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+732,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+734,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+740,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+741,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+1368,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1358,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+1210,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+1211,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+1110,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+1136,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+1065,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+730,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+736,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+732,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+734,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+741,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+739,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+737,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+1210,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+1211,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+696,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+665,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+693,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+694,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+668,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+1109,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+1111,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u in_intr_ls", false,-1);
        tracep->declBit(c+754,"top pipline_ctrl_u fence_id", false,-1);
        tracep->declBit(c+755,"top pipline_ctrl_u fence_ex", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u fence_ls", false,-1);
        tracep->declBit(c+1108,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+1076,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+1077,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+1078,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+1110,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+1110,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+697,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+725,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u ls_flush", false,-1);
        tracep->declBit(c+1075,"top pipline_ctrl_u fenceInPip", false,-1);
        tracep->declBus(c+1369,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1369,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+647,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+502,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+1210,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+1211,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+499,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+1309,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+651,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+498,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+622,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+506,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+652,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+505,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+508,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+507,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+653,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+645,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+1309,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+644,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+493,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+496,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+495,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+494,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+650,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+608,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+498,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+505,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+508,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+507,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+610,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+493,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+496,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+495,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+494,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+1370,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+1371,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+612,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+614,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+616,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+618,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+642,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+643,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+1372,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+1374,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+620,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp387;
    VlWide<3>/*95:0*/ __Vtemp390;
    VlWide<3>/*95:0*/ __Vtemp393;
    VlWide<3>/*95:0*/ __Vtemp396;
    VlWide<3>/*95:0*/ __Vtemp399;
    VlWide<5>/*159:0*/ __Vtemp400;
    VlWide<5>/*159:0*/ __Vtemp405;
    VlWide<5>/*159:0*/ __Vtemp410;
    VlWide<5>/*159:0*/ __Vtemp414;
    VlWide<3>/*95:0*/ __Vtemp418;
    VlWide<5>/*159:0*/ __Vtemp419;
    VlWide<5>/*159:0*/ __Vtemp424;
    VlWide<5>/*159:0*/ __Vtemp425;
    VlWide<5>/*159:0*/ __Vtemp430;
    VlWide<5>/*159:0*/ __Vtemp431;
    VlWide<5>/*159:0*/ __Vtemp435;
    VlWide<5>/*159:0*/ __Vtemp436;
    VlWide<3>/*95:0*/ __Vtemp440;
    VlWide<5>/*159:0*/ __Vtemp441;
    VlWide<3>/*95:0*/ __Vtemp444;
    VlWide<3>/*95:0*/ __Vtemp447;
    VlWide<3>/*95:0*/ __Vtemp450;
    VlWide<3>/*95:0*/ __Vtemp453;
    VlWide<3>/*95:0*/ __Vtemp456;
    VlWide<5>/*159:0*/ __Vtemp457;
    VlWide<5>/*159:0*/ __Vtemp462;
    VlWide<5>/*159:0*/ __Vtemp467;
    VlWide<5>/*159:0*/ __Vtemp471;
    VlWide<3>/*95:0*/ __Vtemp475;
    VlWide<5>/*159:0*/ __Vtemp476;
    VlWide<5>/*159:0*/ __Vtemp481;
    VlWide<5>/*159:0*/ __Vtemp482;
    VlWide<5>/*159:0*/ __Vtemp487;
    VlWide<5>/*159:0*/ __Vtemp488;
    VlWide<5>/*159:0*/ __Vtemp492;
    VlWide<5>/*159:0*/ __Vtemp493;
    VlWide<5>/*159:0*/ __Vtemp494;
    VlWide<3>/*95:0*/ __Vtemp497;
    VlWide<5>/*159:0*/ __Vtemp498;
    VlWide<3>/*95:0*/ __Vtemp502;
    VlWide<5>/*159:0*/ __Vtemp503;
    VlWide<5>/*159:0*/ __Vtemp508;
    VlWide<5>/*159:0*/ __Vtemp509;
    VlWide<5>/*159:0*/ __Vtemp514;
    VlWide<5>/*159:0*/ __Vtemp515;
    VlWide<5>/*159:0*/ __Vtemp519;
    VlWide<5>/*159:0*/ __Vtemp520;
    VlWide<3>/*95:0*/ __Vtemp524;
    VlWide<5>/*159:0*/ __Vtemp525;
    VlWide<3>/*95:0*/ __Vtemp529;
    VlWide<5>/*159:0*/ __Vtemp530;
    VlWide<5>/*159:0*/ __Vtemp535;
    VlWide<5>/*159:0*/ __Vtemp536;
    VlWide<5>/*159:0*/ __Vtemp541;
    VlWide<5>/*159:0*/ __Vtemp542;
    VlWide<5>/*159:0*/ __Vtemp546;
    VlWide<5>/*159:0*/ __Vtemp547;
    VlWide<8>/*255:0*/ __Vtemp553;
    VlWide<8>/*255:0*/ __Vtemp558;
    VlWide<8>/*255:0*/ __Vtemp563;
    VlWide<8>/*255:0*/ __Vtemp567;
    VlWide<4>/*127:0*/ __Vtemp568;
    VlWide<4>/*127:0*/ __Vtemp569;
    VlWide<3>/*95:0*/ __Vtemp570;
    VlWide<3>/*95:0*/ __Vtemp572;
    VlWide<3>/*95:0*/ __Vtemp573;
    VlWide<3>/*95:0*/ __Vtemp574;
    VlWide<3>/*95:0*/ __Vtemp575;
    VlWide<3>/*95:0*/ __Vtemp576;
    VlWide<3>/*95:0*/ __Vtemp579;
    VlWide<3>/*95:0*/ __Vtemp580;
    VlWide<3>/*95:0*/ __Vtemp581;
    VlWide<3>/*95:0*/ __Vtemp582;
    VlWide<3>/*95:0*/ __Vtemp583;
    VlWide<3>/*95:0*/ __Vtemp586;
    VlWide<3>/*95:0*/ __Vtemp587;
    VlWide<3>/*95:0*/ __Vtemp588;
    VlWide<3>/*95:0*/ __Vtemp589;
    VlWide<3>/*95:0*/ __Vtemp592;
    VlWide<3>/*95:0*/ __Vtemp593;
    VlWide<3>/*95:0*/ __Vtemp595;
    VlWide<3>/*95:0*/ __Vtemp596;
    VlWide<3>/*95:0*/ __Vtemp597;
    VlWide<3>/*95:0*/ __Vtemp598;
    VlWide<3>/*95:0*/ __Vtemp601;
    VlWide<3>/*95:0*/ __Vtemp602;
    VlWide<3>/*95:0*/ __Vtemp604;
    VlWide<3>/*95:0*/ __Vtemp605;
    VlWide<3>/*95:0*/ __Vtemp606;
    VlWide<3>/*95:0*/ __Vtemp607;
    VlWide<3>/*95:0*/ __Vtemp610;
    VlWide<3>/*95:0*/ __Vtemp611;
    VlWide<3>/*95:0*/ __Vtemp613;
    VlWide<3>/*95:0*/ __Vtemp614;
    VlWide<3>/*95:0*/ __Vtemp615;
    VlWide<3>/*95:0*/ __Vtemp616;
    VlWide<3>/*95:0*/ __Vtemp618;
    VlWide<3>/*95:0*/ __Vtemp619;
    VlWide<3>/*95:0*/ __Vtemp620;
    VlWide<3>/*95:0*/ __Vtemp624;
    VlWide<3>/*95:0*/ __Vtemp625;
    VlWide<3>/*95:0*/ __Vtemp627;
    VlWide<3>/*95:0*/ __Vtemp628;
    VlWide<3>/*95:0*/ __Vtemp629;
    VlWide<3>/*95:0*/ __Vtemp633;
    VlWide<3>/*95:0*/ __Vtemp634;
    VlWide<3>/*95:0*/ __Vtemp636;
    VlWide<3>/*95:0*/ __Vtemp637;
    VlWide<3>/*95:0*/ __Vtemp638;
    VlWide<3>/*95:0*/ __Vtemp642;
    VlWide<3>/*95:0*/ __Vtemp643;
    VlWide<3>/*95:0*/ __Vtemp645;
    VlWide<3>/*95:0*/ __Vtemp646;
    VlWide<3>/*95:0*/ __Vtemp647;
    VlWide<9>/*287:0*/ __Vtemp651;
    VlWide<3>/*95:0*/ __Vtemp654;
    VlWide<3>/*95:0*/ __Vtemp655;
    VlWide<3>/*95:0*/ __Vtemp657;
    VlWide<3>/*95:0*/ __Vtemp658;
    VlWide<3>/*95:0*/ __Vtemp659;
    VlWide<3>/*95:0*/ __Vtemp660;
    VlWide<3>/*95:0*/ __Vtemp663;
    VlWide<3>/*95:0*/ __Vtemp664;
    VlWide<3>/*95:0*/ __Vtemp666;
    VlWide<3>/*95:0*/ __Vtemp667;
    VlWide<3>/*95:0*/ __Vtemp668;
    VlWide<3>/*95:0*/ __Vtemp669;
    VlWide<3>/*95:0*/ __Vtemp672;
    VlWide<3>/*95:0*/ __Vtemp673;
    VlWide<3>/*95:0*/ __Vtemp675;
    VlWide<3>/*95:0*/ __Vtemp676;
    VlWide<3>/*95:0*/ __Vtemp677;
    VlWide<3>/*95:0*/ __Vtemp678;
    VlWide<3>/*95:0*/ __Vtemp680;
    VlWide<3>/*95:0*/ __Vtemp681;
    VlWide<3>/*95:0*/ __Vtemp682;
    VlWide<3>/*95:0*/ __Vtemp686;
    VlWide<3>/*95:0*/ __Vtemp687;
    VlWide<3>/*95:0*/ __Vtemp689;
    VlWide<3>/*95:0*/ __Vtemp690;
    VlWide<3>/*95:0*/ __Vtemp691;
    VlWide<3>/*95:0*/ __Vtemp695;
    VlWide<3>/*95:0*/ __Vtemp696;
    VlWide<3>/*95:0*/ __Vtemp698;
    VlWide<3>/*95:0*/ __Vtemp699;
    VlWide<3>/*95:0*/ __Vtemp700;
    VlWide<3>/*95:0*/ __Vtemp704;
    VlWide<3>/*95:0*/ __Vtemp705;
    VlWide<3>/*95:0*/ __Vtemp707;
    VlWide<3>/*95:0*/ __Vtemp708;
    VlWide<3>/*95:0*/ __Vtemp709;
    VlWide<9>/*287:0*/ __Vtemp713;
    VlWide<4>/*127:0*/ __Vtemp716;
    VlWide<4>/*127:0*/ __Vtemp723;
    VlWide<4>/*127:0*/ __Vtemp726;
    VlWide<4>/*127:0*/ __Vtemp733;
    VlWide<4>/*127:0*/ __Vtemp736;
    VlWide<4>/*127:0*/ __Vtemp745;
    VlWide<4>/*127:0*/ __Vtemp748;
    VlWide<4>/*127:0*/ __Vtemp757;
    VlWide<4>/*127:0*/ __Vtemp760;
    VlWide<4>/*127:0*/ __Vtemp770;
    VlWide<4>/*127:0*/ __Vtemp773;
    VlWide<4>/*127:0*/ __Vtemp783;
    VlWide<10>/*319:0*/ __Vtemp788;
    VlWide<4>/*127:0*/ __Vtemp789;
    VlWide<4>/*127:0*/ __Vtemp790;
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
        __Vtemp387[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp387[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp387[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        tracep->fullWData(oldp+71,(__Vtemp387),66);
        __Vtemp390[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp390[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp390[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                >> 4U));
        tracep->fullWData(oldp+74,(__Vtemp390),66);
        __Vtemp393[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp393[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp393[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                >> 2U));
        tracep->fullWData(oldp+77,(__Vtemp393),66);
        __Vtemp396[0U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp396[1U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp396[2U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        tracep->fullWData(oldp+80,(__Vtemp396),66);
        __Vtemp399[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp399[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp399[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        VL_EXTEND_WW(130,66, __Vtemp400, __Vtemp399);
        tracep->fullWData(oldp+83,(__Vtemp400),130);
        __Vtemp405[0U] = 0U;
        __Vtemp405[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp405[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp405[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                             >> 5U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                           >> 4U)));
        __Vtemp405[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 5U)))) 
                          >> 0x1eU);
        tracep->fullWData(oldp+88,(__Vtemp405),130);
        __Vtemp410[0U] = 0U;
        __Vtemp410[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp410[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp410[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 3U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                           >> 2U)));
        __Vtemp410[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                            >> 3U)))) 
                          >> 0x1eU);
        tracep->fullWData(oldp+93,(__Vtemp410),130);
        __Vtemp414[0U] = 0U;
        __Vtemp414[1U] = 0U;
        __Vtemp414[2U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp414[3U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp414[4U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        tracep->fullWData(oldp+98,(__Vtemp414),130);
        tracep->fullWData(oldp+103,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2),130);
        tracep->fullWData(oldp+108,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout),264);
        __Vtemp418[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp418[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp418[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        VL_EXTEND_WW(130,66, __Vtemp419, __Vtemp418);
        __Vtemp424[0U] = 0U;
        __Vtemp424[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp424[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp424[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                             >> 5U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                           >> 4U)));
        __Vtemp424[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 5U)))) 
                          >> 0x1eU);
        VL_ADD_W(5, __Vtemp425, __Vtemp419, __Vtemp424);
        __Vtemp430[0U] = 0U;
        __Vtemp430[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp430[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp430[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 3U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                           >> 2U)));
        __Vtemp430[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                            >> 3U)))) 
                          >> 0x1eU);
        VL_ADD_W(5, __Vtemp431, __Vtemp425, __Vtemp430);
        __Vtemp435[0U] = 0U;
        __Vtemp435[1U] = 0U;
        __Vtemp435[2U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp435[3U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp435[4U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        VL_ADD_W(5, __Vtemp436, __Vtemp431, __Vtemp435);
        tracep->fullQData(oldp+117,((((QData)((IData)(
                                                      __Vtemp436[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp436[2U])))),64);
        __Vtemp440[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp440[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp440[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        VL_EXTEND_WW(130,66, __Vtemp441, __Vtemp440);
        tracep->fullQData(oldp+119,((((((QData)((IData)(
                                                        __Vtemp441[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp441[0U]))) 
                                      + ((QData)((IData)(
                                                         ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                                           << 0x1cU) 
                                                          | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                             >> 4U)))) 
                                         << 0x20U)) 
                                     + ((QData)((IData)(
                                                        ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                                          << 0x1eU) 
                                                         | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                                            >> 2U)))) 
                                        << 0x20U))),64);
        __Vtemp444[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp444[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp444[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        tracep->fullWData(oldp+121,(__Vtemp444),66);
        __Vtemp447[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp447[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp447[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                >> 4U));
        tracep->fullWData(oldp+124,(__Vtemp447),66);
        __Vtemp450[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp450[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp450[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                >> 2U));
        tracep->fullWData(oldp+127,(__Vtemp450),66);
        __Vtemp453[0U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp453[1U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp453[2U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        tracep->fullWData(oldp+130,(__Vtemp453),66);
        __Vtemp456[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp456[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp456[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        VL_EXTEND_WW(130,66, __Vtemp457, __Vtemp456);
        tracep->fullWData(oldp+133,(__Vtemp457),130);
        __Vtemp462[0U] = 0U;
        __Vtemp462[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp462[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp462[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                             >> 5U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                           >> 4U)));
        __Vtemp462[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 5U)))) 
                          >> 0x1eU);
        tracep->fullWData(oldp+138,(__Vtemp462),130);
        __Vtemp467[0U] = 0U;
        __Vtemp467[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp467[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp467[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 3U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                           >> 2U)));
        __Vtemp467[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                            >> 3U)))) 
                          >> 0x1eU);
        tracep->fullWData(oldp+143,(__Vtemp467),130);
        __Vtemp471[0U] = 0U;
        __Vtemp471[1U] = 0U;
        __Vtemp471[2U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp471[3U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp471[4U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        tracep->fullWData(oldp+148,(__Vtemp471),130);
        __Vtemp475[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp475[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp475[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        VL_EXTEND_WW(130,66, __Vtemp476, __Vtemp475);
        __Vtemp481[0U] = 0U;
        __Vtemp481[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp481[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp481[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                             >> 5U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                           >> 4U)));
        __Vtemp481[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 5U)))) 
                          >> 0x1eU);
        VL_ADD_W(5, __Vtemp482, __Vtemp476, __Vtemp481);
        __Vtemp487[0U] = 0U;
        __Vtemp487[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp487[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp487[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 3U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                           >> 2U)));
        __Vtemp487[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                            >> 3U)))) 
                          >> 0x1eU);
        VL_ADD_W(5, __Vtemp488, __Vtemp482, __Vtemp487);
        __Vtemp492[0U] = 0U;
        __Vtemp492[1U] = 0U;
        __Vtemp492[2U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp492[3U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp492[4U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        VL_ADD_W(5, __Vtemp493, __Vtemp488, __Vtemp492);
        __Vtemp494[0U] = __Vtemp493[0U];
        __Vtemp494[1U] = __Vtemp493[1U];
        __Vtemp494[2U] = __Vtemp493[2U];
        __Vtemp494[3U] = __Vtemp493[3U];
        __Vtemp494[4U] = (3U & __Vtemp493[4U]);
        tracep->fullWData(oldp+153,(__Vtemp494),130);
        tracep->fullWData(oldp+158,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout),264);
        tracep->fullCData(oldp+167,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r),2);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r),64);
        tracep->fullWData(oldp+172,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg),128);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__restore_remainder),64);
        tracep->fullCData(oldp+178,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt),6);
        tracep->fullBit(oldp+179,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy));
        tracep->fullBit(oldp+180,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign));
        tracep->fullBit(oldp+181,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign));
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64),64);
        tracep->fullBit(oldp+186,(((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64 
                                                  >> 0x3fU)))
                                    ? 0U : 1U)));
        tracep->fullQData(oldp+187,((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign) 
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
        tracep->fullQData(oldp+189,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign)
                                      ? (1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s)),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s),64);
        tracep->fullQData(oldp+193,((((QData)((IData)(
                                                      vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])) 
                                      << 0x21U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U])) 
                                                    << 1U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                      >> 0x1fU)))),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64),64);
        tracep->fullBit(oldp+199,((1U & ((((((((((IData)(
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
        tracep->fullBit(oldp+200,(((((IData)((0xffffULL 
                                              == (0xffffULL 
                                                  & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                     & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px2)) 
                                    & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3)) 
                                   & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4))));
        tracep->fullBit(oldp+201,((IData)((0xffffULL 
                                           == (0xffffULL 
                                               & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64)))));
        tracep->fullBit(oldp+202,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px2));
        tracep->fullBit(oldp+203,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3));
        tracep->fullBit(oldp+204,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4));
        tracep->fullBit(oldp+205,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx1));
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx2));
        tracep->fullBit(oldp+207,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx3));
        tracep->fullBit(oldp+208,((1U & (((((((IData)(
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
        tracep->fullBit(oldp+209,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__c31));
        tracep->fullBit(oldp+210,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__c47));
        tracep->fullSData(oldp+211,((0xffffU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                 << 1U) 
                                                | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
                                                   >> 0x1fU)))),16);
        tracep->fullSData(oldp+212,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2))),16);
        tracep->fullSData(oldp+213,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))),16);
        tracep->fullSData(oldp+214,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64))),16);
        tracep->fullSData(oldp+215,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u1__s_16),16);
        tracep->fullBit(oldp+216,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx1));
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__c7));
        tracep->fullBit(oldp+218,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__c11));
        tracep->fullBit(oldp+219,((0xfU == (0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64)))));
        tracep->fullBit(oldp+220,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 4U))))));
        tracep->fullBit(oldp+221,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 8U))))));
        tracep->fullBit(oldp+222,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0xcU))))));
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx2));
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx3));
        tracep->fullBit(oldp+225,((1U & ((((IData)(
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
        tracep->fullCData(oldp+226,((0xfU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                              << 1U) 
                                             | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
                                                >> 0x1fU)))),4);
        tracep->fullCData(oldp+227,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2))),4);
        tracep->fullCData(oldp+228,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))),4);
        tracep->fullCData(oldp+229,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64))),4);
        tracep->fullCData(oldp+230,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+231,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+232,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 3U))),4);
        tracep->fullCData(oldp+233,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+234,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+235,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+236,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+237,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+238,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 7U))),4);
        tracep->fullCData(oldp+239,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+240,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+241,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+242,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+243,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+244,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0xbU))),4);
        tracep->fullCData(oldp+245,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+246,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+247,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+248,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+249,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u4__DOT__c_int),4);
        tracep->fullSData(oldp+250,((0xffffU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 0xfU))),16);
        tracep->fullSData(oldp+251,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+252,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+253,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+254,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u2__s_16),16);
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c3));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c7));
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c11));
        tracep->fullBit(oldp+258,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x10U))))));
        tracep->fullBit(oldp+259,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x14U))))));
        tracep->fullBit(oldp+260,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x18U))))));
        tracep->fullBit(oldp+261,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x1cU))))));
        tracep->fullBit(oldp+262,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx1));
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx2));
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx3));
        tracep->fullBit(oldp+265,((1U & ((((IData)(
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
        tracep->fullCData(oldp+266,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0xfU))),4);
        tracep->fullCData(oldp+267,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+268,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+269,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+270,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+271,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+272,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0x13U))),4);
        tracep->fullCData(oldp+273,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+274,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+275,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+276,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+277,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+278,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0x17U))),4);
        tracep->fullCData(oldp+279,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+280,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+281,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+282,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+283,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+284,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                             >> 0x1bU))),4);
        tracep->fullCData(oldp+285,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+286,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+287,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+288,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+289,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u4__DOT__c_int),4);
        tracep->fullSData(oldp+290,((0xffffU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                 << 1U) 
                                                | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                   >> 0x1fU)))),16);
        tracep->fullSData(oldp+291,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+292,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+293,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+294,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u3__s_16),16);
        tracep->fullBit(oldp+295,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c3));
        tracep->fullBit(oldp+296,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c7));
        tracep->fullBit(oldp+297,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c11));
        tracep->fullBit(oldp+298,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x20U))))));
        tracep->fullBit(oldp+299,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x24U))))));
        tracep->fullBit(oldp+300,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x28U))))));
        tracep->fullBit(oldp+301,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x2cU))))));
        tracep->fullBit(oldp+302,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx1));
        tracep->fullBit(oldp+303,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx2));
        tracep->fullBit(oldp+304,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx3));
        tracep->fullBit(oldp+305,((1U & ((((IData)(
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
        tracep->fullCData(oldp+306,((0xfU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                              << 1U) 
                                             | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 0x1fU)))),4);
        tracep->fullCData(oldp+307,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+308,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+309,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+310,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+311,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+312,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 3U))),4);
        tracep->fullCData(oldp+313,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+314,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+315,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+316,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+317,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+318,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 7U))),4);
        tracep->fullCData(oldp+319,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+320,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+321,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+322,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+323,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+324,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0xbU))),4);
        tracep->fullCData(oldp+325,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+326,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+327,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+328,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+329,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u4__DOT__c_int),4);
        tracep->fullSData(oldp+330,((0xffffU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                >> 0xfU))),16);
        tracep->fullSData(oldp+331,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+332,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+333,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+334,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u4__s_16),16);
        tracep->fullBit(oldp+335,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c3));
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c7));
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c11));
        tracep->fullBit(oldp+338,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x30U))))));
        tracep->fullBit(oldp+339,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x34U))))));
        tracep->fullBit(oldp+340,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x38U))))));
        tracep->fullBit(oldp+341,((0xfU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                            >> 0x3cU))))));
        tracep->fullBit(oldp+342,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx1));
        tracep->fullBit(oldp+343,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx2));
        tracep->fullBit(oldp+344,((1U & ((((IData)(
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
        tracep->fullBit(oldp+345,((1U & ((((IData)(
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
        tracep->fullCData(oldp+346,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0xfU))),4);
        tracep->fullCData(oldp+347,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+348,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+349,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+350,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u1__s_4),4);
        tracep->fullCData(oldp+351,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u1__DOT__c_int),4);
        tracep->fullCData(oldp+352,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0x13U))),4);
        tracep->fullCData(oldp+353,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+354,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+355,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+356,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u2__s_4),4);
        tracep->fullCData(oldp+357,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u2__DOT__c_int),4);
        tracep->fullCData(oldp+358,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0x17U))),4);
        tracep->fullCData(oldp+359,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+360,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+361,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+362,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u3__s_4),4);
        tracep->fullCData(oldp+363,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u3__DOT__c_int),4);
        tracep->fullCData(oldp+364,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                             >> 0x1bU))),4);
        tracep->fullCData(oldp+365,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+366,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+367,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+368,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u4__s_4),4);
        tracep->fullCData(oldp+369,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u4__DOT__c_int),4);
        tracep->fullCData(oldp+370,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0xaU))),5);
        tracep->fullBit(oldp+371,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+372,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+373,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),227);
        tracep->fullCData(oldp+381,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xfU))),3);
        tracep->fullBit(oldp+382,(vlSelf->top__DOT__ls_u__DOT__timr_int));
        tracep->fullBit(oldp+383,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 3U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+384,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 3U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+385,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
        tracep->fullBit(oldp+386,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
        tracep->fullBit(oldp+387,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
        tracep->fullBit(oldp+388,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
        tracep->fullBit(oldp+389,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
        tracep->fullBit(oldp+390,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+391,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+392,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+393,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC),64);
        tracep->fullBit(oldp+396,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw));
        tracep->fullBit(oldp+397,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs));
        tracep->fullBit(oldp+398,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc));
        tracep->fullBit(oldp+399,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 5U)))));
        tracep->fullBit(oldp+400,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+401,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+402,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+403,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+404,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullBit(oldp+405,(((0x304U == (0xfffU 
                                               & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                   << 9U) 
                                                  | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 0x17U)))) 
                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullBit(oldp+406,(((0x344U == (0xfffU 
                                               & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                   << 9U) 
                                                  | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 0x17U)))) 
                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullQData(oldp+407,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullBit(oldp+409,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                 >> 3U)))));
        tracep->fullQData(oldp+410,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U)))
                                      ? 0xbULL : ((IData)(vlSelf->top__DOT__in_intr_ls)
                                                   ? 0x8000000000000007ULL
                                                   : 0ULL))),64);
        tracep->fullQData(oldp+412,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie),64);
        tracep->fullBit(oldp+416,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                                 >> 7U)))));
        tracep->fullQData(oldp+417,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip),64);
        tracep->fullBit(oldp+419,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                 >> 7U)))));
        tracep->fullQData(oldp+420,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime),64);
        tracep->fullQData(oldp+422,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp),64);
        tracep->fullIData(oldp+424,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index),32);
        tracep->fullQData(oldp+425,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+427,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+429,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullIData(oldp+430,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [0x23U]),21);
        tracep->fullBit(oldp+431,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+432,(vlSelf->top__DOT__Dcache_u__DOT__missFlag));
        tracep->fullBit(oldp+433,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+434,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+435,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+436,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+440,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+441,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+442,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullBit(oldp+443,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
        tracep->fullBit(oldp+444,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullQData(oldp+445,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
        tracep->fullBit(oldp+447,(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay));
        tracep->fullCData(oldp+448,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+449,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+450,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+451,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+452,((((0xaU != (0xfU 
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
        tracep->fullCData(oldp+453,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullQData(oldp+454,((((0U == (0x1fU 
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
        tracep->fullIData(oldp+456,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullBit(oldp+457,((((3U == (0x7fU & 
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
        tracep->fullCData(oldp+458,((0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
        tracep->fullQData(oldp+459,((QData)((IData)(
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
        tracep->fullQData(oldp+461,(((0x10U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
                                      : ((0U == (3U 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
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
                                                               vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[2U])))))),64);
        tracep->fullQData(oldp+463,(((0U == (3U & (
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
        __Vtemp497[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp497[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp497[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        VL_EXTEND_WW(130,66, __Vtemp498, __Vtemp497);
        __Vtemp502[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp502[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp502[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        VL_EXTEND_WW(130,66, __Vtemp503, __Vtemp502);
        __Vtemp508[0U] = 0U;
        __Vtemp508[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp508[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp508[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                             >> 5U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                           >> 4U)));
        __Vtemp508[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 5U)))) 
                          >> 0x1eU);
        VL_ADD_W(5, __Vtemp509, __Vtemp503, __Vtemp508);
        __Vtemp514[0U] = 0U;
        __Vtemp514[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp514[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp514[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 3U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                           >> 2U)));
        __Vtemp514[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                            >> 3U)))) 
                          >> 0x1eU);
        VL_ADD_W(5, __Vtemp515, __Vtemp509, __Vtemp514);
        __Vtemp519[0U] = 0U;
        __Vtemp519[1U] = 0U;
        __Vtemp519[2U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp519[3U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp519[4U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        VL_ADD_W(5, __Vtemp520, __Vtemp515, __Vtemp519);
        tracep->fullBit(oldp+465,((1U & (IData)(((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 2U)))
                                                  ? 
                                                 (((((QData)((IData)(
                                                                     __Vtemp498[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      __Vtemp498[0U]))) 
                                                   + 
                                                   ((QData)((IData)(
                                                                    ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                                                      << 0x1cU) 
                                                                     | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                        >> 4U)))) 
                                                    << 0x20U)) 
                                                  + 
                                                  ((QData)((IData)(
                                                                   ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                                                       >> 2U)))) 
                                                   << 0x20U))
                                                  : 
                                                 (((QData)((IData)(
                                                                   __Vtemp520[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp520[2U]))))))));
        __Vtemp524[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp524[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp524[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        VL_EXTEND_WW(130,66, __Vtemp525, __Vtemp524);
        __Vtemp529[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp529[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp529[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        VL_EXTEND_WW(130,66, __Vtemp530, __Vtemp529);
        __Vtemp535[0U] = 0U;
        __Vtemp535[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp535[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp535[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                             >> 5U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                           >> 4U)));
        __Vtemp535[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 5U)))) 
                          >> 0x1eU);
        VL_ADD_W(5, __Vtemp536, __Vtemp530, __Vtemp535);
        __Vtemp541[0U] = 0U;
        __Vtemp541[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp541[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp541[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 3U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                           >> 2U)));
        __Vtemp541[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                            >> 3U)))) 
                          >> 0x1eU);
        VL_ADD_W(5, __Vtemp542, __Vtemp536, __Vtemp541);
        __Vtemp546[0U] = 0U;
        __Vtemp546[1U] = 0U;
        __Vtemp546[2U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp546[3U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp546[4U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        VL_ADD_W(5, __Vtemp547, __Vtemp542, __Vtemp546);
        tracep->fullQData(oldp+466,(((0U == (3U & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 2U)))
                                      ? (((((QData)((IData)(
                                                            __Vtemp525[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp525[0U]))) 
                                          + ((QData)((IData)(
                                                             ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                                               << 0x1cU) 
                                                              | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                 >> 4U)))) 
                                             << 0x20U)) 
                                         + ((QData)((IData)(
                                                            ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                                              << 0x1eU) 
                                                             | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                                                >> 2U)))) 
                                            << 0x20U))
                                      : (((QData)((IData)(
                                                          __Vtemp547[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vtemp547[2U]))))),64);
        tracep->fullBit(oldp+468,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+469,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+470,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+471,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        if (vlSelf->top__DOT__in_intr_ls) {
            __Vtemp553[0U] = Vtop__ConstPool__CONST_d5724acc_0[0U];
            __Vtemp553[1U] = Vtop__ConstPool__CONST_d5724acc_0[1U];
            __Vtemp553[2U] = Vtop__ConstPool__CONST_d5724acc_0[2U];
            __Vtemp553[3U] = Vtop__ConstPool__CONST_d5724acc_0[3U];
            __Vtemp553[4U] = Vtop__ConstPool__CONST_d5724acc_0[4U];
            __Vtemp553[5U] = Vtop__ConstPool__CONST_d5724acc_0[5U];
            __Vtemp553[6U] = Vtop__ConstPool__CONST_d5724acc_0[6U];
            __Vtemp553[7U] = Vtop__ConstPool__CONST_d5724acc_0[7U];
        } else {
            __Vtemp553[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 3U) | ((4U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (3U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp553[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp553[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 3U));
            __Vtemp553[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp553[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp553[5U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp553[6U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp553[7U] = (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
        }
        tracep->fullWData(oldp+472,(__Vtemp553),227);
        tracep->fullBit(oldp+480,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x17U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+481,((((0x73U == (0x7fU 
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
        tracep->fullQData(oldp+482,((vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                                     | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+484,(((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullBit(oldp+486,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+487,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+488,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+489,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+490,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        tracep->fullBit(oldp+491,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullIData(oldp+492,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullBit(oldp+493,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+494,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+495,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+496,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+498,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+499,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg)),64);
        tracep->fullCData(oldp+501,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+502,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)))),3);
        tracep->fullCData(oldp+503,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+504,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 0xfU)),4);
        tracep->fullBit(oldp+505,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+506,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (0xffU 
                                              & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)))),8);
        tracep->fullBit(oldp+507,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+508,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+511,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
        tracep->fullCData(oldp+512,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+513,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready));
        tracep->fullCData(oldp+514,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp),2);
        tracep->fullBit(oldp+515,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+516,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                      : 0U)),3);
        tracep->fullQData(oldp+517,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+519,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready));
        tracep->fullCData(oldp+520,(vlSelf->top__DOT__clint_axi_wstrb),8);
        tracep->fullBit(oldp+521,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready));
        tracep->fullBit(oldp+522,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid));
        tracep->fullBit(oldp+523,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+524,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))));
        tracep->fullWData(oldp+525,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+529,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+533,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+537,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+541,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+549,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullIData(oldp+557,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullQData(oldp+558,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr),64);
        tracep->fullCData(oldp+560,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+561,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr),64);
        tracep->fullBit(oldp+563,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en));
        tracep->fullWData(oldp+564,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+568,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+572,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+576,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+580,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+588,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullBit(oldp+596,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullWData(oldp+597,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+605,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+606,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
        tracep->fullCData(oldp+607,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+608,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+610,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+612,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+614,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+616,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+618,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+620,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullCData(oldp+621,((((0xaU != (0xfU 
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
        tracep->fullQData(oldp+622,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o)),64);
        tracep->fullBit(oldp+624,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))));
        VL_EXTEND_WQ(256,64, __Vtemp558, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp563[0U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U]);
            __Vtemp563[1U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U]);
            __Vtemp563[2U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U]);
            __Vtemp563[3U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U]);
            __Vtemp563[4U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U]);
            __Vtemp563[5U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U]);
            __Vtemp563[6U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U]);
            __Vtemp563[7U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U]);
        } else {
            __Vtemp563[0U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp558[0U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
            __Vtemp563[1U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp558[1U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
            __Vtemp563[2U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp558[2U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
            __Vtemp563[3U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp558[3U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
            __Vtemp563[4U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp558[4U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
            __Vtemp563[5U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp558[5U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
            __Vtemp563[6U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp558[6U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
            __Vtemp563[7U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp558[7U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
        }
        tracep->fullWData(oldp+625,(__Vtemp563),256);
        tracep->fullBit(oldp+633,((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))));
        if ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))) {
            __Vtemp567[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U];
            __Vtemp567[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U];
            __Vtemp567[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U];
            __Vtemp567[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U];
            __Vtemp567[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U];
            __Vtemp567[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U];
            __Vtemp567[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U];
            __Vtemp567[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U];
        } else {
            __Vtemp567[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U];
            __Vtemp567[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U];
            __Vtemp567[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U];
            __Vtemp567[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U];
            __Vtemp567[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U];
            __Vtemp567[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U];
            __Vtemp567[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U];
            __Vtemp567[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U];
        }
        tracep->fullWData(oldp+634,(__Vtemp567),256);
        tracep->fullBit(oldp+642,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+643,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        tracep->fullBit(oldp+644,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+645,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr)),64);
        tracep->fullCData(oldp+647,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)))),3);
        tracep->fullCData(oldp+648,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+649,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 2U)),4);
        tracep->fullBit(oldp+650,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))));
        tracep->fullBit(oldp+651,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+652,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+653,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullCData(oldp+654,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+655,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                              ? 0U : 3U))
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+656,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+657,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+658,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+659,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+661,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+662,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+663,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+665,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+666,(((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+668,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+669,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+671,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+673,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+674,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+675,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+676,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+677,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+679,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+680,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+682,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+683,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+684,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+685,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+686,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+687,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+688,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+689,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+690,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+691,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+692,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+693,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+694,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+695,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+696,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+697,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+698,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullIData(oldp+700,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1cU))),32);
        tracep->fullQData(oldp+701,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+703,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+704,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x11U))),2);
        tracep->fullQData(oldp+705,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+707,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+709,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+711,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+713,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x17U))),5);
        tracep->fullBit(oldp+714,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+715,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+716,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+717,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+718,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+719,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),3);
        tracep->fullBit(oldp+720,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullCData(oldp+721,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+722,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+723,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xbU))),5);
        tracep->fullCData(oldp+724,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 6U))),5);
        tracep->fullBit(oldp+725,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+726,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 4U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1cU))))));
        tracep->fullBit(oldp+727,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 2U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1eU))))));
        tracep->fullCData(oldp+728,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+729,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+730,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+732,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+734,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+736,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+737,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+739,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+740,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+741,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+743,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullBit(oldp+745,(vlSelf->top__DOT__clint_axi_arvalid));
        tracep->fullCData(oldp+746,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                      : 0U)),3);
        tracep->fullBit(oldp+747,(((2U == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+748,(vlSelf->top__DOT__clint_axi_awvalid));
        tracep->fullQData(oldp+749,(vlSelf->top__DOT__clint_axi_wdata),64);
        tracep->fullBit(oldp+751,(vlSelf->top__DOT__clint_axi_wvalid));
        tracep->fullBit(oldp+752,(vlSelf->top__DOT__clint_axi_bready));
        tracep->fullBit(oldp+753,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+754,(vlSelf->top__DOT__fence_id));
        tracep->fullBit(oldp+755,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+756,(vlSelf->top__DOT__Dcache_u__DOT__clean_OK));
        tracep->fullBit(oldp+757,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+758,(vlSelf->top__DOT__DcacheWrValid));
        tracep->fullQData(oldp+759,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+761,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+763,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+764,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullCData(oldp+765,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                      : 3U)),3);
        tracep->fullQData(oldp+766,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+768,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullBit(oldp+769,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+770,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+771,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))));
        tracep->fullIData(oldp+772,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+773,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+774,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+775,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        __Vtemp568[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp568[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp568[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp568[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+776,(__Vtemp568),128);
        __Vtemp569[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp569[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp569[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp569[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+780,(__Vtemp569),128);
        tracep->fullBit(oldp+784,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+785,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+786,(vlSelf->top__DOT__cache_dut__DOT__uncached));
        tracep->fullBit(oldp+787,(vlSelf->top__DOT__cache_dut__DOT__diffAddr));
        tracep->fullBit(oldp+788,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+789,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+790,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+791,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+792,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+793,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+801,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+802,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+803,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+804,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+805,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+806,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+807,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+808,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+810,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp570[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp570[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp570[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+811,(__Vtemp570),96);
        tracep->fullWData(oldp+814,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+817,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+818,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+819,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+820,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+821,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullBit(oldp+822,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U)))));
        tracep->fullQData(oldp+823,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+825,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+826,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+827,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+828,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+829,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+830,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullBit(oldp+831,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__fence_id))));
        tracep->fullWData(oldp+832,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),316);
        tracep->fullQData(oldp+842,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+844,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+846,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp572, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp573, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp574, __Vtemp572, __Vtemp573);
        VL_EXTEND_WI(65,1, __Vtemp575, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp576, __Vtemp574, __Vtemp575);
        tracep->fullBit(oldp+848,((1U & ((0x4000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp576[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+849,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+850,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+852,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+853,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+855,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+857,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+858,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullCData(oldp+859,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x17U))),3);
        tracep->fullQData(oldp+860,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp579, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp580, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp581, __Vtemp579, __Vtemp580);
        VL_EXTEND_WI(65,1, __Vtemp582, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp583, __Vtemp581, __Vtemp582);
        tracep->fullBit(oldp+862,((1U & __Vtemp583[2U])));
        tracep->fullBit(oldp+863,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+864,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+866,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+868,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullBit(oldp+870,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn));
        tracep->fullBit(oldp+871,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid));
        tracep->fullBit(oldp+872,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid));
        tracep->fullCData(oldp+873,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x17U))),4);
        tracep->fullBit(oldp+874,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+875,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+876,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+878,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+880,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+882,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+884,(((0x8000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+886,(((0x8000000U & 
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
        tracep->fullQData(oldp+888,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+890,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),2);
        tracep->fullBit(oldp+891,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__stateReg));
        tracep->fullBit(oldp+892,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q));
        tracep->fullBit(oldp+893,((1U & ((~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__stateReg)) 
                                         | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__stateReg) 
                                            & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))))));
        tracep->fullCData(oldp+894,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul_signed),2);
        tracep->fullBit(oldp+895,(1U));
        tracep->fullBit(oldp+896,((1U & ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul_signed) 
                                         >> 1U))));
        tracep->fullBit(oldp+897,((1U & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul_signed))));
        tracep->fullQData(oldp+898,((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1))),33);
        tracep->fullQData(oldp+900,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1),33);
        tracep->fullQData(oldp+902,((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),33);
        tracep->fullQData(oldp+904,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2),33);
        VL_EXTEND_WI(66,32, __Vtemp586, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1));
        VL_EXTEND_WI(66,32, __Vtemp587, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2));
        VL_MUL_W(3, __Vtemp588, __Vtemp586, __Vtemp587);
        __Vtemp589[0U] = __Vtemp588[0U];
        __Vtemp589[1U] = __Vtemp588[1U];
        __Vtemp589[2U] = (3U & __Vtemp588[2U]);
        tracep->fullWData(oldp+906,(__Vtemp589),66);
        VL_EXTENDS_WQ(66,33, __Vtemp592, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1)));
        __Vtemp593[0U] = __Vtemp592[0U];
        __Vtemp593[1U] = __Vtemp592[1U];
        __Vtemp593[2U] = (3U & __Vtemp592[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp595, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp596[0U] = __Vtemp595[0U];
        __Vtemp596[1U] = __Vtemp595[1U];
        __Vtemp596[2U] = (3U & __Vtemp595[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp597, __Vtemp593, __Vtemp596);
        __Vtemp598[0U] = __Vtemp597[0U];
        __Vtemp598[1U] = __Vtemp597[1U];
        __Vtemp598[2U] = (3U & __Vtemp597[2U]);
        tracep->fullWData(oldp+909,(__Vtemp598),66);
        VL_EXTENDS_WQ(66,33, __Vtemp601, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp602[0U] = __Vtemp601[0U];
        __Vtemp602[1U] = __Vtemp601[1U];
        __Vtemp602[2U] = (3U & __Vtemp601[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp604, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
        __Vtemp605[0U] = __Vtemp604[0U];
        __Vtemp605[1U] = __Vtemp604[1U];
        __Vtemp605[2U] = (3U & __Vtemp604[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp606, __Vtemp602, __Vtemp605);
        __Vtemp607[0U] = __Vtemp606[0U];
        __Vtemp607[1U] = __Vtemp606[1U];
        __Vtemp607[2U] = (3U & __Vtemp606[2U]);
        tracep->fullWData(oldp+912,(__Vtemp607),66);
        VL_EXTENDS_WQ(66,33, __Vtemp610, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp611[0U] = __Vtemp610[0U];
        __Vtemp611[1U] = __Vtemp610[1U];
        __Vtemp611[2U] = (3U & __Vtemp610[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp613, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp614[0U] = __Vtemp613[0U];
        __Vtemp614[1U] = __Vtemp613[1U];
        __Vtemp614[2U] = (3U & __Vtemp613[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp615, __Vtemp611, __Vtemp614);
        __Vtemp616[0U] = __Vtemp615[0U];
        __Vtemp616[1U] = __Vtemp615[1U];
        __Vtemp616[2U] = (3U & __Vtemp615[2U]);
        tracep->fullWData(oldp+915,(__Vtemp616),66);
        tracep->fullBit(oldp+918,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set));
        tracep->fullBit(oldp+919,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                   | (IData)(vlSelf->top__DOT__ex_flush))));
        tracep->fullBit(oldp+920,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set) 
                                   | (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                       & (~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                             | (IData)(vlSelf->top__DOT__ex_flush)))) 
                                      & (~ (IData)(vlSelf->top__DOT__ex_flush))))));
        VL_EXTEND_WI(66,32, __Vtemp618, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1));
        VL_EXTEND_WI(66,32, __Vtemp619, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2));
        VL_MUL_W(3, __Vtemp620, __Vtemp618, __Vtemp619);
        VL_EXTENDS_WQ(66,33, __Vtemp624, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1)));
        __Vtemp625[0U] = __Vtemp624[0U];
        __Vtemp625[1U] = __Vtemp624[1U];
        __Vtemp625[2U] = (3U & __Vtemp624[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp627, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp628[0U] = __Vtemp627[0U];
        __Vtemp628[1U] = __Vtemp627[1U];
        __Vtemp628[2U] = (3U & __Vtemp627[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp629, __Vtemp625, __Vtemp628);
        VL_EXTENDS_WQ(66,33, __Vtemp633, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp634[0U] = __Vtemp633[0U];
        __Vtemp634[1U] = __Vtemp633[1U];
        __Vtemp634[2U] = (3U & __Vtemp633[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp636, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
        __Vtemp637[0U] = __Vtemp636[0U];
        __Vtemp637[1U] = __Vtemp636[1U];
        __Vtemp637[2U] = (3U & __Vtemp636[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp638, __Vtemp634, __Vtemp637);
        VL_EXTENDS_WQ(66,33, __Vtemp642, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp643[0U] = __Vtemp642[0U];
        __Vtemp643[1U] = __Vtemp642[1U];
        __Vtemp643[2U] = (3U & __Vtemp642[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp645, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp646[0U] = __Vtemp645[0U];
        __Vtemp646[1U] = __Vtemp645[1U];
        __Vtemp646[2U] = (3U & __Vtemp645[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp647, __Vtemp643, __Vtemp646);
        __Vtemp651[0U] = __Vtemp647[0U];
        __Vtemp651[1U] = __Vtemp647[1U];
        __Vtemp651[2U] = ((__Vtemp638[0U] << 2U) | 
                          (3U & __Vtemp647[2U]));
        __Vtemp651[3U] = ((__Vtemp638[0U] >> 0x1eU) 
                          | (__Vtemp638[1U] << 2U));
        __Vtemp651[4U] = ((__Vtemp629[0U] << 4U) | 
                          ((__Vtemp638[1U] >> 0x1eU) 
                           | (0xcU & (__Vtemp638[2U] 
                                      << 2U))));
        __Vtemp651[5U] = ((__Vtemp629[0U] >> 0x1cU) 
                          | (__Vtemp629[1U] << 4U));
        __Vtemp651[6U] = ((__Vtemp620[0U] << 6U) | 
                          ((__Vtemp629[1U] >> 0x1cU) 
                           | (0x30U & (__Vtemp629[2U] 
                                       << 4U))));
        __Vtemp651[7U] = ((__Vtemp620[0U] >> 0x1aU) 
                          | (__Vtemp620[1U] << 6U));
        __Vtemp651[8U] = ((__Vtemp620[1U] >> 0x1aU) 
                          | (0xc0U & (__Vtemp620[2U] 
                                      << 6U)));
        tracep->fullWData(oldp+921,(__Vtemp651),264);
        tracep->fullBit(oldp+930,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__stateReg));
        tracep->fullBit(oldp+931,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_stg1_vld_q));
        tracep->fullBit(oldp+932,((1U & ((~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__stateReg)) 
                                         | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__stateReg) 
                                            & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_stg1_vld_q))))));
        tracep->fullCData(oldp+933,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul_signed),2);
        tracep->fullBit(oldp+934,(1U));
        tracep->fullBit(oldp+935,((1U & ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul_signed) 
                                         >> 1U))));
        tracep->fullBit(oldp+936,((1U & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul_signed))));
        tracep->fullQData(oldp+937,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_hi_src1),33);
        tracep->fullQData(oldp+939,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_hi_src2),33);
        VL_EXTENDS_WQ(66,33, __Vtemp654, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1)));
        __Vtemp655[0U] = __Vtemp654[0U];
        __Vtemp655[1U] = __Vtemp654[1U];
        __Vtemp655[2U] = (3U & __Vtemp654[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp657, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp658[0U] = __Vtemp657[0U];
        __Vtemp658[1U] = __Vtemp657[1U];
        __Vtemp658[2U] = (3U & __Vtemp657[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp659, __Vtemp655, __Vtemp658);
        __Vtemp660[0U] = __Vtemp659[0U];
        __Vtemp660[1U] = __Vtemp659[1U];
        __Vtemp660[2U] = (3U & __Vtemp659[2U]);
        tracep->fullWData(oldp+941,(__Vtemp660),66);
        VL_EXTENDS_WQ(66,33, __Vtemp663, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp664[0U] = __Vtemp663[0U];
        __Vtemp664[1U] = __Vtemp663[1U];
        __Vtemp664[2U] = (3U & __Vtemp663[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp666, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
        __Vtemp667[0U] = __Vtemp666[0U];
        __Vtemp667[1U] = __Vtemp666[1U];
        __Vtemp667[2U] = (3U & __Vtemp666[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp668, __Vtemp664, __Vtemp667);
        __Vtemp669[0U] = __Vtemp668[0U];
        __Vtemp669[1U] = __Vtemp668[1U];
        __Vtemp669[2U] = (3U & __Vtemp668[2U]);
        tracep->fullWData(oldp+944,(__Vtemp669),66);
        VL_EXTENDS_WQ(66,33, __Vtemp672, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp673[0U] = __Vtemp672[0U];
        __Vtemp673[1U] = __Vtemp672[1U];
        __Vtemp673[2U] = (3U & __Vtemp672[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp675, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp676[0U] = __Vtemp675[0U];
        __Vtemp676[1U] = __Vtemp675[1U];
        __Vtemp676[2U] = (3U & __Vtemp675[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp677, __Vtemp673, __Vtemp676);
        __Vtemp678[0U] = __Vtemp677[0U];
        __Vtemp678[1U] = __Vtemp677[1U];
        __Vtemp678[2U] = (3U & __Vtemp677[2U]);
        tracep->fullWData(oldp+947,(__Vtemp678),66);
        tracep->fullBit(oldp+950,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_stg1_vld_set));
        tracep->fullBit(oldp+951,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                   | (IData)(vlSelf->top__DOT__ex_flush))));
        tracep->fullBit(oldp+952,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_stg1_vld_set) 
                                   | (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                       & (~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                             | (IData)(vlSelf->top__DOT__ex_flush)))) 
                                      & (~ (IData)(vlSelf->top__DOT__ex_flush))))));
        VL_EXTEND_WI(66,32, __Vtemp680, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1));
        VL_EXTEND_WI(66,32, __Vtemp681, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2));
        VL_MUL_W(3, __Vtemp682, __Vtemp680, __Vtemp681);
        VL_EXTENDS_WQ(66,33, __Vtemp686, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1)));
        __Vtemp687[0U] = __Vtemp686[0U];
        __Vtemp687[1U] = __Vtemp686[1U];
        __Vtemp687[2U] = (3U & __Vtemp686[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp689, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp690[0U] = __Vtemp689[0U];
        __Vtemp690[1U] = __Vtemp689[1U];
        __Vtemp690[2U] = (3U & __Vtemp689[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp691, __Vtemp687, __Vtemp690);
        VL_EXTENDS_WQ(66,33, __Vtemp695, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp696[0U] = __Vtemp695[0U];
        __Vtemp696[1U] = __Vtemp695[1U];
        __Vtemp696[2U] = (3U & __Vtemp695[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp698, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
        __Vtemp699[0U] = __Vtemp698[0U];
        __Vtemp699[1U] = __Vtemp698[1U];
        __Vtemp699[2U] = (3U & __Vtemp698[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp700, __Vtemp696, __Vtemp699);
        VL_EXTENDS_WQ(66,33, __Vtemp704, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp705[0U] = __Vtemp704[0U];
        __Vtemp705[1U] = __Vtemp704[1U];
        __Vtemp705[2U] = (3U & __Vtemp704[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp707, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp708[0U] = __Vtemp707[0U];
        __Vtemp708[1U] = __Vtemp707[1U];
        __Vtemp708[2U] = (3U & __Vtemp707[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp709, __Vtemp705, __Vtemp708);
        __Vtemp713[0U] = __Vtemp709[0U];
        __Vtemp713[1U] = __Vtemp709[1U];
        __Vtemp713[2U] = ((__Vtemp700[0U] << 2U) | 
                          (3U & __Vtemp709[2U]));
        __Vtemp713[3U] = ((__Vtemp700[0U] >> 0x1eU) 
                          | (__Vtemp700[1U] << 2U));
        __Vtemp713[4U] = ((__Vtemp691[0U] << 4U) | 
                          ((__Vtemp700[1U] >> 0x1eU) 
                           | (0xcU & (__Vtemp700[2U] 
                                      << 2U))));
        __Vtemp713[5U] = ((__Vtemp691[0U] >> 0x1cU) 
                          | (__Vtemp691[1U] << 4U));
        __Vtemp713[6U] = ((__Vtemp682[0U] << 6U) | 
                          ((__Vtemp691[1U] >> 0x1cU) 
                           | (0x30U & (__Vtemp691[2U] 
                                       << 4U))));
        __Vtemp713[7U] = ((__Vtemp682[0U] >> 0x1aU) 
                          | (__Vtemp682[1U] << 6U));
        __Vtemp713[8U] = ((__Vtemp682[1U] >> 0x1aU) 
                          | (0xc0U & (__Vtemp682[2U] 
                                      << 6U)));
        tracep->fullWData(oldp+953,(__Vtemp713),264);
        tracep->fullQData(oldp+962,((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src1))),64);
        tracep->fullQData(oldp+964,((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src2))),64);
        tracep->fullCData(oldp+966,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 8U))),3);
        tracep->fullQData(oldp+967,(((((QData)((IData)(
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
        tracep->fullQData(oldp+969,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU))))),64);
        tracep->fullBit(oldp+971,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+972,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+973,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+974,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+976,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+978,((1U & ((0x400U & 
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
        tracep->fullBit(oldp+979,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+980,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+981,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullQData(oldp+982,(vlSelf->top__DOT__ls_u__DOT__csr_wr_data),64);
        tracep->fullQData(oldp+984,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullBit(oldp+986,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn));
        tracep->fullBit(oldp+987,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn));
        tracep->fullBit(oldp+988,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren));
        tracep->fullIData(oldp+989,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+990,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+991,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+992,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 4U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1cU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 2U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1eU)))))));
        tracep->fullIData(oldp+993,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+994,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+995,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+996,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+997,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp716, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp723[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp723[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp723[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp723[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp723[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp716[0U])
                               : 0U);
            __Vtemp723[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp716[1U])
                               : 0U);
            __Vtemp723[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp716[2U])
                               : 0U);
            __Vtemp723[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp716[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+998,(__Vtemp723),128);
        VL_EXTEND_WQ(128,64, __Vtemp726, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp733[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp733[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp733[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp733[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp733[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp726[0U])
                               : 0U);
            __Vtemp733[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp726[1U])
                               : 0U);
            __Vtemp733[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp726[2U])
                               : 0U);
            __Vtemp733[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp726[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+1002,(__Vtemp733),128);
        tracep->fullBit(oldp+1006,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+1007,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+1008,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+1009,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+1010,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+1012,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+1013,((0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))),6);
        tracep->fullIData(oldp+1014,((0x1fffffU & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0xbU)))),21);
        tracep->fullBit(oldp+1015,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+1016,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+1017,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+1018,((((QData)((IData)(
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
        tracep->fullCData(oldp+1020,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+1021,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+1029,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+1030,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullBit(oldp+1032,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+1033,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+1034,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+1036,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+1037,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp736, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp745[0U] = 0xffffffffU;
            __Vtemp745[1U] = 0xffffffffU;
            __Vtemp745[2U] = 0xffffffffU;
            __Vtemp745[3U] = 0xffffffffU;
        } else {
            __Vtemp745[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp736[0U])
                                   : 0U) : 0U);
            __Vtemp745[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp736[1U])
                                   : 0U) : 0U);
            __Vtemp745[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp736[2U])
                                   : 0U) : 0U);
            __Vtemp745[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp736[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+1039,(__Vtemp745),128);
        VL_EXTEND_WQ(128,64, __Vtemp748, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp757[0U] = 0xffffffffU;
            __Vtemp757[1U] = 0xffffffffU;
            __Vtemp757[2U] = 0xffffffffU;
            __Vtemp757[3U] = 0xffffffffU;
        } else {
            __Vtemp757[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp748[0U])
                                   : 0U) : 0U);
            __Vtemp757[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp748[1U])
                                   : 0U) : 0U);
            __Vtemp757[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp748[2U])
                                   : 0U) : 0U);
            __Vtemp757[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp748[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+1043,(__Vtemp757),128);
        tracep->fullBit(oldp+1047,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U))) 
                                    & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+1048,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))) 
                                    & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+1049,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullIData(oldp+1050,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
        tracep->fullBit(oldp+1051,((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullCData(oldp+1052,(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt),7);
        tracep->fullBit(oldp+1053,(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid));
        tracep->fullBit(oldp+1054,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        VL_EXTEND_WQ(128,64, __Vtemp760, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp770[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp760[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp770[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp760[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp770[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp760[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp770[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp760[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+1055,(__Vtemp770),128);
        VL_EXTEND_WQ(128,64, __Vtemp773, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp783[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp773[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp783[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp773[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp783[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp773[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp783[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp773[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+1059,(__Vtemp783),128);
        tracep->fullBit(oldp+1063,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+1064,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+1065,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+1075,((1U & ((IData)(vlSelf->top__DOT__fence_id) 
                                          | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullBit(oldp+1076,((1U & (~ (((((((IData)(vlSelf->top__DOT__fence_id) 
                                                  | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                 & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                                | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                               | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                              | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                             | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+1077,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                               | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                              | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                             | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+1078,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                              | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                             | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+1079,((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit) 
                                           | (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))))) 
                                    | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk)))));
        tracep->fullBit(oldp+1080,((1U & (~ (((((((
                                                   (((0U 
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
        tracep->fullBit(oldp+1081,((1U & ((((((((((0U 
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
                                           | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                          | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullBit(oldp+1082,((1U & (~ (((((((
                                                   (((0U 
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
        tracep->fullBit(oldp+1083,((1U & ((((((((((0U 
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
                                           | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                          | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullQData(oldp+1084,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+1086,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp788[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp788[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 4U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp788[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1cU));
        __Vtemp788[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp788[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1cU));
        __Vtemp788[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp788[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1cU));
        __Vtemp788[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 4U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1cU));
        __Vtemp788[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp788[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 4U);
        tracep->fullWData(oldp+1088,(__Vtemp788),316);
        tracep->fullBit(oldp+1098,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+1099,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+1101,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+1102,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+1103,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+1104,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                     : 0U)));
        tracep->fullQData(oldp+1105,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+1107,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+1108,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+1109,(vlSelf->top__DOT__ex_not_ok));
        tracep->fullBit(oldp+1110,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+1111,(vlSelf->top__DOT__dataNotOk));
        tracep->fullQData(oldp+1112,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+1114,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+1115,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+1116,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+1117,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+1118,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+1120,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+1121,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+1122,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+1123,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+1124,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullBit(oldp+1125,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT____Vcellinp__resultValidReg__i_rst_n));
        tracep->fullBit(oldp+1126,(vlSelf->top__DOT__ls_u__DOT__csr_stall_n));
        tracep->fullCData(oldp+1127,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+1128,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+1129,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullCData(oldp+1130,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
        tracep->fullBit(oldp+1131,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+1132,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+1133,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+1134,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+1135,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+1136,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+1146,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+1148,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+1150,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+1152,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+1154,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+1156,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+1158,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+1160,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+1162,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+1164,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+1166,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+1168,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+1170,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+1172,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+1174,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+1176,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+1178,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+1180,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+1182,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+1184,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+1186,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+1188,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+1190,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+1192,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+1194,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+1196,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+1198,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+1200,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+1202,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+1204,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+1206,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+1208,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+1210,(vlSelf->clk));
        tracep->fullBit(oldp+1211,(vlSelf->rst_n));
        tracep->fullQData(oldp+1212,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+1214,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+1216,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+1217,(vlSelf->regA0),64);
        tracep->fullBit(oldp+1219,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+1220,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+1221,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+1222,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+1224,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+1225,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+1226,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+1227,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+1228,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+1229,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+1230,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+1231,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+1232,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+1233,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+1234,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+1235,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+1236,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+1237,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+1239,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+1240,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+1241,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+1242,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+1243,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+1244,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+1246,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+1247,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+1248,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+1249,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+1250,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+1251,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+1252,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+1253,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+1254,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+1255,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+1256,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+1257,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+1258,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+1260,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+1261,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+1262,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+1263,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+1264,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+1265,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+1266,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+1267,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+1268,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 0U : 1U) ? 0U
                                     : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+1269,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
        tracep->fullBit(oldp+1270,(((0xaU == (0xfU 
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
        tracep->fullBit(oldp+1271,(((0xaU == (0xfU 
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
        tracep->fullCData(oldp+1272,(((0xaU == (0xfU 
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
        tracep->fullCData(oldp+1273,(((0xaU == (0xfU 
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
        tracep->fullBit(oldp+1274,((1U & ((0xaU == 
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
        tracep->fullBit(oldp+1275,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 0U : 1U) ? 
                                    (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                     : 0U)));
        tracep->fullCData(oldp+1276,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
        tracep->fullQData(oldp+1277,(((((((((- (QData)((IData)(
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
        tracep->fullCData(oldp+1279,(((0xaU == (0xfU 
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
        tracep->fullBit(oldp+1280,((1U & ((0xaU == 
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
        tracep->fullBit(oldp+1281,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                    & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+1282,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                    & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+1283,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                       ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                           ? (0x1fffffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))
                                           : 0U) : 0U)),21);
        tracep->fullIData(oldp+1284,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                       ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                           ? 0U : (0x1fffffU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 0xbU))))
                                       : 0U)),21);
        tracep->fullQData(oldp+1285,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+1287,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+1289,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid) 
                                    & (~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__resultValidReg_q) 
                                          | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))))));
        tracep->fullBit(oldp+1290,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__resultValidReg_q) 
                                    | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))));
        tracep->fullBit(oldp+1291,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__resultValidReg_q) 
                                    | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__mul64_u__DOT__mul_stg1_vld_q))));
        tracep->fullBit(oldp+1292,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__resultValidReg_q));
        tracep->fullBit(oldp+1293,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier2__DOT__resultValidReg_q));
        tracep->fullIData(oldp+1294,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullBit(oldp+1295,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                    & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                       | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)))))))));
        tracep->fullBit(oldp+1296,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                    & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                       | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)))))))));
        tracep->fullIData(oldp+1297,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+1298,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+1299,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+1301,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+1303,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
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
        tracep->fullIData(oldp+1304,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullIData(oldp+1305,(0x40U),32);
        tracep->fullIData(oldp+1306,(4U),32);
        tracep->fullIData(oldp+1307,(8U),32);
        tracep->fullIData(oldp+1308,(1U),32);
        tracep->fullCData(oldp+1309,(0U),3);
        tracep->fullBit(oldp+1310,(0U));
        tracep->fullBit(oldp+1311,(0U));
        tracep->fullCData(oldp+1312,(0U),4);
        tracep->fullBit(oldp+1313,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+1314,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+1315,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+1316,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+1317,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+1318,(1U),2);
        tracep->fullCData(oldp+1319,(2U),4);
        tracep->fullCData(oldp+1320,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+1321,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+1322,(1U),4);
        tracep->fullCData(oldp+1323,(0xfU),4);
        tracep->fullCData(oldp+1324,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+1325,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+1326,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+1328,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+1329,(1U));
        tracep->fullBit(oldp+1330,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+1331,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullBit(oldp+1332,(0U));
        tracep->fullQData(oldp+1333,(0ULL),64);
        tracep->fullCData(oldp+1335,(0U),8);
        tracep->fullCData(oldp+1336,(1U),3);
        tracep->fullCData(oldp+1337,(2U),3);
        tracep->fullCData(oldp+1338,(3U),3);
        tracep->fullCData(oldp+1339,(7U),3);
        tracep->fullCData(oldp+1340,(6U),3);
        tracep->fullBit(oldp+1341,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+1342,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+1343,(0x80U),32);
        tracep->fullIData(oldp+1344,(6U),32);
        __Vtemp789[0U] = 0U;
        __Vtemp789[1U] = 0U;
        __Vtemp789[2U] = 0U;
        __Vtemp789[3U] = 0U;
        tracep->fullWData(oldp+1345,(__Vtemp789),128);
        __Vtemp790[0U] = 0xffffffffU;
        __Vtemp790[1U] = 0xffffffffU;
        __Vtemp790[2U] = 0xffffffffU;
        __Vtemp790[3U] = 0xffffffffU;
        tracep->fullWData(oldp+1349,(__Vtemp790),128);
        tracep->fullCData(oldp+1353,(0U),2);
        tracep->fullCData(oldp+1354,(3U),2);
        tracep->fullCData(oldp+1355,(2U),2);
        tracep->fullIData(oldp+1356,(3U),32);
        tracep->fullIData(oldp+1357,(0x60U),32);
        tracep->fullIData(oldp+1358,(0U),32);
        tracep->fullIData(oldp+1359,(0x13cU),32);
        tracep->fullIData(oldp+1360,(0x108U),32);
        tracep->fullBit(oldp+1361,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+1362,(0xe3U),32);
        tracep->fullCData(oldp+1363,(4U),3);
        tracep->fullBit(oldp+1364,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+1365,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+1366,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullCData(oldp+1367,(3U),8);
        tracep->fullIData(oldp+1368,(0x121U),32);
        tracep->fullIData(oldp+1369,(0x40U),32);
        tracep->fullIData(oldp+1370,(3U),32);
        tracep->fullIData(oldp+1371,(1U),32);
        tracep->fullQData(oldp+1372,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+1374,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
