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
        tracep->declBit(c+536,"clk", false,-1);
        tracep->declBit(c+537,"rst_n", false,-1);
        tracep->declQuad(c+538,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+540,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+542,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+543,"regA0", false,-1, 63,0);
        tracep->declBit(c+545,"stall_n_diff", false,-1);
        tracep->declBus(c+553,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+553,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+553,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+553,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+554,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+555,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+556,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+536,"top clk", false,-1);
        tracep->declBit(c+537,"top rst_n", false,-1);
        tracep->declQuad(c+538,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+540,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+542,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+543,"top regA0", false,-1, 63,0);
        tracep->declBit(c+545,"top stall_n_diff", false,-1);
        tracep->declBit(c+546,"top instr_fetching", false,-1);
        tracep->declBit(c+1,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+530,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+76,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+557,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+558,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+559,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+560,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+561,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+562,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+563,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+564,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+558,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+565,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+531,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+445,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+2,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+3,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+566,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+567,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+568,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+5,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+78,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+79,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+557,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+569,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+559,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+560,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+81,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+562,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+563,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+570,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+558,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+558,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+82,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+83,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+85,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+82,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+559,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+86,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+7,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+8,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+571,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+572,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+9,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+87,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+79,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+557,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+569,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+559,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+560,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+561,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+562,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+563,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+564,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+558,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+573,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+88,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+10,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+11,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+12,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+574,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+575,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+576,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+577,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+89,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+91,"top is_jump", false,-1);
        tracep->declQuad(c+92,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+547,"top pc_stall_n", false,-1);
        tracep->declBit(c+532,"top if_stall_n", false,-1);
        tracep->declBit(c+533,"top if_instr_valid", false,-1);
        tracep->declBit(c+533,"top sram_data_valid", false,-1);
        tracep->declQuad(c+548,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+76,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+579,"top sram_ren", false,-1);
        tracep->declBit(c+94,"top sram_addr_valid", false,-1);
        tracep->declBus(c+95,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+96,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+98,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+431,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+433,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+99,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+101,"top src1sel_id", false,-1);
        tracep->declBus(c+102,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+103,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+104,"top is_brc_id", false,-1);
        tracep->declBit(c+105,"top is_jal_id", false,-1);
        tracep->declBit(c+106,"top is_jalr_id", false,-1);
        tracep->declBit(c+107,"top wben_id", false,-1);
        tracep->declBus(c+108,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+109,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+547,"top id_stall_n", false,-1);
        tracep->declBit(c+110,"top DivEn_id", false,-1);
        tracep->declBus(c+111,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+112,"top in_trap_id", false,-1);
        tracep->declBit(c+113,"top out_trap_id", false,-1);
        tracep->declBit(c+114,"top trap_id", false,-1);
        tracep->declBit(c+115,"top ld_use_hazard", false,-1);
        tracep->declBit(c+116,"top id_flush", false,-1);
        tracep->declQuad(c+117,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+119,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+120,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+122,"top src1sel_ex", false,-1);
        tracep->declBus(c+123,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+124,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+126,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+128,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+130,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+132,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+133,"top is_brc_ex", false,-1);
        tracep->declBit(c+134,"top is_jal_ex", false,-1);
        tracep->declBit(c+135,"top is_jalr_ex", false,-1);
        tracep->declBit(c+136,"top wben_ex", false,-1);
        tracep->declBit(c+137,"top DivEn_ex", false,-1);
        tracep->declBus(c+138,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+139,"top trap_ex", false,-1);
        tracep->declBit(c+550,"top ex_stall_n", false,-1);
        tracep->declQuad(c+140,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+142,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+143,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+144,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+145,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+146,"top ex_flush", false,-1);
        tracep->declQuad(c+147,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+149,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+79,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+151,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+152,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+154,"top wben_ls", false,-1);
        tracep->declQuad(c+155,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+157,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+159,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+161,"top trap_ls", false,-1);
        tracep->declBit(c+550,"top ls_stall_n", false,-1);
        tracep->declBit(c+162,"top ls_not_ok", false,-1);
        tracep->declQuad(c+79,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+163,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+164,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+165,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+167,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+70,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+71,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+168,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+81,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+561,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+170,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+172,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+174,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+176,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+177,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+179,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+180,"top wben_wb", false,-1);
        tracep->declQuad(c+181,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+534,"top wb_stall_n", false,-1);
        tracep->declBit(c+536,"top IF_u clk", false,-1);
        tracep->declBit(c+537,"top IF_u rst_n", false,-1);
        tracep->declBit(c+91,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+92,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+157,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+159,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+112,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+113,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+532,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+89,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+95,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+533,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+548,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+533,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+76,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+579,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+94,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+183,"top IF_u instr_reg", false,-1, 63,0);
        tracep->declQuad(c+76,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+536,"top cache_dut clk", false,-1);
        tracep->declBit(c+537,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+185,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+94,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+563,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+580,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+582,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+186,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+583,"top cache_dut data_ok_o", false,-1);
        tracep->declQuad(c+187,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+584,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+585,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+586,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+587,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBus(c+557,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+589,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+590,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+561,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+189,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+190,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+191,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+192,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+193,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+14,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+18,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+22,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+26,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+194,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+198,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+202,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+206,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+210,"top cache_dut wenWay1_1", false,-1);
        tracep->declBit(c+211,"top cache_dut wenWay1_2", false,-1);
        tracep->declBit(c+212,"top cache_dut wenWay2_1", false,-1);
        tracep->declBit(c+213,"top cache_dut wenWay2_2", false,-1);
        tracep->declBit(c+214,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+215,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+217,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+218,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+219,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+220,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+222,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+224,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+225,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+226,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+227,"top cache_dut bitValid2_d", false,-1);
        tracep->declBit(c+228,"top cache_dut validbitTest", false,-1);
        tracep->declBus(c+229,"top cache_dut tagTest", false,-1, 20,0);
        tracep->declBus(c+230,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+231,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+232,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+233,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+234,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+235,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+236,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+446,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+454,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+187,"top cache_dut rdDataReg", false,-1, 63,0);
        tracep->declBit(c+237,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+238,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+240,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBus(c+591,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+553,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+592,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+591,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+14,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+536,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+241,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+210,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+593,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+218,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+194,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+242,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+243,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+597,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+591,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+553,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+592,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+591,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+18,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+536,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+244,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+211,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+593,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+218,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+198,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+245,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+246,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+597,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+591,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+553,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+592,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+591,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+22,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+536,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+247,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+212,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+593,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+218,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+202,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+248,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+249,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+597,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+591,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+553,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+592,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+591,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+26,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+536,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+250,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+213,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+593,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+218,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+206,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+251,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+252,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+597,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+553,"top axi_if_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+553,"top axi_if_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+553,"top axi_if_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+553,"top axi_if_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+554,"top axi_if_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+555,"top axi_if_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+556,"top axi_if_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+536,"top axi_if_u clock", false,-1);
        tracep->declBit(c+537,"top axi_if_u reset", false,-1);
        tracep->declBit(c+94,"top axi_if_u rw_valid_i", false,-1);
        tracep->declBit(c+533,"top axi_if_u rw_ready_o", false,-1);
        tracep->declQuad(c+548,"top axi_if_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+76,"top axi_if_u rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+546,"top axi_if_u instr_fetching", false,-1);
        tracep->declBit(c+1,"top axi_if_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+530,"top axi_if_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+76,"top axi_if_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+557,"top axi_if_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+558,"top axi_if_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+559,"top axi_if_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+560,"top axi_if_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+561,"top axi_if_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+562,"top axi_if_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+563,"top axi_if_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+564,"top axi_if_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+558,"top axi_if_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+565,"top axi_if_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+531,"top axi_if_u axi_r_ready_o", false,-1);
        tracep->declBit(c+445,"top axi_if_u axi_r_valid_i", false,-1);
        tracep->declBus(c+2,"top axi_if_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+3,"top axi_if_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+566,"top axi_if_u axi_r_last_i", false,-1);
        tracep->declBus(c+567,"top axi_if_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+568,"top axi_if_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+601,"top axi_if_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+562,"top axi_if_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+602,"top axi_if_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+603,"top axi_if_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+535,"top axi_if_u r_state", false,-1, 1,0);
        tracep->declBus(c+551,"top axi_if_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+530,"top axi_if_u ar_valid", false,-1);
        tracep->declBit(c+531,"top axi_if_u r_ready", false,-1);
        tracep->declBit(c+604,"top axi_if_u instr_valid", false,-1);
        tracep->declQuad(c+462,"top axi_if_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+30,"top axi_if_u instr_valid_reg", false,-1);
        tracep->declQuad(c+464,"top axi_if_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+605,"top axi_if_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+558,"top axi_if_u axi_id", false,-1, 3,0);
        tracep->declBus(c+563,"top axi_if_u axi_user", false,-1, 0,0);
        tracep->declBus(c+560,"top axi_if_u axi_len", false,-1, 7,0);
        tracep->declBus(c+561,"top axi_if_u axi_size", false,-1, 2,0);
        tracep->declBit(c+536,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+537,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+89,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+95,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+547,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+116,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+96,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+98,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+253,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+255,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+606,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+607,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+536,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+537,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+547,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+256,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+259,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+536,"top ID_u clk", false,-1);
        tracep->declBit(c+537,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+96,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+170,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+176,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+98,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+177,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+179,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+180,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+433,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+431,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+99,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+101,"top ID_u src1sel", false,-1);
        tracep->declBus(c+102,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+103,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+106,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+105,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+104,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+107,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+108,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+109,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+543,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+110,"top ID_u DivEn", false,-1);
        tracep->declBus(c+111,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+114,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+112,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+113,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+262,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+99,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+433,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+431,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+96,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+98,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+108,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+109,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+262,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+101,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+102,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+103,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+106,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+105,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+104,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+107,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+110,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+111,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+114,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+112,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+113,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+263,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+264,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+265,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+266,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+262,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+99,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+536,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+170,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+176,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+108,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+433,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+109,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+431,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+179,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+177,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+180,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+543,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+466+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+98,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+119,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+115,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+536,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+537,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+550,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+146,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+96,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+98,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+99,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+431,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+433,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+103,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+106,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+105,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+104,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+101,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+102,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+107,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+108,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+109,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+110,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+111,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+114,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+117,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+119,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+124,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+126,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+128,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+132,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+135,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+134,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+133,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+122,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+123,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+136,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+144,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+145,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+137,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+138,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+139,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+267,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+269,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+270,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+271,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+272,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+273,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+274,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+608,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+607,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+536,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+537,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+550,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+435,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+275,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+132,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+126,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+124,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+128,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+117,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+119,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+135,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+134,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+133,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+122,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+123,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+142,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+143,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+79,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+177,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+140,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+137,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+138,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+120,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+92,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+130,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+91,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+285,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+287,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+289,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+130,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+132,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+285,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+287,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+137,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+138,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+120,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+291,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+292,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+293,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+295,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+296,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+298,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+300,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+300,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+301,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+302,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+303,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+305,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+306,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+307,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+309,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+311,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+313,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+285,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+296,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+295,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+298,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+305,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+292,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+306,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+315,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+302,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+300,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+301,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+295,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+300,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+316,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+285,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+317,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+301,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+300,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+303,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+318,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+320,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+322,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+324,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+326,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+328,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+330,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+285,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+287,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+138,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+313,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+289,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+130,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+135,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+134,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+133,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+332,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+128,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+117,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+92,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+91,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+333,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+335,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+609,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+337,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+338,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+339,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+340,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+342,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+344,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+536,"top forwarding_u clk", false,-1);
        tracep->declBit(c+537,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+144,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+145,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+345,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+179,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+154,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+180,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+177,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+534,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+142,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+143,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+140,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+140,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+346,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+347,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+348,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+349,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+350,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+351,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+352,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+353,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+536,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+537,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+117,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+130,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+119,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+120,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+136,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+139,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+550,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+147,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+149,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+151,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+79,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+154,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+161,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+610,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+607,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+536,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+537,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+550,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+354,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+362,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+536,"top ls_u clk", false,-1);
        tracep->declBit(c+537,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+147,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+79,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+149,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+151,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+172,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+176,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+174,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+161,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+152,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+155,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+157,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+159,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+162,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+79,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+163,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+164,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+165,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+167,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+81,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+561,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+70,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+71,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+168,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+164,"top ls_u wren", false,-1);
        tracep->declBit(c+163,"top ls_u rden", false,-1);
        tracep->declBus(c+370,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+165,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+371,"top ls_u wren_last", false,-1);
        tracep->declBit(c+536,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+537,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+164,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+163,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+370,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+165,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+79,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+147,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+172,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+371,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+152,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+162,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+79,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+163,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+164,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+165,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+167,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+81,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+561,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+70,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+71,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+168,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+168,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+372,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+373,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+374,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+375,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+376,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+377,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+378,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+561,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+379,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+380,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+381,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+81,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+167,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+382,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+383,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+384,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+385,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+151,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+176,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+149,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+174,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+164,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+163,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+370,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+165,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+386,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+536,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+537,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+147,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+151,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+79,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+161,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+155,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+157,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+159,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+387,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+388,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+389,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+390,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+391,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+392,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+393,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+394,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+395,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+79,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+396,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+398,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+400,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+159,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+157,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+402,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+404,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+406,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+553,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+553,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+553,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+553,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+554,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+555,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+556,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+536,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+537,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+164,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+163,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+71,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+70,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+168,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+165,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+167,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+79,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+81,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+561,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+5,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+78,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+79,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+557,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+569,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+559,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+560,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+81,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+562,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+563,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+570,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+558,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+558,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+82,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+83,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+85,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+82,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+559,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+86,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+7,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+8,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+571,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+572,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+9,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+87,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+79,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+557,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+569,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+559,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+560,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+561,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+562,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+563,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+564,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+558,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+573,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+88,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+10,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+11,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+12,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+574,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+575,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+576,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+601,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+562,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+602,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+603,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+408,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+72,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+78,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+82,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+86,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+31,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+601,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+562,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+602,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+603,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+409,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+73,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+87,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+88,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+611,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+32,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+34,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+36,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+37,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+605,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+569,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+563,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+560,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+561,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+410,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+536,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+537,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+147,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+151,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+79,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+152,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+154,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+155,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+534,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+170,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+176,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+172,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+174,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+180,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+181,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+612,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+607,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+536,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+537,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+534,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+411,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+421,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+170,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+176,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+172,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+174,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+181,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+179,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+177,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+536,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+537,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+115,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+91,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+112,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+113,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+533,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+162,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+532,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+547,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+547,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+550,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+550,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+534,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+116,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+146,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+613,"top ifAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+613,"top ifAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top ifAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+614,"top ifAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+536,"top ifAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+537,"top ifAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+615,"top ifAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+617,"top ifAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+618,"top ifAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+39,"top ifAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+619,"top ifAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+621,"top ifAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+622,"top ifAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+40,"top ifAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+41,"top ifAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+42,"top ifAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+623,"top ifAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+76,"top ifAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+557,"top ifAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+530,"top ifAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+1,"top ifAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+3,"top ifAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+2,"top ifAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+445,"top ifAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+531,"top ifAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+43,"top ifAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+39,"top ifAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+40,"top ifAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+41,"top ifAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+42,"top ifAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+45,"top ifAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+1,"top ifAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+3,"top ifAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+2,"top ifAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+445,"top ifAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+624,"top ifAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+625,"top ifAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+47,"top ifAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+49,"top ifAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+51,"top ifAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+53,"top ifAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+552,"top ifAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+55,"top ifAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+626,"top ifAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+628,"top ifAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+56,"top ifAxiSlaveRam_u aw_en", false,-1);
        tracep->declBus(c+613,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+613,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+561,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+81,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+536,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+537,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+79,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+557,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+78,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+5,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+83,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+85,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+82,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+8,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+86,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+79,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+557,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+87,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+9,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+12,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+11,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+10,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+88,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+57,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+8,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+59,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+9,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+12,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+11,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+10,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+624,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+625,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+61,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+63,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+65,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+67,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+74,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+75,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+629,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+631,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+69,"top lsAxiSlaveRam_u aw_en", false,-1);
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
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullWData(oldp+14,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+18,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+22,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+26,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+55,(((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready) 
                                  & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID))));
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__aw_en));
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullBit(oldp+70,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
        tracep->fullBit(oldp+71,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
        tracep->fullCData(oldp+72,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
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
        tracep->fullCData(oldp+73,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
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
        tracep->fullBit(oldp+74,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                  & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+75,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                  & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))));
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+79,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullCData(oldp+81,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+83,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                    << (0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                 << 1U)))),64);
        tracep->fullCData(oldp+85,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                             << (7U 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                    >> 2U))))),8);
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+92,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+94,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+95,(((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                   >> 2U)))
                                     ? (IData)((vlSelf->top__DOT__IF_u__DOT__instr_reg 
                                                >> 0x20U))
                                     : (IData)(vlSelf->top__DOT__IF_u__DOT__instr_reg))),32);
        tracep->fullQData(oldp+96,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+98,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+101,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+102,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+103,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+108,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+109,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+111,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+117,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+119,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+120,(((0x4000000U & 
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
        tracep->fullBit(oldp+122,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+123,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+124,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+126,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+128,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+132,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+133,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+134,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+135,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+136,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+137,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+138,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+139,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+142,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+144,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+145,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+147,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+149,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+151,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+152,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+154,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+161,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+162,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+163,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+164,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+167,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+170,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+172,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+174,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+176,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+179,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+180,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+181,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__IF_u__DOT__instr_reg),64);
        tracep->fullIData(oldp+185,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+186,(vlSelf->top__DOT__cache_dut__DOT__addr_ok_o));
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__cache_dut__DOT__rdDataReg),64);
        tracep->fullCData(oldp+189,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullCData(oldp+190,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullBit(oldp+191,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+192,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+193,((((~ (IData)((0U 
                                                != 
                                                (0x1fffffU 
                                                 & (vlSelf->top__DOT__cache_dut__DOT__tagWay2_q 
                                                    ^ (IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 0xbU))))))) 
                                    & (IData)(vlSelf->top__DOT__cache_dut__DOT__bitValid2))
                                    ? 1U : 0U)));
        tracep->fullWData(oldp+194,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1),128);
        tracep->fullWData(oldp+198,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2),128);
        tracep->fullWData(oldp+202,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1),128);
        tracep->fullWData(oldp+206,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2),128);
        tracep->fullBit(oldp+210,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1));
        tracep->fullBit(oldp+211,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2));
        tracep->fullBit(oldp+212,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1));
        tracep->fullBit(oldp+213,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2));
        tracep->fullBit(oldp+214,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+217,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+218,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+219,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__cache_dut__DOT__bitValid1));
        tracep->fullBit(oldp+225,(vlSelf->top__DOT__cache_dut__DOT__bitValid2));
        tracep->fullBit(oldp+226,(vlSelf->top__DOT__cache_dut__DOT__bitValid1_d));
        tracep->fullBit(oldp+227,(vlSelf->top__DOT__cache_dut__DOT__bitValid2_d));
        tracep->fullBit(oldp+228,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+229,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+230,(vlSelf->top__DOT__cache_dut__DOT__tagArray1_d),21);
        tracep->fullIData(oldp+231,(vlSelf->top__DOT__cache_dut__DOT__tagArray2_d),21);
        tracep->fullIData(oldp+232,(vlSelf->top__DOT__cache_dut__DOT__tagWay1_q),21);
        tracep->fullIData(oldp+233,(vlSelf->top__DOT__cache_dut__DOT__tagWay2_q),21);
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullBit(oldp+236,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+237,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+238,(((QData)((IData)(
                                                     (0x1fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                 >> 0xbU))))) 
                                     << 0xbU)),64);
        tracep->fullIData(oldp+240,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN));
        tracep->fullBit(oldp+242,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)))));
        tracep->fullBit(oldp+243,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1)))));
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+245,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+246,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2)))));
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN));
        tracep->fullBit(oldp+248,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)))));
        tracep->fullBit(oldp+249,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1)))));
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+251,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullBit(oldp+252,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2)))));
        tracep->fullQData(oldp+253,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+255,(((IData)(vlSelf->top__DOT__id_flush)
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
        tracep->fullWData(oldp+256,(__Vtemp105),96);
        tracep->fullWData(oldp+259,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+262,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+263,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+264,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+265,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+266,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+267,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+269,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+270,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+271,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+272,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+273,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+274,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+275,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp107, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp108, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp109, __Vtemp107, __Vtemp108);
        VL_EXTEND_WI(65,1, __Vtemp110, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp111, __Vtemp109, __Vtemp110);
        tracep->fullBit(oldp+291,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp111[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+292,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+295,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+300,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+301,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+302,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp114, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp115, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp116, __Vtemp114, __Vtemp115);
        VL_EXTEND_WI(65,1, __Vtemp117, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp118, __Vtemp116, __Vtemp117);
        tracep->fullBit(oldp+305,((1U & __Vtemp118[2U])));
        tracep->fullBit(oldp+306,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+307,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+309,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+311,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+313,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+315,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+316,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+317,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+322,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+324,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+326,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+328,(((0x4000000U & 
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
        tracep->fullQData(oldp+330,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+332,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+333,(((((QData)((IData)(
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
        tracep->fullQData(oldp+335,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+337,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+338,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+340,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+342,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+344,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+345,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+346,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+347,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+348,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+349,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+350,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+351,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+352,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+353,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
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
        tracep->fullWData(oldp+354,(__Vtemp123),226);
        tracep->fullWData(oldp+362,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+370,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+371,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+372,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+373,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+374,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+375,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+376,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+377,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+378,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+379,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+380,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+381,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+382,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+383,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+384,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+385,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+386,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+387,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+388,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+389,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+390,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+391,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+392,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+393,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+394,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+395,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+396,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+398,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+400,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+402,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+404,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+406,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullCData(oldp+408,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+409,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+410,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+411,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+421,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+431,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+433,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
        tracep->fullWData(oldp+435,(__Vtemp128),315);
        tracep->fullBit(oldp+445,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullWData(oldp+446,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+454,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullQData(oldp+462,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+464,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
        tracep->fullQData(oldp+466,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+468,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+470,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+472,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+474,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+476,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+480,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+482,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+484,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+486,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+488,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+490,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+492,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+494,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+496,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+498,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+500,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+504,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+506,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+508,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+512,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+514,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+516,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+518,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+520,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+522,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+524,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+526,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+528,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+530,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
        tracep->fullBit(oldp+531,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
        tracep->fullBit(oldp+532,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+533,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+534,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullCData(oldp+535,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
        tracep->fullBit(oldp+536,(vlSelf->clk));
        tracep->fullBit(oldp+537,(vlSelf->rst_n));
        tracep->fullQData(oldp+538,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+540,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+542,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+543,(vlSelf->regA0),64);
        tracep->fullBit(oldp+545,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+546,((1U & ((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state) 
                                             | (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                != vlSelf->top__DOT__axi_if_u__DOT__addr_reg))
                                          : (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state)))));
        tracep->fullBit(oldp+547,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__sram_data_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+548,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? 0ULL : 
                                         ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                           != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                           ? 0ULL : vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+550,((1U & (~ ((~ (IData)(vlSelf->top__DOT__sram_data_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullCData(oldp+551,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
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
        tracep->fullBit(oldp+552,((((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_if_u__DOT__ar_valid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullIData(oldp+553,(0x40U),32);
        tracep->fullIData(oldp+554,(4U),32);
        tracep->fullIData(oldp+555,(8U),32);
        tracep->fullIData(oldp+556,(1U),32);
        tracep->fullCData(oldp+557,(0U),3);
        tracep->fullCData(oldp+558,(0U),4);
        tracep->fullBit(oldp+559,(0U));
        tracep->fullCData(oldp+560,(0U),8);
        tracep->fullCData(oldp+561,(3U),3);
        tracep->fullCData(oldp+562,(1U),2);
        tracep->fullBit(oldp+563,(0U));
        tracep->fullCData(oldp+564,(2U),4);
        tracep->fullCData(oldp+565,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+566,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+567,(vlSelf->top__DOT__if_axi_r_id_i),4);
        tracep->fullBit(oldp+568,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+569,(1U),4);
        tracep->fullCData(oldp+570,(0xfU),4);
        tracep->fullCData(oldp+571,(vlSelf->top__DOT__ls_axi_b_id_i),4);
        tracep->fullBit(oldp+572,(vlSelf->top__DOT__ls_axi_b_user_i));
        tracep->fullCData(oldp+573,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+574,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullCData(oldp+575,(vlSelf->top__DOT__ls_axi_r_id_i),4);
        tracep->fullBit(oldp+576,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+577,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+579,(1U));
        tracep->fullQData(oldp+580,(vlSelf->top__DOT__cache_dut__DOT__wr_data_i),64);
        tracep->fullCData(oldp+582,(vlSelf->top__DOT__cache_dut__DOT__wr_mask_i),8);
        tracep->fullBit(oldp+583,(vlSelf->top__DOT__cache_dut__DOT__data_ok_o));
        tracep->fullBit(oldp+584,(vlSelf->top__DOT__cache_dut__DOT__cacheRdValid_o));
        tracep->fullBit(oldp+585,(vlSelf->top__DOT__cache_dut__DOT__rdLast_i));
        tracep->fullIData(oldp+586,(vlSelf->top__DOT__cache_dut__DOT__cacheAddr_o),32);
        tracep->fullQData(oldp+587,(vlSelf->top__DOT__cache_dut__DOT__rdData_i),64);
        tracep->fullCData(oldp+589,(1U),3);
        tracep->fullCData(oldp+590,(2U),3);
        tracep->fullIData(oldp+591,(0x80U),32);
        tracep->fullIData(oldp+592,(6U),32);
        __Vtemp129[0U] = 0U;
        __Vtemp129[1U] = 0U;
        __Vtemp129[2U] = 0U;
        __Vtemp129[3U] = 0U;
        tracep->fullWData(oldp+593,(__Vtemp129),128);
        __Vtemp130[0U] = 0xffffffffU;
        __Vtemp130[1U] = 0xffffffffU;
        __Vtemp130[2U] = 0xffffffffU;
        __Vtemp130[3U] = 0xffffffffU;
        tracep->fullWData(oldp+597,(__Vtemp130),128);
        tracep->fullCData(oldp+601,(0U),2);
        tracep->fullCData(oldp+602,(3U),2);
        tracep->fullCData(oldp+603,(2U),2);
        tracep->fullBit(oldp+604,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid));
        tracep->fullIData(oldp+605,(3U),32);
        tracep->fullIData(oldp+606,(0x60U),32);
        tracep->fullIData(oldp+607,(0U),32);
        tracep->fullIData(oldp+608,(0x13bU),32);
        tracep->fullBit(oldp+609,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+610,(0xe2U),32);
        tracep->fullBit(oldp+611,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+612,(0x121U),32);
        tracep->fullIData(oldp+613,(0x40U),32);
        tracep->fullCData(oldp+614,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWSIZE),3);
        tracep->fullQData(oldp+615,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWADDR),64);
        tracep->fullCData(oldp+617,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWPROT),3);
        tracep->fullBit(oldp+618,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID));
        tracep->fullQData(oldp+619,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WDATA),64);
        tracep->fullCData(oldp+621,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WSTRB),8);
        tracep->fullBit(oldp+622,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID));
        tracep->fullBit(oldp+623,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_BREADY));
        tracep->fullIData(oldp+624,(3U),32);
        tracep->fullIData(oldp+625,(1U),32);
        tracep->fullQData(oldp+626,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+628,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__byte_index),32);
        tracep->fullQData(oldp+629,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+631,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
