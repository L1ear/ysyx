`include "defines.v"
module bcu (
    input           [`XLEN-1:0]     rs1_i,rs2_i,
    input                           is_jalr_i,
    input                           is_jal_i,
    input                           is_brc_i,
    input           [2      :0]     fun_3,
    // input                           is_jump_i,
    input           [`XLEN-1:0]     imm_i,
    input           [`XLEN-1:0]     pc_i,

    output          [`XLEN-1:0]     brc_pc_o,
    output                          is_jump_o
);

wire     [`XLEN-1:0]    pc_imm_res;
wire     [`XLEN-1:0]    rs1_imm_res;
assign brc_pc_o = is_jalr_i ? rs1_imm_res : pc_imm_res;

//is_jump_o = jal | jalr | branch(with condition)
wire                    less,zero;
wire                    carry,overflow;
wire    [`XLEN-1:0]     subres;
wire    [`XLEN-1:0]     rs2_2s;
assign rs2_2s = rs2_i^{`XLEN{1'b1}};
assign {carry,subres} = rs1_i + rs2_2s +`XLEN'b1;
assign overflow = (rs1_i[`XLEN-1] == rs2_2s[`XLEN-1]) && (subres[`XLEN-1] != rs1_i[`XLEN-1]);
assign zero = ~(|subres);

reg                     branch;
always @(*) begin
    case(fun_3)
        `Beq : begin
            branch = zero;
        end
        `Bne : begin
            branch = ~zero;
        end
        `Blt : begin
            branch = subres[`XLEN-1]^overflow;
        end
        `Bge : begin
            branch = ~(subres[`XLEN-1]^overflow);
        end
        `Bltu: begin
            branch = ~carry;
        end
        `Bgeu: begin
            branch = carry;
        end
        default: begin
            branch = 1'b0;
        end
    endcase
end

assign is_jump_o = is_jal_i | is_jalr_i | (is_brc_i & branch);

endmodule