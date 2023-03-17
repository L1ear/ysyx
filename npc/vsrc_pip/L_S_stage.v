`include "defines.v"
module ls_stage (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc,alures_i,rs2_i,
    input           [`inst_len-1:0] instr_i,
    input           [`XLEN-1:0]     alures_last_i,
    input           [`inst_len-1:0] instr_last_i,
    input           [`XLEN-1:0]     wb_data_i,
    input                           trap_ls_i,
    input                           stall_n,


    output          [`XLEN-1:0]     ls_res_o,
    output          [`XLEN-1:0]     csr_data_o,
    output          [`XLEN-1:0]     mtvec_o,mepc_o,
    output                          ls_not_ok,    
    output                          in_intr_ls,


//sram interface
    output          [`XLEN-1:0]     ls_sram_addr,
    output                          ls_sram_rd_en,              
    output                          ls_sram_wr_en,
    output          [`XLEN-1:0]     ls_sram_wr_data,
    output          [7      :0]     ls_sram_wr_mask,
    output          [2      :0]     ls_sram_wr_size,
    output          [2      :0]     ls_sram_rd_size,
    input                           ls_sram_rd_data_valid,
    input                           ls_sram_wr_data_ok,
    input           [`XLEN-1:0]     ls_sram_rd_data
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
    .ls_res_o(ls_res_o)    ,
    .ls_not_ok      (ls_not_ok),
    .ls_sram_addr           (ls_sram_addr           ),
    .ls_sram_rd_en          (ls_sram_rd_en          ),          
    .ls_sram_wr_en          (ls_sram_wr_en          ),
    .ls_sram_wr_data        (ls_sram_wr_data        ),
    .ls_sram_wr_mask        (ls_sram_wr_mask        ),
    .ls_sram_rd_data_valid  (ls_sram_rd_data_valid  ),
    .ls_sram_wr_data_ok     (ls_sram_wr_data_ok     ),
    .ls_sram_rd_data        (ls_sram_rd_data        ),
    .ls_sram_wr_size        (ls_sram_wr_size        ),
    .ls_sram_rd_size        (ls_sram_rd_size        )
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
    .mepc_o(mepc_o),
    .stall_n(stall_n),
    .timer_int_i(timr_int),
    .in_intr_ls(in_intr_ls)
);
// wire    in_intr_ls;
wire    timr_int;
clint clint_u(
        .clk                (clk),
        .rst_n              (rst_n),

		.clint_axi_araddr   (),
		.clint_axi_arprot   (),
		.clint_axi_arvalid  (),
		.clint_axi_arready  (),
		.clint_axi_arsize   (),

		.clint_axi_rdata    (),
		.clint_axi_rresp    (),
		.clint_axi_rvalid   (),
		.clint_axi_rready   (),   

		.clint_axi_awsize   (),
		.clint_axi_awaddr   (),
		.clint_axi_awprot   (),
		.clint_axi_awvalid  (),
		.clint_axi_awready  (),

		.clint_axi_wdata    (),
		.clint_axi_wstrb    (),
		.clint_axi_wvalid   (),  
		.clint_axi_wready   (),

		.clint_axi_bresp    (),
		.clint_axi_bvalid   (),
		.clint_axi_bready   (),

        .hart0_time_int_o   (timr_int)
);

endmodule
