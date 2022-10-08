// //immediate expension opcode(one-hot-code)
// `define     immI                5'b00001
// `define     immU                5'b00010
// `define     immS                5'b00100
// `define     immJ                5'b01000
// `define     immB                5'b10000
module imm_ext (
    input       [31:7]      instr_imm_i,
    input       [4:0]       ext_op_i,

    output  reg [`XLEN-1:0] imm_o
);
always @(*) begin
    case(ext_op_i)
        `immI:
            imm_o = {{52{instr_imm_i[31]}},instr_imm_i[31:20]};
        `immU:
            imm_o = {{32{instr_imm_i[31]}},instr_imm_i[31:12],12'h0};
        `immS:
            imm_o = {{52{instr_imm_i[31]}},instr_imm_i[31:25],instr_imm_i[11:7]};
        `immJ:
            imm_o = {{44{instr_imm_i[31]}},instr_imm_i[19:12],instr_imm_i[20],instr_imm_i[30:21],1'h0};
        `immB:
            imm_o = {{52{instr_imm_i[31]}},instr_imm_i[7],instr_imm_i[30:25],instr_imm_i[11:8],1'h0};
        default: 
            imm_o = `XLEN'h0;
    endcase 
end

endmodule //imm_exp
