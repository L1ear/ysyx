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
        tracep->declBit(c+435,"clk", false,-1);
        tracep->declBit(c+436,"rst_n", false,-1);
        tracep->declQuad(c+437,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+439,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+441,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+442,"regA0", false,-1, 63,0);
        tracep->declBit(c+444,"stall_n_diff", false,-1);
        tracep->declBus(c+452,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+452,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+452,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+452,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+453,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+454,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+455,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+435,"top clk", false,-1);
        tracep->declBit(c+436,"top rst_n", false,-1);
        tracep->declQuad(c+437,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+439,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+441,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+442,"top regA0", false,-1, 63,0);
        tracep->declBit(c+444,"top stall_n_diff", false,-1);
        tracep->declBit(c+445,"top instr_fetching", false,-1);
        tracep->declBit(c+1,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+430,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+60,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+456,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+457,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+458,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+459,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+460,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+461,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+462,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+463,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+457,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+464,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+431,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+361,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+2,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+3,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+465,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+466,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+467,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+5,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+62,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+63,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+456,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+468,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+458,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+459,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+65,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+461,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+462,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+469,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+457,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+457,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+66,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+67,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+69,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+66,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+458,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+70,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+7,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+8,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+470,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+471,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+9,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+71,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+63,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+456,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+468,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+458,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+459,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+460,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+461,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+462,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+463,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+457,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+472,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+72,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+10,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+11,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+12,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+473,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+474,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+475,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+476,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+73,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+75,"top is_jump", false,-1);
        tracep->declQuad(c+76,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+446,"top pc_stall_n", false,-1);
        tracep->declBit(c+446,"top if_stall_n", false,-1);
        tracep->declBit(c+432,"top if_instr_valid", false,-1);
        tracep->declBit(c+432,"top sram_data_valid", false,-1);
        tracep->declQuad(c+447,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+60,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+478,"top sram_ren", false,-1);
        tracep->declBit(c+78,"top sram_addr_valid", false,-1);
        tracep->declBus(c+79,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+80,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+82,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+347,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+349,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+83,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+85,"top src1sel_id", false,-1);
        tracep->declBus(c+86,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+87,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+88,"top is_brc_id", false,-1);
        tracep->declBit(c+89,"top is_jal_id", false,-1);
        tracep->declBit(c+90,"top is_jalr_id", false,-1);
        tracep->declBit(c+91,"top wben_id", false,-1);
        tracep->declBus(c+92,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+93,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+446,"top id_stall_n", false,-1);
        tracep->declBit(c+94,"top DivEn_id", false,-1);
        tracep->declBus(c+95,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+96,"top in_trap_id", false,-1);
        tracep->declBit(c+97,"top out_trap_id", false,-1);
        tracep->declBit(c+98,"top trap_id", false,-1);
        tracep->declBit(c+99,"top ld_use_hazard", false,-1);
        tracep->declBit(c+100,"top id_flush", false,-1);
        tracep->declQuad(c+101,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+103,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+104,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+106,"top src1sel_ex", false,-1);
        tracep->declBus(c+107,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+108,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+110,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+112,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+114,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+116,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+117,"top is_brc_ex", false,-1);
        tracep->declBit(c+118,"top is_jal_ex", false,-1);
        tracep->declBit(c+119,"top is_jalr_ex", false,-1);
        tracep->declBit(c+120,"top wben_ex", false,-1);
        tracep->declBit(c+121,"top DivEn_ex", false,-1);
        tracep->declBus(c+122,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+123,"top trap_ex", false,-1);
        tracep->declBit(c+449,"top ex_stall_n", false,-1);
        tracep->declQuad(c+124,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+126,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+127,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+128,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+129,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+130,"top ex_flush", false,-1);
        tracep->declQuad(c+131,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+133,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+63,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+135,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+136,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+138,"top wben_ls", false,-1);
        tracep->declQuad(c+139,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+141,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+143,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+145,"top trap_ls", false,-1);
        tracep->declBit(c+449,"top ls_stall_n", false,-1);
        tracep->declBit(c+146,"top ls_not_ok", false,-1);
        tracep->declQuad(c+63,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+147,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+148,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+149,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+151,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+54,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+55,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+152,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+65,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+460,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+154,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+156,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+158,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+160,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+161,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+163,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+164,"top wben_wb", false,-1);
        tracep->declQuad(c+165,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+433,"top wb_stall_n", false,-1);
        tracep->declBit(c+435,"top IF_u clk", false,-1);
        tracep->declBit(c+436,"top IF_u rst_n", false,-1);
        tracep->declBit(c+75,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+76,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+141,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+143,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+96,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+97,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+446,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+73,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+79,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+432,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+447,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+432,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+60,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+478,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+78,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+167,"top IF_u instr_reg", false,-1, 63,0);
        tracep->declQuad(c+60,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+452,"top axi_if_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+452,"top axi_if_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+452,"top axi_if_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+452,"top axi_if_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+453,"top axi_if_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+454,"top axi_if_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+455,"top axi_if_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+435,"top axi_if_u clock", false,-1);
        tracep->declBit(c+436,"top axi_if_u reset", false,-1);
        tracep->declBit(c+78,"top axi_if_u rw_valid_i", false,-1);
        tracep->declBit(c+432,"top axi_if_u rw_ready_o", false,-1);
        tracep->declQuad(c+447,"top axi_if_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+60,"top axi_if_u rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+445,"top axi_if_u instr_fetching", false,-1);
        tracep->declBit(c+1,"top axi_if_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+430,"top axi_if_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+60,"top axi_if_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+456,"top axi_if_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+457,"top axi_if_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+458,"top axi_if_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+459,"top axi_if_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+460,"top axi_if_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+461,"top axi_if_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+462,"top axi_if_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+463,"top axi_if_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+457,"top axi_if_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+464,"top axi_if_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+431,"top axi_if_u axi_r_ready_o", false,-1);
        tracep->declBit(c+361,"top axi_if_u axi_r_valid_i", false,-1);
        tracep->declBus(c+2,"top axi_if_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+3,"top axi_if_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+465,"top axi_if_u axi_r_last_i", false,-1);
        tracep->declBus(c+466,"top axi_if_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+467,"top axi_if_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+479,"top axi_if_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+461,"top axi_if_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+480,"top axi_if_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+481,"top axi_if_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+434,"top axi_if_u r_state", false,-1, 1,0);
        tracep->declBus(c+450,"top axi_if_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+430,"top axi_if_u ar_valid", false,-1);
        tracep->declBit(c+431,"top axi_if_u r_ready", false,-1);
        tracep->declBit(c+482,"top axi_if_u instr_valid", false,-1);
        tracep->declQuad(c+362,"top axi_if_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+14,"top axi_if_u instr_valid_reg", false,-1);
        tracep->declQuad(c+364,"top axi_if_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+483,"top axi_if_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+457,"top axi_if_u axi_id", false,-1, 3,0);
        tracep->declBus(c+462,"top axi_if_u axi_user", false,-1, 0,0);
        tracep->declBus(c+459,"top axi_if_u axi_len", false,-1, 7,0);
        tracep->declBus(c+460,"top axi_if_u axi_size", false,-1, 2,0);
        tracep->declBit(c+435,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+436,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+73,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+79,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+446,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+100,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+80,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+82,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+169,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+171,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+484,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+485,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+435,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+436,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+446,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+172,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+175,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+435,"top ID_u clk", false,-1);
        tracep->declBit(c+436,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+80,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+154,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+160,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+82,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+161,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+163,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+164,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+349,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+347,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+83,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+85,"top ID_u src1sel", false,-1);
        tracep->declBus(c+86,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+87,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+90,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+89,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+88,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+91,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+92,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+93,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+442,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+94,"top ID_u DivEn", false,-1);
        tracep->declBus(c+95,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+98,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+96,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+97,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+178,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+83,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+349,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+347,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+80,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+82,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+92,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+93,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+178,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+85,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+86,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+87,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+90,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+89,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+88,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+91,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+94,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+95,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+98,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+96,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+97,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+179,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+180,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+181,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+182,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+178,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+83,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+435,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+154,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+160,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+92,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+349,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+93,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+347,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+163,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+161,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+164,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+442,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+366+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+82,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+103,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+99,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+435,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+436,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+449,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+130,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+80,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+82,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+83,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+347,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+349,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+87,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+90,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+89,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+88,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+85,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+86,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+91,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+92,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+93,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+94,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+95,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+98,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+101,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+103,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+108,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+110,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+112,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+116,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+119,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+118,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+117,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+106,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+107,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+120,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+128,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+129,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+121,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+122,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+123,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+183,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+185,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+186,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+187,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+188,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+189,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+190,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+486,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+485,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+435,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+436,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+449,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+351,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+191,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+116,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+110,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+108,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+112,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+101,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+103,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+119,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+118,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+117,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+106,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+107,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+126,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+127,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+63,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+161,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+124,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+121,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+122,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+104,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+76,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+114,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+75,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+201,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+203,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+205,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+114,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+116,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+201,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+203,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+121,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+122,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+104,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+207,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+208,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+209,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+211,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+212,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+214,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+216,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+216,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+217,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+218,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+219,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+221,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+222,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+223,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+225,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+227,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+229,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+201,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+212,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+211,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+214,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+221,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+208,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+222,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+231,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+218,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+216,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+217,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+211,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+216,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+232,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+201,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+233,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+217,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+216,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+219,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+234,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+236,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+238,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+240,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+242,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+244,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+246,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+201,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+203,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+122,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+229,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+205,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+114,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+119,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+118,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+117,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+248,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+112,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+101,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+76,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+75,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+249,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+251,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+487,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+253,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+254,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+255,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+256,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+258,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+260,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+435,"top forwarding_u clk", false,-1);
        tracep->declBit(c+436,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+128,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+129,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+261,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+163,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+138,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+164,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+161,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+433,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+126,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+127,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+124,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+124,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+262,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+263,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+264,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+265,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+266,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+267,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+268,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+269,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+435,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+436,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+101,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+114,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+103,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+104,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+120,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+123,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+449,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+131,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+133,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+135,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+63,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+138,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+145,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+488,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+485,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+435,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+436,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+449,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+270,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+278,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+435,"top ls_u clk", false,-1);
        tracep->declBit(c+436,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+131,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+63,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+133,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+135,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+156,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+160,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+158,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+145,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+136,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+139,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+141,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+143,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+146,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+63,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+147,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+148,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+149,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+151,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+65,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+460,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+54,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+55,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+152,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+148,"top ls_u wren", false,-1);
        tracep->declBit(c+147,"top ls_u rden", false,-1);
        tracep->declBus(c+286,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+149,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+287,"top ls_u wren_last", false,-1);
        tracep->declBit(c+435,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+436,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+148,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+147,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+286,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+149,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+63,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+131,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+156,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+287,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+136,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+146,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+63,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+147,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+148,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+149,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+151,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+65,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+460,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+54,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+55,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+152,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+152,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+288,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+289,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+290,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+291,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+292,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+293,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+294,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+460,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+295,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+296,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+297,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+65,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+151,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+298,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+299,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+300,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+301,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+135,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+160,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+133,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+158,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+148,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+147,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+286,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+149,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+302,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+435,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+436,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+131,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+135,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+63,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+145,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+139,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+141,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+143,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+303,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+304,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+305,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+306,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+307,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+308,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+309,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+310,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+311,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+63,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+312,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+314,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+316,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+143,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+141,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+318,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+320,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+322,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+452,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+452,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+452,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+452,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+453,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+454,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+455,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+435,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+436,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+148,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+147,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+55,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+54,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+152,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+149,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+151,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+63,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+65,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBus(c+460,"top axi_ls_u rd_size_i", false,-1, 2,0);
        tracep->declBit(c+5,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+62,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+63,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+456,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+468,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+458,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+459,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+65,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+461,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+462,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+469,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+457,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+457,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+66,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+67,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+69,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+66,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+458,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+70,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+7,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+8,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+470,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+471,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+9,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+71,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+63,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+456,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+468,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+458,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+459,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+460,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+461,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+462,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+463,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+457,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+472,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+72,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+10,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+11,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+12,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+473,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+474,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+475,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+479,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+461,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+480,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+481,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+324,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+56,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+62,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+66,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+70,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+15,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+479,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+461,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+480,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+481,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+325,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+57,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+71,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+72,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+489,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+16,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declQuad(c+18,"top axi_ls_u wr_data_reg", false,-1, 63,0);
        tracep->declBit(c+20,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+21,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+483,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+468,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+462,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+459,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+460,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+326,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+435,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+436,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+131,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+135,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+63,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+136,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+138,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+139,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+433,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+154,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+160,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+156,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+158,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+164,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+165,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+490,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+485,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+435,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+436,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+433,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+327,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+337,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+154,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+160,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+156,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+158,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+165,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+163,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+161,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+435,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+436,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+99,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+75,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+96,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+97,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+432,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+146,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+446,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+446,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+446,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+449,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+449,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+433,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+100,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+130,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+491,"top ifAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+491,"top ifAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+460,"top ifAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+492,"top ifAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+435,"top ifAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+436,"top ifAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+493,"top ifAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+495,"top ifAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+496,"top ifAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+23,"top ifAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+497,"top ifAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+499,"top ifAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+500,"top ifAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+24,"top ifAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+25,"top ifAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+26,"top ifAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+501,"top ifAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+60,"top ifAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+456,"top ifAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+430,"top ifAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+1,"top ifAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+3,"top ifAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+2,"top ifAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+361,"top ifAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+431,"top ifAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+27,"top ifAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+23,"top ifAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+24,"top ifAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+25,"top ifAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+26,"top ifAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+29,"top ifAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+1,"top ifAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+3,"top ifAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+2,"top ifAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+361,"top ifAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+502,"top ifAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+503,"top ifAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+31,"top ifAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+33,"top ifAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+35,"top ifAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+37,"top ifAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+451,"top ifAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+39,"top ifAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+504,"top ifAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+506,"top ifAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+40,"top ifAxiSlaveRam_u aw_en", false,-1);
        tracep->declBus(c+491,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+491,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+460,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+65,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+435,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+436,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+63,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+456,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+62,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+5,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+67,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+69,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+66,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+8,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+70,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+63,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+456,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+71,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+9,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+12,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+11,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+10,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+72,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+41,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+6,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+8,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+7,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+43,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+9,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+12,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+11,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+10,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+502,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+503,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+45,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+47,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+49,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+51,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+58,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+59,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+507,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+509,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+53,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp66;
    VlWide<8>/*255:0*/ __Vtemp71;
    VlWide<10>/*319:0*/ __Vtemp76;
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
        tracep->fullBit(oldp+14,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+39,(((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready) 
                                  & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID))));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__aw_en));
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullBit(oldp+54,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
        tracep->fullBit(oldp+55,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
        tracep->fullCData(oldp+56,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
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
        tracep->fullCData(oldp+57,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
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
        tracep->fullBit(oldp+58,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                  & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+59,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                  & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))));
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullQData(oldp+63,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullQData(oldp+67,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                    << (0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                 << 1U)))),64);
        tracep->fullCData(oldp+69,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                             << (7U 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                    >> 2U))))),8);
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+76,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+78,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+79,(((1U & (IData)((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                   >> 2U)))
                                     ? (IData)((vlSelf->top__DOT__IF_u__DOT__instr_reg 
                                                >> 0x20U))
                                     : (IData)(vlSelf->top__DOT__IF_u__DOT__instr_reg))),32);
        tracep->fullQData(oldp+80,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+82,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+93,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+95,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+101,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+103,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+104,(((0x4000000U & 
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
        tracep->fullBit(oldp+106,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+107,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+108,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+110,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+112,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+116,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+117,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+118,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+119,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+120,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+121,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+122,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+123,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+126,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+128,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+129,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+130,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+131,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+133,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+135,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+136,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+138,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+145,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+147,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullBit(oldp+148,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullCData(oldp+151,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullQData(oldp+154,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+156,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+158,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+160,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+163,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+164,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+165,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__IF_u__DOT__instr_reg),64);
        tracep->fullQData(oldp+169,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+171,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__IF_u__DOT__instr_reg 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__IF_u__DOT__instr_reg)))),32);
        __Vtemp53[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                          ? 0U : ((1U & (IData)((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->top__DOT__IF_u__DOT__instr_reg 
                                              >> 0x20U))
                                   : (IData)(vlSelf->top__DOT__IF_u__DOT__instr_reg)));
        __Vtemp53[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                  ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp53[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new) 
                                 >> 0x20U));
        tracep->fullWData(oldp+172,(__Vtemp53),96);
        tracep->fullWData(oldp+175,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+178,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+179,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+180,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+181,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+182,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+183,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+185,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+186,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+187,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+188,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+189,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+190,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+191,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp55, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp56, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp57, __Vtemp55, __Vtemp56);
        VL_EXTEND_WI(65,1, __Vtemp58, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp59, __Vtemp57, __Vtemp58);
        tracep->fullBit(oldp+207,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp59[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+208,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+211,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+216,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+217,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+218,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp62, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp63, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp64, __Vtemp62, __Vtemp63);
        VL_EXTEND_WI(65,1, __Vtemp65, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp66, __Vtemp64, __Vtemp65);
        tracep->fullBit(oldp+221,((1U & __Vtemp66[2U])));
        tracep->fullBit(oldp+222,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+223,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+225,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+227,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+229,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+231,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+232,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+233,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+238,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+240,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+242,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+244,(((0x4000000U & 
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
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+248,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+249,(((((QData)((IData)(
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
        tracep->fullQData(oldp+251,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+253,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+254,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+258,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+260,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+261,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+262,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+263,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+264,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+265,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+266,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+267,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+268,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+269,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        __Vtemp71[0U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp71[1U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp71[2U] = (((IData)((((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp71[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                          >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                >> 0x20U)) 
                                       << 2U));
        __Vtemp71[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                   >> 0x20U)) >> 0x1eU) 
                         | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                             << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x19U))));
        __Vtemp71[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    >> 0x19U))));
        __Vtemp71[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    >> 0x19U))));
        __Vtemp71[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                               >> 0x19U));
        tracep->fullWData(oldp+270,(__Vtemp71),226);
        tracep->fullWData(oldp+278,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+286,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+287,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+288,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+289,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+290,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+291,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+292,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+293,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+294,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+295,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+296,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+297,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+298,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+299,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+300,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+301,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+302,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+303,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+304,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+305,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+306,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+307,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+308,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+309,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+310,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+311,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+312,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+314,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+320,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullCData(oldp+324,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+325,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+326,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                              << 1U))),6);
        tracep->fullWData(oldp+327,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+337,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+347,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+349,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp76[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp76[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                          >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp76[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])) 
                            << 0x1bU));
        __Vtemp76[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs1_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs1_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp76[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])) 
                            << 0x1bU));
        __Vtemp76[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs2_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs2_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp76[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | (((IData)(vlSelf->top__DOT__ex_flush)
                              ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                            << 0x1bU));
        __Vtemp76[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                            ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                          >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                    << 0x1bU));
        __Vtemp76[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp76[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                  >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+351,(__Vtemp76),315);
        tracep->fullBit(oldp+361,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullQData(oldp+362,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
        tracep->fullQData(oldp+364,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
        tracep->fullQData(oldp+366,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+368,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+370,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+372,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+374,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+376,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+378,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+380,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+382,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+392,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+398,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+400,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+402,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+404,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+406,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+408,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+410,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+412,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+420,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+422,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+424,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+426,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+428,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+430,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
        tracep->fullBit(oldp+431,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
        tracep->fullBit(oldp+432,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+433,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullCData(oldp+434,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
        tracep->fullBit(oldp+435,(vlSelf->clk));
        tracep->fullBit(oldp+436,(vlSelf->rst_n));
        tracep->fullQData(oldp+437,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+439,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+441,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+442,(vlSelf->regA0),64);
        tracep->fullBit(oldp+444,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+445,((1U & ((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state) 
                                             | (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                != vlSelf->top__DOT__axi_if_u__DOT__addr_reg))
                                          : (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state)))));
        tracep->fullBit(oldp+446,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__sram_data_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+447,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? 0ULL : 
                                         ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                           != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                           ? 0ULL : vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+449,((1U & (~ ((~ (IData)(vlSelf->top__DOT__sram_data_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullCData(oldp+450,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
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
        tracep->fullBit(oldp+451,((((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_if_u__DOT__ar_valid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullIData(oldp+452,(0x40U),32);
        tracep->fullIData(oldp+453,(4U),32);
        tracep->fullIData(oldp+454,(8U),32);
        tracep->fullIData(oldp+455,(1U),32);
        tracep->fullCData(oldp+456,(0U),3);
        tracep->fullCData(oldp+457,(0U),4);
        tracep->fullBit(oldp+458,(0U));
        tracep->fullCData(oldp+459,(0U),8);
        tracep->fullCData(oldp+460,(3U),3);
        tracep->fullCData(oldp+461,(1U),2);
        tracep->fullBit(oldp+462,(0U));
        tracep->fullCData(oldp+463,(2U),4);
        tracep->fullCData(oldp+464,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+465,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+466,(vlSelf->top__DOT__if_axi_r_id_i),4);
        tracep->fullBit(oldp+467,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+468,(1U),4);
        tracep->fullCData(oldp+469,(0xfU),4);
        tracep->fullCData(oldp+470,(vlSelf->top__DOT__ls_axi_b_id_i),4);
        tracep->fullBit(oldp+471,(vlSelf->top__DOT__ls_axi_b_user_i));
        tracep->fullCData(oldp+472,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+473,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullCData(oldp+474,(vlSelf->top__DOT__ls_axi_r_id_i),4);
        tracep->fullBit(oldp+475,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+476,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+478,(1U));
        tracep->fullCData(oldp+479,(0U),2);
        tracep->fullCData(oldp+480,(3U),2);
        tracep->fullCData(oldp+481,(2U),2);
        tracep->fullBit(oldp+482,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid));
        tracep->fullIData(oldp+483,(3U),32);
        tracep->fullIData(oldp+484,(0x60U),32);
        tracep->fullIData(oldp+485,(0U),32);
        tracep->fullIData(oldp+486,(0x13bU),32);
        tracep->fullBit(oldp+487,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+488,(0xe2U),32);
        tracep->fullBit(oldp+489,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+490,(0x121U),32);
        tracep->fullIData(oldp+491,(0x40U),32);
        tracep->fullCData(oldp+492,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWSIZE),3);
        tracep->fullQData(oldp+493,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWADDR),64);
        tracep->fullCData(oldp+495,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWPROT),3);
        tracep->fullBit(oldp+496,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID));
        tracep->fullQData(oldp+497,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WDATA),64);
        tracep->fullCData(oldp+499,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WSTRB),8);
        tracep->fullBit(oldp+500,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID));
        tracep->fullBit(oldp+501,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_BREADY));
        tracep->fullIData(oldp+502,(3U),32);
        tracep->fullIData(oldp+503,(1U),32);
        tracep->fullQData(oldp+504,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+506,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__byte_index),32);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+509,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
