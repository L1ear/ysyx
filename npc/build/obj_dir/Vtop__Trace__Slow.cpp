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
        tracep->declBit(c+552,"clk", false,-1);
        tracep->declBit(c+553,"rst_n", false,-1);
        tracep->declQuad(c+554,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+556,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+558,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+559,"regA0", false,-1, 63,0);
        tracep->declBit(c+561,"stall_n_diff", false,-1);
        tracep->declBus(c+571,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+571,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+571,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+571,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+572,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+573,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+574,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+552,"top clk", false,-1);
        tracep->declBit(c+553,"top rst_n", false,-1);
        tracep->declQuad(c+554,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+556,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+558,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+559,"top regA0", false,-1, 63,0);
        tracep->declBit(c+561,"top stall_n_diff", false,-1);
        tracep->declBit(c+562,"top instr_fetching", false,-1);
        tracep->declBit(c+1,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+70,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+480,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+575,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+576,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+577,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+578,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+579,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+580,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+581,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+582,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+576,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+583,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+71,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+2,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+3,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+4,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+584,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+585,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+586,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+6,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+72,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+73,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+575,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+587,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+577,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+578,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+75,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+580,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+581,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+588,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+576,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+576,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+7,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+76,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+77,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+79,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+76,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+577,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+80,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+8,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+9,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+589,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+590,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+10,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+81,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+73,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+575,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+587,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+577,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+578,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+579,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+580,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+581,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+582,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+576,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+591,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+82,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+11,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+12,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+13,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+592,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+593,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+594,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+595,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+482,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+83,"top is_jump", false,-1);
        tracep->declQuad(c+84,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+484,"top pc_stall_n", false,-1);
        tracep->declBit(c+484,"top if_stall_n", false,-1);
        tracep->declBit(c+485,"top if_instr_valid", false,-1);
        tracep->declBit(c+563,"top sram_data_valid", false,-1);
        tracep->declQuad(c+486,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+480,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+597,"top sram_ren", false,-1);
        tracep->declBit(c+488,"top sram_addr_valid", false,-1);
        tracep->declBit(c+489,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+490,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+491,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+86,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+88,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+564,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+566,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+89,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+91,"top src1sel_id", false,-1);
        tracep->declBus(c+92,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+93,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+94,"top is_brc_id", false,-1);
        tracep->declBit(c+95,"top is_jal_id", false,-1);
        tracep->declBit(c+96,"top is_jalr_id", false,-1);
        tracep->declBit(c+97,"top wben_id", false,-1);
        tracep->declBus(c+98,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+99,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+484,"top id_stall_n", false,-1);
        tracep->declBit(c+100,"top DivEn_id", false,-1);
        tracep->declBus(c+101,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+102,"top in_trap_id", false,-1);
        tracep->declBit(c+103,"top out_trap_id", false,-1);
        tracep->declBit(c+104,"top trap_id", false,-1);
        tracep->declBit(c+492,"top ld_use_hazard", false,-1);
        tracep->declBit(c+105,"top id_flush", false,-1);
        tracep->declQuad(c+106,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+108,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+109,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+111,"top src1sel_ex", false,-1);
        tracep->declBus(c+112,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+113,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+115,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+117,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+119,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+121,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+122,"top is_brc_ex", false,-1);
        tracep->declBit(c+123,"top is_jal_ex", false,-1);
        tracep->declBit(c+124,"top is_jalr_ex", false,-1);
        tracep->declBit(c+125,"top wben_ex", false,-1);
        tracep->declBit(c+126,"top DivEn_ex", false,-1);
        tracep->declBus(c+127,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+128,"top trap_ex", false,-1);
        tracep->declBit(c+493,"top ex_stall_n", false,-1);
        tracep->declQuad(c+129,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+131,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+132,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+133,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+134,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+494,"top ex_flush", false,-1);
        tracep->declQuad(c+135,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+137,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+73,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+139,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+140,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+142,"top wben_ls", false,-1);
        tracep->declQuad(c+143,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+145,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+147,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+149,"top trap_ls", false,-1);
        tracep->declBit(c+493,"top ls_stall_n", false,-1);
        tracep->declBit(c+495,"top ls_not_ok", false,-1);
        tracep->declQuad(c+73,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+150,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+151,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+152,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+154,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+63,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+64,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+155,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+75,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+579,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+157,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+159,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+161,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+163,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+164,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+166,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+167,"top wben_wb", false,-1);
        tracep->declQuad(c+168,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+496,"top wb_stall_n", false,-1);
        tracep->declBit(c+552,"top IF_u clk", false,-1);
        tracep->declBit(c+553,"top IF_u rst_n", false,-1);
        tracep->declBit(c+83,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+84,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+145,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+147,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+102,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+103,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+484,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+482,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+491,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+485,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+486,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+563,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+489,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+490,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+480,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+597,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+488,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+480,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+552,"top cache_dut clk", false,-1);
        tracep->declBit(c+553,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+497,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+488,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+581,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+598,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+578,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+489,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+498,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+490,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+486,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+600,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+601,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+602,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+603,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBus(c+575,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+605,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+606,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+579,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+499,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+500,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+501,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+502,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+503,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+388,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+392,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+15,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+396,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+504,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+508,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+512,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+516,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+520,"top cache_dut wenWay1_1", false,-1);
        tracep->declBit(c+521,"top cache_dut wenWay1_2", false,-1);
        tracep->declBit(c+522,"top cache_dut wenWay2_1", false,-1);
        tracep->declBit(c+523,"top cache_dut wenWay2_2", false,-1);
        tracep->declBit(c+524,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+525,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+527,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+528,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+529,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+170,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+172,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+370,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+371,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+530,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+531,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+532,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+533,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+372,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+373,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+607,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+608,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+534,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+400,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+408,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+356,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+358,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+535,"top cache_dut missEn", false,-1);
        tracep->declBit(c+536,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+537,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+539,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+174,"top cache_dut missFlag", false,-1);
        tracep->declArray(c+175,"top cache_dut dpiRegWay1", false,-1, 255,0);
        tracep->declArray(c+183,"top cache_dut dpiRegWay2", false,-1, 255,0);
        tracep->declBus(c+609,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+571,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+610,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+609,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+388,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+552,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+540,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+541,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+611,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+528,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+504,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+542,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+520,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+615,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+609,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+571,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+610,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+609,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+392,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+552,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+543,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+544,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+611,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+528,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+508,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+545,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+521,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+615,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+609,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+571,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+610,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+609,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+15,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+552,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+546,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+547,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+611,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+528,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+512,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+548,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+522,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+615,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+609,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+571,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+610,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+609,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+396,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+552,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+549,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+550,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+611,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+528,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+516,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+551,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+523,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+615,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+571,"top axi_if_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+571,"top axi_if_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+571,"top axi_if_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+571,"top axi_if_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+572,"top axi_if_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+573,"top axi_if_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+574,"top axi_if_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+552,"top axi_if_u clock", false,-1);
        tracep->declBit(c+553,"top axi_if_u reset", false,-1);
        tracep->declBit(c+488,"top axi_if_u rw_valid_i", false,-1);
        tracep->declBit(c+563,"top axi_if_u rw_ready_o", false,-1);
        tracep->declQuad(c+568,"top axi_if_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+480,"top axi_if_u rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+562,"top axi_if_u instr_fetching", false,-1);
        tracep->declBit(c+1,"top axi_if_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+70,"top axi_if_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+480,"top axi_if_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+575,"top axi_if_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+576,"top axi_if_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+577,"top axi_if_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+578,"top axi_if_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+579,"top axi_if_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+580,"top axi_if_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+581,"top axi_if_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+582,"top axi_if_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+576,"top axi_if_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+583,"top axi_if_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+71,"top axi_if_u axi_r_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_if_u axi_r_valid_i", false,-1);
        tracep->declBus(c+3,"top axi_if_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+4,"top axi_if_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+584,"top axi_if_u axi_r_last_i", false,-1);
        tracep->declBus(c+585,"top axi_if_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+586,"top axi_if_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+619,"top axi_if_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+580,"top axi_if_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+620,"top axi_if_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+621,"top axi_if_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+191,"top axi_if_u r_state", false,-1, 1,0);
        tracep->declBus(c+570,"top axi_if_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+70,"top axi_if_u ar_valid", false,-1);
        tracep->declBit(c+71,"top axi_if_u r_ready", false,-1);
        tracep->declBit(c+622,"top axi_if_u instr_valid", false,-1);
        tracep->declQuad(c+19,"top axi_if_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+21,"top axi_if_u instr_valid_reg", false,-1);
        tracep->declQuad(c+22,"top axi_if_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+623,"top axi_if_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+576,"top axi_if_u axi_id", false,-1, 3,0);
        tracep->declBus(c+581,"top axi_if_u axi_user", false,-1, 0,0);
        tracep->declBus(c+578,"top axi_if_u axi_len", false,-1, 7,0);
        tracep->declBus(c+579,"top axi_if_u axi_size", false,-1, 2,0);
        tracep->declBit(c+552,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+553,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+482,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+491,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+484,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+105,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+86,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+88,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+374,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+376,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+624,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+625,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+552,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+553,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+484,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+377,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+192,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+552,"top ID_u clk", false,-1);
        tracep->declBit(c+553,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+86,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+157,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+163,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+88,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+164,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+166,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+167,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+566,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+564,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+89,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+91,"top ID_u src1sel", false,-1);
        tracep->declBus(c+92,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+93,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+96,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+95,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+94,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+97,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+98,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+99,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+559,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+100,"top ID_u DivEn", false,-1);
        tracep->declBus(c+101,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+104,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+102,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+103,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+195,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+89,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+566,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+564,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+86,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+88,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+98,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+99,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+195,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+91,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+92,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+93,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+96,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+95,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+94,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+97,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+100,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+101,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+104,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+102,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+103,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+196,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+197,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+198,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+199,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+195,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+89,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+552,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+157,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+163,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+98,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+566,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+99,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+564,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+166,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+164,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+167,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+559,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+416+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+88,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+108,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+492,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+552,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+553,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+493,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+494,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+86,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+88,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+89,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+564,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+566,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+93,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+96,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+95,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+94,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+91,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+92,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+97,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+98,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+99,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+100,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+101,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+104,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+106,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+108,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+113,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+115,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+117,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+121,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+124,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+123,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+122,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+111,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+112,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+125,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+133,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+134,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+126,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+127,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+128,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+380,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+382,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+383,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+384,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+385,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+386,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+387,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+626,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+625,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+552,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+553,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+493,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+360,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+200,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+121,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+115,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+113,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+117,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+106,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+108,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+124,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+123,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+122,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+111,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+112,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+131,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+132,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+73,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+164,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+129,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+126,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+127,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+109,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+84,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+119,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+83,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+210,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+212,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+214,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+119,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+121,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+210,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+212,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+126,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+127,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+109,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+216,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+217,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+218,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+220,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+221,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+223,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+225,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+225,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+226,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+227,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+228,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+230,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+231,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+232,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+234,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+236,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+238,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+210,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+221,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+220,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+223,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+230,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+217,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+231,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+240,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+227,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+225,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+226,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+220,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+225,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+241,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+210,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+242,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+226,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+225,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+228,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+243,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+245,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+247,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+249,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+251,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+253,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+255,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+210,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+212,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+127,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+238,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+214,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+119,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+124,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+123,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+122,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+257,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+117,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+106,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+84,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+83,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+258,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+260,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+627,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+262,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+263,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+264,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+265,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+267,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+269,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+552,"top forwarding_u clk", false,-1);
        tracep->declBit(c+553,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+133,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+134,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+270,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+166,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+142,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+167,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+164,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+496,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+131,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+132,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+129,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+129,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+271,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+272,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+273,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+274,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+275,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+276,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+277,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+278,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+552,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+553,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+106,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+119,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+108,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+109,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+125,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+128,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+493,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+135,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+137,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+139,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+73,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+142,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+149,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+628,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+625,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+552,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+553,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+493,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+279,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+287,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+552,"top ls_u clk", false,-1);
        tracep->declBit(c+553,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+135,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+73,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+137,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+139,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+159,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+163,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+161,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+149,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+140,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+143,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+145,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+147,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+495,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+73,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+150,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+151,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+152,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+154,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+75,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+579,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+63,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+64,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+155,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+151,"top ls_u wren", false,-1);
        tracep->declBit(c+150,"top ls_u rden", false,-1);
        tracep->declBus(c+295,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+152,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+296,"top ls_u wren_last", false,-1);
        tracep->declBit(c+552,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+553,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+151,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+150,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+295,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+152,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+73,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+135,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+159,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+296,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+140,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+495,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+73,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+150,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+151,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+152,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+154,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+75,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+579,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+63,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+64,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+155,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+155,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+297,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+298,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+299,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+300,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+301,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+302,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+303,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+579,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+304,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+305,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+306,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+75,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+154,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+307,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+308,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+309,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+310,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+139,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+163,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+137,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+161,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+151,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+150,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+295,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+152,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+311,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+552,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+553,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+135,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+139,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+73,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+149,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+143,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+145,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+147,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+312,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+313,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+314,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+315,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+316,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+317,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+318,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+319,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+320,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+73,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+321,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+323,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+325,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+147,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+145,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+327,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+329,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+331,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+571,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+571,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+571,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+571,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+572,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+573,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+574,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+552,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+553,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+151,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+150,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+64,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+63,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+155,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+152,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+154,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+73,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+75,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+579,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+6,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+72,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+73,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+575,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+587,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+577,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+578,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+75,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+580,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+581,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+588,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+576,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+576,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+7,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+76,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+77,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+79,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+76,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+577,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+80,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+8,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+9,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+589,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+590,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+10,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+81,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+73,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+575,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+587,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+577,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+578,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+579,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+580,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+581,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+582,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+576,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+591,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+82,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+11,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+12,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+13,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+592,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+593,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+594,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+619,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+580,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+620,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+621,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+333,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+65,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+72,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+76,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+80,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+24,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+619,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+580,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+620,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+621,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+334,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+66,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+81,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+82,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+629,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+25,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+27,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+29,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+30,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+623,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+587,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+581,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+578,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+579,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+335,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+552,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+553,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+135,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+139,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+73,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+140,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+142,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+143,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+496,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+157,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+163,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+159,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+161,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+167,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+168,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+630,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+625,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+552,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+553,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+496,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+336,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+346,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+157,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+163,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+159,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+161,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+168,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+166,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+164,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+552,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+553,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+492,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+83,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+102,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+103,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+485,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+495,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+484,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+484,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+484,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+493,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+493,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+496,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+105,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+494,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+631,"top ifAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+631,"top ifAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+579,"top ifAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+632,"top ifAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+552,"top ifAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+553,"top ifAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+633,"top ifAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+635,"top ifAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+636,"top ifAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+32,"top ifAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+637,"top ifAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+639,"top ifAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+640,"top ifAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+33,"top ifAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+34,"top ifAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+35,"top ifAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+641,"top ifAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+480,"top ifAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+575,"top ifAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+70,"top ifAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+1,"top ifAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+4,"top ifAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+3,"top ifAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+2,"top ifAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+71,"top ifAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+36,"top ifAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+32,"top ifAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+33,"top ifAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+34,"top ifAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+35,"top ifAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+38,"top ifAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+1,"top ifAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+4,"top ifAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+3,"top ifAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+2,"top ifAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+642,"top ifAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+643,"top ifAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+40,"top ifAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+42,"top ifAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+44,"top ifAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+46,"top ifAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+67,"top ifAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+48,"top ifAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+644,"top ifAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+646,"top ifAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+49,"top ifAxiSlaveRam_u aw_en", false,-1);
        tracep->declBus(c+631,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+631,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+579,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+75,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+552,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+553,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+73,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+575,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+72,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+77,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+79,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+76,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+9,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+8,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+80,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+73,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+575,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+81,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+10,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+13,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+12,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+11,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+82,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+50,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+9,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+8,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+52,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+10,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+13,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+12,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+11,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+642,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+643,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+54,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+56,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+58,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+60,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+68,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+69,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+647,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+649,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+62,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp109;
    VlWide<3>/*95:0*/ __Vtemp110;
    VlWide<3>/*95:0*/ __Vtemp111;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<3>/*95:0*/ __Vtemp113;
    VlWide<3>/*95:0*/ __Vtemp116;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp119;
    VlWide<3>/*95:0*/ __Vtemp120;
    VlWide<8>/*255:0*/ __Vtemp125;
    VlWide<10>/*319:0*/ __Vtemp130;
    VlWide<3>/*95:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp133;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid));
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
        tracep->fullWData(oldp+15,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+48,(((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready) 
                                  & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID))));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__aw_en));
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullBit(oldp+63,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
        tracep->fullBit(oldp+64,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
        tracep->fullCData(oldp+65,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
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
        tracep->fullCData(oldp+66,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
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
        tracep->fullBit(oldp+67,((((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready) 
                                   & (IData)(vlSelf->top__DOT__axi_if_u__DOT__ar_valid)) 
                                  & (~ (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+68,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                  & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+69,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                  & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))));
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+73,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullCData(oldp+75,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+77,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                    << (0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                 << 1U)))),64);
        tracep->fullCData(oldp+79,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                             << (7U 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                    >> 2U))))),8);
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+84,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullQData(oldp+86,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+88,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+93,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+98,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+99,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+101,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+106,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+108,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+109,(((0x4000000U & 
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
        tracep->fullBit(oldp+111,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+112,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+113,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+115,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+117,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+121,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+122,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+123,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+124,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+125,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+126,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+127,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+128,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+131,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+132,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+133,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+134,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullQData(oldp+135,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+137,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+139,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+140,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+142,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+149,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+150,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+151,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+154,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+157,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+159,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+161,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+163,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+166,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+167,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+168,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+174,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullWData(oldp+175,(vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1),256);
        tracep->fullWData(oldp+183,(vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2),256);
        tracep->fullCData(oldp+191,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
        tracep->fullWData(oldp+192,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+195,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+196,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+197,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+198,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+199,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullWData(oldp+200,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp109, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp110, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp111, __Vtemp109, __Vtemp110);
        VL_EXTEND_WI(65,1, __Vtemp112, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp113, __Vtemp111, __Vtemp112);
        tracep->fullBit(oldp+216,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp113[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+220,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+225,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+226,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+227,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp116, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp117, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp118, __Vtemp116, __Vtemp117);
        VL_EXTEND_WI(65,1, __Vtemp119, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp120, __Vtemp118, __Vtemp119);
        tracep->fullBit(oldp+230,((1U & __Vtemp120[2U])));
        tracep->fullBit(oldp+231,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+232,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+234,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+236,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+238,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+240,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+241,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+242,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+247,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+249,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+251,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+253,(((0x4000000U & 
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
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+257,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+258,(((((QData)((IData)(
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
        tracep->fullQData(oldp+260,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+262,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+267,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+269,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+270,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+271,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+272,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+273,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+274,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+275,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+276,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+277,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+278,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        __Vtemp125[0U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp125[1U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp125[2U] = (((IData)((((0x4000000U & 
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
        __Vtemp125[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp125[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp125[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp125[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp125[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+279,(__Vtemp125),226);
        tracep->fullWData(oldp+287,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+295,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+296,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+297,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+298,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+299,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+300,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+301,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+302,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+303,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+304,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+305,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+306,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+307,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+308,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+309,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+310,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+311,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+312,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+313,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+314,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+315,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+316,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+317,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+318,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+319,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+320,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+321,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+323,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+329,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullCData(oldp+333,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+334,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+335,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+336,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+346,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+356,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (0ULL != vlSelf->top__DOT__pc_new)) 
                                      | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                          & (0ULL != vlSelf->top__DOT__pc_new)) 
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
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[6U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way1Data[6U]))))
                                              : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[4U])))
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
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way1Data[2U]))))
                                              : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way1Data[0U]))))))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+358,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (0ULL != vlSelf->top__DOT__pc_new)) 
                                      | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                          & (0ULL != vlSelf->top__DOT__pc_new)) 
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
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[6U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way2Data[6U]))))
                                              : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[4U])))
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
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way2Data[2U]))))
                                              : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way2Data[0U]))))))
                                      : 0ULL)),64);
        __Vtemp130[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp130[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp130[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp130[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp130[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp130[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp130[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp130[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp130[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp130[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+360,(__Vtemp130),315);
        tracep->fullBit(oldp+370,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+371,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+372,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+373,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                       >> 5U)))]),21);
        tracep->fullQData(oldp+374,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+376,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp131[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp131[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp131[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+377,(__Vtemp131),96);
        tracep->fullQData(oldp+380,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+382,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+383,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+384,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+385,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+386,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+387,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+388,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+392,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+396,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+400,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+408,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+420,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+422,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+424,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+426,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+428,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+430,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+432,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+434,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+436,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+440,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+442,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+446,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+448,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+450,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+452,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+454,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+456,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+458,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+460,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+462,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+464,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+466,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+468,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+470,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+472,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+474,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+476,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullQData(oldp+480,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullQData(oldp+482,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+484,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+485,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+486,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullBit(oldp+488,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+489,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+490,(((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                    | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+491,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullBit(oldp+492,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+493,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+494,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+495,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+496,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullIData(oldp+497,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+498,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+499,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullCData(oldp+500,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullBit(oldp+501,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+502,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+503,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullWData(oldp+504,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1),128);
        tracep->fullWData(oldp+508,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2),128);
        tracep->fullWData(oldp+512,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1),128);
        tracep->fullWData(oldp+516,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2),128);
        tracep->fullBit(oldp+520,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1));
        tracep->fullBit(oldp+521,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2));
        tracep->fullBit(oldp+522,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1));
        tracep->fullBit(oldp+523,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2));
        tracep->fullBit(oldp+524,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+525,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+527,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+528,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+529,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+530,(vlSelf->top__DOT__cache_dut__DOT__bitValid1_d));
        tracep->fullBit(oldp+531,(vlSelf->top__DOT__cache_dut__DOT__bitValid2_d));
        tracep->fullIData(oldp+532,(vlSelf->top__DOT__cache_dut__DOT__tagArray1_d),21);
        tracep->fullIData(oldp+533,(vlSelf->top__DOT__cache_dut__DOT__tagArray2_d),21);
        tracep->fullBit(oldp+534,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+535,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+536,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+537,(((QData)((IData)(
                                                     (0x1fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                 >> 0xbU))))) 
                                     << 0xbU)),64);
        tracep->fullIData(oldp+539,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullBit(oldp+540,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN));
        tracep->fullBit(oldp+541,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1)))));
        tracep->fullBit(oldp+542,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)))));
        tracep->fullBit(oldp+543,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+544,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2)))));
        tracep->fullBit(oldp+545,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+546,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN));
        tracep->fullBit(oldp+547,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1)))));
        tracep->fullBit(oldp+548,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)))));
        tracep->fullBit(oldp+549,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+550,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2)))));
        tracep->fullBit(oldp+551,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullBit(oldp+552,(vlSelf->clk));
        tracep->fullBit(oldp+553,(vlSelf->rst_n));
        tracep->fullQData(oldp+554,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+556,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+558,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+559,(vlSelf->regA0),64);
        tracep->fullBit(oldp+561,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+562,((1U & ((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state) 
                                             | (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                != vlSelf->top__DOT__axi_if_u__DOT__addr_reg))
                                          : (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state)))));
        tracep->fullBit(oldp+563,((((IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state) 
                                    >> 1U) & ((~ (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state)) 
                                              & ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                  == vlSelf->top__DOT__axi_if_u__DOT__addr_reg) 
                                                 & (IData)(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg))))));
        tracep->fullQData(oldp+564,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+566,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        tracep->fullQData(oldp+568,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? 0ULL : 
                                         ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                           != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                           ? 0ULL : vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+570,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
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
        tracep->fullIData(oldp+571,(0x40U),32);
        tracep->fullIData(oldp+572,(4U),32);
        tracep->fullIData(oldp+573,(8U),32);
        tracep->fullIData(oldp+574,(1U),32);
        tracep->fullCData(oldp+575,(0U),3);
        tracep->fullCData(oldp+576,(0U),4);
        tracep->fullBit(oldp+577,(0U));
        tracep->fullCData(oldp+578,(0U),8);
        tracep->fullCData(oldp+579,(3U),3);
        tracep->fullCData(oldp+580,(1U),2);
        tracep->fullBit(oldp+581,(0U));
        tracep->fullCData(oldp+582,(2U),4);
        tracep->fullCData(oldp+583,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+584,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+585,(vlSelf->top__DOT__if_axi_r_id_i),4);
        tracep->fullBit(oldp+586,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+587,(1U),4);
        tracep->fullCData(oldp+588,(0xfU),4);
        tracep->fullCData(oldp+589,(vlSelf->top__DOT__ls_axi_b_id_i),4);
        tracep->fullBit(oldp+590,(vlSelf->top__DOT__ls_axi_b_user_i));
        tracep->fullCData(oldp+591,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+592,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullCData(oldp+593,(vlSelf->top__DOT__ls_axi_r_id_i),4);
        tracep->fullBit(oldp+594,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+595,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+597,(1U));
        tracep->fullQData(oldp+598,(0ULL),64);
        tracep->fullBit(oldp+600,(vlSelf->top__DOT__cache_dut__DOT__cacheRdValid_o));
        tracep->fullBit(oldp+601,(vlSelf->top__DOT__cache_dut__DOT__rdLast_i));
        tracep->fullIData(oldp+602,(vlSelf->top__DOT__cache_dut__DOT__cacheAddr_o),32);
        tracep->fullQData(oldp+603,(vlSelf->top__DOT__cache_dut__DOT__rdData_i),64);
        tracep->fullCData(oldp+605,(1U),3);
        tracep->fullCData(oldp+606,(2U),3);
        tracep->fullBit(oldp+607,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+608,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+609,(0x80U),32);
        tracep->fullIData(oldp+610,(6U),32);
        __Vtemp132[0U] = 0U;
        __Vtemp132[1U] = 0U;
        __Vtemp132[2U] = 0U;
        __Vtemp132[3U] = 0U;
        tracep->fullWData(oldp+611,(__Vtemp132),128);
        __Vtemp133[0U] = 0xffffffffU;
        __Vtemp133[1U] = 0xffffffffU;
        __Vtemp133[2U] = 0xffffffffU;
        __Vtemp133[3U] = 0xffffffffU;
        tracep->fullWData(oldp+615,(__Vtemp133),128);
        tracep->fullCData(oldp+619,(0U),2);
        tracep->fullCData(oldp+620,(3U),2);
        tracep->fullCData(oldp+621,(2U),2);
        tracep->fullBit(oldp+622,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid));
        tracep->fullIData(oldp+623,(3U),32);
        tracep->fullIData(oldp+624,(0x60U),32);
        tracep->fullIData(oldp+625,(0U),32);
        tracep->fullIData(oldp+626,(0x13bU),32);
        tracep->fullBit(oldp+627,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+628,(0xe2U),32);
        tracep->fullBit(oldp+629,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+630,(0x121U),32);
        tracep->fullIData(oldp+631,(0x40U),32);
        tracep->fullCData(oldp+632,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWSIZE),3);
        tracep->fullQData(oldp+633,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWADDR),64);
        tracep->fullCData(oldp+635,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWPROT),3);
        tracep->fullBit(oldp+636,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID));
        tracep->fullQData(oldp+637,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WDATA),64);
        tracep->fullCData(oldp+639,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WSTRB),8);
        tracep->fullBit(oldp+640,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID));
        tracep->fullBit(oldp+641,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_BREADY));
        tracep->fullIData(oldp+642,(3U),32);
        tracep->fullIData(oldp+643,(1U),32);
        tracep->fullQData(oldp+644,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+646,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__byte_index),32);
        tracep->fullQData(oldp+647,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+649,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
