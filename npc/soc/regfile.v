
module regfile(
	input							clk,
	input	[`XLEN-1:0]				pc_wb,					//for diff-test
				
	input	[`inst_len-1:0]			instr_wb_i,

	input	[`reg_addr_width-1:0]	rs1_addr_i,
	output	[`XLEN-1:0]				rs1_data_o,
	
	input	[`reg_addr_width-1:0]	rs2_addr_i,
	output	[`XLEN-1:0]				rs2_data_o,
	
	input	[`reg_addr_width-1:0]	wr_addr_i,
	input	[`XLEN-1:0]				wr_data_i,
	input							wr_en

//for varilator dbug

);

/***DPI-C***/
// import "DPI-C" function void ebreak();
// import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
// initial set_gpr_ptr(regfiles);  // rf为通用寄存器的二维数组变量
// always @(posedge clk) begin
// 	if(instr_wb_i == 32'h100073) begin
// 		ebreak();	
// 	end
// end


//regfiles
reg		[`XLEN-1:0]	regfiles[0:31];

//write		引入cg的写法
always @(posedge clk) begin
	if(wr_en) begin
		regfiles[wr_addr_i] <= (wr_addr_i == `reg_addr_width'b0)?`XLEN'b0 : wr_data_i;	
	end
	// else begin
	// 	regfiles[wr_addr_i] <= regfiles[wr_addr_i];
	// end
end



//read
assign	rs1_data_o = (rs1_addr_i == 5'b0)?`XLEN'b0 : regfiles[rs1_addr_i];
assign	rs2_data_o = (rs2_addr_i == 5'b0)?`XLEN'b0 : regfiles[rs2_addr_i];

// always @(posedge clk) begin
// 	if(pc_wb != `XLEN'b0) begin
// 		difftest_step(pc_wb);
// 	end
// end


endmodule
