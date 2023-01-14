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
        tracep->declBit(c+563,"clk", false,-1);
        tracep->declBit(c+564,"rst_n", false,-1);
        tracep->declQuad(c+565,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+567,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+569,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+570,"regA0", false,-1, 63,0);
        tracep->declBit(c+572,"stall_n_diff", false,-1);
        tracep->declBus(c+573,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+573,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+573,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+573,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+574,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+575,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+576,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+563,"top clk", false,-1);
        tracep->declBit(c+564,"top rst_n", false,-1);
        tracep->declQuad(c+565,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+567,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+569,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+570,"top regA0", false,-1, 63,0);
        tracep->declBit(c+572,"top stall_n_diff", false,-1);
        tracep->declBit(c+91,"top instr_fetching", false,-1);
        tracep->declBit(c+1,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+107,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+2,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+577,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+578,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+579,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+580,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+581,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+582,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+583,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+584,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+578,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+585,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+108,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+4,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+5,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+6,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+586,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+587,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+588,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+8,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+109,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+110,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+577,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+589,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+579,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+590,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+112,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+582,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+583,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+591,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+578,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+578,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+113,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+114,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+116,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+113,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+579,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+117,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+10,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+11,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+592,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+593,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+12,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+118,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+110,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+577,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+589,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+579,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+590,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+581,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+582,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+583,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+584,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+578,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+594,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+119,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+13,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+14,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+15,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+595,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+596,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+597,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+598,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+120,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+122,"top is_jump", false,-1);
        tracep->declQuad(c+123,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+125,"top pc_stall_n", false,-1);
        tracep->declBit(c+126,"top if_stall_n", false,-1);
        tracep->declBit(c+127,"top if_instr_valid", false,-1);
        tracep->declBit(c+92,"top sram_data_valid", false,-1);
        tracep->declQuad(c+128,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+130,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+600,"top sram_ren", false,-1);
        tracep->declBit(c+132,"top sram_addr_valid", false,-1);
        tracep->declBit(c+133,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+134,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+135,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+136,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+138,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+485,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+487,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+139,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+141,"top src1sel_id", false,-1);
        tracep->declBus(c+142,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+143,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+144,"top is_brc_id", false,-1);
        tracep->declBit(c+145,"top is_jal_id", false,-1);
        tracep->declBit(c+146,"top is_jalr_id", false,-1);
        tracep->declBit(c+147,"top wben_id", false,-1);
        tracep->declBus(c+148,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+149,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+125,"top id_stall_n", false,-1);
        tracep->declBit(c+150,"top DivEn_id", false,-1);
        tracep->declBus(c+151,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+152,"top in_trap_id", false,-1);
        tracep->declBit(c+153,"top out_trap_id", false,-1);
        tracep->declBit(c+154,"top trap_id", false,-1);
        tracep->declBit(c+155,"top ld_use_hazard", false,-1);
        tracep->declBit(c+156,"top id_flush", false,-1);
        tracep->declQuad(c+157,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+159,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+160,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+162,"top src1sel_ex", false,-1);
        tracep->declBus(c+163,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+164,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+166,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+168,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+170,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+172,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+173,"top is_brc_ex", false,-1);
        tracep->declBit(c+174,"top is_jal_ex", false,-1);
        tracep->declBit(c+175,"top is_jalr_ex", false,-1);
        tracep->declBit(c+176,"top wben_ex", false,-1);
        tracep->declBit(c+177,"top DivEn_ex", false,-1);
        tracep->declBus(c+178,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+179,"top trap_ex", false,-1);
        tracep->declBit(c+180,"top ex_stall_n", false,-1);
        tracep->declQuad(c+181,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+183,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+184,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+185,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+186,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+187,"top ex_flush", false,-1);
        tracep->declQuad(c+188,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+190,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+110,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+192,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+193,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+195,"top wben_ls", false,-1);
        tracep->declQuad(c+196,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+198,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+200,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+202,"top trap_ls", false,-1);
        tracep->declBit(c+180,"top ls_stall_n", false,-1);
        tracep->declBit(c+203,"top ls_not_ok", false,-1);
        tracep->declQuad(c+110,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+204,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+205,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+206,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+208,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+93,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+94,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+209,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+112,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+581,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+211,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+213,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+215,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+217,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+218,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+220,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+221,"top wben_wb", false,-1);
        tracep->declQuad(c+222,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+224,"top wb_stall_n", false,-1);
        tracep->declBit(c+563,"top IF_u clk", false,-1);
        tracep->declBit(c+564,"top IF_u rst_n", false,-1);
        tracep->declBit(c+122,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+123,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+198,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+200,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+152,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+153,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+126,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+120,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+135,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+127,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+128,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+92,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+133,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+134,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+130,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+600,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+132,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+130,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+563,"top cache_dut clk", false,-1);
        tracep->declBit(c+564,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+225,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+132,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+583,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+601,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+590,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+126,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+133,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+226,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+134,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+128,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+603,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+604,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+605,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+606,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBus(c+577,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+608,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+609,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+581,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+227,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+228,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+229,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+230,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+231,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+17,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+21,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+25,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+29,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+232,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+236,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+240,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+244,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+248,"top cache_dut wenWay1_1", false,-1);
        tracep->declBit(c+249,"top cache_dut wenWay1_2", false,-1);
        tracep->declBit(c+250,"top cache_dut wenWay2_1", false,-1);
        tracep->declBit(c+251,"top cache_dut wenWay2_2", false,-1);
        tracep->declBit(c+252,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+253,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+255,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+256,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+257,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+258,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+260,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+262,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+263,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+264,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+265,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+266,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+267,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+268,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+269,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+610,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+611,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+270,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+33,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+41,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+95,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+97,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+271,"top cache_dut missEn", false,-1);
        tracep->declBit(c+272,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+273,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+275,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+276,"top cache_dut missFlag", false,-1);
        tracep->declArray(c+277,"top cache_dut dpiRegWay1", false,-1, 255,0);
        tracep->declArray(c+285,"top cache_dut dpiRegWay2", false,-1, 255,0);
        tracep->declBus(c+612,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+573,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+613,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+612,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+17,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+563,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+293,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+294,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+614,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+295,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+232,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+296,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+248,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+618,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+612,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+573,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+613,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+612,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+21,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+563,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+297,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+298,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+614,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+295,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+236,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+299,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+249,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+618,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+612,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+573,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+613,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+612,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+25,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+563,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+300,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+301,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+614,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+295,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+240,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+302,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+250,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+618,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+612,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+573,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+613,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+612,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+29,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+563,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+303,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+304,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+614,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+295,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+244,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+305,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+251,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+618,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+573,"top axi_if_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+573,"top axi_if_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+573,"top axi_if_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+573,"top axi_if_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+574,"top axi_if_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+575,"top axi_if_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+576,"top axi_if_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+563,"top axi_if_u clock", false,-1);
        tracep->declBit(c+564,"top axi_if_u reset", false,-1);
        tracep->declBit(c+132,"top axi_if_u rw_valid_i", false,-1);
        tracep->declBit(c+92,"top axi_if_u rw_ready_o", false,-1);
        tracep->declQuad(c+99,"top axi_if_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+130,"top axi_if_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+622,"top axi_if_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+91,"top axi_if_u instr_fetching", false,-1);
        tracep->declBit(c+1,"top axi_if_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+107,"top axi_if_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+2,"top axi_if_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+577,"top axi_if_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+578,"top axi_if_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+579,"top axi_if_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+580,"top axi_if_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+581,"top axi_if_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+582,"top axi_if_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+583,"top axi_if_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+584,"top axi_if_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+578,"top axi_if_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+585,"top axi_if_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+108,"top axi_if_u axi_r_ready_o", false,-1);
        tracep->declBit(c+4,"top axi_if_u axi_r_valid_i", false,-1);
        tracep->declBus(c+5,"top axi_if_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+6,"top axi_if_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+586,"top axi_if_u axi_r_last_i", false,-1);
        tracep->declBus(c+587,"top axi_if_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+588,"top axi_if_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+623,"top axi_if_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+582,"top axi_if_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+624,"top axi_if_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+625,"top axi_if_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+306,"top axi_if_u r_state", false,-1, 1,0);
        tracep->declBus(c+101,"top axi_if_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+107,"top axi_if_u ar_valid", false,-1);
        tracep->declBit(c+108,"top axi_if_u r_ready", false,-1);
        tracep->declBit(c+626,"top axi_if_u instr_valid", false,-1);
        tracep->declQuad(c+2,"top axi_if_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+49,"top axi_if_u instr_valid_reg", false,-1);
        tracep->declQuad(c+50,"top axi_if_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+627,"top axi_if_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+578,"top axi_if_u axi_id", false,-1, 3,0);
        tracep->declBus(c+583,"top axi_if_u axi_user", false,-1, 0,0);
        tracep->declBus(c+590,"top axi_if_u axi_len", false,-1, 7,0);
        tracep->declBus(c+581,"top axi_if_u axi_size", false,-1, 2,0);
        tracep->declBit(c+563,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+564,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+120,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+135,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+125,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+156,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+136,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+138,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+307,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+309,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+628,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+629,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+563,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+564,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+125,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+310,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+313,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+563,"top ID_u clk", false,-1);
        tracep->declBit(c+564,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+136,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+211,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+217,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+138,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+218,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+220,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+221,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+487,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+485,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+139,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+141,"top ID_u src1sel", false,-1);
        tracep->declBus(c+142,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+143,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+146,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+145,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+144,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+147,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+148,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+149,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+570,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+150,"top ID_u DivEn", false,-1);
        tracep->declBus(c+151,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+154,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+152,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+153,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+316,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+139,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+487,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+485,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+136,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+138,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+148,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+149,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+316,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+141,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+142,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+143,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+146,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+145,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+144,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+147,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+150,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+151,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+154,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+152,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+153,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+317,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+318,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+319,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+320,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+316,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+139,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+563,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+211,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+217,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+148,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+487,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+149,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+485,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+220,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+218,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+221,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+570,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+499+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+138,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+159,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+155,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+563,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+564,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+180,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+187,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+136,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+138,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+139,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+485,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+487,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+143,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+146,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+145,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+144,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+141,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+142,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+147,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+148,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+149,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+150,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+151,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+154,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+157,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+159,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+164,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+166,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+168,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+172,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+175,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+174,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+173,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+162,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+163,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+176,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+185,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+186,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+177,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+178,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+179,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+321,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+323,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+324,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+325,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+326,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+327,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+328,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+630,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+629,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+563,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+564,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+180,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+489,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+329,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+172,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+166,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+164,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+168,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+157,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+159,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+175,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+174,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+173,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+162,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+163,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+183,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+184,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+110,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+218,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+181,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+177,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+178,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+160,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+123,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+170,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+122,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+339,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+341,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+343,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+170,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+172,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+339,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+341,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+177,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+178,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+160,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+345,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+346,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+347,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+349,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+350,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+352,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+354,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+354,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+355,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+356,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+357,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+359,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+360,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+361,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+363,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+365,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+367,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+339,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+350,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+349,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+352,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+359,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+346,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+360,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+369,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+356,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+354,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+355,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+349,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+354,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+370,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+339,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+371,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+355,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+354,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+357,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+372,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+374,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+376,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+378,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+380,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+382,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+384,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+339,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+341,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+178,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+367,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+343,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+170,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+175,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+174,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+173,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+386,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+168,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+157,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+123,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+122,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+387,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+389,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+631,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+391,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+392,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+393,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+394,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+396,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+398,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+563,"top forwarding_u clk", false,-1);
        tracep->declBit(c+564,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+185,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+186,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+399,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+220,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+195,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+221,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+218,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+224,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+183,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+184,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+181,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+181,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+400,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+401,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+402,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+403,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+404,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+405,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+406,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+407,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+563,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+564,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+157,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+170,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+159,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+160,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+176,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+179,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+180,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+188,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+190,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+192,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+110,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+195,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+202,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+632,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+629,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+563,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+564,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+180,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+408,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+416,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+563,"top ls_u clk", false,-1);
        tracep->declBit(c+564,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+188,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+110,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+190,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+192,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+213,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+217,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+215,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+202,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+193,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+196,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+198,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+200,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+203,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+110,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+204,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+205,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+206,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+208,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+112,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+581,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+93,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+94,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+209,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+205,"top ls_u wren", false,-1);
        tracep->declBit(c+204,"top ls_u rden", false,-1);
        tracep->declBus(c+424,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+206,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+425,"top ls_u wren_last", false,-1);
        tracep->declBit(c+563,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+564,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+205,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+204,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+424,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+206,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+110,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+188,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+213,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+425,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+193,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+203,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+110,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+204,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+205,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+206,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+208,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+112,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+581,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+93,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+94,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+209,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+209,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+426,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+427,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+428,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+429,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+430,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+431,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+432,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+581,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+433,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+434,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+435,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+112,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+208,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+436,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+437,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+438,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+439,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+192,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+217,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+190,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+215,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+205,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+204,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+424,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+206,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+440,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+563,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+564,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+188,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+192,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+110,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+202,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+196,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+198,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+200,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+441,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+442,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+443,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+444,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+445,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+446,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+447,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+448,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+449,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+110,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+450,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+452,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+454,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+200,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+198,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+456,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+458,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+460,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+573,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+573,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+573,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+573,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+574,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+575,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+576,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+563,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+564,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+205,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+204,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+94,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+93,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+209,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+206,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+208,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+110,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+112,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+581,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+8,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+109,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+110,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+577,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+589,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+579,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+590,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+112,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+582,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+583,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+591,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+578,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+578,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+113,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+114,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+116,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+113,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+579,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+117,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+10,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+11,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+592,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+593,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+12,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+118,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+110,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+577,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+589,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+579,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+590,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+581,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+582,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+583,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+584,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+578,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+594,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+119,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+13,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+14,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+15,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+595,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+596,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+597,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+623,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+582,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+624,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+625,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+462,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+102,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+109,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+113,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+117,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+52,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+623,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+582,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+624,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+625,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+463,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+103,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+118,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+119,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+633,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+53,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+55,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+57,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+58,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+627,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+589,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+583,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+590,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+581,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+464,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+563,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+564,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+188,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+192,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+110,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+193,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+195,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+196,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+224,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+211,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+217,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+213,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+215,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+221,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+222,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+634,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+629,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+563,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+564,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+224,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+465,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+475,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+211,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+217,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+213,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+215,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+222,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+220,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+218,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+563,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+564,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+155,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+122,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+152,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+153,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+127,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+203,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+126,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+125,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+125,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+180,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+180,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+224,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+156,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+187,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+635,"top ifAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+635,"top ifAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+581,"top ifAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+636,"top ifAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+563,"top ifAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+564,"top ifAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+637,"top ifAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+639,"top ifAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+640,"top ifAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+60,"top ifAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+641,"top ifAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+643,"top ifAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+644,"top ifAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+61,"top ifAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+62,"top ifAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+63,"top ifAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+645,"top ifAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+2,"top ifAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+577,"top ifAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+107,"top ifAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+1,"top ifAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+6,"top ifAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+5,"top ifAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+4,"top ifAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+108,"top ifAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+64,"top ifAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+60,"top ifAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+61,"top ifAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+62,"top ifAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+63,"top ifAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+66,"top ifAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+1,"top ifAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+6,"top ifAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+5,"top ifAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+4,"top ifAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+646,"top ifAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+647,"top ifAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+68,"top ifAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+70,"top ifAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+72,"top ifAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+74,"top ifAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+104,"top ifAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+76,"top ifAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+648,"top ifAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+650,"top ifAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+77,"top ifAxiSlaveRam_u aw_en", false,-1);
        tracep->declBus(c+635,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+635,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+581,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+112,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+563,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+564,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+110,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+577,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+109,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+8,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+114,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+116,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+113,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+9,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+11,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+10,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+117,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+110,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+577,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+118,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+12,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+15,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+14,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+13,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+119,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+78,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+8,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+9,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+11,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+10,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+80,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+12,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+15,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+14,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+13,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+646,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+647,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+82,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+84,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+86,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+88,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+105,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+106,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+651,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+653,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+90,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp107;
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
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullQData(oldp+2,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+6,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullWData(oldp+17,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+21,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+25,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+29,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+33,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+41,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+76,(((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready) 
                                  & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID))));
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__aw_en));
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullBit(oldp+91,((1U & ((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                         ? ((IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state) 
                                            | (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                               != vlSelf->top__DOT__axi_if_u__DOT__addr_reg))
                                         : (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state)))));
        tracep->fullBit(oldp+92,((((IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state) 
                                   >> 1U) & ((~ (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state)) 
                                             & ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                 == vlSelf->top__DOT__axi_if_u__DOT__addr_reg) 
                                                & (IData)(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg))))));
        tracep->fullBit(oldp+93,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
        tracep->fullBit(oldp+94,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
        tracep->fullQData(oldp+95,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+97,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+99,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                     ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                         ? 0ULL : (
                                                   (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                    != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                                    ? 0ULL
                                                    : vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg))
                                     : 0ULL)),64);
        tracep->fullCData(oldp+101,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__if_axi_r_last_i)
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
        tracep->fullCData(oldp+102,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                          ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)
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
                                          ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                              ? 3U : 1U)
                                          : ((8U == 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))
                                              ? 1U : 0U)))),2);
        tracep->fullCData(oldp+103,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)
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
                                          ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready)
                                              ? 3U : 1U)
                                          : ((3U == 
                                              (0x7fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))
                                              ? 1U : 0U)))),2);
        tracep->fullBit(oldp+104,((((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_if_u__DOT__ar_valid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+105,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+106,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))));
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+110,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U)))),64);
        tracep->fullCData(oldp+112,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+114,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                     << (0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                  << 1U)))),64);
        tracep->fullCData(oldp+116,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                              << (7U 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                     >> 2U))))),8);
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+123,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+125,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+132,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+133,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+134,(((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                    | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+135,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+136,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+138,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+142,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+145,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+148,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+149,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+150,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+151,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+152,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+153,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+154,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+157,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+159,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+160,(((0x4000000U & 
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
        tracep->fullBit(oldp+162,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+163,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+164,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+166,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+168,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+172,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+173,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+174,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+175,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+176,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+177,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+178,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+179,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+180,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+183,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+184,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+185,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+186,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+187,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+188,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+190,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+192,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+193,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+195,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+202,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+203,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+204,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+205,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+208,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+211,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+213,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+215,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+217,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+220,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+221,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+222,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullIData(oldp+225,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+226,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+227,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullCData(oldp+228,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullBit(oldp+229,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+230,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+231,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullWData(oldp+232,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1),128);
        tracep->fullWData(oldp+236,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2),128);
        tracep->fullWData(oldp+240,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1),128);
        tracep->fullWData(oldp+244,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2),128);
        tracep->fullBit(oldp+248,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1));
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2));
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1));
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2));
        tracep->fullBit(oldp+252,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+255,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+256,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+257,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+262,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+263,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__cache_dut__DOT__bitValid1_d));
        tracep->fullBit(oldp+265,(vlSelf->top__DOT__cache_dut__DOT__bitValid2_d));
        tracep->fullIData(oldp+266,(vlSelf->top__DOT__cache_dut__DOT__tagArray1_d),21);
        tracep->fullIData(oldp+267,(vlSelf->top__DOT__cache_dut__DOT__tagArray2_d),21);
        tracep->fullIData(oldp+268,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+269,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+270,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+271,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+272,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__cache_dut__DOT__addrToRead),64);
        tracep->fullIData(oldp+275,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullBit(oldp+276,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullWData(oldp+277,(vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1),256);
        tracep->fullWData(oldp+285,(vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2),256);
        tracep->fullBit(oldp+293,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN));
        tracep->fullBit(oldp+294,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1)))));
        tracep->fullCData(oldp+295,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullBit(oldp+296,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)))));
        tracep->fullBit(oldp+297,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+298,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2)))));
        tracep->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+300,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN));
        tracep->fullBit(oldp+301,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1)))));
        tracep->fullBit(oldp+302,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)))));
        tracep->fullBit(oldp+303,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+304,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2)))));
        tracep->fullBit(oldp+305,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullCData(oldp+306,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
        tracep->fullQData(oldp+307,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+309,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp107[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp107[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp107[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+310,(__Vtemp107),96);
        tracep->fullWData(oldp+313,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+316,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+317,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+318,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+319,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+320,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+321,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+323,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+324,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+325,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+326,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+327,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+328,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+329,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+339,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+343,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp109, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp110, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp111, __Vtemp109, __Vtemp110);
        VL_EXTEND_WI(65,1, __Vtemp112, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp113, __Vtemp111, __Vtemp112);
        tracep->fullBit(oldp+345,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp113[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+346,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+349,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+350,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+352,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+354,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+355,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+356,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+357,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp116, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp117, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp118, __Vtemp116, __Vtemp117);
        VL_EXTEND_WI(65,1, __Vtemp119, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp120, __Vtemp118, __Vtemp119);
        tracep->fullBit(oldp+359,((1U & __Vtemp120[2U])));
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+361,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+363,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+365,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+367,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+369,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+370,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+371,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+372,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+374,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+376,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+378,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+380,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+382,(((0x4000000U & 
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
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+386,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+387,(((((QData)((IData)(
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
        tracep->fullQData(oldp+389,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+391,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+392,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+393,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+396,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+398,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+399,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+400,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+401,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+402,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+403,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+404,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+405,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+406,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+407,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
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
        tracep->fullWData(oldp+408,(__Vtemp125),226);
        tracep->fullWData(oldp+416,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+424,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+425,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+426,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+427,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+428,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+429,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+430,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+431,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+432,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+433,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+434,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+435,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+436,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+437,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+438,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+439,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+440,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+441,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+442,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+443,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+444,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+445,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+446,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+447,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+448,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+449,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+450,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+452,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+454,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+456,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+458,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+460,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullCData(oldp+462,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+463,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+464,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+465,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+475,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+485,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+487,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
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
        tracep->fullWData(oldp+489,(__Vtemp130),315);
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+511,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+513,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+515,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+521,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+525,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+527,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+529,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+533,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+535,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+537,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+539,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+541,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+543,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+545,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+547,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+549,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+551,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+553,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+555,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+557,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+561,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+563,(vlSelf->clk));
        tracep->fullBit(oldp+564,(vlSelf->rst_n));
        tracep->fullQData(oldp+565,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+567,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+569,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+570,(vlSelf->regA0),64);
        tracep->fullBit(oldp+572,(vlSelf->stall_n_diff));
        tracep->fullIData(oldp+573,(0x40U),32);
        tracep->fullIData(oldp+574,(4U),32);
        tracep->fullIData(oldp+575,(8U),32);
        tracep->fullIData(oldp+576,(1U),32);
        tracep->fullCData(oldp+577,(0U),3);
        tracep->fullCData(oldp+578,(0U),4);
        tracep->fullBit(oldp+579,(0U));
        tracep->fullCData(oldp+580,(2U),8);
        tracep->fullCData(oldp+581,(3U),3);
        tracep->fullCData(oldp+582,(1U),2);
        tracep->fullBit(oldp+583,(0U));
        tracep->fullCData(oldp+584,(2U),4);
        tracep->fullCData(oldp+585,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+586,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+587,(vlSelf->top__DOT__if_axi_r_id_i),4);
        tracep->fullBit(oldp+588,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+589,(1U),4);
        tracep->fullCData(oldp+590,(0U),8);
        tracep->fullCData(oldp+591,(0xfU),4);
        tracep->fullCData(oldp+592,(vlSelf->top__DOT__ls_axi_b_id_i),4);
        tracep->fullBit(oldp+593,(vlSelf->top__DOT__ls_axi_b_user_i));
        tracep->fullCData(oldp+594,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+595,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullCData(oldp+596,(vlSelf->top__DOT__ls_axi_r_id_i),4);
        tracep->fullBit(oldp+597,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+598,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+600,(1U));
        tracep->fullQData(oldp+601,(0ULL),64);
        tracep->fullBit(oldp+603,(vlSelf->top__DOT__cache_dut__DOT__cacheRdValid_o));
        tracep->fullBit(oldp+604,(vlSelf->top__DOT__cache_dut__DOT__rdLast_i));
        tracep->fullIData(oldp+605,(vlSelf->top__DOT__cache_dut__DOT__cacheAddr_o),32);
        tracep->fullQData(oldp+606,(vlSelf->top__DOT__cache_dut__DOT__rdData_i),64);
        tracep->fullCData(oldp+608,(1U),3);
        tracep->fullCData(oldp+609,(2U),3);
        tracep->fullBit(oldp+610,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+611,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+612,(0x80U),32);
        tracep->fullIData(oldp+613,(6U),32);
        __Vtemp131[0U] = 0U;
        __Vtemp131[1U] = 0U;
        __Vtemp131[2U] = 0U;
        __Vtemp131[3U] = 0U;
        tracep->fullWData(oldp+614,(__Vtemp131),128);
        __Vtemp132[0U] = 0xffffffffU;
        __Vtemp132[1U] = 0xffffffffU;
        __Vtemp132[2U] = 0xffffffffU;
        __Vtemp132[3U] = 0xffffffffU;
        tracep->fullWData(oldp+618,(__Vtemp132),128);
        tracep->fullCData(oldp+622,(vlSelf->top__DOT__axi_if_u__DOT__fetchLenth),8);
        tracep->fullCData(oldp+623,(0U),2);
        tracep->fullCData(oldp+624,(3U),2);
        tracep->fullCData(oldp+625,(2U),2);
        tracep->fullBit(oldp+626,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid));
        tracep->fullIData(oldp+627,(3U),32);
        tracep->fullIData(oldp+628,(0x60U),32);
        tracep->fullIData(oldp+629,(0U),32);
        tracep->fullIData(oldp+630,(0x13bU),32);
        tracep->fullBit(oldp+631,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+632,(0xe2U),32);
        tracep->fullBit(oldp+633,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+634,(0x121U),32);
        tracep->fullIData(oldp+635,(0x40U),32);
        tracep->fullCData(oldp+636,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWSIZE),3);
        tracep->fullQData(oldp+637,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWADDR),64);
        tracep->fullCData(oldp+639,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWPROT),3);
        tracep->fullBit(oldp+640,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID));
        tracep->fullQData(oldp+641,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WDATA),64);
        tracep->fullCData(oldp+643,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WSTRB),8);
        tracep->fullBit(oldp+644,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID));
        tracep->fullBit(oldp+645,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_BREADY));
        tracep->fullIData(oldp+646,(3U),32);
        tracep->fullIData(oldp+647,(1U),32);
        tracep->fullQData(oldp+648,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+650,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__byte_index),32);
        tracep->fullQData(oldp+651,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+653,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
