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

module lsu (
    input                           clk,rstn,
    input                           wren,rden,
    input           [2      :0]     memop,    
    input           [`XLEN-1:0]     wr_data_i,
    input           [`XLEN-1:0]     addr_i,
    input           [`XLEN-1:0]     pc_ls_i,
    input           [`XLEN-1:0]     addr_last_i,
    input                           wren_last_i,

    output          [`XLEN-1:0]     ls_res_o    
);

// reg     [`XLEN-1:0]     d_mem   [0:255];

import "DPI-C" function void vmemread(input longint raddr, input int len, output longint rdata, input longint pc);
import "DPI-C" function void vmemwrite(input longint raddr, input longint wdata, output char wr_mask, input longint pc);

wire    [`XLEN-1:0]     rd_data_base;
reg     [`XLEN-1:0]     rd_data_base_buf;
// assign  rd_data_base = d_mem[addr_i[10:3]];
wire    [`XLEN-1:0]     dpi_addr = addr_i & ~`XLEN'h7;
always @(*) begin
    // if(wren || rden)
    if(rden)
        vmemread(dpi_addr, 8, rd_data_base_buf, pc_ls_i);
    else
        rd_data_base_buf = `XLEN'b0;
end

wire   use_last =  wren_last_i & (addr_last_i == addr_i);
assign rd_data_base = use_last ? wr_data_buf : rd_data_base_buf;


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
            rd_data_w = rd_data_base[31     :0];
        end
        3'b001: begin
            rd_data_b = rd_data_base[15     :8];
            rd_data_h = rd_data_base[15     :0];
            rd_data_w = rd_data_base[31     :0];
        end
        3'b010: begin
            rd_data_b = rd_data_base[23     :16];
            rd_data_h = rd_data_base[31     :16];
            rd_data_w = rd_data_base[31     :0];
        end
        3'b011: begin
            rd_data_b = rd_data_base[31     :24];
            rd_data_h = rd_data_base[31     :16];
            rd_data_w = rd_data_base[31     :0];
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
                   |({`XLEN{lh}} & {{48{rd_data_h[15]}},rd_data_h})
                   |({`XLEN{lhu}} & {48'b0,rd_data_h})
                   |({`XLEN{lw}} & {{32{rd_data_w[31]}},rd_data_w})
                   |({`XLEN{lwu}} & {32'b0,rd_data_w})
                   |({`XLEN{ld}} & rd_data_base);

//写mem-------------------------------------------------------------------


wire    [7:0]           wr_mask;  
// wire                    sb,sh,sw,sd;  
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
// assign  sb = wren & (memop == `sb);
// assign  sh = wren & (memop == `sh);
// assign  sw = wren & (memop == `sw);
// assign  sd = wren & (memop == `sd);


// reg     [`XLEN-1:0]     wr_data_b;
// reg     [`XLEN-1:0]     wr_data_h;
// reg     [`XLEN-1:0]     wr_data_w;
always@(*)begin
		case(addr_i[2:0])
			3'b000:wr_mask = 8'b0000_0001;
			3'b001:wr_mask = 8'b0000_0010;
			3'b010:wr_mask = 8'b0000_0100;
			3'b011:wr_mask = 8'b0000_1000;
            3'b100:wr_mask = 8'b0001_0000;
			3'b101:wr_mask = 8'b0010_0001;
			3'b110:wr_mask = 8'b0100_0001;
			3'b111:wr_mask = 8'b1000_0001;
		endcase
        case(addr_i[2:1])
            2'b00:wr_mask = 8'b0000_0011;
			2'b01:wr_mask = 8'b0000_1100;
			2'b10:wr_mask = 8'b0011_0000;
			2'b11:wr_mask = 8'b1100_0001;
        endcase
        case(addr_i[2])
            1'b0:wr_mask = 8'b0000_1111;
			1'b1:wr_mask = 8'b1111_0000;
        endcase
end

// wire    [`XLEN-1:0] wr_data;
// assign  wr_data = `XLEN'b0
//                   |({`XLEN{sb}} & (wr_data_b))
//                   |({`XLEN{sh}} & (wr_data_h))
//                   |({`XLEN{sw}} & (wr_data_w))
//                   |({`XLEN{sd}} & (wr_data_i));


reg     [`XLEN-1:0] wr_data_buf;
always @(posedge clk) begin
    if(wren) begin
        vmemwrite(dpi_addr, wr_data_i, wr_mask, pc_ls_i);
        wr_data_buf <= wr_data;
    end
end         
endmodule

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

wire    ld_st_en;
assign ld_st_en = (instr_last_i[6:2] == `load) & (instr_i[24:20] == instr_last_i[11:7]);
assign wr_data = ld_st_en ? wb_data_i : rs2_i;

endmodule