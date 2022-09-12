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
        tracep->declBit(c+253,"clk", false,-1);
        tracep->declBit(c+254,"rst_n", false,-1);
        tracep->declQuad(c+255,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+257,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+259,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+260,"regA0", false,-1, 63,0);
        tracep->declBit(c+253,"top clk", false,-1);
        tracep->declBit(c+254,"top rst_n", false,-1);
        tracep->declQuad(c+255,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+257,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+259,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+260,"top regA0", false,-1, 63,0);
        tracep->declQuad(c+44,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+132,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+134,"top is_jump", false,-1);
        tracep->declQuad(c+46,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+135,"top pc_stall_n", false,-1);
        tracep->declBus(c+136,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+137,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+139,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+262,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+264,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+140,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+142,"top src1sel_id", false,-1);
        tracep->declBus(c+143,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+144,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+145,"top is_brc_id", false,-1);
        tracep->declBit(c+146,"top is_jal_id", false,-1);
        tracep->declBit(c+147,"top is_jalr_id", false,-1);
        tracep->declBit(c+148,"top wben_id", false,-1);
        tracep->declBus(c+149,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+150,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+135,"top id_stall_n", false,-1);
        tracep->declQuad(c+151,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+153,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+266,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+1,"top src1sel_ex", false,-1);
        tracep->declBus(c+2,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+3,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+5,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+7,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+154,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+9,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+10,"top is_brc_ex", false,-1);
        tracep->declBit(c+11,"top is_jal_ex", false,-1);
        tracep->declBit(c+12,"top is_jalr_ex", false,-1);
        tracep->declBit(c+156,"top wben_ex", false,-1);
        tracep->declQuad(c+13,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+157,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+158,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+15,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+16,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+135,"top ex_stall_n", false,-1);
        tracep->declQuad(c+159,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+17,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+161,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+163,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+164,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+166,"top wben_ls", false,-1);
        tracep->declQuad(c+19,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+21,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+23,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+167,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+168,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+170,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+171,"top wben_wb", false,-1);
        tracep->declBit(c+253,"top PC_reg_u clk", false,-1);
        tracep->declBit(c+254,"top PC_reg_u rst_n", false,-1);
        tracep->declQuad(c+44,"top PC_reg_u pc_i", false,-1, 63,0);
        tracep->declBit(c+135,"top PC_reg_u stall_n", false,-1);
        tracep->declQuad(c+132,"top PC_reg_u pc_new_o", false,-1, 63,0);
        tracep->declQuad(c+132,"top IF_u pc_i", false,-1, 63,0);
        tracep->declBit(c+134,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+46,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+44,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+136,"top IF_u instr_o", false,-1, 31,0);
        tracep->declQuad(c+172,"top IF_u rdata", false,-1, 63,0);
        tracep->declBit(c+253,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+254,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+132,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+136,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+135,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+134,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+137,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+139,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+174,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+176,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBit(c+253,"top ID_u clk", false,-1);
        tracep->declBit(c+254,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+137,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+19,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+139,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+168,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+170,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+171,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+264,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+262,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+140,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+142,"top ID_u src1sel", false,-1);
        tracep->declBus(c+143,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+144,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+147,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+146,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+145,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+148,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+149,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+150,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+260,"top ID_u regA0", false,-1, 63,0);
        tracep->declBus(c+177,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+140,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+264,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+262,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+137,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+139,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+149,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+150,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+177,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+142,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+143,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+144,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+147,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+146,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+145,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+148,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBus(c+178,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+179,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+180,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+181,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+177,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+140,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+253,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+19,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+149,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+264,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+150,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+262,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+170,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+168,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+171,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+260,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+66+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+139,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+153,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+135,"top hazard_detect_u stalln_pc", false,-1);
        tracep->declBit(c+135,"top hazard_detect_u stalln_id", false,-1);
        tracep->declBit(c+135,"top hazard_detect_u stalln_ex", false,-1);
        tracep->declBit(c+182,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+253,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+254,"top EX_reg_u rst_n", false,-1);
        tracep->declQuad(c+137,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+139,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+140,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+262,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+264,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+144,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+147,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+146,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+145,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+142,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+143,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+148,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+149,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+150,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+135,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+134,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+151,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+153,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+3,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+7,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+9,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+12,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+11,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+10,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+1,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+2,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+156,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+15,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+16,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+9,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+5,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+3,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+7,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+151,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+153,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+12,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+11,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+10,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+1,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+2,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+157,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+158,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+161,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+168,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+13,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+266,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+46,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+154,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+134,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+183,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+185,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+48,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+154,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+9,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+183,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+185,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+268,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+269,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+50,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+52,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+187,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+188,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+25,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+190,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+192,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+26,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+26,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+27,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+28,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+194,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+53,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+196,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+197,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+199,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+201,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+203,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+183,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+190,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+25,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+192,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+53,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+187,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+196,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+29,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+28,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+26,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+27,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+25,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+26,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+30,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+183,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+205,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+27,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+26,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+194,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+206,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+208,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+210,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+212,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+54,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+56,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+214,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+183,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+185,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+269,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+203,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+5,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+3,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+12,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+11,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+10,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+216,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+7,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+151,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+46,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+134,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+58,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+31,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+270,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+33,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+34,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+35,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+36,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+38,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+60,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+253,"top forwarding_u clk", false,-1);
        tracep->declBit(c+254,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+15,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+16,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+217,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+170,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+166,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+171,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+168,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+157,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+158,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+13,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+13,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+40,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+41,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+61,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+62,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+42,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+63,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+64,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+43,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+253,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+254,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+151,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+154,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+153,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+266,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+156,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declQuad(c+159,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+17,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+163,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+161,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+166,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+253,"top ls_u clk", false,-1);
        tracep->declBit(c+254,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+159,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+161,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+17,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+163,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+21,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+167,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+23,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+164,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+218,"top ls_u wren", false,-1);
        tracep->declBit(c+219,"top ls_u rden", false,-1);
        tracep->declBus(c+220,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+221,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+223,"top ls_u wren_last", false,-1);
        tracep->declBit(c+253,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+254,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+218,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+219,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+220,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+221,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+161,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+159,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+21,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+223,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+164,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+224,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declQuad(c+226,"top ls_u lsu_u rd_data_base_buf", false,-1, 63,0);
        tracep->declQuad(c+228,"top ls_u lsu_u dpi_addr", false,-1, 63,0);
        tracep->declBit(c+65,"top ls_u lsu_u use_last", false,-1);
        tracep->declBit(c+230,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+231,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+232,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+233,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+234,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+235,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+236,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+237,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+238,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+239,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declQuad(c+271,"top ls_u lsu_u wr_mask", false,-1, 63,0);
        tracep->declBit(c+240,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+241,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+242,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+243,"top ls_u lsu_u sd", false,-1);
        tracep->declQuad(c+244,"top ls_u lsu_u wr_data_b", false,-1, 63,0);
        tracep->declQuad(c+246,"top ls_u lsu_u wr_data_h", false,-1, 63,0);
        tracep->declQuad(c+248,"top ls_u lsu_u wr_data_w", false,-1, 63,0);
        tracep->declQuad(c+250,"top ls_u lsu_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+130,"top ls_u lsu_u wr_data_buf", false,-1, 63,0);
        tracep->declBus(c+163,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+167,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+17,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+23,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+218,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+219,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+220,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+221,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+252,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+253,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+254,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+159,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+163,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+161,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+164,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+166,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+19,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+167,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+21,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+23,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+171,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+19,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+167,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+21,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+23,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declBus(c+170,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+168,"top wb_stage_u rd_data_o", false,-1, 63,0);
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
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__src1sel_ex));
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__src2sel_ex),2);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__rs2_ex),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__rs1_ex),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__imm_ex),64);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__aluctr_ex),5);
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__is_brc_ex));
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__is_jal_ex));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__is_jalr_ex));
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__rs1_idx_ex),5);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__rs2_idx_ex),5);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__rs2_ls),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__pc_wb),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__alures_wb),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__lsres_wb),64);
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullBit(oldp+26,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                        >> 3U))));
        tracep->fullBit(oldp+27,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                        >> 2U))));
        tracep->fullCData(oldp+28,((7U & (IData)(vlSelf->top__DOT__aluctr_ex))),3);
        tracep->fullCData(oldp+29,((0xfU & (IData)(vlSelf->top__DOT__aluctr_ex))),4);
        tracep->fullBit(oldp+30,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                        >> 4U))));
        tracep->fullQData(oldp+31,((vlSelf->top__DOT__rs1_ex 
                                    + vlSelf->top__DOT__imm_ex)),64);
        tracep->fullBit(oldp+33,((1U & (~ (IData)((0U 
                                                   != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+38,((~ vlSelf->top__DOT__rs2_ex)),64);
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+42,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+43,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullQData(oldp+44,(((IData)(vlSelf->top__DOT__is_jump)
                                     ? ((IData)(vlSelf->top__DOT__is_jalr_ex)
                                         ? (vlSelf->top__DOT__rs1_ex 
                                            + vlSelf->top__DOT__imm_ex)
                                         : (vlSelf->top__DOT__pc_ex 
                                            + vlSelf->top__DOT__imm_ex))
                                     : (4ULL + vlSelf->top__DOT__pc_new))),64);
        tracep->fullQData(oldp+46,(((IData)(vlSelf->top__DOT__is_jalr_ex)
                                     ? (vlSelf->top__DOT__rs1_ex 
                                        + vlSelf->top__DOT__imm_ex)
                                     : (vlSelf->top__DOT__pc_ex 
                                        + vlSelf->top__DOT__imm_ex))),64);
        tracep->fullQData(oldp+48,(((2U & (IData)(vlSelf->top__DOT__rs1_sel))
                                     ? ((1U & (IData)(vlSelf->top__DOT__rs1_sel))
                                         ? vlSelf->top__DOT__forwarding_u__DOT__rd_wb
                                         : vlSelf->top__DOT__wb_data)
                                     : ((1U & (IData)(vlSelf->top__DOT__rs1_sel))
                                         ? vlSelf->top__DOT__alures_ls
                                         : vlSelf->top__DOT__rs1_ex))),64);
        tracep->fullQData(oldp+50,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        VL_EXTEND_WQ(65,64, __Vtemp32, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp34, __Vtemp32, __Vtemp33);
        VL_EXTEND_WI(65,1, __Vtemp35, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp36, __Vtemp34, __Vtemp35);
        tracep->fullBit(oldp+52,((1U & ((8U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                         ? ((1U & __Vtemp36[2U]) 
                                            ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                         : ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                     >> 0x3fU)) 
                                            ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        VL_EXTEND_WQ(65,64, __Vtemp39, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp41, __Vtemp39, __Vtemp40);
        VL_EXTEND_WI(65,1, __Vtemp42, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp43, __Vtemp41, __Vtemp42);
        tracep->fullBit(oldp+53,((1U & __Vtemp43[2U])));
        tracep->fullQData(oldp+54,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                     ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                        & (QData)((IData)(
                                                          ((0xffffffffffffffffULL 
                                                            >> 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                           >> 0x20U))))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+56,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
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
        tracep->fullQData(oldp+58,((vlSelf->top__DOT__pc_ex 
                                    + vlSelf->top__DOT__imm_ex)),64);
        tracep->fullBit(oldp+60,((1U & ((0x4000U & vlSelf->top__DOT__instr_ex)
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
        tracep->fullBit(oldp+61,((((IData)(vlSelf->top__DOT__wben_ls) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_ls 
                                             >> 7U))))));
        tracep->fullBit(oldp+62,((((IData)(vlSelf->top__DOT__wben_wb) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_wb 
                                             >> 7U))))));
        tracep->fullBit(oldp+63,((((IData)(vlSelf->top__DOT__wben_ls) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_ls 
                                             >> 7U))))));
        tracep->fullBit(oldp+64,((((IData)(vlSelf->top__DOT__wben_wb) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_wb 
                                             >> 7U))))));
        tracep->fullBit(oldp+65,(((8U == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 2U))) 
                                  & (vlSelf->top__DOT__alures_wb 
                                     == vlSelf->top__DOT__alures_ls))));
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_buf),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__is_jump));
        tracep->fullBit(oldp+135,((1U & (~ (IData)(vlSelf->top__DOT__hazard_detect_u__DOT__hazard)))));
        tracep->fullIData(oldp+136,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__pc_id),64);
        tracep->fullIData(oldp+139,(vlSelf->top__DOT__instr_id),32);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+144,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+145,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+148,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+149,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+150,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__pc_ex),64);
        tracep->fullIData(oldp+153,(vlSelf->top__DOT__instr_ex),32);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__wben_ex));
        tracep->fullCData(oldp+157,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+158,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__pc_ls),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__alures_ls),64);
        tracep->fullIData(oldp+163,(vlSelf->top__DOT__instr_ls),32);
        tracep->fullQData(oldp+164,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+166,(vlSelf->top__DOT__wben_ls));
        tracep->fullIData(oldp+167,(vlSelf->top__DOT__instr_wb),32);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+170,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                              >> 7U))),5);
        tracep->fullBit(oldp+171,(vlSelf->top__DOT__wben_wb));
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
        tracep->fullQData(oldp+174,(((IData)(vlSelf->top__DOT__is_jump)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+176,(((IData)(vlSelf->top__DOT__is_jump)
                                      ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata))),32);
        tracep->fullCData(oldp+177,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+178,((0x1fU & (vlSelf->top__DOT__instr_id 
                                              >> 2U))),5);
        tracep->fullCData(oldp+179,((7U & (vlSelf->top__DOT__instr_id 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+180,((vlSelf->top__DOT__instr_id 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+181,((vlSelf->top__DOT__instr_id 
                                     >> 7U)),25);
        tracep->fullBit(oldp+182,(vlSelf->top__DOT__hazard_detect_u__DOT__hazard));
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullBit(oldp+187,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        tracep->fullBit(oldp+196,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+197,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+199,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+201,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+203,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     * vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullCData(oldp+205,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+210,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+212,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+216,((7U & (vlSelf->top__DOT__instr_ex 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+217,((0x1fU & (vlSelf->top__DOT__instr_ls 
                                              >> 7U))),5);
        tracep->fullBit(oldp+218,((8U == (0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))));
        tracep->fullBit(oldp+219,((3U == (0x7fU & vlSelf->top__DOT__instr_ls))));
        tracep->fullCData(oldp+220,((7U & (vlSelf->top__DOT__instr_ls 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullBit(oldp+223,((8U == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 2U)))));
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base_buf),64);
        tracep->fullQData(oldp+228,((0xfffffffffffffff8ULL 
                                     & vlSelf->top__DOT__alures_ls)),64);
        tracep->fullBit(oldp+230,((IData)((3U == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+231,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+232,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+233,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+234,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+235,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+236,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullCData(oldp+237,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+238,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+239,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+240,((IData)((0x20U == 
                                           (0x707cU 
                                            & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+241,((IData)((0x1020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+242,((IData)((0x2020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+243,((IData)((0x3020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b),64);
        tracep->fullQData(oldp+246,(((1U & (IData)(
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
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data),64);
        tracep->fullBit(oldp+252,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__instr_wb 
                                            >> 2U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 0x14U)) 
                                      == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U))))));
        tracep->fullBit(oldp+253,(vlSelf->clk));
        tracep->fullBit(oldp+254,(vlSelf->rst_n));
        tracep->fullQData(oldp+255,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+257,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+259,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+260,(vlSelf->regA0),64);
        tracep->fullQData(oldp+262,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+264,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        tracep->fullQData(oldp+266,(0ULL),64);
        tracep->fullBit(oldp+268,(0U));
        tracep->fullCData(oldp+269,(0U),3);
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),64);
    }
}
