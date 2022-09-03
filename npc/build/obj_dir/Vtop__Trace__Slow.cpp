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
        tracep->declBit(c+211,"clk", false,-1);
        tracep->declBit(c+212,"rst_n", false,-1);
        tracep->declBit(c+211,"top clk", false,-1);
        tracep->declBit(c+212,"top rst_n", false,-1);
        tracep->declQuad(c+100,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+102,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+104,"top is_jump", false,-1);
        tracep->declQuad(c+105,"top pc_jump", false,-1, 63,0);
        tracep->declBus(c+107,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+108,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+110,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+111,"top src1_id", false,-1, 63,0);
        tracep->declQuad(c+113,"top src2_id", false,-1, 63,0);
        tracep->declQuad(c+115,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+1,"top src1_ex", false,-1, 63,0);
        tracep->declQuad(c+3,"top src2_ex", false,-1, 63,0);
        tracep->declQuad(c+5,"top rs2_ex", false,-1, 63,0);
        tracep->declBus(c+117,"top aluctr_id", false,-1, 4,0);
        tracep->declBus(c+118,"top aluctr_ex", false,-1, 4,0);
        tracep->declQuad(c+119,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+121,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+122,"top alures_ex", false,-1, 63,0);
        tracep->declQuad(c+124,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+7,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+126,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+128,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+129,"top lsres_ls", false,-1, 63,0);
        tracep->declQuad(c+9,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+11,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+13,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+131,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+132,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+134,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+135,"top wb_wren", false,-1);
        tracep->declBit(c+211,"top PC_reg_u clk", false,-1);
        tracep->declBit(c+212,"top PC_reg_u rst_n", false,-1);
        tracep->declQuad(c+100,"top PC_reg_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+102,"top PC_reg_u pc_new_o", false,-1, 63,0);
        tracep->declQuad(c+102,"top IF_u pc_i", false,-1, 63,0);
        tracep->declBit(c+104,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+105,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+100,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+107,"top IF_u instr_o", false,-1, 31,0);
        tracep->declQuad(c+136,"top IF_u rdata", false,-1, 63,0);
        tracep->declBit(c+211,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+212,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+102,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+107,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declQuad(c+108,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+110,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declBit(c+211,"top ID_u clk", false,-1);
        tracep->declBit(c+212,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+108,"top ID_u pc_i", false,-1, 63,0);
        tracep->declBus(c+110,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+132,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+134,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+135,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+115,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+111,"top ID_u src1_o", false,-1, 63,0);
        tracep->declQuad(c+113,"top ID_u src2_o", false,-1, 63,0);
        tracep->declBus(c+117,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declQuad(c+105,"top ID_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+104,"top ID_u is_jump_o", false,-1);
        tracep->declBus(c+138,"top ID_u ext_op", false,-1, 4,0);
        tracep->declBit(c+139,"top ID_u is_jalr", false,-1);
        tracep->declBit(c+140,"top ID_u is_jal", false,-1);
        tracep->declBit(c+141,"top ID_u is_brc", false,-1);
        tracep->declQuad(c+142,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+144,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+115,"top ID_u rs2", false,-1, 63,0);
        tracep->declBit(c+146,"top ID_u src1sel", false,-1);
        tracep->declBus(c+147,"top ID_u src2sel", false,-1, 1,0);
        tracep->declQuad(c+108,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+110,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+138,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+146,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+147,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+117,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+139,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+140,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+141,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBus(c+148,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+149,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+150,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+151,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+138,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+142,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+211,"top ID_u regfile_u clk", false,-1);
        tracep->declBus(c+152,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+144,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+153,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+115,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+134,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+132,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+135,"top ID_u regfile_u wr_en", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+36+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declQuad(c+144,"top ID_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+115,"top ID_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+139,"top ID_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+140,"top ID_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+141,"top ID_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+149,"top ID_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+142,"top ID_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+108,"top ID_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+105,"top ID_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+104,"top ID_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+213,"top ID_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+215,"top ID_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+217,"top ID_u bcu_u less", false,-1);
        tracep->declBit(c+154,"top ID_u bcu_u zero", false,-1);
        tracep->declBit(c+155,"top ID_u bcu_u carry", false,-1);
        tracep->declBit(c+156,"top ID_u bcu_u overflow", false,-1);
        tracep->declQuad(c+157,"top ID_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+159,"top ID_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+161,"top ID_u bcu_u branch", false,-1);
        tracep->declBit(c+211,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+212,"top EX_reg_u rst_n", false,-1);
        tracep->declQuad(c+108,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+110,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+111,"top EX_reg_u src1_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+113,"top EX_reg_u src2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+115,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+117,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declQuad(c+119,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+121,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+1,"top EX_reg_u src1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top EX_reg_u src2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+118,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+118,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+1,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+3,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+122,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declBus(c+118,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+1,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+3,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+218,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+219,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+122,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+28,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+162,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+163,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+165,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+166,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+168,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+170,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+170,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+171,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+172,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+173,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+29,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+175,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+15,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+17,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+19,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+21,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+166,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+165,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+168,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+29,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+162,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+175,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+176,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+172,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+170,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+171,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+165,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+170,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+177,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+1,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+23,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+171,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+170,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+173,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+178,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+180,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+24,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+26,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+30,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+32,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+182,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+3,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+219,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+21,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declBit(c+211,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+212,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+119,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+5,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+121,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+122,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+124,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+7,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+128,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+126,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+211,"top ls_u clk", false,-1);
        tracep->declBit(c+212,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+124,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+126,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+7,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+128,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+129,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+184,"top ls_u wren", false,-1);
        tracep->declBit(c+185,"top ls_u rden", false,-1);
        tracep->declBus(c+186,"top ls_u memop", false,-1, 2,0);
        tracep->declBit(c+211,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+212,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+184,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+185,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+186,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+7,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+126,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+124,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+129,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+187,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declQuad(c+189,"top ls_u lsu_u dpi_addr", false,-1, 63,0);
        tracep->declBit(c+191,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+192,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+193,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+194,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+195,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+196,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+197,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+198,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+199,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+200,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declQuad(c+220,"top ls_u lsu_u wr_mask", false,-1, 63,0);
        tracep->declBit(c+201,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+202,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+203,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+204,"top ls_u lsu_u sd", false,-1);
        tracep->declQuad(c+205,"top ls_u lsu_u wr_data_b", false,-1, 63,0);
        tracep->declQuad(c+34,"top ls_u lsu_u wr_data_h", false,-1, 63,0);
        tracep->declQuad(c+207,"top ls_u lsu_u wr_data_w", false,-1, 63,0);
        tracep->declQuad(c+209,"top ls_u lsu_u wr_data", false,-1, 63,0);
        tracep->declBus(c+128,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBit(c+184,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+185,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+186,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declBit(c+211,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+212,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+124,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+128,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+126,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+129,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+9,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+131,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+11,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+13,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+9,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+131,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+11,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+13,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declBus(c+134,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+135,"top wb_stage_u rd_wren_o", false,-1);
        tracep->declQuad(c+132,"top wb_stage_u rd_data_o", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp35;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp43;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__src1_ex),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__src2_ex),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__rs2_ex),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__rs2_ls),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__pc_wb),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__alures_wb),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__lsres_wb),64);
        tracep->fullQData(oldp+15,((vlSelf->top__DOT__src1_ex 
                                    ^ vlSelf->top__DOT__src2_ex)),64);
        tracep->fullQData(oldp+17,((vlSelf->top__DOT__src1_ex 
                                    | vlSelf->top__DOT__src2_ex)),64);
        tracep->fullQData(oldp+19,((vlSelf->top__DOT__src1_ex 
                                    & vlSelf->top__DOT__src2_ex)),64);
        tracep->fullQData(oldp+21,((vlSelf->top__DOT__src1_ex 
                                    * vlSelf->top__DOT__src2_ex)),64);
        tracep->fullCData(oldp+23,((0x3fU & (IData)(vlSelf->top__DOT__src2_ex))),6);
        tracep->fullQData(oldp+24,((0xffffffffffffffffULL 
                                    >> (0x3fU & (IData)(vlSelf->top__DOT__src2_ex)))),64);
        tracep->fullQData(oldp+26,((~ (0xffffffffffffffffULL 
                                       >> (0x3fU & (IData)(vlSelf->top__DOT__src2_ex))))),64);
        VL_EXTEND_WQ(65,64, __Vtemp32, vlSelf->top__DOT__src1_ex);
        VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp34, __Vtemp32, __Vtemp33);
        VL_EXTEND_WI(65,1, __Vtemp35, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp36, __Vtemp34, __Vtemp35);
        tracep->fullBit(oldp+28,((1U & ((8U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                         ? ((1U & __Vtemp36[2U]) 
                                            ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                         : ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                     >> 0x3fU)) 
                                            ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        VL_EXTEND_WQ(65,64, __Vtemp39, vlSelf->top__DOT__src1_ex);
        VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp41, __Vtemp39, __Vtemp40);
        VL_EXTEND_WI(65,1, __Vtemp42, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp43, __Vtemp41, __Vtemp42);
        tracep->fullBit(oldp+29,((1U & __Vtemp43[2U])));
        tracep->fullQData(oldp+30,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                     ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                        & (QData)((IData)(
                                                          ((0xffffffffffffffffULL 
                                                            >> 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->top__DOT__src2_ex))) 
                                                           >> 0x20U))))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+32,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                     ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__src1_ex 
                                                       >> 0x1fU)))
                                         ? (0x100000000ULL 
                                            | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                               | (QData)((IData)(
                                                                 (~ (IData)(
                                                                            ((0xffffffffffffffffULL 
                                                                              >> 
                                                                              (0x3fU 
                                                                               & (IData)(vlSelf->top__DOT__src2_ex))) 
                                                                             >> 0x20U)))))))
                                         : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                            & (QData)((IData)(
                                                              ((0xffffffffffffffffULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__src2_ex))) 
                                                               >> 0x20U)))))
                                     : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__src1_ex 
                                                                          >> 0x3fU)))))) 
                                           & (~ (0xffffffffffffffffULL 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__src2_ex)))))))),64);
        tracep->fullQData(oldp+34,(((1U & (IData)((vlSelf->top__DOT__alures_ls 
                                                   >> 2U)))
                                     ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__alures_ls 
                                                       >> 1U)))
                                         ? (((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->top__DOT__rs2_ls)))) 
                                             << 0x30U) 
                                            | (0xffffffffffffULL 
                                               & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))
                                         : (((QData)((IData)(
                                                             (((IData)(
                                                                       (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                                        >> 0x30U)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & (IData)(vlSelf->top__DOT__rs2_ls))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))))
                                     : ((1U & (IData)(
                                                      (vlSelf->top__DOT__alures_ls 
                                                       >> 1U)))
                                         ? (((QData)((IData)(
                                                             (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                              >> 0x20U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT__rs2_ls) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))))))
                                         : ((0xffffffffffff0000ULL 
                                             & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__rs2_ls)))))))),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullQData(oldp+100,(((((IData)(vlSelf->top__DOT__ID_u__DOT__is_jal) 
                                       | (IData)(vlSelf->top__DOT__ID_u__DOT__is_jalr)) 
                                      | ((IData)(vlSelf->top__DOT__ID_u__DOT__is_brc) 
                                         & ((0x4000U 
                                             & vlSelf->top__DOT__instr_id)
                                             ? ((0x2000U 
                                                 & vlSelf->top__DOT__instr_id)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry)))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? 
                                                 (~ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres 
                                                            >> 0x3fU)) 
                                                   ^ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow)))
                                                  : 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres 
                                                           >> 0x3fU)) 
                                                  ^ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow))))
                                             : ((~ 
                                                 (vlSelf->top__DOT__instr_id 
                                                  >> 0xdU)) 
                                                & ((0x1000U 
                                                    & vlSelf->top__DOT__instr_id)
                                                    ? 
                                                   (0U 
                                                    != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres)
                                                    : 
                                                   (~ (IData)(
                                                              (0U 
                                                               != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres))))))))
                                      ? ((IData)(vlSelf->top__DOT__ID_u__DOT__is_jalr)
                                          ? vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__rs1_imm_res
                                          : vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__pc_imm_res)
                                      : (4ULL + vlSelf->top__DOT__pc_new))),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+104,((((IData)(vlSelf->top__DOT__ID_u__DOT__is_jal) 
                                    | (IData)(vlSelf->top__DOT__ID_u__DOT__is_jalr)) 
                                   | ((IData)(vlSelf->top__DOT__ID_u__DOT__is_brc) 
                                      & ((0x4000U & vlSelf->top__DOT__instr_id)
                                          ? ((0x2000U 
                                              & vlSelf->top__DOT__instr_id)
                                              ? ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry)))
                                              : ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? 
                                                 (~ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres 
                                                            >> 0x3fU)) 
                                                   ^ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow)))
                                                  : 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres 
                                                           >> 0x3fU)) 
                                                  ^ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow))))
                                          : ((~ (vlSelf->top__DOT__instr_id 
                                                 >> 0xdU)) 
                                             & ((0x1000U 
                                                 & vlSelf->top__DOT__instr_id)
                                                 ? 
                                                (0U 
                                                 != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres)
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres))))))))));
        tracep->fullQData(oldp+105,(((IData)(vlSelf->top__DOT__ID_u__DOT__is_jalr)
                                      ? vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__rs1_imm_res
                                      : vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__pc_imm_res)),64);
        tracep->fullIData(oldp+107,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__pc_id),64);
        tracep->fullIData(oldp+110,(vlSelf->top__DOT__instr_id),32);
        tracep->fullQData(oldp+111,(((IData)(vlSelf->top__DOT__ID_u__DOT__src1sel)
                                      ? vlSelf->top__DOT__pc_id
                                      : vlSelf->top__DOT__ID_u__DOT__rs1)),64);
        tracep->fullQData(oldp+113,(((2U & (IData)(vlSelf->top__DOT__ID_u__DOT__src2sel))
                                      ? 4ULL : ((1U 
                                                 & (IData)(vlSelf->top__DOT__ID_u__DOT__src2sel))
                                                 ? vlSelf->top__DOT__ID_u__DOT__imm
                                                 : vlSelf->top__DOT__ID_u__DOT__rs2))),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__ID_u__DOT__rs2),64);
        tracep->fullCData(oldp+117,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullCData(oldp+118,(vlSelf->top__DOT__aluctr_ex),5);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__pc_ex),64);
        tracep->fullIData(oldp+121,(vlSelf->top__DOT__instr_ex),32);
        tracep->fullQData(oldp+122,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__pc_ls),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__alures_ls),64);
        tracep->fullIData(oldp+128,(vlSelf->top__DOT__instr_ls),32);
        tracep->fullQData(oldp+129,(((((((((- (QData)((IData)(
                                                              (0U 
                                                               == 
                                                               (0x707cU 
                                                                & vlSelf->top__DOT__instr_ls))))) 
                                           & (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b) 
                                                                      >> 7U))))) 
                                               << 8U) 
                                              | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                          | ((- (QData)((IData)(
                                                                (0x4000U 
                                                                 == 
                                                                 (0x707cU 
                                                                  & vlSelf->top__DOT__instr_ls))))) 
                                             & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                         | ((- (QData)((IData)(
                                                               (0x1000U 
                                                                == 
                                                                (0x707cU 
                                                                 & vlSelf->top__DOT__instr_ls))))) 
                                            & (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h) 
                                                                       >> 0xfU))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
                                        | ((- (QData)((IData)(
                                                              (0x5000U 
                                                               == 
                                                               (0x707cU 
                                                                & vlSelf->top__DOT__instr_ls))))) 
                                           & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                       | ((- (QData)((IData)(
                                                             (0x2000U 
                                                              == 
                                                              (0x707cU 
                                                               & vlSelf->top__DOT__instr_ls))))) 
                                          & (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                                      | ((- (QData)((IData)(
                                                            (0x6000U 
                                                             == 
                                                             (0x707cU 
                                                              & vlSelf->top__DOT__instr_ls))))) 
                                         & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                                     | ((- (QData)((IData)(
                                                           (0x3000U 
                                                            == 
                                                            (0x707cU 
                                                             & vlSelf->top__DOT__instr_ls))))) 
                                        & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))),64);
        tracep->fullIData(oldp+131,(vlSelf->top__DOT__instr_wb),32);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+134,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                              >> 7U))),5);
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__wb_wren));
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
        tracep->fullCData(oldp+138,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullBit(oldp+139,(vlSelf->top__DOT__ID_u__DOT__is_jalr));
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__ID_u__DOT__is_jal));
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__ID_u__DOT__is_brc));
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__ID_u__DOT__rs1),64);
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__ID_u__DOT__src1sel));
        tracep->fullCData(oldp+147,(vlSelf->top__DOT__ID_u__DOT__src2sel),2);
        tracep->fullCData(oldp+148,((0x1fU & (vlSelf->top__DOT__instr_id 
                                              >> 2U))),5);
        tracep->fullCData(oldp+149,((7U & (vlSelf->top__DOT__instr_id 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+150,((vlSelf->top__DOT__instr_id 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+151,((vlSelf->top__DOT__instr_id 
                                     >> 7U)),25);
        tracep->fullCData(oldp+152,((0x1fU & (vlSelf->top__DOT__instr_id 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+153,((0x1fU & (vlSelf->top__DOT__instr_id 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+154,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+159,((~ vlSelf->top__DOT__ID_u__DOT__rs2)),64);
        tracep->fullBit(oldp+161,((1U & ((0x4000U & vlSelf->top__DOT__instr_id)
                                          ? ((0x2000U 
                                              & vlSelf->top__DOT__instr_id)
                                              ? ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry)))
                                              : ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? 
                                                 (~ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres 
                                                            >> 0x3fU)) 
                                                   ^ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow)))
                                                  : 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres 
                                                           >> 0x3fU)) 
                                                  ^ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow))))
                                          : ((~ (vlSelf->top__DOT__instr_id 
                                                 >> 0xdU)) 
                                             & ((0x1000U 
                                                 & vlSelf->top__DOT__instr_id)
                                                 ? 
                                                (0U 
                                                 != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres)
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres)))))))));
        tracep->fullBit(oldp+162,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+165,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+170,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                         >> 3U))));
        tracep->fullBit(oldp+171,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                         >> 2U))));
        tracep->fullCData(oldp+172,((7U & (IData)(vlSelf->top__DOT__aluctr_ex))),3);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        tracep->fullBit(oldp+175,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullCData(oldp+176,((0xfU & (IData)(vlSelf->top__DOT__aluctr_ex))),4);
        tracep->fullBit(oldp+177,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                         >> 4U))));
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullBit(oldp+184,((8U == (0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))));
        tracep->fullBit(oldp+185,((0U == (0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))));
        tracep->fullCData(oldp+186,((7U & (vlSelf->top__DOT__instr_ls 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
        tracep->fullQData(oldp+189,((0xfffffffffffffff8ULL 
                                     & vlSelf->top__DOT__alures_ls)),64);
        tracep->fullBit(oldp+191,((IData)((0U == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+192,((IData)((0x4000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+193,((IData)((0x1000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+194,((IData)((0x5000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+195,((IData)((0x2000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+196,((IData)((0x6000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+197,((IData)((0x3000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullCData(oldp+198,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+199,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+200,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+201,((IData)((0x20U == 
                                           (0x707cU 
                                            & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+202,((IData)((0x1020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+203,((IData)((0x2020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+204,((IData)((0x3020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data),64);
        tracep->fullBit(oldp+211,(vlSelf->clk));
        tracep->fullBit(oldp+212,(vlSelf->rst_n));
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__pc_imm_res),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__rs1_imm_res),64);
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__less));
        tracep->fullBit(oldp+218,(0U));
        tracep->fullCData(oldp+219,(0U),3);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),64);
    }
}
