module divTop (
    input           clk,rst_n,
    input  [63:0]   dividend,divisor,
    input           div_valid,
    input  [1:0]    div_type,
    input           flush,

    output          div_ready,
    output          out_valid,
    output [63:0]   result,
);
    
// div_type:0---------------unsign
//          1---------------signed


    // input  [63:0]   divisor_P,divisor_N,
    // input           div_cin_P,div_cin_N,
    // input  [127:0]  dividend128,

reg [1:0]  div_type_r;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        div_type_r <= 'b0;
    end
    else if(div_valid) begin
        div_type_r <= div_type;
    end
end

wire    [63:0]      dividend_N;
assign dividend_N = ~dividend + 'b1;

wire    [63:0]      divisor_N;
reg     [63:0]      divisor_N_r,divisor_P_r;
assign divisor_N = ~divisor + 'b1;

reg     [127:0]     dividendReg;
reg     [63:0]      restore_remainder;
reg     [5:0]       div_cnt;
reg                 div_busy;

reg                 dividend_sign,divisor_sign;

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        dividend_sign <= 'b0;
        divisor_sign <= 'b0;
    end
    else if(div_valid) begin
        dividend_sign <= div_type[0] ? dividend[63] : 'b0;
        divisor_sign <= div_type[0] ? divisor[63] : 'b0;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        dividendReg <= 'b0;
        restore_remainder <= 'b0;
    end
    else if(div_valid) begin
        dividendReg <= div_type[0] && dividend[63] ? {dividend_N[63],dividend_N} :{dividend[63],dividend};
    end
    else if(div_busy)begin
        dividendReg <= {r_64,dividendReg[62:0],partial_q};
        restore_remainder <= dividendReg[126:63];
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        divisor_N_r <= 'b0;
        divisor_P_r <= 'b0;
    end
    else if(div_valid) begin
        divisor_P_r <= div_type[0] && divisor[63] ? {divisor_N[63],divisor_N} : {divisor[63],divisor};
        divisor_N_r <= div_type[0] && divisor[63] ? {divisor[63],divisor} : {divisor_N[63],divisor_N};
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        div_cnt <= 'b0;
    end
    else if(div_valid && ~flush) begin
        div_cnt <= 6'b111111;
    end
    else if(|div_cnt && ~flush) begin
        div_cnt <= div_cnt - 'b1;
    end
    else if(flush) begin
        div_cnt <= 'b0;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        div_busy <= 'b0;
    end
    else if(div_valid && ~flush) begin
        div_busy <= 1'b1;
    end
    else if(~|div_cnt && ~flush) begin
        div_busy <= 1'b0;
    end
    else if(flush) begin
        div_busy <= 1'b0;
    end
end

//if (div_busy)

wire    [63:0]   x2;
assign x2 = dividendReg[126] ? divisor_P_r : divisor_N_r;

wire    [63:0]  r_64;

cla_64 cla_64_u1 (
  .a_64 (dividendReg[126-:64] ),
  .b_64 (x2 ),
  .cin_64 (0 ),
  .p_64 (dividendReg[126-:64] | x2 ),
  .g_64 (dividendReg[126-:64] & x2 ),

  .s_64 (r_64 ),
  .gx_64 ( ),
  .px_64  ( )
);

wire        partial_q;
assign partial_q = r_64[63] ? 'b0 : 'b1;

wire    [63:0]      quotient,remainder;

assign div_ready = ~div_busy;
assign out_valid = ~div_busy;
assign quotient = dividend_sign^divisor_sign ? ~dividendReg[63:0]+'b1: dividendReg[63:0];
wire [63:0]     remainder_s;
assign remainder_s = dividendReg[127] ? restore_remainder : dividendReg[127:64];
assign remainder = dividend_sign ? ~remainder_s+'b1 : remainder_s;

assign result = div_type_r[1] ? remainder : quotient;

endmodule
