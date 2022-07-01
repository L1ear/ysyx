`include "defines.v"

module imm_exp (
    input       [31:7]      instr_imm_i,
    input       [4:0]       exp_op_i,

    output  reg [`XLEN-1:0] imm_o
);
/*static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immJ(uint32_t i) { return SEXT(BITS(i, 20, 20), 1) << 20 | (BITS(i, 19, 12) << 12) | (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1);}
static word_t immB(uint32_t i) { return (SEXT(BITS(i, 31, 31),1) << 12) | (BITS(i, 7, 7) << 11) | (BITS(i, 30, 25) << 5) | (BITS(i, 11, 8) << 1);};*/
always @(*) begin
    case(exp_op_i)
        `immI:
            imm_o = {{52{instr_imm_i[31]}},instr_imm_i[31:20]};
        `immU:
            imm_o = {{32{instr_imm_i[31]}},instr_imm_i[31:12],12'h0};
        `immS:
            imm_o = {{52{instr_imm_i[31]}},instr_imm_i[31:25],instr_imm_i[11:7]};
        `immJ:
            imm_o = {{44{instr_imm_i[31]}},instr_imm_i[19:12],instr_imm_i[20],instr_imm_i[30:21],1'h1};
        `immB:
            imm_o = {{52{instr_imm_i[31]}},instr_imm_i[7],instr_imm_i[30:25],instr_imm_i[11:8],1'h0};
        default: 
            imm_o = `XLEN'h0;
    endcase 
end

endmodule //imm_exp
