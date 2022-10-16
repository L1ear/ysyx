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
        tracep->declBit(c+345,"clk", false,-1);
        tracep->declBit(c+346,"rst_n", false,-1);
        tracep->declQuad(c+347,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+349,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+351,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+352,"regA0", false,-1, 63,0);
        tracep->declBit(c+354,"stall_n_diff", false,-1);
        tracep->declQuad(c+355,"sram_addr", false,-1, 63,0);
        tracep->declBit(c+357,"sram_ren", false,-1);
        tracep->declBit(c+358,"sram_addr_valid", false,-1);
        tracep->declBit(c+359,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+360,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+361,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+363,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+364,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+365,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+366,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+367,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+368,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+369,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+370,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+371,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+372,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+373,"axi_r_ready_o", false,-1);
        tracep->declBit(c+374,"axi_r_valid_i", false,-1);
        tracep->declBus(c+375,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+376,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+378,"axi_r_last_i", false,-1);
        tracep->declBus(c+379,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+380,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+381,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+382,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+383,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+385,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+386,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+387,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+388,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+389,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+390,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+391,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+392,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+393,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+394,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+395,"axi_w_ready_i", false,-1);
        tracep->declBit(c+396,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+397,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+399,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+400,"axi_w_last_o", false,-1);
        tracep->declBus(c+401,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+402,"axi_b_ready_o", false,-1);
        tracep->declBit(c+403,"axi_b_valid_i", false,-1);
        tracep->declBus(c+404,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+405,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+406,"axi_b_user_i", false,-1, 0,0);
        tracep->declQuad(c+407,"ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+409,"ls_sram_rd_en", false,-1);
        tracep->declBit(c+410,"ls_sram_wr_en", false,-1);
        tracep->declQuad(c+411,"ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+413,"ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+414,"ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+415,"ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+416,"ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+432,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+432,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+432,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+432,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+433,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+434,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+435,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+345,"top clk", false,-1);
        tracep->declBit(c+346,"top rst_n", false,-1);
        tracep->declQuad(c+347,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+349,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+351,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+352,"top regA0", false,-1, 63,0);
        tracep->declBit(c+354,"top stall_n_diff", false,-1);
        tracep->declQuad(c+355,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+357,"top sram_ren", false,-1);
        tracep->declBit(c+358,"top sram_addr_valid", false,-1);
        tracep->declBit(c+359,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+360,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+361,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+363,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+364,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+365,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+366,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+367,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+368,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+369,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+370,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+371,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+372,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+373,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+374,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+375,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+376,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+378,"top axi_r_last_i", false,-1);
        tracep->declBus(c+379,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+380,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+381,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+382,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+383,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+385,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+386,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+387,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+388,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+389,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+390,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+391,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+392,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+393,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+394,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+395,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+396,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+397,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+399,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+400,"top axi_w_last_o", false,-1);
        tracep->declBus(c+401,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+402,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+403,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+404,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+405,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+406,"top axi_b_user_i", false,-1, 0,0);
        tracep->declQuad(c+407,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+409,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+410,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+411,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+413,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+414,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+415,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+416,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+436,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+1,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+271,"top is_jump", false,-1);
        tracep->declQuad(c+149,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+418,"top pc_stall_n", false,-1);
        tracep->declBit(c+418,"top if_stall_n", false,-1);
        tracep->declBit(c+189,"top if_instr_valid", false,-1);
        tracep->declBit(c+189,"top sram_data_valid", false,-1);
        tracep->declQuad(c+190,"top sram_rdata", false,-1, 63,0);
        tracep->declBus(c+419,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+3,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+5,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+420,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+422,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+6,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+8,"top src1sel_id", false,-1);
        tracep->declBus(c+9,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+10,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+11,"top is_brc_id", false,-1);
        tracep->declBit(c+12,"top is_jal_id", false,-1);
        tracep->declBit(c+13,"top is_jalr_id", false,-1);
        tracep->declBit(c+14,"top wben_id", false,-1);
        tracep->declBus(c+15,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+16,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+418,"top id_stall_n", false,-1);
        tracep->declBit(c+17,"top DivEn_id", false,-1);
        tracep->declBus(c+18,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+19,"top in_trap_id", false,-1);
        tracep->declBit(c+20,"top out_trap_id", false,-1);
        tracep->declBit(c+21,"top trap_id", false,-1);
        tracep->declBit(c+22,"top ld_use_hazard", false,-1);
        tracep->declBit(c+272,"top id_flush", false,-1);
        tracep->declQuad(c+23,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+25,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+151,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+26,"top src1sel_ex", false,-1);
        tracep->declBus(c+27,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+28,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+30,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+32,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+273,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+34,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+35,"top is_brc_ex", false,-1);
        tracep->declBit(c+36,"top is_jal_ex", false,-1);
        tracep->declBit(c+37,"top is_jalr_ex", false,-1);
        tracep->declBit(c+38,"top wben_ex", false,-1);
        tracep->declBit(c+39,"top DivEn_ex", false,-1);
        tracep->declBus(c+40,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+41,"top trap_ex", false,-1);
        tracep->declBit(c+424,"top ex_stall_n", false,-1);
        tracep->declQuad(c+42,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+275,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+276,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+44,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+45,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+277,"top ex_flush", false,-1);
        tracep->declQuad(c+46,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+48,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+50,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+52,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+425,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+53,"top wben_ls", false,-1);
        tracep->declQuad(c+54,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+56,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+58,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+60,"top trap_ls", false,-1);
        tracep->declBit(c+424,"top ls_stall_n", false,-1);
        tracep->declBit(c+259,"top ls_not_ok", false,-1);
        tracep->declQuad(c+278,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+280,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+282,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+284,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+285,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+287,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+288,"top wben_wb", false,-1);
        tracep->declQuad(c+289,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+260,"top wb_stall_n", false,-1);
        tracep->declBit(c+345,"top IF_u clk", false,-1);
        tracep->declBit(c+346,"top IF_u rst_n", false,-1);
        tracep->declBit(c+271,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+149,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+56,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+58,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+19,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+20,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+418,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+1,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+419,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+189,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+190,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+189,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+355,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+357,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+358,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+153,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+432,"top axi_if_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+432,"top axi_if_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+432,"top axi_if_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+432,"top axi_if_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+433,"top axi_if_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+434,"top axi_if_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+435,"top axi_if_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+345,"top axi_if_u clock", false,-1);
        tracep->declBit(c+346,"top axi_if_u reset", false,-1);
        tracep->declBit(c+358,"top axi_if_u rw_valid_i", false,-1);
        tracep->declBit(c+189,"top axi_if_u rw_ready_o", false,-1);
        tracep->declQuad(c+190,"top axi_if_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+355,"top axi_if_u rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+381,"top axi_if_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+382,"top axi_if_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+383,"top axi_if_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+385,"top axi_if_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+386,"top axi_if_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+387,"top axi_if_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+388,"top axi_if_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+389,"top axi_if_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+390,"top axi_if_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+391,"top axi_if_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+392,"top axi_if_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+393,"top axi_if_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+394,"top axi_if_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+395,"top axi_if_u axi_w_ready_i", false,-1);
        tracep->declBit(c+396,"top axi_if_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+397,"top axi_if_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+399,"top axi_if_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+400,"top axi_if_u axi_w_last_o", false,-1);
        tracep->declBus(c+401,"top axi_if_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+402,"top axi_if_u axi_b_ready_o", false,-1);
        tracep->declBit(c+403,"top axi_if_u axi_b_valid_i", false,-1);
        tracep->declBus(c+404,"top axi_if_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+405,"top axi_if_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+406,"top axi_if_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+359,"top axi_if_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+360,"top axi_if_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+361,"top axi_if_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+363,"top axi_if_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+364,"top axi_if_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+365,"top axi_if_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+366,"top axi_if_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+367,"top axi_if_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+368,"top axi_if_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+369,"top axi_if_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+370,"top axi_if_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+371,"top axi_if_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+372,"top axi_if_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+373,"top axi_if_u axi_r_ready_o", false,-1);
        tracep->declBit(c+374,"top axi_if_u axi_r_valid_i", false,-1);
        tracep->declBus(c+375,"top axi_if_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+376,"top axi_if_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+378,"top axi_if_u axi_r_last_i", false,-1);
        tracep->declBus(c+379,"top axi_if_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+380,"top axi_if_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+438,"top axi_if_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+439,"top axi_if_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+440,"top axi_if_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+441,"top axi_if_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+291,"top axi_if_u r_state", false,-1, 1,0);
        tracep->declBus(c+427,"top axi_if_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+292,"top axi_if_u ar_valid", false,-1);
        tracep->declBit(c+293,"top axi_if_u r_ready", false,-1);
        tracep->declBit(c+192,"top axi_if_u instr_valid", false,-1);
        tracep->declQuad(c+193,"top axi_if_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+189,"top axi_if_u instr_valid_reg", false,-1);
        tracep->declQuad(c+190,"top axi_if_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+442,"top axi_if_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+443,"top axi_if_u axi_id", false,-1, 3,0);
        tracep->declBus(c+444,"top axi_if_u axi_user", false,-1, 0,0);
        tracep->declBus(c+445,"top axi_if_u axi_len", false,-1, 7,0);
        tracep->declBus(c+446,"top axi_if_u axi_size", false,-1, 2,0);
        tracep->declBit(c+345,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+346,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+1,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+419,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+418,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+272,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+3,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+5,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+155,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+428,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+447,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+448,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+345,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+346,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+418,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+429,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+61,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+345,"top ID_u clk", false,-1);
        tracep->declBit(c+346,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+3,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+278,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+284,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+5,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+285,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+287,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+288,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+422,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+420,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+6,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+8,"top ID_u src1sel", false,-1);
        tracep->declBus(c+9,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+10,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+13,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+12,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+11,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+14,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+15,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+16,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+352,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+17,"top ID_u DivEn", false,-1);
        tracep->declBus(c+18,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+21,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+19,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+20,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+64,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+6,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+422,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+420,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+3,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+5,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+15,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+16,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+64,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+8,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+9,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+10,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+13,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+12,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+11,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+14,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+17,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+18,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+21,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+19,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+20,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+65,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+66,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+67,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+68,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+64,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+6,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+345,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+278,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+284,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+15,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+422,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+16,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+420,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+287,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+285,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+288,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+352,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+195+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+5,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+25,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+22,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+345,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+346,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+424,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+277,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+3,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+5,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+6,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+420,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+422,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+10,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+13,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+12,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+11,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+8,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+9,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+14,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+15,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+16,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+17,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+18,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+21,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+23,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+25,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+28,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+30,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+32,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+34,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+37,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+36,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+35,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+26,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+27,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+38,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+44,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+45,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+39,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+40,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+41,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+157,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+159,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+160,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+161,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+162,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+163,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+164,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+449,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+448,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+345,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+346,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+424,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+139,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+69,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+34,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+30,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+28,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+32,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+23,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+25,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+37,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+36,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+35,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+26,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+27,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+275,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+276,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+50,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+285,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+42,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+39,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+40,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+151,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+149,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+273,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+271,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+294,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+296,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+298,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+273,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+34,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+294,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+296,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+39,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+40,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+151,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+165,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+300,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+301,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+79,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+303,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+305,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+80,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+80,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+81,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+82,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+307,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+166,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+309,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+310,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+312,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+314,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+167,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+294,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+303,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+79,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+305,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+166,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+300,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+309,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+83,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+82,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+80,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+81,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+79,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+80,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+84,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+294,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+316,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+81,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+80,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+307,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+317,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+319,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+321,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+323,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+169,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+171,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+325,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+294,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+296,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+40,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+167,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+298,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+273,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+37,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+36,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+35,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+85,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+32,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+23,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+149,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+271,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+86,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+173,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+450,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+327,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+328,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+329,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+330,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+332,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+175,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+345,"top forwarding_u clk", false,-1);
        tracep->declBit(c+346,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+44,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+45,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+88,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+287,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+53,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+288,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+285,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+260,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+275,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+276,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+42,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+42,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+89,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+90,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+91,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+176,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+92,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+93,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+177,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+94,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+345,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+346,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+23,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+273,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+25,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+151,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+38,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+41,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+424,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+46,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+48,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+52,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+50,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+53,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+60,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+451,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+448,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+345,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+346,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+424,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+178,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+95,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+345,"top ls_u clk", false,-1);
        tracep->declBit(c+346,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+46,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+50,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+48,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+52,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+280,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+284,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+282,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+60,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+425,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+54,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+56,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+58,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+259,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+407,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+409,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+410,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+411,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+413,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+414,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+415,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+416,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+103,"top ls_u wren", false,-1);
        tracep->declBit(c+104,"top ls_u rden", false,-1);
        tracep->declBus(c+105,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+186,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+334,"top ls_u wren_last", false,-1);
        tracep->declBit(c+345,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+346,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+103,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+104,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+105,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+186,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+50,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+46,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+280,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+334,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+425,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+259,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+407,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+409,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+410,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+411,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+413,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+414,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+415,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+416,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+416,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+106,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+107,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+108,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+109,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+110,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+111,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+112,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+113,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+114,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+115,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+116,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+117,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+52,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+284,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+48,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+282,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+103,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+104,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+105,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+186,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+188,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+345,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+346,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+46,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+52,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+50,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+60,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+54,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+56,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+58,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+118,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+119,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+120,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+121,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+122,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+123,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+124,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+125,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+126,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+50,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+127,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+129,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+131,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+58,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+56,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+133,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+135,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+137,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+345,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+346,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+46,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+52,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+50,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+425,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+53,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+54,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+260,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+278,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+284,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+280,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+282,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+288,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+289,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+452,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+448,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+345,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+346,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+260,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+261,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+335,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+278,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+284,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+280,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+282,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+289,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+287,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+285,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+345,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+346,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+22,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+271,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+19,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+20,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+189,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+259,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+418,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+418,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+418,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+424,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+424,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+260,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+272,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+277,"top pipline_ctrl_u ex_flush", false,-1);
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
    VlWide<10>/*319:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp66;
    VlWide<3>/*95:0*/ __Vtemp67;
    VlWide<3>/*95:0*/ __Vtemp68;
    VlWide<3>/*95:0*/ __Vtemp69;
    VlWide<3>/*95:0*/ __Vtemp70;
    VlWide<8>/*255:0*/ __Vtemp75;
    VlWide<3>/*95:0*/ __Vtemp76;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__pc_new),64);
        tracep->fullQData(oldp+3,((((QData)((IData)(
                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+5,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+6,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+14,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullQData(oldp+23,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullIData(oldp+25,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU))),32);
        tracep->fullBit(oldp+26,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x12U))));
        tracep->fullCData(oldp+27,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 0x10U))),2);
        tracep->fullQData(oldp+28,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+30,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+32,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullCData(oldp+34,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),5);
        tracep->fullBit(oldp+35,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x13U))));
        tracep->fullBit(oldp+36,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x14U))));
        tracep->fullBit(oldp+37,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x15U))));
        tracep->fullBit(oldp+38,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0xfU))));
        tracep->fullBit(oldp+39,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 4U))));
        tracep->fullCData(oldp+40,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 1U))),3);
        tracep->fullBit(oldp+41,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+44,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0xaU))),5);
        tracep->fullCData(oldp+45,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 5U))),5);
        tracep->fullQData(oldp+46,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+48,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+50,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullIData(oldp+52,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1eU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U))),32);
        tracep->fullBit(oldp+53,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+60,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullWData(oldp+61,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+65,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 2U))),5);
        tracep->fullCData(oldp+66,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+67,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                    >> 0x19U)),7);
        tracep->fullIData(oldp+68,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                    >> 7U)),25);
        tracep->fullWData(oldp+69,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullBit(oldp+80,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x19U))));
        tracep->fullBit(oldp+81,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x18U))));
        tracep->fullCData(oldp+82,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 0x16U))),3);
        tracep->fullCData(oldp+83,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x16U))),4);
        tracep->fullBit(oldp+84,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x1aU))));
        tracep->fullCData(oldp+85,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                          >> 7U))),3);
        tracep->fullQData(oldp+86,(((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU))) 
                                    + (((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                   >> 0x1bU))))),64);
        tracep->fullCData(oldp+88,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))),5);
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+90,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+91,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 1U) & ((0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 9U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                     >> 0xaU)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))))));
        tracep->fullBit(oldp+92,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 0xaU)))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+93,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 1U) & ((0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 9U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                     >> 5U)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))))));
        tracep->fullBit(oldp+94,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 5U)))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullWData(oldp+95,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullBit(oldp+103,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullBit(oldp+104,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullCData(oldp+105,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+106,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+107,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+108,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+109,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+110,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+111,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+112,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+113,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullBit(oldp+114,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+115,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+116,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+117,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+118,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+119,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+120,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+121,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+127,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+129,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+135,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        __Vtemp57[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                          << 0x1bU) | (((IData)(vlSelf->top__DOT__aluctr_id) 
                                        << 0x16U) | 
                                       ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
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
        __Vtemp57[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                          >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp57[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])) 
                            << 0x1bU));
        __Vtemp57[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs1_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs1_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp57[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])) 
                            << 0x1bU));
        __Vtemp57[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs2_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs2_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp57[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | (((IData)(vlSelf->top__DOT__ex_flush)
                              ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                            << 0x1bU));
        __Vtemp57[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                            ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                          >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                    << 0x1bU));
        __Vtemp57[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                          >> 5U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp57[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                  >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+139,(__Vtemp57),315);
        tracep->fullQData(oldp+149,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullQData(oldp+151,(((0x4000000U & 
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
        tracep->fullQData(oldp+153,(((IData)(vlSelf->top__DOT__is_jump)
                                      ? ((0x200000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
                                                      >> 0x1bU)))))
                                      : ((IData)(vlSelf->top__DOT__in_trap_id)
                                          ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec
                                          : ((IData)(vlSelf->top__DOT__out_trap_id)
                                              ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc
                                              : (4ULL 
                                                 + vlSelf->top__DOT__pc_new))))),64);
        tracep->fullQData(oldp+155,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullQData(oldp+157,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+159,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+160,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+161,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+162,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+163,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+164,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        VL_EXTEND_WQ(65,64, __Vtemp59, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp60, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp61, __Vtemp59, __Vtemp60);
        VL_EXTEND_WI(65,1, __Vtemp62, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp63, __Vtemp61, __Vtemp62);
        tracep->fullBit(oldp+165,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp63[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        VL_EXTEND_WQ(65,64, __Vtemp66, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp67, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp68, __Vtemp66, __Vtemp67);
        VL_EXTEND_WI(65,1, __Vtemp69, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp70, __Vtemp68, __Vtemp69);
        tracep->fullBit(oldp+166,((1U & __Vtemp70[2U])));
        tracep->fullQData(oldp+167,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullQData(oldp+169,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+171,(((0x4000000U & 
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
        tracep->fullQData(oldp+173,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+175,((1U & ((0x200U & 
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
        tracep->fullBit(oldp+176,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+177,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        __Vtemp75[0U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                          << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0xeU)) 
                                    | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp75[1U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
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
        __Vtemp75[2U] = (((IData)((((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp75[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                          >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                >> 0x20U)) 
                                       << 2U));
        __Vtemp75[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                   >> 0x20U)) >> 0x1eU) 
                         | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                             << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x19U))));
        __Vtemp75[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    >> 0x19U))));
        __Vtemp75[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    >> 0x19U))));
        __Vtemp75[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                               >> 0x19U));
        tracep->fullWData(oldp+178,(__Vtemp75),226);
        tracep->fullQData(oldp+186,((((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x16U)) 
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
                                      : (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                               >> 2U))))),64);
        tracep->fullBit(oldp+188,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+189,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+192,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid));
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullWData(oldp+261,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullBit(oldp+271,(vlSelf->top__DOT__is_jump));
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+275,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+276,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+278,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+280,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+282,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+284,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+287,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+288,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+289,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullCData(oldp+291,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
        tracep->fullBit(oldp+292,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
        tracep->fullBit(oldp+293,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        tracep->fullBit(oldp+300,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        tracep->fullBit(oldp+309,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+310,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+312,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+314,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullCData(oldp+316,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+321,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+323,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullBit(oldp+327,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+328,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+329,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+330,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+332,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+334,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullWData(oldp+335,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+345,(vlSelf->clk));
        tracep->fullBit(oldp+346,(vlSelf->rst_n));
        tracep->fullQData(oldp+347,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+349,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+351,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+352,(vlSelf->regA0),64);
        tracep->fullBit(oldp+354,(vlSelf->stall_n_diff));
        tracep->fullQData(oldp+355,(vlSelf->sram_addr),64);
        tracep->fullBit(oldp+357,(vlSelf->sram_ren));
        tracep->fullBit(oldp+358,(vlSelf->sram_addr_valid));
        tracep->fullBit(oldp+359,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+360,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+361,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+363,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+364,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+365,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+366,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+367,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+368,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+369,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+370,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+371,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+372,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+373,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+374,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+375,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+376,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+378,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+379,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+380,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+381,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+382,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+383,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+385,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+386,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+387,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+388,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+389,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+390,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+391,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+392,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+393,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+394,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+395,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+396,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+397,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+399,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+400,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+401,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+402,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+403,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+404,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+405,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+406,(vlSelf->axi_b_user_i));
        tracep->fullQData(oldp+407,(vlSelf->ls_sram_addr),64);
        tracep->fullBit(oldp+409,(vlSelf->ls_sram_rd_en));
        tracep->fullBit(oldp+410,(vlSelf->ls_sram_wr_en));
        tracep->fullQData(oldp+411,(vlSelf->ls_sram_wr_data),64);
        tracep->fullCData(oldp+413,(vlSelf->ls_sram_wr_mask),8);
        tracep->fullBit(oldp+414,(vlSelf->ls_sram_rd_data_valid));
        tracep->fullBit(oldp+415,(vlSelf->ls_sram_wr_data_ok));
        tracep->fullQData(oldp+416,(vlSelf->ls_sram_rd_data),64);
        tracep->fullBit(oldp+418,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullIData(oldp+419,(((1U & (IData)(
                                                   (vlSelf->sram_addr 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg))),32);
        tracep->fullQData(oldp+420,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+422,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        tracep->fullBit(oldp+424,((1U & (~ ((~ (IData)(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+425,(((((((((- (QData)((IData)(
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
                                                                   & (IData)(
                                                                             (vlSelf->ls_sram_rd_data 
                                                                              >> 7U)))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->ls_sram_rd_data)))))) 
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
                                             & (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->ls_sram_rd_data)))))) 
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
                                                                    & (IData)(
                                                                              (vlSelf->ls_sram_rd_data 
                                                                               >> 0xfU)))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->ls_sram_rd_data))))))) 
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
                                           & (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->ls_sram_rd_data)))))) 
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
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ls_sram_rd_data 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->ls_sram_rd_data))))) 
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
                                         & (QData)((IData)(vlSelf->ls_sram_rd_data)))) 
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
                                        & vlSelf->ls_sram_rd_data))),64);
        tracep->fullCData(oldp+427,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->axi_r_valid_i)
                                              ? 2U : 3U)
                                          : ((IData)(vlSelf->sram_addr_valid)
                                              ? ((vlSelf->sram_addr 
                                                  != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                                  ? 1U
                                                  : 2U)
                                              : 0U))
                                      : ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->axi_ar_ready_i)
                                              ? 3U : 1U)
                                          : ((IData)(vlSelf->sram_addr_valid)
                                              ? 1U : 0U)))),2);
        tracep->fullIData(oldp+428,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->sram_addr 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg)))),32);
        __Vtemp76[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                          ? 0U : ((1U & (IData)((vlSelf->sram_addr 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg 
                                              >> 0x20U))
                                   : (IData)(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg)));
        __Vtemp76[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                  ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp76[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new) 
                                 >> 0x20U));
        tracep->fullWData(oldp+429,(__Vtemp76),96);
        tracep->fullIData(oldp+432,(0x40U),32);
        tracep->fullIData(oldp+433,(4U),32);
        tracep->fullIData(oldp+434,(8U),32);
        tracep->fullIData(oldp+435,(1U),32);
        tracep->fullQData(oldp+436,(vlSelf->top__DOT__pc_next),64);
        tracep->fullCData(oldp+438,(0U),2);
        tracep->fullCData(oldp+439,(1U),2);
        tracep->fullCData(oldp+440,(3U),2);
        tracep->fullCData(oldp+441,(2U),2);
        tracep->fullIData(oldp+442,(3U),32);
        tracep->fullCData(oldp+443,(0U),4);
        tracep->fullBit(oldp+444,(0U));
        tracep->fullCData(oldp+445,(0U),8);
        tracep->fullCData(oldp+446,(3U),3);
        tracep->fullIData(oldp+447,(0x60U),32);
        tracep->fullIData(oldp+448,(0U),32);
        tracep->fullIData(oldp+449,(0x13bU),32);
        tracep->fullBit(oldp+450,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+451,(0xe2U),32);
        tracep->fullIData(oldp+452,(0x121U),32);
    }
}
