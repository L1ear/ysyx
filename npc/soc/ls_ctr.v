`include "defines.v"
module ls_ctr (
    input       [`inst_len-1:0] instr_i,instr_last_i,
    input       [`XLEN-1:0]     rs2_i,
    input       [`XLEN-1:0]     wb_data_i,                
    output                      wren,rden,
    output      [2      :0]     memop,
    output      [`XLEN-1:0]     wr_data

);
    
assign  memop = instr_i[14      :12];
assign  wren  = (instr_i[6      :2] == `store);
assign  rden  = (instr_i[6      :0] == {`load,2'b11});      //同理

wire    ld_st_en;                                           //load-store前递
assign ld_st_en = (instr_last_i[6:2] == `load) & (instr_i[24:20] == instr_last_i[11:7]);
assign wr_data = ld_st_en ? wb_data_i : rs2_i;

endmodule