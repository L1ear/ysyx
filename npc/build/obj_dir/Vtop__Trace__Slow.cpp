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
        tracep->declBit(c+249,"clk", false,-1);
        tracep->declBit(c+250,"rst_n", false,-1);
        tracep->declQuad(c+251,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+253,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+255,"instr_diff", false,-1, 31,0);
        tracep->declBit(c+249,"top clk", false,-1);
        tracep->declBit(c+250,"top rst_n", false,-1);
        tracep->declQuad(c+251,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+253,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+255,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+37,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+113,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+115,"top is_jump", false,-1);
        tracep->declQuad(c+1,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+116,"top pc_stall_n", false,-1);
        tracep->declBus(c+117,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+118,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+120,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+256,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+258,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+121,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+123,"top src1sel_id", false,-1);
        tracep->declBus(c+124,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+125,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+126,"top is_brc_id", false,-1);
        tracep->declBit(c+127,"top is_jal_id", false,-1);
        tracep->declBit(c+128,"top is_jalr_id", false,-1);
        tracep->declBit(c+129,"top wben_id", false,-1);
        tracep->declBus(c+130,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+131,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+116,"top id_stall_n", false,-1);
        tracep->declQuad(c+132,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+134,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+135,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+3,"top src1sel_ex", false,-1);
        tracep->declBus(c+4,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+5,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+7,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+9,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+137,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+139,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+11,"top is_brc_ex", false,-1);
        tracep->declBit(c+12,"top is_jal_ex", false,-1);
        tracep->declBit(c+13,"top is_jalr_ex", false,-1);
        tracep->declBit(c+140,"top wben_ex", false,-1);
        tracep->declQuad(c+14,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+141,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+142,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+16,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+17,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+116,"top ex_stall_n", false,-1);
        tracep->declQuad(c+143,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+18,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+145,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+147,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+148,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+150,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+22,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+24,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+151,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+152,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+154,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+155,"top wben_wb", false,-1);
        tracep->declBit(c+249,"top PC_reg_u clk", false,-1);
        tracep->declBit(c+250,"top PC_reg_u rst_n", false,-1);
        tracep->declQuad(c+37,"top PC_reg_u pc_i", false,-1, 63,0);
        tracep->declBit(c+116,"top PC_reg_u stall_n", false,-1);
        tracep->declQuad(c+113,"top PC_reg_u pc_new_o", false,-1, 63,0);
        tracep->declQuad(c+113,"top IF_u pc_i", false,-1, 63,0);
        tracep->declBit(c+115,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+1,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+37,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+117,"top IF_u instr_o", false,-1, 31,0);
        tracep->declQuad(c+156,"top IF_u rdata", false,-1, 63,0);
        tracep->declBit(c+249,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+250,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+113,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+117,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+116,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+115,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+118,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+120,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+158,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+160,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBit(c+249,"top ID_u clk", false,-1);
        tracep->declBit(c+250,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+118,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+20,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+120,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+152,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+154,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+155,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+258,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+256,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+121,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+123,"top ID_u src1sel", false,-1);
        tracep->declBus(c+124,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+125,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+128,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+127,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+126,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+129,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+130,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+131,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declBus(c+161,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+121,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+258,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+256,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+118,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+120,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+130,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+131,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+161,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+123,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+124,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+125,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+128,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+127,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+126,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+129,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBus(c+162,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+163,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+164,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+165,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+161,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+121,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+249,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+20,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+130,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+258,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+131,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+256,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+154,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+152,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+155,"top ID_u regfile_u wr_en", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+47+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+120,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+134,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+116,"top hazard_detect_u stalln_pc", false,-1);
        tracep->declBit(c+116,"top hazard_detect_u stalln_id", false,-1);
        tracep->declBit(c+116,"top hazard_detect_u stalln_ex", false,-1);
        tracep->declBit(c+166,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+249,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+250,"top EX_reg_u rst_n", false,-1);
        tracep->declQuad(c+118,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+120,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+121,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+256,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+258,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+125,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+128,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+127,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+126,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+123,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+124,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+129,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+130,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+131,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+116,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+115,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+132,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+134,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+5,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+7,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+9,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+139,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+13,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+12,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+11,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+3,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+4,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+140,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+16,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+17,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+139,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+7,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+5,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+9,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+132,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+134,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+13,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+12,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+11,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+3,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+4,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+141,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+142,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+145,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+152,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+135,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+137,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+115,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+167,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+169,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+39,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+137,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+139,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+167,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+169,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+260,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+261,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+135,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+171,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+172,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+173,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+175,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+176,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+178,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+180,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+180,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+181,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+182,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+183,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+185,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+186,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+187,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+189,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+191,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+193,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+167,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+176,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+175,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+178,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+185,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+172,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+186,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+195,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+182,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+180,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+181,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+175,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+180,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+196,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+167,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+197,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+181,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+180,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+183,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+198,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+200,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+202,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+204,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+206,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+208,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+210,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+167,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+169,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+261,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+193,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+7,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+5,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+13,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+12,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+11,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+212,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+9,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+132,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+115,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+262,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+264,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+266,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+26,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+27,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+28,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+29,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+31,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+41,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+249,"top forwarding_u clk", false,-1);
        tracep->declBit(c+250,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+16,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+17,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+213,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+154,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+150,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+155,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+152,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+141,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+142,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+14,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+33,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+34,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+42,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+43,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+35,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+44,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+45,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+36,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+249,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+250,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+132,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+137,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+134,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+135,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+140,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declQuad(c+143,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+18,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+147,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+145,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+150,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+249,"top ls_u clk", false,-1);
        tracep->declBit(c+250,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+143,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+145,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+18,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+147,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+22,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+151,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+24,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+148,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+214,"top ls_u wren", false,-1);
        tracep->declBit(c+215,"top ls_u rden", false,-1);
        tracep->declBus(c+216,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+217,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+219,"top ls_u wren_last", false,-1);
        tracep->declBit(c+249,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+250,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+214,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+215,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+216,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+217,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+145,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+143,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+219,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+148,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+220,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declQuad(c+222,"top ls_u lsu_u rd_data_base_buf", false,-1, 63,0);
        tracep->declQuad(c+224,"top ls_u lsu_u dpi_addr", false,-1, 63,0);
        tracep->declBit(c+46,"top ls_u lsu_u use_last", false,-1);
        tracep->declBit(c+226,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+227,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+228,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+229,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+230,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+231,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+232,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+233,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+234,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+235,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declQuad(c+267,"top ls_u lsu_u wr_mask", false,-1, 63,0);
        tracep->declBit(c+236,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+237,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+238,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+239,"top ls_u lsu_u sd", false,-1);
        tracep->declQuad(c+240,"top ls_u lsu_u wr_data_b", false,-1, 63,0);
        tracep->declQuad(c+242,"top ls_u lsu_u wr_data_h", false,-1, 63,0);
        tracep->declQuad(c+244,"top ls_u lsu_u wr_data_w", false,-1, 63,0);
        tracep->declQuad(c+246,"top ls_u lsu_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+111,"top ls_u lsu_u wr_data_buf", false,-1, 63,0);
        tracep->declBus(c+147,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+151,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+18,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+214,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+215,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+216,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+217,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+248,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+249,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+250,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+143,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+147,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+145,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+148,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+150,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+151,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+22,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+155,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+20,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+151,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+22,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+24,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declBus(c+154,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+152,"top wb_stage_u rd_data_o", false,-1, 63,0);
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
        tracep->fullQData(oldp+1,(((IData)(vlSelf->top__DOT__is_jalr_ex)
                                    ? vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__rs1_imm_res
                                    : vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__pc_imm_res)),64);
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__src1sel_ex));
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__src2sel_ex),2);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__rs2_ex),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__rs1_ex),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__imm_ex),64);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__is_brc_ex));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__is_jal_ex));
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__is_jalr_ex));
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__rs1_idx_ex),5);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__rs2_idx_ex),5);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__rs2_ls),64);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__pc_wb),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__alures_wb),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__lsres_wb),64);
        tracep->fullBit(oldp+26,((1U & (~ (IData)((0U 
                                                   != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+27,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+31,((~ vlSelf->top__DOT__rs2_ex)),64);
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+35,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+36,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullQData(oldp+37,(((IData)(vlSelf->top__DOT__is_jump)
                                     ? ((IData)(vlSelf->top__DOT__is_jalr_ex)
                                         ? vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__rs1_imm_res
                                         : vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__pc_imm_res)
                                     : (4ULL + vlSelf->top__DOT__pc_new))),64);
        tracep->fullQData(oldp+39,(((2U & (IData)(vlSelf->top__DOT__rs1_sel))
                                     ? ((1U & (IData)(vlSelf->top__DOT__rs1_sel))
                                         ? vlSelf->top__DOT__forwarding_u__DOT__rd_wb
                                         : vlSelf->top__DOT__wb_data)
                                     : ((1U & (IData)(vlSelf->top__DOT__rs1_sel))
                                         ? vlSelf->top__DOT__alures_ls
                                         : vlSelf->top__DOT__rs1_ex))),64);
        tracep->fullBit(oldp+41,((1U & ((0x4000U & vlSelf->top__DOT__instr_ex)
                                         ? ((0x2000U 
                                             & vlSelf->top__DOT__instr_ex)
                                             ? ((0x1000U 
                                                 & vlSelf->top__DOT__instr_ex)
                                                 ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                 : 
                                                (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                             : ((0x1000U 
                                                 & vlSelf->top__DOT__instr_ex)
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
                                         : ((~ (vlSelf->top__DOT__instr_ex 
                                                >> 0xdU)) 
                                            & ((0x1000U 
                                                & vlSelf->top__DOT__instr_ex)
                                                ? (0U 
                                                   != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                : (~ (IData)(
                                                             (0U 
                                                              != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)))))))));
        tracep->fullBit(oldp+42,((((IData)(vlSelf->top__DOT__wben_ls) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_ls 
                                             >> 7U))))));
        tracep->fullBit(oldp+43,((((IData)(vlSelf->top__DOT__wben_wb) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_wb 
                                             >> 7U))))));
        tracep->fullBit(oldp+44,((((IData)(vlSelf->top__DOT__wben_ls) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_ls 
                                             >> 7U))))));
        tracep->fullBit(oldp+45,((((IData)(vlSelf->top__DOT__wben_wb) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_wb 
                                             >> 7U))))));
        tracep->fullBit(oldp+46,(((8U == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 2U))) 
                                  & (vlSelf->top__DOT__alures_wb 
                                     == vlSelf->top__DOT__alures_ls))));
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_buf),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__is_jump));
        tracep->fullBit(oldp+116,((1U & (~ (IData)(vlSelf->top__DOT__hazard_detect_u__DOT__hazard)))));
        tracep->fullIData(oldp+117,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__pc_id),64);
        tracep->fullIData(oldp+120,(vlSelf->top__DOT__instr_id),32);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+125,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+130,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+131,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__pc_ex),64);
        tracep->fullIData(oldp+134,(vlSelf->top__DOT__instr_ex),32);
        tracep->fullQData(oldp+135,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+139,(vlSelf->top__DOT__aluctr_ex),5);
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__wben_ex));
        tracep->fullCData(oldp+141,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+142,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__pc_ls),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__alures_ls),64);
        tracep->fullIData(oldp+147,(vlSelf->top__DOT__instr_ls),32);
        tracep->fullQData(oldp+148,(((((((((- (QData)((IData)(
                                                              (3U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__instr_ls))))) 
                                           & (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b) 
                                                                      >> 7U))))) 
                                               << 8U) 
                                              | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                          | ((- (QData)((IData)(
                                                                (0x4003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__instr_ls))))) 
                                             & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                         | ((- (QData)((IData)(
                                                               (0x1003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__instr_ls))))) 
                                            & (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h) 
                                                                       >> 0xfU))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
                                        | ((- (QData)((IData)(
                                                              (0x5003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__instr_ls))))) 
                                           & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                       | ((- (QData)((IData)(
                                                             (0x2003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__instr_ls))))) 
                                          & (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                                      | ((- (QData)((IData)(
                                                            (0x6003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__instr_ls))))) 
                                         & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                                     | ((- (QData)((IData)(
                                                           (0x3003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__instr_ls))))) 
                                        & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))),64);
        tracep->fullBit(oldp+150,(vlSelf->top__DOT__wben_ls));
        tracep->fullIData(oldp+151,(vlSelf->top__DOT__instr_wb),32);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+154,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                              >> 7U))),5);
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__wben_wb));
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
        tracep->fullQData(oldp+158,(((IData)(vlSelf->top__DOT__is_jump)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+160,(((IData)(vlSelf->top__DOT__is_jump)
                                      ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata))),32);
        tracep->fullCData(oldp+161,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+162,((0x1fU & (vlSelf->top__DOT__instr_id 
                                              >> 2U))),5);
        tracep->fullCData(oldp+163,((7U & (vlSelf->top__DOT__instr_id 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+164,((vlSelf->top__DOT__instr_id 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+165,((vlSelf->top__DOT__instr_id 
                                     >> 7U)),25);
        tracep->fullBit(oldp+166,(vlSelf->top__DOT__hazard_detect_u__DOT__hazard));
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        VL_EXTEND_WQ(65,64, __Vtemp32, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp34, __Vtemp32, __Vtemp33);
        VL_EXTEND_WI(65,1, __Vtemp35, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp36, __Vtemp34, __Vtemp35);
        tracep->fullBit(oldp+171,((1U & ((8U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                          ? ((1U & 
                                              __Vtemp36[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+172,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+175,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+180,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                         >> 3U))));
        tracep->fullBit(oldp+181,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                         >> 2U))));
        tracep->fullCData(oldp+182,((7U & (IData)(vlSelf->top__DOT__aluctr_ex))),3);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp39, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp41, __Vtemp39, __Vtemp40);
        VL_EXTEND_WI(65,1, __Vtemp42, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp43, __Vtemp41, __Vtemp42);
        tracep->fullBit(oldp+185,((1U & __Vtemp43[2U])));
        tracep->fullBit(oldp+186,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+187,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+189,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+191,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+193,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     * vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullCData(oldp+195,((0xfU & (IData)(vlSelf->top__DOT__aluctr_ex))),4);
        tracep->fullBit(oldp+196,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                         >> 4U))));
        tracep->fullCData(oldp+197,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+202,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+204,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+206,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+208,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
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
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+212,((7U & (vlSelf->top__DOT__instr_ex 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+213,((0x1fU & (vlSelf->top__DOT__instr_ls 
                                              >> 7U))),5);
        tracep->fullBit(oldp+214,((8U == (0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))));
        tracep->fullBit(oldp+215,((3U == (0x7fU & vlSelf->top__DOT__instr_ls))));
        tracep->fullCData(oldp+216,((7U & (vlSelf->top__DOT__instr_ls 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullBit(oldp+219,((8U == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 2U)))));
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base_buf),64);
        tracep->fullQData(oldp+224,((0xfffffffffffffff8ULL 
                                     & vlSelf->top__DOT__alures_ls)),64);
        tracep->fullBit(oldp+226,((IData)((3U == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+227,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+228,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+229,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+230,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+231,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+232,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullCData(oldp+233,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+234,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+235,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+236,((IData)((0x20U == 
                                           (0x707cU 
                                            & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+237,((IData)((0x1020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+238,((IData)((0x2020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+239,((IData)((0x3020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b),64);
        tracep->fullQData(oldp+242,(((1U & (IData)(
                                                   (vlSelf->top__DOT__alures_ls 
                                                    >> 2U)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__alures_ls 
                                                        >> 1U)))
                                          ? (((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data)))) 
                                              << 0x30U) 
                                             | (0xffffffffffffULL 
                                                & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))
                                          : (((QData)((IData)(
                                                              (((IData)(
                                                                        (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                                         >> 0x30U)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data))))) 
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
                                                               (((IData)(vlSelf->top__DOT__ls_u__DOT__wr_data) 
                                                                 << 0x10U) 
                                                                | (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))))))
                                          : ((0xffffffffffff0000ULL 
                                              & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base) 
                                             | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data)))))))),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data),64);
        tracep->fullBit(oldp+248,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__instr_wb 
                                            >> 2U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 0x14U)) 
                                      == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U))))));
        tracep->fullBit(oldp+249,(vlSelf->clk));
        tracep->fullBit(oldp+250,(vlSelf->rst_n));
        tracep->fullQData(oldp+251,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+253,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+255,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+256,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+258,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        tracep->fullBit(oldp+260,(0U));
        tracep->fullCData(oldp+261,(0U),3);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__pc_imm_res),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__rs1_imm_res),64);
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),64);
    }
}
