
module regfile(
	input							clk,rst_n,
	// input	[`XLEN-1:0]				pc_wb,					//for diff-test
				
	// input	[`inst_len-1:0]			instr_wb_i,

	input	[`reg_addr_width-1:0]	rs1_addr_i,
	output	[`XLEN-1:0]				rs1_data_o,
	
	input	[`reg_addr_width-1:0]	rs2_addr_i,
	output	[`XLEN-1:0]				rs2_data_o,
	
	input	[`reg_addr_width-1:0]	wr_addr_i,
	input	[`XLEN-1:0]				wr_data_i,
	input							wr_en


);



//regfiles
reg		[`XLEN-1:0]	regfiles[0:31];

integer i;
//write		引入cg的写法
always @(posedge clk or negedge rst_n) begin
	if(~rst_n) begin
		for(i=0;i<32;i=i+1) begin
			regfiles[i] <= 'b0;
		end
	end
	else if(wr_en) begin
		regfiles[wr_addr_i] <= (wr_addr_i == `reg_addr_width'b0)?`XLEN'b0 : wr_data_i;	
	end
end



//read
assign	rs1_data_o = (rs1_addr_i == 5'b0)?`XLEN'b0 : regfiles[rs1_addr_i];
assign	rs2_data_o = (rs2_addr_i == 5'b0)?`XLEN'b0 : regfiles[rs2_addr_i];




endmodule
