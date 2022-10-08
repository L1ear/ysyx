`include "defines.v"    
module WB_stage (
    input           [`XLEN-1:0]     pc_i,
    input           [`inst_len-1:0] instr_i,
    input           [`XLEN-1:0]     alures_i,lsres_i,
    input           [`XLEN-1:0]     csrdata_i,

    output          [4      :0]     rd_idx_o,
    // output   reg                    rd_wren_o,
    output   reg    [`XLEN-1:0]     rd_data_o
);

assign rd_idx_o = instr_i[11:7];

always @(*) begin
    case (instr_i[6:2])
        `OP_REG,`OP_REG_32: begin
            // rd_wren_o = 1'b1;
            rd_data_o = alures_i;
        end
        `OP_IMM,`OP_IMM_32: begin
            // rd_wren_o = 1'b1;
            rd_data_o = alures_i;
        end
        `load: begin
            // rd_wren_o = 1'b1 & instr_i[0];
            rd_data_o = lsres_i;
        end
        `store: begin
            // rd_wren_o = 1'b0;
            rd_data_o = lsres_i;
        end
        `branch: begin
            // rd_wren_o = 1'b0;
            rd_data_o = alures_i;
        end
        `jal: begin
            // rd_wren_o = 1'b1;
            rd_data_o = alures_i;
        end
        `jalr: begin
            // rd_wren_o = 1'b1;
            rd_data_o = alures_i;
        end
        `lui: begin
            // rd_wren_o = 1'b1;
            rd_data_o = alures_i;
        end
        `auipc: begin
            // rd_wren_o = 1'b1;
            rd_data_o = alures_i;    
        end
        `system: begin
            rd_data_o = csrdata_i;
        end
        default: begin
            // rd_wren_o = 1'b0;
            rd_data_o = `XLEN'b0;
        end
    endcase
end

endmodule //WB_stage