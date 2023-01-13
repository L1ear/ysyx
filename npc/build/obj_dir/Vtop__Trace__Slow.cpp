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
        tracep->declBit(c+530,"clk", false,-1);
        tracep->declBit(c+531,"rst_n", false,-1);
        tracep->declQuad(c+532,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+534,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+536,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+537,"regA0", false,-1, 63,0);
        tracep->declBit(c+539,"stall_n_diff", false,-1);
        tracep->declBus(c+547,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+547,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+547,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+547,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+548,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+549,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+550,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+530,"top clk", false,-1);
        tracep->declBit(c+531,"top rst_n", false,-1);
        tracep->declQuad(c+532,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+534,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+536,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+537,"top regA0", false,-1, 63,0);
        tracep->declBit(c+539,"top stall_n_diff", false,-1);
        tracep->declBit(c+540,"top instr_fetching", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+524,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+77,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+551,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+552,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+553,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+554,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+555,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+556,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+557,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+558,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+552,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+559,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+525,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+439,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+3,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+4,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+560,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+561,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+562,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+6,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+79,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+80,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+551,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+563,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+553,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+554,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+82,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+556,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+557,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+564,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+552,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+552,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+7,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+83,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+84,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+86,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+83,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+553,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+87,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+8,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+9,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+565,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+566,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+10,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+88,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+80,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+551,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+563,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+553,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+554,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+555,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+556,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+557,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+558,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+552,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+567,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+89,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+11,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+12,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+13,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+568,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+569,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+570,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+571,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+90,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+92,"top is_jump", false,-1);
        tracep->declQuad(c+93,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+541,"top pc_stall_n", false,-1);
        tracep->declBit(c+526,"top if_stall_n", false,-1);
        tracep->declBit(c+527,"top if_instr_valid", false,-1);
        tracep->declBit(c+527,"top sram_data_valid", false,-1);
        tracep->declQuad(c+542,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+77,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+573,"top sram_ren", false,-1);
        tracep->declBit(c+95,"top sram_addr_valid", false,-1);
        tracep->declBus(c+96,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+97,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+99,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+425,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+427,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+100,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+102,"top src1sel_id", false,-1);
        tracep->declBus(c+103,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+104,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+105,"top is_brc_id", false,-1);
        tracep->declBit(c+106,"top is_jal_id", false,-1);
        tracep->declBit(c+107,"top is_jalr_id", false,-1);
        tracep->declBit(c+108,"top wben_id", false,-1);
        tracep->declBus(c+109,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+110,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+541,"top id_stall_n", false,-1);
        tracep->declBit(c+111,"top DivEn_id", false,-1);
        tracep->declBus(c+112,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+113,"top in_trap_id", false,-1);
        tracep->declBit(c+114,"top out_trap_id", false,-1);
        tracep->declBit(c+115,"top trap_id", false,-1);
        tracep->declBit(c+116,"top ld_use_hazard", false,-1);
        tracep->declBit(c+117,"top id_flush", false,-1);
        tracep->declQuad(c+118,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+120,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+121,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+123,"top src1sel_ex", false,-1);
        tracep->declBus(c+124,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+125,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+127,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+129,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+131,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+133,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+134,"top is_brc_ex", false,-1);
        tracep->declBit(c+135,"top is_jal_ex", false,-1);
        tracep->declBit(c+136,"top is_jalr_ex", false,-1);
        tracep->declBit(c+137,"top wben_ex", false,-1);
        tracep->declBit(c+138,"top DivEn_ex", false,-1);
        tracep->declBus(c+139,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+140,"top trap_ex", false,-1);
        tracep->declBit(c+544,"top ex_stall_n", false,-1);
        tracep->declQuad(c+141,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+143,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+144,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+145,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+146,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+147,"top ex_flush", false,-1);
        tracep->declQuad(c+148,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+150,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+80,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+152,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+153,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+155,"top wben_ls", false,-1);
        tracep->declQuad(c+156,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+158,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+160,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+162,"top trap_ls", false,-1);
        tracep->declBit(c+544,"top ls_stall_n", false,-1);
        tracep->declBit(c+163,"top ls_not_ok", false,-1);
        tracep->declQuad(c+80,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+164,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+165,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+166,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+168,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+71,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+72,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+169,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+82,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+555,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+171,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+173,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+175,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+177,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+178,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+180,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+181,"top wben_wb", false,-1);
        tracep->declQuad(c+182,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+528,"top wb_stall_n", false,-1);
        tracep->declBit(c+530,"top IF_u clk", false,-1);
        tracep->declBit(c+531,"top IF_u rst_n", false,-1);
        tracep->declBit(c+92,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+93,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+158,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+160,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+113,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+114,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+526,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+90,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+96,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+527,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+542,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+527,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+77,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+573,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+95,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+184,"top IF_u instr_reg", false,-1, 63,0);
        tracep->declQuad(c+77,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+530,"top cache_dut clk", false,-1);
        tracep->declBit(c+531,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+186,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+95,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+557,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+574,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+576,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+187,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+577,"top cache_dut data_ok_o", false,-1);
        tracep->declQuad(c+188,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+578,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+579,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+580,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+581,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBus(c+551,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+583,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+584,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+555,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+190,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+191,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+192,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+193,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+194,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+15,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+19,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+23,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+27,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+195,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+199,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+203,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+207,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+211,"top cache_dut wenWay1_1", false,-1);
        tracep->declBit(c+212,"top cache_dut wenWay1_2", false,-1);
        tracep->declBit(c+213,"top cache_dut wenWay2_1", false,-1);
        tracep->declBit(c+214,"top cache_dut wenWay2_2", false,-1);
        tracep->declBit(c+215,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+216,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+218,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+219,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+220,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+221,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+223,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+225,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+226,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+227,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+228,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+229,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+230,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+231,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+232,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+233,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+440,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+448,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+188,"top cache_dut rdDataReg", false,-1, 63,0);
        tracep->declBit(c+234,"top cache_dut getdataEn", false,-1);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBus(c+585,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+547,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+586,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+585,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+15,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+530,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+235,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+211,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+587,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+219,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+195,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+236,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+237,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+591,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+585,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+547,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+586,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+585,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+19,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+530,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+238,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+212,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+587,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+219,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+199,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+239,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+240,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+591,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+585,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+547,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+586,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+585,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+23,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+530,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+241,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+213,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+587,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+219,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+203,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+242,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+243,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+591,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+585,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+547,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+586,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+585,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+27,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+530,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+244,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+214,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+587,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+219,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+207,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+245,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+246,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+591,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+547,"top axi_if_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+547,"top axi_if_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+547,"top axi_if_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+547,"top axi_if_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+548,"top axi_if_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+549,"top axi_if_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+550,"top axi_if_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+530,"top axi_if_u clock", false,-1);
        tracep->declBit(c+531,"top axi_if_u reset", false,-1);
        tracep->declBit(c+95,"top axi_if_u rw_valid_i", false,-1);
        tracep->declBit(c+527,"top axi_if_u rw_ready_o", false,-1);
        tracep->declQuad(c+542,"top axi_if_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+77,"top axi_if_u rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+540,"top axi_if_u instr_fetching", false,-1);
        tracep->declBit(c+2,"top axi_if_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+524,"top axi_if_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+77,"top axi_if_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+551,"top axi_if_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+552,"top axi_if_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+553,"top axi_if_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+554,"top axi_if_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+555,"top axi_if_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+556,"top axi_if_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+557,"top axi_if_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+558,"top axi_if_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+552,"top axi_if_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+559,"top axi_if_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+525,"top axi_if_u axi_r_ready_o", false,-1);
        tracep->declBit(c+439,"top axi_if_u axi_r_valid_i", false,-1);
        tracep->declBus(c+3,"top axi_if_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+4,"top axi_if_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+560,"top axi_if_u axi_r_last_i", false,-1);
        tracep->declBus(c+561,"top axi_if_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+562,"top axi_if_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+595,"top axi_if_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+556,"top axi_if_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+596,"top axi_if_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+597,"top axi_if_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+529,"top axi_if_u r_state", false,-1, 1,0);
        tracep->declBus(c+545,"top axi_if_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+524,"top axi_if_u ar_valid", false,-1);
        tracep->declBit(c+525,"top axi_if_u r_ready", false,-1);
        tracep->declBit(c+598,"top axi_if_u instr_valid", false,-1);
        tracep->declQuad(c+456,"top axi_if_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+31,"top axi_if_u instr_valid_reg", false,-1);
        tracep->declQuad(c+458,"top axi_if_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+599,"top axi_if_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+552,"top axi_if_u axi_id", false,-1, 3,0);
        tracep->declBus(c+557,"top axi_if_u axi_user", false,-1, 0,0);
        tracep->declBus(c+554,"top axi_if_u axi_len", false,-1, 7,0);
        tracep->declBus(c+555,"top axi_if_u axi_size", false,-1, 2,0);
        tracep->declBit(c+530,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+531,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+90,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+96,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+541,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+117,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+97,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+99,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+247,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+249,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+600,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+601,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+530,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+531,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+541,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+250,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+253,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+530,"top ID_u clk", false,-1);
        tracep->declBit(c+531,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+97,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+171,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+177,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+99,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+178,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+180,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+181,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+427,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+425,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+100,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+102,"top ID_u src1sel", false,-1);
        tracep->declBus(c+103,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+104,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+107,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+106,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+105,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+108,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+109,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+110,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+537,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+111,"top ID_u DivEn", false,-1);
        tracep->declBus(c+112,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+115,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+113,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+114,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+256,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+100,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+427,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+425,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+97,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+99,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+109,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+110,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+256,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+102,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+103,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+104,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+107,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+106,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+105,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+108,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+111,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+112,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+115,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+113,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+114,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+257,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+258,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+259,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+260,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+256,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+100,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+530,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+171,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+177,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+109,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+427,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+110,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+425,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+180,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+178,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+181,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+537,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+460+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+99,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+120,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+116,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+530,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+531,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+544,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+147,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+97,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+99,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+100,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+425,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+427,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+104,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+107,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+106,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+105,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+102,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+103,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+108,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+109,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+110,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+111,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+112,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+115,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+118,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+120,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+125,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+127,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+129,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+133,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+136,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+135,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+134,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+123,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+124,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+137,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+145,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+146,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+138,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+139,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+140,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+261,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+263,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+264,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+265,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+266,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+267,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+268,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+602,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+601,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+530,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+531,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+544,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+429,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+269,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+133,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+127,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+125,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+129,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+118,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+120,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+136,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+135,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+134,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+123,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+124,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+143,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+144,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+80,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+178,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+141,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+138,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+139,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+121,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+93,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+131,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+92,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+279,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+281,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+283,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+131,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+133,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+279,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+281,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+138,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+139,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+121,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+285,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+286,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+287,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+289,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+290,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+292,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+294,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+294,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+295,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+296,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+297,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+299,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+300,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+301,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+303,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+305,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+307,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+279,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+290,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+289,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+292,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+299,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+286,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+300,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+309,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+296,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+294,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+295,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+289,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+294,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+310,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+279,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+311,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+295,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+294,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+297,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+312,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+314,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+316,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+318,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+320,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+322,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+324,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+279,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+281,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+139,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+307,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+283,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+131,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+136,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+135,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+134,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+326,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+129,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+118,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+93,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+92,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+327,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+329,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+603,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+331,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+332,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+333,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+334,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+336,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+338,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+530,"top forwarding_u clk", false,-1);
        tracep->declBit(c+531,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+145,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+146,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+339,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+180,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+155,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+181,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+178,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+528,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+143,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+144,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+141,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+141,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+340,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+341,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+342,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+343,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+344,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+345,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+346,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+347,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+530,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+531,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+118,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+131,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+120,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+121,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+137,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+140,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+544,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+148,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+150,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+152,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+80,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+155,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+162,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+604,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+601,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+530,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+531,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+544,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+348,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+356,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+530,"top ls_u clk", false,-1);
        tracep->declBit(c+531,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+148,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+80,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+150,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+152,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+173,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+177,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+175,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+162,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+153,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+156,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+158,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+160,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+163,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+80,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+164,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+165,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+166,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+168,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+82,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+555,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+71,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+72,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+169,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+165,"top ls_u wren", false,-1);
        tracep->declBit(c+164,"top ls_u rden", false,-1);
        tracep->declBus(c+364,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+166,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+365,"top ls_u wren_last", false,-1);
        tracep->declBit(c+530,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+531,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+165,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+164,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+364,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+166,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+80,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+148,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+173,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+365,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+153,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+163,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+80,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+164,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+165,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+166,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+168,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+82,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+555,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+71,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+72,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+169,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+169,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+366,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+367,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+368,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+369,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+370,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+371,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+372,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+555,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+373,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+374,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+375,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+82,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+168,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+376,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+377,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+378,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+379,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+152,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+177,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+150,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+175,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+165,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+164,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+364,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+166,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+380,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+530,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+531,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+148,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+152,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+80,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+162,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+156,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+158,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+160,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+381,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+382,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+383,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+384,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+385,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+386,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+387,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+388,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+389,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+80,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+390,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+392,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+394,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+160,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+158,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+396,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+398,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+400,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+547,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+547,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+547,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+547,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+548,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+549,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+550,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+530,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+531,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+165,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+164,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+72,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+71,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+169,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+166,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+168,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+80,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+82,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+555,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+6,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+79,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+80,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+551,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+563,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+553,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+554,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+82,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+556,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+557,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+564,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+552,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+552,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+7,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+83,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+84,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+86,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+83,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+553,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+87,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+8,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+9,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+565,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+566,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+10,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+88,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+80,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+551,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+563,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+553,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+554,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+555,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+556,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+557,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+558,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+552,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+567,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+89,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+11,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+12,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+13,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+568,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+569,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+570,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+595,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+556,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+596,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+597,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+402,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+73,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+79,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+83,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+87,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+32,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+595,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+556,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+596,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+597,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+403,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+74,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+88,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+89,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+605,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+33,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+35,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+37,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+38,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+599,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+563,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+557,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+554,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+555,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+404,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+530,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+531,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+148,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+152,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+80,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+153,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+155,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+156,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+528,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+171,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+177,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+173,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+175,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+181,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+182,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+606,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+601,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+530,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+531,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+528,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+405,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+415,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+171,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+177,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+173,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+175,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+182,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+180,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+178,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+530,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+531,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+116,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+92,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+113,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+114,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+527,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+163,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+526,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+541,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+541,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+544,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+544,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+528,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+117,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+147,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+607,"top ifAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+607,"top ifAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+555,"top ifAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+608,"top ifAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+530,"top ifAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+531,"top ifAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+609,"top ifAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+611,"top ifAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+612,"top ifAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+40,"top ifAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+613,"top ifAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+615,"top ifAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+616,"top ifAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+41,"top ifAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+42,"top ifAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+43,"top ifAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+617,"top ifAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+77,"top ifAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+551,"top ifAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+524,"top ifAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+2,"top ifAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+4,"top ifAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+3,"top ifAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+439,"top ifAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+525,"top ifAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+44,"top ifAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+40,"top ifAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+41,"top ifAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+42,"top ifAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+43,"top ifAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+46,"top ifAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+2,"top ifAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+4,"top ifAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+3,"top ifAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+439,"top ifAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+618,"top ifAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+619,"top ifAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+48,"top ifAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+50,"top ifAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+52,"top ifAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+54,"top ifAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+546,"top ifAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+56,"top ifAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+620,"top ifAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+622,"top ifAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+57,"top ifAxiSlaveRam_u aw_en", false,-1);
        tracep->declBus(c+607,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+607,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+555,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+82,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+530,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+531,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+80,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+551,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+79,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+84,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+86,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+83,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+9,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+8,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+87,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+80,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+551,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+88,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+10,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+13,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+12,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+11,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+89,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+58,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+9,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+8,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+60,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+10,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+13,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+12,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+11,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+618,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+619,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+62,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+64,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+66,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+68,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+75,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+76,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+623,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+625,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+70,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp105;
    VlWide<3>/*95:0*/ __Vtemp107;
    VlWide<3>/*95:0*/ __Vtemp108;
    VlWide<3>/*95:0*/ __Vtemp109;
    VlWide<3>/*95:0*/ __Vtemp110;
    VlWide<3>/*95:0*/ __Vtemp111;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<3>/*95:0*/ __Vtemp115;
    VlWide<3>/*95:0*/ __Vtemp116;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<8>/*255:0*/ __Vtemp123;
    VlWide<10>/*319:0*/ __Vtemp128;
    VlWide<4>/*127:0*/ __Vtemp129;
    VlWide<4>/*127:0*/ __Vtemp130;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready));
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
        tracep->fullWData(oldp+15,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+19,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+23,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+27,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+56,(((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready) 
                                  & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID))));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__aw_en));
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullBit(oldp+71,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
        tracep->fullBit(oldp+72,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
        tracep->fullCData(oldp+73,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
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
        tracep->fullCData(oldp+74,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
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
        tracep->fullBit(oldp+75,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                  & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+76,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                  & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))));
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+80,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+84,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                    << (0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                 << 1U)))),64);
        tracep->fullCData(oldp+86,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                             << (7U 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                    >> 2U))))),8);
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+93,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+95,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+96,(((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                   >> 2U)))
                                     ? (IData)((vlSelf->top__DOT__IF_u__DOT__instr_reg 
                                                >> 0x20U))
                                     : (IData)(vlSelf->top__DOT__IF_u__DOT__instr_reg))),32);
        tracep->fullQData(oldp+97,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+99,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+103,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+104,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+109,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+110,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+112,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+118,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+120,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+121,(((0x4000000U & 
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
        tracep->fullBit(oldp+123,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+124,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+125,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+127,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+129,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+133,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+134,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+135,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+136,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+137,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+138,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+139,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+140,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+144,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+145,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+146,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+148,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+150,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+152,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+153,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+155,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+162,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+163,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+164,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+165,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+168,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+171,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+173,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+175,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+177,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+180,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+181,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+182,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__IF_u__DOT__instr_reg),64);
        tracep->fullIData(oldp+186,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+187,(vlSelf->top__DOT__cache_dut__DOT__addr_ok_o));
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__cache_dut__DOT__rdDataReg),64);
        tracep->fullCData(oldp+190,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullCData(oldp+191,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullBit(oldp+192,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+193,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+194,((((0U != (0x1fffffU 
                                            & (vlSelf->top__DOT__cache_dut__DOT__tagWay2_q 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 0xbU))))) 
                                    & (IData)(vlSelf->top__DOT__cache_dut__DOT__bitValid2))
                                    ? 0U : 1U)));
        tracep->fullWData(oldp+195,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1),128);
        tracep->fullWData(oldp+199,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2),128);
        tracep->fullWData(oldp+203,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1),128);
        tracep->fullWData(oldp+207,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2),128);
        tracep->fullBit(oldp+211,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1));
        tracep->fullBit(oldp+212,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2));
        tracep->fullBit(oldp+213,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1));
        tracep->fullBit(oldp+214,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2));
        tracep->fullBit(oldp+215,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+218,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+219,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+220,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+225,(vlSelf->top__DOT__cache_dut__DOT__bitValid1));
        tracep->fullBit(oldp+226,(vlSelf->top__DOT__cache_dut__DOT__bitValid2));
        tracep->fullBit(oldp+227,(vlSelf->top__DOT__cache_dut__DOT__bitValid1_d));
        tracep->fullBit(oldp+228,(vlSelf->top__DOT__cache_dut__DOT__bitValid2_d));
        tracep->fullIData(oldp+229,(vlSelf->top__DOT__cache_dut__DOT__tagWay1_q),21);
        tracep->fullIData(oldp+230,(vlSelf->top__DOT__cache_dut__DOT__tagWay2_q),21);
        tracep->fullBit(oldp+231,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+232,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullBit(oldp+233,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+234,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN));
        tracep->fullBit(oldp+236,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)))));
        tracep->fullBit(oldp+237,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1)))));
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+239,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+240,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2)))));
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN));
        tracep->fullBit(oldp+242,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)))));
        tracep->fullBit(oldp+243,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1)))));
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+245,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullBit(oldp+246,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2)))));
        tracep->fullQData(oldp+247,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+249,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__IF_u__DOT__instr_reg 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__IF_u__DOT__instr_reg)))),32);
        __Vtemp105[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__IF_u__DOT__instr_reg 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__IF_u__DOT__instr_reg)));
        __Vtemp105[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp105[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+250,(__Vtemp105),96);
        tracep->fullWData(oldp+253,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+256,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+257,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+258,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+259,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+260,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+261,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+263,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+264,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+265,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+266,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+267,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+268,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+269,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp107, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp108, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp109, __Vtemp107, __Vtemp108);
        VL_EXTEND_WI(65,1, __Vtemp110, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp111, __Vtemp109, __Vtemp110);
        tracep->fullBit(oldp+285,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp111[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+289,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+294,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+295,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+296,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp114, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp115, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp116, __Vtemp114, __Vtemp115);
        VL_EXTEND_WI(65,1, __Vtemp117, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp118, __Vtemp116, __Vtemp117);
        tracep->fullBit(oldp+299,((1U & __Vtemp118[2U])));
        tracep->fullBit(oldp+300,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+301,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+303,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+305,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+307,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+309,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+310,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+311,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+316,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+318,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+320,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+322,(((0x4000000U & 
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
        tracep->fullQData(oldp+324,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+326,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+327,(((((QData)((IData)(
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
        tracep->fullQData(oldp+329,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+331,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+332,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+334,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+336,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+338,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+339,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+340,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+341,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+342,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+343,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+344,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+345,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+346,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+347,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        __Vtemp123[0U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                           << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xeU)) 
                                     | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp123[1U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
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
        __Vtemp123[2U] = (((IData)((((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp123[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp123[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp123[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp123[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp123[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+348,(__Vtemp123),226);
        tracep->fullWData(oldp+356,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+364,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+365,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+366,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+367,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+368,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+369,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+370,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+371,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+372,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+373,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+374,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+375,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+376,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+377,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+378,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+379,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+380,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+381,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+382,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+383,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+384,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+385,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+386,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+387,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+388,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+389,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+390,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+392,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+398,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+400,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullCData(oldp+402,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+403,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+404,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+405,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+415,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+425,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+427,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp128[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           << 0x1bU) | (((IData)(vlSelf->top__DOT__aluctr_id) 
                                         << 0x16U) 
                                        | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
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
        __Vtemp128[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp128[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp128[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp128[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp128[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp128[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp128[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp128[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                           >> 5U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                                ? 0ULL
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp128[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+429,(__Vtemp128),315);
        tracep->fullBit(oldp+439,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullWData(oldp+440,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+448,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullQData(oldp+456,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+458,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
        tracep->fullQData(oldp+460,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+462,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+464,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+466,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+468,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+470,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+472,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+474,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+476,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+480,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+482,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+484,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+486,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+488,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+490,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+492,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+494,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+496,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+498,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+500,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+504,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+506,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+508,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+512,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+514,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+516,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+518,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+520,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+522,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+524,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
        tracep->fullBit(oldp+525,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
        tracep->fullBit(oldp+526,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+527,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+528,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullCData(oldp+529,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
        tracep->fullBit(oldp+530,(vlSelf->clk));
        tracep->fullBit(oldp+531,(vlSelf->rst_n));
        tracep->fullQData(oldp+532,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+534,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+536,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+537,(vlSelf->regA0),64);
        tracep->fullBit(oldp+539,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+540,((1U & ((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state) 
                                             | (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                != vlSelf->top__DOT__axi_if_u__DOT__addr_reg))
                                          : (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state)))));
        tracep->fullBit(oldp+541,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__sram_data_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+542,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? 0ULL : 
                                         ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                           != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                           ? 0ULL : vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+544,((1U & (~ ((~ (IData)(vlSelf->top__DOT__sram_data_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullCData(oldp+545,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)
                                              ? 2U : 3U)
                                          : ((0ULL 
                                              != vlSelf->top__DOT__pc_new)
                                              ? ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
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
        tracep->fullBit(oldp+546,((((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_if_u__DOT__ar_valid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullIData(oldp+547,(0x40U),32);
        tracep->fullIData(oldp+548,(4U),32);
        tracep->fullIData(oldp+549,(8U),32);
        tracep->fullIData(oldp+550,(1U),32);
        tracep->fullCData(oldp+551,(0U),3);
        tracep->fullCData(oldp+552,(0U),4);
        tracep->fullBit(oldp+553,(0U));
        tracep->fullCData(oldp+554,(0U),8);
        tracep->fullCData(oldp+555,(3U),3);
        tracep->fullCData(oldp+556,(1U),2);
        tracep->fullBit(oldp+557,(0U));
        tracep->fullCData(oldp+558,(2U),4);
        tracep->fullCData(oldp+559,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+560,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+561,(vlSelf->top__DOT__if_axi_r_id_i),4);
        tracep->fullBit(oldp+562,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+563,(1U),4);
        tracep->fullCData(oldp+564,(0xfU),4);
        tracep->fullCData(oldp+565,(vlSelf->top__DOT__ls_axi_b_id_i),4);
        tracep->fullBit(oldp+566,(vlSelf->top__DOT__ls_axi_b_user_i));
        tracep->fullCData(oldp+567,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+568,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullCData(oldp+569,(vlSelf->top__DOT__ls_axi_r_id_i),4);
        tracep->fullBit(oldp+570,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+571,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+573,(1U));
        tracep->fullQData(oldp+574,(vlSelf->top__DOT__cache_dut__DOT__wr_data_i),64);
        tracep->fullCData(oldp+576,(vlSelf->top__DOT__cache_dut__DOT__wr_mask_i),8);
        tracep->fullBit(oldp+577,(vlSelf->top__DOT__cache_dut__DOT__data_ok_o));
        tracep->fullBit(oldp+578,(vlSelf->top__DOT__cache_dut__DOT__cacheRdValid_o));
        tracep->fullBit(oldp+579,(vlSelf->top__DOT__cache_dut__DOT__rdLast_i));
        tracep->fullIData(oldp+580,(vlSelf->top__DOT__cache_dut__DOT__cacheAddr_o),32);
        tracep->fullQData(oldp+581,(vlSelf->top__DOT__cache_dut__DOT__rdData_i),64);
        tracep->fullCData(oldp+583,(1U),3);
        tracep->fullCData(oldp+584,(2U),3);
        tracep->fullIData(oldp+585,(0x80U),32);
        tracep->fullIData(oldp+586,(6U),32);
        __Vtemp129[0U] = 0U;
        __Vtemp129[1U] = 0U;
        __Vtemp129[2U] = 0U;
        __Vtemp129[3U] = 0U;
        tracep->fullWData(oldp+587,(__Vtemp129),128);
        __Vtemp130[0U] = 0xffffffffU;
        __Vtemp130[1U] = 0xffffffffU;
        __Vtemp130[2U] = 0xffffffffU;
        __Vtemp130[3U] = 0xffffffffU;
        tracep->fullWData(oldp+591,(__Vtemp130),128);
        tracep->fullCData(oldp+595,(0U),2);
        tracep->fullCData(oldp+596,(3U),2);
        tracep->fullCData(oldp+597,(2U),2);
        tracep->fullBit(oldp+598,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid));
        tracep->fullIData(oldp+599,(3U),32);
        tracep->fullIData(oldp+600,(0x60U),32);
        tracep->fullIData(oldp+601,(0U),32);
        tracep->fullIData(oldp+602,(0x13bU),32);
        tracep->fullBit(oldp+603,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+604,(0xe2U),32);
        tracep->fullBit(oldp+605,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+606,(0x121U),32);
        tracep->fullIData(oldp+607,(0x40U),32);
        tracep->fullCData(oldp+608,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWSIZE),3);
        tracep->fullQData(oldp+609,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWADDR),64);
        tracep->fullCData(oldp+611,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWPROT),3);
        tracep->fullBit(oldp+612,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID));
        tracep->fullQData(oldp+613,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WDATA),64);
        tracep->fullCData(oldp+615,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WSTRB),8);
        tracep->fullBit(oldp+616,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID));
        tracep->fullBit(oldp+617,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_BREADY));
        tracep->fullIData(oldp+618,(3U),32);
        tracep->fullIData(oldp+619,(1U),32);
        tracep->fullQData(oldp+620,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+622,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__byte_index),32);
        tracep->fullQData(oldp+623,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+625,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
