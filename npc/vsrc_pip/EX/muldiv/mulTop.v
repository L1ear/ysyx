module mul_top (
    input           clk,rst_n,
    
    input           mul_valid,
    input           flush,
    input           mulw,
    input   [1:0]   mul_signed,
    input   [63:0]  multiplicand,
    input   [63:0]  multiplier,

    output          mul_ready,
    output          out_valid,
    output  [63:0]  result_hi,
    output  [63:0]  result_lo
);
//mul_signed[1:0]:    
//2'b11(signed x signed);
//2'b10(signed x unsigned);
//2'b00(unsigned x unsigned);



wire               src1_is_signed;
wire               src2_is_signed;
wire [32:0]        mul_lo_src1;
wire [32:0]        mul_hi_src1;
wire [32:0]        mul_lo_src2;
wire [32:0]        mul_hi_src2;
wire [65:0]        mul_ll_rslt;//mul_lo_src1 x mul_lo_src2
wire [65:0]        mul_lh_rslt;//mul_lo_src1 x mul_hi_src2
wire [65:0]        mul_hl_rslt;//mul_hi_src1 x mul_lo_src2
wire [65:0]        mul_hh_rslt;//mul_hi_src1 x mul_hi_src2

wire [65:0]        mul_ll_rslt_ex2;//mul_lo_src1 x mul_lo_src2
wire [65:0]        mul_lh_rslt_ex2;//mul_lo_src1 x mul_hi_src2
wire [65:0]        mul_hl_rslt_ex2;//mul_hi_src1 x mul_lo_src2
wire [65:0]        mul_hh_rslt_ex2;//mul_hi_src1 x mul_hi_src2

wire[129:0]                        mul_ll_rslt_ext_ex2;
wire[129:0]                        mul_lh_rslt_ext_ex2;
wire[129:0]                        mul_hl_rslt_ext_ex2;
wire[129:0]                        mul_hh_rslt_ext_ex2;
wire[129:0]                        mul_rslt_stg2_ex2;

wire                               mul_stg1_vld_set;
wire                               mul_stg1_vld_clr;
wire                               mul_stg1_vld_d;
reg                                mul_stg1_vld_q;
wire                               int_reg_wr_ready_fin;

//1st stage
assign src1_is_signed   = mul_signed[1];
assign src2_is_signed   = mul_signed[0];


assign mul_lo_src1      = {1'b0,multiplicand[31:0]};
assign mul_hi_src1      = {src1_is_signed & multiplicand[63],multiplicand[63:32]};
assign mul_lo_src2      = {1'b0,multiplier[31:0]};
assign mul_hi_src2      = {src2_is_signed & multiplier[63],multiplier[63:32]};

assign mul_ll_rslt      = mul_lo_src1 * mul_lo_src2;
assign mul_lh_rslt      = $signed(mul_lo_src1) * $signed(mul_hi_src2);
assign mul_hl_rslt      = $signed(mul_hi_src1) * $signed(mul_lo_src2);
assign mul_hh_rslt      = $signed(mul_hi_src1) * $signed(mul_hi_src2);

assign mul_ready        = ~mul_stg1_vld_q | int_reg_wr_ready_fin;
assign mul_stg1_vld_set = mul_valid & mul_ready & ~flush;
assign mul_stg1_vld_clr = int_reg_wr_ready_fin | flush;
assign mul_stg1_vld_d   = mul_stg1_vld_set | mul_stg1_vld_q & ~mul_stg1_vld_clr & ~flush;

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mul_stg1_vld_q <= 'b0;
    end
    else
        mul_stg1_vld_q <= mul_stg1_vld_d;
end
stl_reg #(
  .WIDTH     (66*4),
  .RESET_VAL (0)
)id_reg(
  .i_clk   (clk),
  .i_rst_n (rst_n),
  .i_wen   (mul_stg1_vld_set),
  .i_din   ({mul_ll_rslt, mul_lh_rslt, mul_hl_rslt, mul_hh_rslt}),
  .o_dout  ({mul_ll_rslt_ex2, mul_lh_rslt_ex2, mul_hl_rslt_ex2, mul_hh_rslt_ex2})
);

assign mul_ll_rslt_ext_ex2  = {{130-66{1'b0}},mul_ll_rslt_ex2};
assign mul_lh_rslt_ext_ex2  = {{32{mul_lh_rslt_ex2[65]}},mul_lh_rslt_ex2,32'h0};
assign mul_hl_rslt_ext_ex2  = {{32{mul_hl_rslt_ex2[65]}},mul_hl_rslt_ex2,32'h0};
assign mul_hh_rslt_ext_ex2  = {mul_hh_rslt_ex2,64'h0};

assign int_reg_wr_ready_fin = mul_stg1_vld_q;

assign mul_rslt_stg2_ex2    = $signed(mul_ll_rslt_ext_ex2) + $signed(mul_lh_rslt_ext_ex2) + $signed(mul_hl_rslt_ext_ex2) + $signed(mul_hh_rslt_ext_ex2);

assign result_hi = mul_rslt_stg2_ex2[127:64];
assign result_lo = mulw ? {{32{mul_rslt_stg2_ex2[31]}}, mul_rslt_stg2_ex2[31:0]} : mul_rslt_stg2_ex2[63:0];

assign out_valid = mul_stg1_vld_q;
endmodule


module stl_reg #(
  parameter WIDTH = 1,
  parameter RESET_VAL = 0
)(
  input                     i_clk   ,
  input                     i_rst_n ,
  input                     i_wen   ,
  input         [WIDTH-1:0] i_din   ,
  output reg    [WIDTH-1:0] o_dout
);

  always @(posedge i_clk or negedge i_rst_n) begin
    if (!i_rst_n) begin
      o_dout <= RESET_VAL;
    end else if(i_wen) begin
      o_dout <= i_din;
    end
  end

endmodule
