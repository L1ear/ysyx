`include "defines.v"
module ls_stage (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc,alures_i,rs2_i,
    input           [`inst_len-1:0] instr_i,
    input           [`XLEN-1:0]     alures_last_i,
    input           [`inst_len-1:0] instr_last_i,
    input           [`XLEN-1:0]     wb_data_i,
    input                           trap_ls_i,


    output          [`XLEN-1:0]     ls_res_o,
    output          [`XLEN-1:0]     csr_data_o,
    output          [`XLEN-1:0]     mtvec_o,mepc_o
);

wire                wren,rden;
wire    [2:0]       memop;
wire    [`XLEN-1:0] wr_data;
 
wire            wren_last;
assign wren_last = (instr_last_i[6:2] == `store);
lsu lsu_u(
    .clk(clk),
    .rstn(rst_n),
    .wren(wren),
    .rden(rden),
    .memop(memop),    
    .wr_data_i(wr_data),
    .addr_i(alures_i),
    .pc_ls_i(pc),               //for sim
    .addr_last_i(alures_last_i),
    .wren_last_i(wren_last),
    .ls_res_o(ls_res_o)    
);

ls_ctr  ls_ctr_u(
    .instr_i(instr_i),
    .instr_last_i(instr_last_i),
    .rs2_i(rs2_i),
    .wb_data_i(wb_data_i),

    .wren(wren),
    .rden(rden),
    .memop(memop),
    .wr_data(wr_data)
    
);

CSR CSR_u(
    .clk(clk),
    .rst_n(rst_n),
    .pc_i(pc),
    .instr_i(instr_i),
    .csr_wr_data(alures_i),
    .trap(trap_ls_i),
    .csr_data_o(csr_data_o),
    .mtvec_o(mtvec_o),
    .mepc_o(mepc_o)
);
endmodule
