module mul_top (
  input             clk          ,
  input             rst_n        ,
  input             mul_valid    ,
  input             flush        ,
  input   [1:0]     mul_type     ,
  input   [63:0]    multiplicand ,
  input   [63:0]    multiplier   ,
  output            out_valid    ,
  output  [63:0]    result       
);


reg   stateReg;
wire interValid;

always @(posedge clk or negedge rst_n) begin
  if(~rst_n) begin
    stateReg <= 'b0;
  end
  else if(mul_valid) begin
    stateReg <= 'b1;
  end
  else if(interValid) begin
    stateReg <= 'b0;
  end
end

wire resultValidReg_d;
wire resultValidReg_q;
assign resultValidReg_d = stateReg == 1'b0 || stateReg == 1'b1 && interValid;
stl_reg #(
  .WIDTH     (1),
  .RESET_VAL (0)
)resultValidReg(
  .i_clk   (clk),
  .i_rst_n (rst_n && ~mul_valid),
  .i_wen   (1'b1),
  .i_din   (resultValidReg_d),
  .o_dout  (resultValidReg_q)
);

assign out_valid = resultValidReg_q || interValid;

//此处时序见4月2笔记！！！！！！！！！！！！！

//mul_type[1:0]:    
// Mul              2'b00
// Mulh             2'b01
// Mulhsu           2'b10
// Mulhu            2'b11

//mul_signed[1:0]:    
//2'b11(signed x signed);
//2'b10(signed x unsigned);
//2'b00(unsigned x unsigned);

wire [1:0] mul_signed;
assign mul_signed[1] = ~mul_type[0] || mul_type[0] && ~mul_type[1];
assign mul_signed[0] = ~mul_type[1];

wire  [63:0] result_hi,result_lo;
wire          mul_ready;
mul64 mul64_u (
  .clk (clk ),
  .rst_n (rst_n ),
  .mul_valid (mul_valid ),
  .flush (flush ),
  .mulw (0 ),
  .mul_signed (mul_signed ),
  .multiplicand (multiplicand ),
  .multiplier (multiplier ),
  .mul_ready (mul_ready ),
  .out_valid (interValid ),
  .result_hi (result_hi ),
  .result_lo  ( result_lo)
);

assign result = mul_type == 2'b00 ? result_lo : result_hi;

endmodule

