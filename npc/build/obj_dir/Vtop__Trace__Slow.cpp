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
        tracep->declBit(c+244,"clk", false,-1);
        tracep->declBit(c+245,"rst_n", false,-1);
        tracep->declQuad(c+246,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+248,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+250,"instr_diff", false,-1, 31,0);
        tracep->declBit(c+244,"top clk", false,-1);
        tracep->declBit(c+245,"top rst_n", false,-1);
        tracep->declQuad(c+246,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+248,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+250,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+37,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+114,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+39,"top is_jump", false,-1);
        tracep->declQuad(c+1,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+255,"top pc_stall_n", false,-1);
        tracep->declBus(c+116,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+117,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+119,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+251,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+253,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+120,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+122,"top src1sel_id", false,-1);
        tracep->declBus(c+123,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+124,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+256,"top is_brc_id", false,-1);
        tracep->declBit(c+257,"top is_jal_id", false,-1);
        tracep->declBit(c+258,"top is_jalr_id", false,-1);
        tracep->declBit(c+125,"top wben_id", false,-1);
        tracep->declBus(c+126,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+127,"top rs2_idx_id", false,-1, 4,0);
        tracep->declQuad(c+128,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+130,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+131,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+3,"top src1sel_ex", false,-1);
        tracep->declBus(c+4,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+5,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+7,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+9,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+133,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+135,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+11,"top is_brc_ex", false,-1);
        tracep->declBit(c+12,"top is_jal_ex", false,-1);
        tracep->declBit(c+13,"top is_jalr_ex", false,-1);
        tracep->declBit(c+136,"top wben_ex", false,-1);
        tracep->declQuad(c+14,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+137,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+138,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+16,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+17,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declQuad(c+139,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+18,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+141,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+143,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+144,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+146,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+22,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+24,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+147,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+148,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+150,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+151,"top wben_wb", false,-1);
        tracep->declBit(c+244,"top PC_reg_u clk", false,-1);
        tracep->declBit(c+245,"top PC_reg_u rst_n", false,-1);
        tracep->declQuad(c+37,"top PC_reg_u pc_i", false,-1, 63,0);
        tracep->declBit(c+255,"top PC_reg_u stall_n", false,-1);
        tracep->declQuad(c+114,"top PC_reg_u pc_new_o", false,-1, 63,0);
        tracep->declQuad(c+114,"top IF_u pc_i", false,-1, 63,0);
        tracep->declBit(c+39,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+1,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+37,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+116,"top IF_u instr_o", false,-1, 31,0);
        tracep->declQuad(c+152,"top IF_u rdata", false,-1, 63,0);
        tracep->declBit(c+244,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+245,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+114,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+116,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+259,"top ID_reg_u stall_n", false,-1);
        tracep->declQuad(c+117,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+119,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declBit(c+244,"top ID_u clk", false,-1);
        tracep->declBit(c+245,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+117,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+20,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+119,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+148,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+150,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+151,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+253,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+251,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+120,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+122,"top ID_u src1sel", false,-1);
        tracep->declBus(c+123,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+124,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+258,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+257,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+256,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+125,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+126,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+127,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declBus(c+154,"top ID_u ext_op", false,-1, 4,0);
        tracep->declBit(c+155,"top ID_u is_jalr", false,-1);
        tracep->declBit(c+156,"top ID_u is_jal", false,-1);
        tracep->declBit(c+157,"top ID_u is_brc", false,-1);
        tracep->declQuad(c+120,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+253,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+251,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+117,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+119,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+126,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+127,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+154,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+122,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+123,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+124,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+155,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+156,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+157,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+125,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBus(c+158,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+159,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+160,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+161,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+154,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+120,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+244,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+20,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+126,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+253,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+127,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+251,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+150,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+148,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+151,"top ID_u regfile_u wr_en", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+48+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBit(c+244,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+245,"top EX_reg_u rst_n", false,-1);
        tracep->declQuad(c+117,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+119,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+120,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+251,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+253,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+124,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+258,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+257,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+256,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+122,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+123,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+125,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+126,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+127,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declQuad(c+128,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+130,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+5,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+7,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+9,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+135,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+13,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+12,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+11,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+3,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+4,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+136,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+16,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+17,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+135,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+7,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+5,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+9,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+128,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+130,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+13,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+12,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+11,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+3,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+4,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+137,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+138,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+141,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+148,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+131,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+133,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+39,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+162,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+164,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+40,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+133,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+135,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+162,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+164,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+260,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+261,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+131,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+166,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+167,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+168,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+170,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+171,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+173,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+175,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+175,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+176,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+177,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+178,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+180,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+181,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+182,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+184,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+186,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+188,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+162,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+171,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+170,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+173,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+180,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+167,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+181,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+190,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+177,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+175,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+176,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+170,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+175,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+191,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+162,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+192,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+176,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+175,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+178,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+193,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+195,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+197,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+199,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+201,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+203,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+205,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+162,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+164,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+261,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+188,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+7,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+5,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+13,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+12,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+11,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+207,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+9,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+128,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+39,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+262,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+264,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+266,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+26,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+27,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+28,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+29,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+31,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+42,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+244,"top forwarding_u clk", false,-1);
        tracep->declBit(c+245,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+16,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+17,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+208,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+150,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+146,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+151,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+148,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+137,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+138,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+14,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+33,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+34,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+43,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+44,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+35,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+45,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+46,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+36,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+244,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+245,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+128,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+133,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+130,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+131,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+136,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declQuad(c+139,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+18,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+143,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+141,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+146,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+244,"top ls_u clk", false,-1);
        tracep->declBit(c+245,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+139,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+141,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+18,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+143,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+22,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+147,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+24,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+144,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+209,"top ls_u wren", false,-1);
        tracep->declBit(c+210,"top ls_u rden", false,-1);
        tracep->declBus(c+211,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+212,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+214,"top ls_u wren_last", false,-1);
        tracep->declBit(c+244,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+245,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+209,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+210,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+211,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+212,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+141,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+139,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+214,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+144,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+215,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declQuad(c+217,"top ls_u lsu_u rd_data_base_buf", false,-1, 63,0);
        tracep->declQuad(c+219,"top ls_u lsu_u dpi_addr", false,-1, 63,0);
        tracep->declBit(c+47,"top ls_u lsu_u use_last", false,-1);
        tracep->declBit(c+221,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+222,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+223,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+224,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+225,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+226,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+227,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+228,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+229,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+230,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declQuad(c+267,"top ls_u lsu_u wr_mask", false,-1, 63,0);
        tracep->declBit(c+231,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+232,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+233,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+234,"top ls_u lsu_u sd", false,-1);
        tracep->declQuad(c+235,"top ls_u lsu_u wr_data_b", false,-1, 63,0);
        tracep->declQuad(c+237,"top ls_u lsu_u wr_data_h", false,-1, 63,0);
        tracep->declQuad(c+239,"top ls_u lsu_u wr_data_w", false,-1, 63,0);
        tracep->declQuad(c+241,"top ls_u lsu_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+112,"top ls_u lsu_u wr_data_buf", false,-1, 63,0);
        tracep->declBus(c+143,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+147,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+18,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+209,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+210,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+211,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+212,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+243,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+244,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+245,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+139,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+143,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+141,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+144,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+146,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+147,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+22,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+151,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+20,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+147,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+22,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+24,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declBus(c+150,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+148,"top wb_stage_u rd_data_o", false,-1, 63,0);
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
        tracep->fullQData(oldp+37,(((((IData)(vlSelf->top__DOT__is_jal_ex) 
                                      | (IData)(vlSelf->top__DOT__is_jalr_ex)) 
                                     | ((IData)(vlSelf->top__DOT__is_brc_ex) 
                                        & ((0x4000U 
                                            & vlSelf->top__DOT__instr_ex)
                                            ? ((0x2000U 
                                                & vlSelf->top__DOT__instr_ex)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__instr_ex)
                                                    ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                    : 
                                                   (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                                : (
                                                   (0x1000U 
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
                                                   ? 
                                                  (0U 
                                                   != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                   : 
                                                  (~ (IData)(
                                                             (0U 
                                                              != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))))))
                                     ? ((IData)(vlSelf->top__DOT__is_jalr_ex)
                                         ? vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__rs1_imm_res
                                         : vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__pc_imm_res)
                                     : (4ULL + vlSelf->top__DOT__pc_new))),64);
        tracep->fullBit(oldp+39,((((IData)(vlSelf->top__DOT__is_jal_ex) 
                                   | (IData)(vlSelf->top__DOT__is_jalr_ex)) 
                                  | ((IData)(vlSelf->top__DOT__is_brc_ex) 
                                     & ((0x4000U & vlSelf->top__DOT__instr_ex)
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
                                                              != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))))))));
        tracep->fullQData(oldp+40,(((2U & (IData)(vlSelf->top__DOT__rs1_sel))
                                     ? ((1U & (IData)(vlSelf->top__DOT__rs1_sel))
                                         ? vlSelf->top__DOT__forwarding_u__DOT__rd_wb
                                         : vlSelf->top__DOT__wb_data)
                                     : ((1U & (IData)(vlSelf->top__DOT__rs1_sel))
                                         ? vlSelf->top__DOT__alures_ls
                                         : vlSelf->top__DOT__rs1_ex))),64);
        tracep->fullBit(oldp+42,((1U & ((0x4000U & vlSelf->top__DOT__instr_ex)
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
        tracep->fullBit(oldp+43,((((IData)(vlSelf->top__DOT__wben_ls) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_ls 
                                             >> 7U))))));
        tracep->fullBit(oldp+44,((((IData)(vlSelf->top__DOT__wben_wb) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_wb 
                                             >> 7U))))));
        tracep->fullBit(oldp+45,((((IData)(vlSelf->top__DOT__wben_ls) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_ls 
                                             >> 7U))))));
        tracep->fullBit(oldp+46,((((IData)(vlSelf->top__DOT__wben_wb) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_wb 
                                             >> 7U))))));
        tracep->fullBit(oldp+47,(((8U == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 2U))) 
                                  & (vlSelf->top__DOT__alures_wb 
                                     == vlSelf->top__DOT__alures_ls))));
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_buf),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__pc_new),64);
        tracep->fullIData(oldp+116,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__pc_id),64);
        tracep->fullIData(oldp+119,(vlSelf->top__DOT__instr_id),32);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+123,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+126,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__pc_ex),64);
        tracep->fullIData(oldp+130,(vlSelf->top__DOT__instr_ex),32);
        tracep->fullQData(oldp+131,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+135,(vlSelf->top__DOT__aluctr_ex),5);
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__wben_ex));
        tracep->fullCData(oldp+137,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+138,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__pc_ls),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__alures_ls),64);
        tracep->fullIData(oldp+143,(vlSelf->top__DOT__instr_ls),32);
        tracep->fullQData(oldp+144,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__wben_ls));
        tracep->fullIData(oldp+147,(vlSelf->top__DOT__instr_wb),32);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+150,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                              >> 7U))),5);
        tracep->fullBit(oldp+151,(vlSelf->top__DOT__wben_wb));
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
        tracep->fullCData(oldp+154,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__ID_u__DOT__is_jalr));
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__ID_u__DOT__is_jal));
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__ID_u__DOT__is_brc));
        tracep->fullCData(oldp+158,((0x1fU & (vlSelf->top__DOT__instr_id 
                                              >> 2U))),5);
        tracep->fullCData(oldp+159,((7U & (vlSelf->top__DOT__instr_id 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+160,((vlSelf->top__DOT__instr_id 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+161,((vlSelf->top__DOT__instr_id 
                                     >> 7U)),25);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        VL_EXTEND_WQ(65,64, __Vtemp32, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp34, __Vtemp32, __Vtemp33);
        VL_EXTEND_WI(65,1, __Vtemp35, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp36, __Vtemp34, __Vtemp35);
        tracep->fullBit(oldp+166,((1U & ((8U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                          ? ((1U & 
                                              __Vtemp36[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+167,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+170,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+175,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                         >> 3U))));
        tracep->fullBit(oldp+176,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                         >> 2U))));
        tracep->fullCData(oldp+177,((7U & (IData)(vlSelf->top__DOT__aluctr_ex))),3);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp39, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp41, __Vtemp39, __Vtemp40);
        VL_EXTEND_WI(65,1, __Vtemp42, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp43, __Vtemp41, __Vtemp42);
        tracep->fullBit(oldp+180,((1U & __Vtemp43[2U])));
        tracep->fullBit(oldp+181,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+182,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+184,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+186,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+188,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     * vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullCData(oldp+190,((0xfU & (IData)(vlSelf->top__DOT__aluctr_ex))),4);
        tracep->fullBit(oldp+191,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                         >> 4U))));
        tracep->fullCData(oldp+192,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+197,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+199,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+201,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+203,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
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
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+207,((7U & (vlSelf->top__DOT__instr_ex 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+208,((0x1fU & (vlSelf->top__DOT__instr_ls 
                                              >> 7U))),5);
        tracep->fullBit(oldp+209,((8U == (0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))));
        tracep->fullBit(oldp+210,((0U == (0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))));
        tracep->fullCData(oldp+211,((7U & (vlSelf->top__DOT__instr_ls 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullBit(oldp+214,((8U == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 2U)))));
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base_buf),64);
        tracep->fullQData(oldp+219,((0xfffffffffffffff8ULL 
                                     & vlSelf->top__DOT__alures_ls)),64);
        tracep->fullBit(oldp+221,((IData)((0U == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+222,((IData)((0x4000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+223,((IData)((0x1000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+224,((IData)((0x5000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+225,((IData)((0x2000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+226,((IData)((0x6000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+227,((IData)((0x3000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullCData(oldp+228,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+229,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+230,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+231,((IData)((0x20U == 
                                           (0x707cU 
                                            & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+232,((IData)((0x1020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+233,((IData)((0x2020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+234,((IData)((0x3020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b),64);
        tracep->fullQData(oldp+237,(((1U & (IData)(
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
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data),64);
        tracep->fullBit(oldp+243,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__instr_wb 
                                            >> 2U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 0x14U)) 
                                      == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U))))));
        tracep->fullBit(oldp+244,(vlSelf->clk));
        tracep->fullBit(oldp+245,(vlSelf->rst_n));
        tracep->fullQData(oldp+246,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+248,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+250,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+251,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+253,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__pc_stall_n));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__ID_reg_u__DOT__stall_n));
        tracep->fullBit(oldp+260,(0U));
        tracep->fullCData(oldp+261,(0U),3);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__pc_imm_res),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__rs1_imm_res),64);
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),64);
    }
}
