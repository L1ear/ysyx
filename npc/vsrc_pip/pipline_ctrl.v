module pipline_ctrl (
    input               ld_use_hazard,
    input               is_jump,
    input               in_trap_id,out_trap_id,

    output  reg         pc_stall_n,
    output  reg         id_stall_n,
    output  reg         ex_stall_n,
    output  reg         ls_stall_n,
    output  reg         wb_stall_n,

    output  reg         id_flush,
    output  reg         ex_flush
);
    
assign  pc_stall_n = ld_use_hazard ? 1'b0 : 1'b1;
assign  id_stall_n = ld_use_hazard ? 1'b0 : 1'b1;
assign  ex_stall_n = 1'b1;
assign  ls_stall_n = 1'b1;
assign  wb_stall_n = 1'b1;

assign  ex_flush   = (ld_use_hazard || is_jump) ? 1'b1 : 1'b0;
assign  id_flush   = (is_jump || in_trap_id || out_trap_id) ? 1'b1 : 1'b0;

endmodule