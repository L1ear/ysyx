module hazard_detect (
    input           [`inst_len-1:0] instr_id_i,instr_ex_i,
    
    output                          stalln_pc,stalln_id,stalln_ex
);

wire    hazard;
assign  hazard = ((instr_ex_i[6:0] == {`load,2'b11}) &   //此处不加两比特1就会卡在开头，麻
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
assign stalln_pc = ~hazard;
assign stalln_id = ~hazard;
assign stalln_ex = ~hazard;

endmodule