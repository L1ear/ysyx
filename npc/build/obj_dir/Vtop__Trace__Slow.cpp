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
        tracep->declBit(c+213,"clk", false,-1);
        tracep->declBit(c+214,"rst_n", false,-1);
        tracep->declQuad(c+215,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+217,"pc_decoding", false,-1, 63,0);
        tracep->declBit(c+213,"top clk", false,-1);
        tracep->declBit(c+214,"top rst_n", false,-1);
        tracep->declQuad(c+215,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+217,"top pc_decoding", false,-1, 63,0);
        tracep->declQuad(c+36,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+118,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+38,"top is_jump", false,-1);
        tracep->declQuad(c+1,"top pc_jump", false,-1, 63,0);
        tracep->declBus(c+120,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+121,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+123,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+219,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+221,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+124,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+126,"top src1sel_id", false,-1);
        tracep->declBus(c+127,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+128,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+223,"top is_brc_id", false,-1);
        tracep->declBit(c+224,"top is_jal_id", false,-1);
        tracep->declBit(c+225,"top is_jalr_id", false,-1);
        tracep->declQuad(c+129,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+131,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+132,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+3,"top src1sel_ex", false,-1);
        tracep->declBus(c+4,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+5,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+7,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+9,"top imm_ex", false,-1, 63,0);
        tracep->declBus(c+134,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+11,"top is_brc_ex", false,-1);
        tracep->declBit(c+12,"top is_jal_ex", false,-1);
        tracep->declBit(c+13,"top is_jalr_ex", false,-1);
        tracep->declQuad(c+135,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+137,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+139,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+140,"top lsres_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+18,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+20,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+142,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+143,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+145,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+146,"top wb_wren", false,-1);
        tracep->declBit(c+213,"top PC_reg_u clk", false,-1);
        tracep->declBit(c+214,"top PC_reg_u rst_n", false,-1);
        tracep->declQuad(c+36,"top PC_reg_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+118,"top PC_reg_u pc_new_o", false,-1, 63,0);
        tracep->declQuad(c+118,"top IF_u pc_i", false,-1, 63,0);
        tracep->declBit(c+38,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+1,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+36,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+120,"top IF_u instr_o", false,-1, 31,0);
        tracep->declQuad(c+147,"top IF_u rdata", false,-1, 63,0);
        tracep->declBit(c+213,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+214,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+118,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+120,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declQuad(c+121,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+123,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declBit(c+213,"top ID_u clk", false,-1);
        tracep->declBit(c+214,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+121,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+123,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+143,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+145,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+146,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+221,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+219,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+124,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+126,"top ID_u src1sel", false,-1);
        tracep->declBus(c+127,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+128,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+225,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+224,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+223,"top ID_u is_brc_id_o", false,-1);
        tracep->declBus(c+149,"top ID_u ext_op", false,-1, 4,0);
        tracep->declBit(c+150,"top ID_u is_jalr", false,-1);
        tracep->declBit(c+151,"top ID_u is_jal", false,-1);
        tracep->declBit(c+152,"top ID_u is_brc", false,-1);
        tracep->declQuad(c+124,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+221,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+219,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+121,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+123,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+149,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+126,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+127,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+128,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+150,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+151,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+152,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBus(c+153,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+154,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+155,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+156,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+149,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+124,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+213,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+16,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+157,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+221,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+158,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+219,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+145,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+143,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+146,"top ID_u regfile_u wr_en", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+54+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBit(c+213,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+214,"top EX_reg_u rst_n", false,-1);
        tracep->declQuad(c+121,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+123,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+124,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+219,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+221,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+128,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+225,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+224,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+223,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+126,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+127,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declQuad(c+129,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+131,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+5,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+7,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+9,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+134,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+13,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+12,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+11,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+3,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+4,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBus(c+134,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+7,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+5,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+9,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+129,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+131,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+13,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+12,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+11,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+3,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+4,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declQuad(c+132,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+38,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+159,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+22,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declBus(c+134,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+159,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+22,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+226,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+227,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+132,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+161,"top ex_stage_u u_ALU less", false,-1);
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
        tracep->declBit(c+175,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+176,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+39,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+41,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+43,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+45,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+159,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+166,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+165,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+168,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+175,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+162,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+176,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+177,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+172,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+170,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+171,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+165,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+170,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+178,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+159,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+24,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+171,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+170,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+173,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+179,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+181,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+25,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+27,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+47,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+49,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+183,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+159,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+22,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+227,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+45,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+7,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+5,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+13,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+12,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+11,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+185,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+9,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+129,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+38,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+228,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+230,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+232,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+29,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+30,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+31,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+32,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+34,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+51,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+213,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+214,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+129,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+5,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+131,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+132,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+135,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+139,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+137,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+213,"top ls_u clk", false,-1);
        tracep->declBit(c+214,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+135,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+137,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+139,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+140,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+186,"top ls_u wren", false,-1);
        tracep->declBit(c+187,"top ls_u rden", false,-1);
        tracep->declBus(c+188,"top ls_u memop", false,-1, 2,0);
        tracep->declBit(c+213,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+214,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+186,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+187,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+188,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+14,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+137,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+135,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+140,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+189,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declQuad(c+191,"top ls_u lsu_u dpi_addr", false,-1, 63,0);
        tracep->declBit(c+193,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+194,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+195,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+196,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+197,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+198,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+199,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+200,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+201,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+202,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declQuad(c+233,"top ls_u lsu_u wr_mask", false,-1, 63,0);
        tracep->declBit(c+203,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+204,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+205,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+206,"top ls_u lsu_u sd", false,-1);
        tracep->declQuad(c+207,"top ls_u lsu_u wr_data_b", false,-1, 63,0);
        tracep->declQuad(c+52,"top ls_u lsu_u wr_data_h", false,-1, 63,0);
        tracep->declQuad(c+209,"top ls_u lsu_u wr_data_w", false,-1, 63,0);
        tracep->declQuad(c+211,"top ls_u lsu_u wr_data", false,-1, 63,0);
        tracep->declBus(c+139,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBit(c+186,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+187,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+188,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declBit(c+213,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+214,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+135,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+139,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+137,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+140,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+142,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+18,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+16,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+142,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+18,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+20,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declBus(c+145,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+146,"top wb_stage_u rd_wren_o", false,-1);
        tracep->declQuad(c+143,"top wb_stage_u rd_data_o", false,-1, 63,0);
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
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__rs2_ls),64);
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__pc_wb),64);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__alures_wb),64);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__lsres_wb),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullCData(oldp+24,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+25,((0xffffffffffffffffULL 
                                    >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+27,((~ (0xffffffffffffffffULL 
                                       >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullBit(oldp+29,((1U & (~ (IData)((0U 
                                                   != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+34,((~ vlSelf->top__DOT__rs2_ex)),64);
        tracep->fullQData(oldp+36,(((((IData)(vlSelf->top__DOT__is_jal_ex) 
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
        tracep->fullBit(oldp+38,((((IData)(vlSelf->top__DOT__is_jal_ex) 
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
        tracep->fullQData(oldp+39,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                    ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+41,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                    | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+43,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                    & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+45,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                    * vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+47,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                     ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                        & (QData)((IData)(
                                                          ((0xffffffffffffffffULL 
                                                            >> 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                           >> 0x20U))))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+49,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
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
        tracep->fullBit(oldp+51,((1U & ((0x4000U & vlSelf->top__DOT__instr_ex)
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
        tracep->fullQData(oldp+52,(((1U & (IData)((vlSelf->top__DOT__alures_ls 
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
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__pc_new),64);
        tracep->fullIData(oldp+120,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__pc_id),64);
        tracep->fullIData(oldp+123,(vlSelf->top__DOT__instr_id),32);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+128,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__pc_ex),64);
        tracep->fullIData(oldp+131,(vlSelf->top__DOT__instr_ex),32);
        tracep->fullQData(oldp+132,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullCData(oldp+134,(vlSelf->top__DOT__aluctr_ex),5);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__pc_ls),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__alures_ls),64);
        tracep->fullIData(oldp+139,(vlSelf->top__DOT__instr_ls),32);
        tracep->fullQData(oldp+140,(((((((((- (QData)((IData)(
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
        tracep->fullIData(oldp+142,(vlSelf->top__DOT__instr_wb),32);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+145,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                              >> 7U))),5);
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__wb_wren));
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
        tracep->fullCData(oldp+149,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullBit(oldp+150,(vlSelf->top__DOT__ID_u__DOT__is_jalr));
        tracep->fullBit(oldp+151,(vlSelf->top__DOT__ID_u__DOT__is_jal));
        tracep->fullBit(oldp+152,(vlSelf->top__DOT__ID_u__DOT__is_brc));
        tracep->fullCData(oldp+153,((0x1fU & (vlSelf->top__DOT__instr_id 
                                              >> 2U))),5);
        tracep->fullCData(oldp+154,((7U & (vlSelf->top__DOT__instr_id 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+155,((vlSelf->top__DOT__instr_id 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+156,((vlSelf->top__DOT__instr_id 
                                     >> 7U)),25);
        tracep->fullCData(oldp+157,((0x1fU & (vlSelf->top__DOT__instr_id 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+158,((0x1fU & (vlSelf->top__DOT__instr_id 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        VL_EXTEND_WQ(65,64, __Vtemp32, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp34, __Vtemp32, __Vtemp33);
        VL_EXTEND_WI(65,1, __Vtemp35, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp36, __Vtemp34, __Vtemp35);
        tracep->fullBit(oldp+161,((1U & ((8U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                          ? ((1U & 
                                              __Vtemp36[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
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
        VL_EXTEND_WQ(65,64, __Vtemp39, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp41, __Vtemp39, __Vtemp40);
        VL_EXTEND_WI(65,1, __Vtemp42, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp43, __Vtemp41, __Vtemp42);
        tracep->fullBit(oldp+175,((1U & __Vtemp43[2U])));
        tracep->fullBit(oldp+176,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullCData(oldp+177,((0xfU & (IData)(vlSelf->top__DOT__aluctr_ex))),4);
        tracep->fullBit(oldp+178,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                         >> 4U))));
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+185,((7U & (vlSelf->top__DOT__instr_ex 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+186,((8U == (0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))));
        tracep->fullBit(oldp+187,((0U == (0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))));
        tracep->fullCData(oldp+188,((7U & (vlSelf->top__DOT__instr_ls 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
        tracep->fullQData(oldp+191,((0xfffffffffffffff8ULL 
                                     & vlSelf->top__DOT__alures_ls)),64);
        tracep->fullBit(oldp+193,((IData)((0U == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+194,((IData)((0x4000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+195,((IData)((0x1000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+196,((IData)((0x5000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+197,((IData)((0x2000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+198,((IData)((0x6000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+199,((IData)((0x3000U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullCData(oldp+200,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+201,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+202,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+203,((IData)((0x20U == 
                                           (0x707cU 
                                            & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+204,((IData)((0x1020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+205,((IData)((0x2020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+206,((IData)((0x3020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data),64);
        tracep->fullBit(oldp+213,(vlSelf->clk));
        tracep->fullBit(oldp+214,(vlSelf->rst_n));
        tracep->fullQData(oldp+215,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+217,(vlSelf->pc_decoding),64);
        tracep->fullQData(oldp+219,(((0U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_id 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [(0x1fU & (vlSelf->top__DOT__instr_id 
                                                >> 0x14U))])),64);
        tracep->fullQData(oldp+221,(((0U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_id 
                                                >> 0xfU)))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [(0x1fU & (vlSelf->top__DOT__instr_id 
                                                >> 0xfU))])),64);
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+225,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+226,(0U));
        tracep->fullCData(oldp+227,(0U),3);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__pc_imm_res),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__rs1_imm_res),64);
        tracep->fullBit(oldp+232,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),64);
    }
}
