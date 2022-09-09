`include "defines.v"
module forwarding (
    input                                     clk,rst_n,
    input           [`reg_addr_width-1:0]     rs1_ido_idx,rs2_ido_idx,
    input           [`reg_addr_width-1:0]     rd_exo_idx,
    input           [`reg_addr_width-1:0]     rd_lso_idx,
    // input           [`reg_addr_width-1:0]     rd_wbo_idx,
    input                                     wben_ls,wben_wb,
    input           [`XLEN-1          :0]     wb_data_i,

    output          [1                :0]     rs1_sel,rs2_sel,
    output          [`XLEN-1          :0]     wb_data_o

);

reg [`XLEN-1:0]             rd_wb;          //用来保存wb写回的数据用来前递
reg                         reg_wben;
reg [`reg_addr_width-1:0]   reg_wb_idx;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        rd_wb <= `XLEN'b0;
        reg_wben <= 1'b0;
        reg_wb_idx <= `reg_addr_width'b0;
    end
    else if(wben_wb) begin
        rd_wb <= wb_data_i;
        reg_wben <= wben_wb;
        reg_wb_idx <= rd_lso_idx;
    end
end
assign  wb_data_o = rd_wb;

wire    rs1_ex_fw;
assign  rs1_ex_fw = wben_ls & (rd_exo_idx == rs1_ido_idx) & (|rd_exo_idx);      //alu结果的前递
wire    rs1_ls_fw;                                                              //ls结果的前递
assign  rs1_ls_fw = wben_wb & (rd_lso_idx == rs1_ido_idx) & (|rd_exo_idx); 
wire    rs1_wb_fw;
assign  rs1_wb_fw = reg_wben & (reg_wb_idx == rs1_ido_idx) & (|reg_wb_idx);     //wb结果前递

assign rs1_sel = rs1_ex_fw ? `ex :                                              //保证优先级
                            rs1_ls_fw ? `ls : 
                                        rs1_wb_fw ? `wb : `rf;

wire    rs2_ex_fw;
assign  rs2_ex_fw = wben_ls & (rd_exo_idx == rs2_ido_idx) & (|rd_exo_idx);      //alu结果的前递
wire    rs2_ls_fw;                                                              //ls结果的前递
assign  rs2_ls_fw = wben_wb & (rd_lso_idx == rs2_ido_idx) & (|rd_exo_idx); 
wire    rs2_wb_fw;
assign  rs2_wb_fw = reg_wben & (reg_wb_idx == rs2_ido_idx) & (|reg_wb_idx);     //wb结果前递

assign rs2_sel = rs2_ex_fw ? `ex :                                              //保证优先级
                            rs2_ls_fw ? `ls : 
                                        rs2_wb_fw ? `wb : `rf;




endmodule //forwarding


