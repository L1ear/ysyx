module hazard_detect (
    input           [`inst_len-1:0] instr_id_i,instr_ex_i,
    input           [`inst_len-1:0] instr_ls_i,instr_wb_i,
    
    output                          ld_use_hazard,
    output                          ld_csr_hazard
    // output                          stalln_pc,stalln_id,flush_ex
);



assign  ld_use_hazard = ((instr_ex_i[6:0] == {`load,2'b11}) &   //此处不加两比特1就会卡在开头，麻
                 (instr_id_i[6:2] == `jalr || 
                 instr_id_i[6:2] == `branch || 
                 instr_id_i[6:2] == `OP_IMM || 
                 instr_id_i[6:2] == `OP_IMM_32 || 
                 instr_id_i[6:2] == `OP_REG || 
                 instr_id_i[6:2] == `OP_REG_32) &
                 (instr_ex_i[11:7] == instr_id_i[19:15] || 
                 instr_ex_i[11:7] == instr_id_i[24:20]))||
                 ((instr_ex_i[6:0] == {`load,2'b11}) & (instr_id_i[6:0] == {`load,2'b11} ||
                  instr_id_i[6:2] == `store) &
                  (instr_ex_i[11:7] == instr_id_i[19:15]));
// assign stalln_pc = ~hazard;
// assign stalln_id = ~hazard;
// assign flush_ex  = hazard;

wire wb_is_load = (instr_wb_i[6:0] == {`load,2'b11});
wire ls_is_csropi = (instr_ls_i[6:0] == {`system,2'b11}) && (instr_ls_i[14:12] == `csrrw || instr_ls_i[14:12] == `csrrc || instr_ls_i[14:12] == `csrrs);

assign ld_csr_hazard = wb_is_load && ls_is_csropi &&
                        instr_wb_i[11:7] == instr_ls_i[19:15];

endmodule