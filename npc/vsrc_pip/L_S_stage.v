`include "defines.v"
module ls_stage (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc,instr_i,alures_i,rs2_i,

    output          [`XLEN-1:0]     ls_res_o
);

wire            wren,rden;
wire    [2:0]   memop;
lsu lsu_u(
    .clk(clk),
    .rstn(rst_n),
    .wren(wren),
    .rden(rden),
    .memop(memop),    
    .wr_data_i(rs2_i),
    .addr_i(alures_i),
    .ls_res_o(ls_res_o)    
);

ls_ctr  ls_ctr_u(
    .instr_i(instr_i),
    .wren(wren),
    .rden(rden),
    .memop(memop)
);
endmodule

module lsu (
    input                           clk,rstn,
    input                           wren,rden,
    input           [2      :0]     memop,    
    input           [`XLEN-1:0]     wr_data_i,
    input           [`XLEN-1:0]     addr_i,

    output          [`XLEN-1:0]     ls_res_o    
);

reg     [`XLEN-1:0]     d_mem   [0:255];

wire    [`XLEN-1:0]     rd_data_base;
assign  rd_data_base = d_mem[addr_i[`XLEN-1:3]];
// //save or load 
// `define     sb                  3'b000
// `define     sh                  3'b001
// `define     sw                  3'b010
// `define     sd                  3'b011
// `define     lb                  3'b000
// `define     lbu                 3'b100
// `define     lh                  3'b001
// `define     lhu                 3'b101
// `define     lw                  3'b010
// `define     lwu                 3'b110
// `define     ld                  3'b011
//读mem------------------------------------------------------------------
wire                    lb,lbu,lh,lhu,lw,lwu,ld;
assign  lb  = rden & (memop == `lb);
assign  lbu = rden & (memop == `lbu);
assign  lh  = rden & (memop == `lh);
assign  lhu = rden & (memop == `lhu);
assign  lw  = rden & (memop == `lw);
assign  lwu = rden & (memop == `lwu);
assign  ld  = rden & (memop == `ld);

reg     [7      :0]     rd_data_b;
reg     [15     :0]     rd_data_h;
reg     [31     :0]     rd_data_w;
//仅支持对齐的访问，否则出错
always @(*) begin
    case(addr_i[2:0])
        3'b000: begin
            rd_data_b = rd_data_base[7      :0];
            rd_data_h = rd_data_base[15     :0];
            rd_data_w = rd_data_base[32     :0];
        end
        3'b001: begin
            rd_data_b = rd_data_base[15     :8];
            rd_data_h = rd_data_base[15     :0];
            rd_data_w = rd_data_base[32     :0];
        end
        3'b010: begin
            rd_data_b = rd_data_base[23     :61];
            rd_data_h = rd_data_base[31     :16];
            rd_data_w = rd_data_base[32     :0];
        end
        3'b011: begin
            rd_data_b = rd_data_base[31     :24];
            rd_data_h = rd_data_base[31     :16];
            rd_data_w = rd_data_base[32     :0];
        end
        3'b100: begin
            rd_data_b = rd_data_base[39     :32];
            rd_data_h = rd_data_base[47     :32];
            rd_data_w = rd_data_base[63     :32];
        end
        3'b101: begin
            rd_data_b = rd_data_base[47     :40];
            rd_data_h = rd_data_base[47     :32];
            rd_data_w = rd_data_base[63     :32];
        end
        3'b110: begin
            rd_data_b = rd_data_base[55     :48];
            rd_data_h = rd_data_base[63     :48];
            rd_data_w = rd_data_base[63     :32];
        end
        3'b111: begin
            rd_data_b = rd_data_base[63     :56];
            rd_data_h = rd_data_base[63     :48];
            rd_data_w = rd_data_base[63     :32];
        end               
    endcase
end

assign  ls_res_o = `XLEN'b0
                   |({`XLEN{lb}} & {{56{rd_data_b[7]}},rd_data_b})
                   |({`XLEN{lbu}} & {56'b0,rd_data_b})
                   |({`XLEN{lh}} & {{48{rd_data_h[7]}},rd_data_h})
                   |({`XLEN{lhu}} & {48'b0,rd_data_h})
                   |({`XLEN{lw}} & {{32{rd_data_w[7]}},rd_data_w})
                   |({`XLEN{lwu}} & {32'b0,rd_data_w})
                   |({`XLEN{ld}} & rd_data_base);

//写mem-------------------------------------------------------------------


wire    [`XLEN-1:0]     wr_mask;  
wire                    sb,sh,sw,sd;  
// //save or load 
// `define     sb                  3'b000
// `define     sh                  3'b001
// `define     sw                  3'b010
// `define     sd                  3'b011
// `define     lb                  3'b000
// `define     lbu                 3'b100
// `define     lh                  3'b001
// `define     lhu                 3'b101
// `define     lw                  3'b010
// `define     lwu                 3'b110
// `define     ld                  3'b011
assign  sb = wren & (memop == `sb);
assign  sh = wren & (memop == `sh);
assign  sw = wren & (memop == `sw);
assign  sd = wren & (memop == `sd);


reg     [`XLEN-1:0]     wr_data_b;
reg     [`XLEN-1:0]     wr_data_h;
reg     [`XLEN-1:0]     wr_data_w;
always@(*)begin
		case(addr_i[2:0])
			3'b000:wr_data_b={rd_data_base[63:8],wr_data_i[7:0]};
			3'b001:wr_data_b={rd_data_base[63:16],wr_data_i[7:0],rd_data_base[7:0]};
			3'b010:wr_data_b={rd_data_base[63:24],wr_data_i[7:0],rd_data_base[15:0]};
			3'b011:wr_data_b={rd_data_base[63:32],wr_data_i[7:0],rd_data_base[23:0]};
            3'b100:wr_data_b={rd_data_base[63:40],wr_data_i[7:0],rd_data_base[31:0]};
			3'b101:wr_data_b={rd_data_base[63:48],wr_data_i[7:0],rd_data_base[39:0]};
			3'b110:wr_data_b={rd_data_base[63:56],wr_data_i[7:0],rd_data_base[47:0]};
			3'b111:wr_data_b={wr_data_i[7:0],rd_data_base[55:0]};
		endcase
        case(addr_i[2:1])
            2'b00:wr_data_h={rd_data_base[63:16],wr_data_i[15:0]};
			2'b01:wr_data_h={rd_data_base[63:32],wr_data_i[15:0],rd_data_base[15:0]};
			2'b10:wr_data_h={rd_data_base[63:48],wr_data_i[15:0],rd_data_base[31:0]};
			2'b11:wr_data_h={wr_data_i[15:0],rd_data_base[47:0]};
        endcase
        case(addr_i[2])
            1'b0:wr_data_w={rd_data_base[63:32],wr_data_i[31:0]};
			1'b1:wr_data_w={wr_data_i[31:0],rd_data_base[31:0]};
        endcase
end

wire    [`XLEN-1:0] wr_data;
assign  wr_data = `XLEN'b0
                  |({`XLEN{sb}} & (wr_data_b))
                  |({`XLEN{sh}} & (wr_data_h))
                  |({`XLEN{sw}} & (wr_data_w))
                  |({`XLEN{sd}} & (wr_data_i));

always @(posedge clk) begin
    if(wren) begin
        d_mem[addr_i[`XLEN-1:3]] <= wr_data;
    end
end         
endmodule

module ls_ctr (
    input       [`XLEN-1:0]     instr_i,
    output                      wren,rden,
    output      [2      :0]     memop
);
    
assign  memop = instr_i[14      :12];
assign  wren  = (instr_i[6      :2] == `store);
assign  rden  = (instr_i[6      :2] == `load);
endmodule