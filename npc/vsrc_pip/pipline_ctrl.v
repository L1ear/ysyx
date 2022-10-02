module pipline_ctrl (
    input               clk,rst_n,
    input               ld_use_hazard,
    input               is_jump,
    input               in_trap_id,out_trap_id,
    input               if_instr_valid,

    output  reg         pc_stall_n,
    output  reg         id_stall_n,
    output  reg         ex_stall_n,
    output  reg         ls_stall_n,
    output  reg         wb_stall_n,

    output  reg         id_flush,
    output  reg         ex_flush
);
    
reg     if_valid;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n)
        if_valid <= 1'b0;
    else
        if_valid <= if_instr_valid;
end    
wire    test = ld_use_hazard || if_instr_valid;
assign  pc_stall_n = test ? 1'b0 : 1'b1;
assign  id_stall_n = (ld_use_hazard || ~if_instr_valid) ? 1'b0 : 1'b1;
assign  ex_stall_n = (!if_instr_valid) ? 1'b0 : 1'b1;
assign  ls_stall_n = (!if_instr_valid) ? 1'b0 : 1'b1;
assign  wb_stall_n = (!if_instr_valid) ? 1'b0 : 1'b1;

assign  ex_flush   = (ld_use_hazard || is_jump) ? 1'b1 : 1'b0;
assign  id_flush   = (is_jump || in_trap_id || out_trap_id) ? 1'b1 : 1'b0;

endmodule