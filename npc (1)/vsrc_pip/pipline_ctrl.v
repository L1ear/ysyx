module pipline_ctrl (
    input               clk,rst_n,
    input               ld_use_hazard,
    input               is_jump,
    input               in_trap_id,out_trap_id,
    input               if_instr_valid,
    input               ex_not_ok,
    input               ls_not_ok,
    input               in_intr_ls,
    input               fence_id,fence_ex,fence_ls,

    output              if_stall_n,
    output              pc_stall_n,
    output              id_stall_n,
    output              ex_stall_n,
    output              ls_stall_n,
    output              wb_stall_n,

    output              id_flush,
    output              ex_flush,
    output              ls_flush
);

wire    fenceInPip = fence_id||fence_ex;
//unused
assign  pc_stall_n = ((fenceInPip && ~is_jump) ||ld_use_hazard || (~if_instr_valid) || ls_not_ok || ex_not_ok) ? 1'b0 : 1'b1;
///

assign  if_stall_n = ((fenceInPip && ~is_jump) ||ld_use_hazard || (~if_instr_valid) || ls_not_ok || ex_not_ok) ? 1'b0 : 1'b1;
assign  id_stall_n = (ld_use_hazard || (~if_instr_valid) || ls_not_ok || ex_not_ok) ? 1'b0 : 1'b1;
assign  ex_stall_n = (~if_instr_valid || ls_not_ok || ex_not_ok) ? 1'b0 : 1'b1;
assign  ls_stall_n = (~if_instr_valid || ls_not_ok || ex_not_ok) ? 1'b0 : 1'b1;
assign  wb_stall_n = (~if_instr_valid || ls_not_ok || ex_not_ok) ? 1'b0 : 1'b1;

assign  ex_flush   = (fence_ex || in_intr_ls || ld_use_hazard || is_jump) ? 1'b1 : 1'b0;
assign  id_flush   = (fence_ex || fence_id || in_intr_ls || is_jump || in_trap_id || out_trap_id) ? 1'b1 : 1'b0;
assign  ls_flush   = in_intr_ls;
endmodule
