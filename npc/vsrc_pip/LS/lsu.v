
module lsu (
    input                           clk,rstn,
    input                           wren,rden,
    input           [2      :0]     memop,    
    input           [`XLEN-1:0]     wr_data_i,
    input           [`XLEN-1:0]     addr_i,
    input           [`XLEN-1:0]     pc_ls_i,
    input           [`XLEN-1:0]     addr_last_i,
    input                           wren_last_i,

    output          [`XLEN-1:0]     ls_res_o,
    output                          ls_not_ok,    

//sram interface
    output          [`XLEN-1:0]     ls_sram_addr,
    output                          ls_sram_rd_en,              //这里不再需要addr_valid信号了，而是有两个en信号代替，一个时钟周期内要么读要么写，不会有歧义
    output                          ls_sram_wr_en,
    output          [`XLEN-1:0]     ls_sram_wr_data,
    output          [7      :0]     ls_sram_wr_mask,
    output          [2      :0]     ls_sram_wr_size,
    output          [2      :0]     ls_sram_rd_size,
    input                           ls_sram_rd_data_valid,
    input                           ls_sram_wr_data_ok,
    input           [`XLEN-1:0]     ls_sram_rd_data
);



wire    [`XLEN-1:0]     rd_data_base;
// wire    [`XLEN-1:0]     dpi_addr = addr_i & ~`XLEN'h7;
// always @(negedge clk) begin                     //这里使用了下降沿，是为了避免verilator的时序问题，在加入cache后应修改
//     if(rden)
//         vmemread(addr_i, 8, rd_data_base, pc_ls_i);
// end
// reg     ls_ok;
// always @(posedge clk or negedge rstn) begin
//     if(~rstn) begin
//         ls_ok <= 1'b0;
//     end 
//     else begin
//         if((rden & ls_sram_rd_data_valid) || (wren & ls_sram_wr_data_ok)) begin
//             ls_ok <= 1'b1;
//         end
//         else begin
//             ls_ok <= 1'b0;
//         end
//     end
// end

assign  ls_sram_addr = addr_i;
assign  ls_sram_rd_en = rden;// && ~ls_ok;
assign  ls_sram_wr_en = wren;// && ~ls_ok;
assign  ls_sram_wr_mask = wr_mask;
assign  ls_sram_wr_data = wr_data_i;
assign  rd_data_base = ls_sram_rd_data;
assign  ls_not_ok = (rden & ~ls_sram_rd_data_valid) || (wren & ~ls_sram_wr_data_ok);
assign  ls_sram_wr_size = wr_size;
assign  ls_sram_rd_size = rd_size;



//读mem------------------------------------------------------------------
wire                    lb,lbu,lh,lhu,lw,lwu,ld;
assign  lb  = rden & (memop == `lb);
assign  lbu = rden & (memop == `lbu);
assign  lh  = rden & (memop == `lh);
assign  lhu = rden & (memop == `lhu);
assign  lw  = rden & (memop == `lw);
assign  lwu = rden & (memop == `lwu);
assign  ld  = rden & (memop == `ld);

wire   [2:0]     rd_size;

assign  rd_size = 3'b0
                   |({3{lb}} & 3'd0)
                   |({3{lbu}} & 3'd0)
                   |({3{lh}} & 3'd1)
                   |({3{lhu}} & 3'd1)
                   |({3{lw}} & 3'd2)
                   |({3{lwu}} & 3'd2)
                   |({3{ld}} & 3'd3);

// //仅支持对齐的访问，否则出错
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

//写mem-------------------------------------------------------------------


// wire    [`XLEN-1:0]     wr_mask;  
// wire                    sb,sh,sw,sd;  

// assign  sb = wren & (memop == `sb);
// assign  sh = wren & (memop == `sh);
// assign  sw = wren & (memop == `sw);
// assign  sd = wren & (memop == `sd);


// reg     [`XLEN-1:0]     wr_data_b;
// reg     [`XLEN-1:0]     wr_data_h;
// reg     [`XLEN-1:0]     wr_data_w;
// always@(*)begin
// 		case(addr_i[2:0])
// 			3'b000:wr_data_b={rd_data_base[63:8],wr_data_i[7:0]};
// 			3'b001:wr_data_b={rd_data_base[63:16],wr_data_i[7:0],rd_data_base[7:0]};
// 			3'b010:wr_data_b={rd_data_base[63:24],wr_data_i[7:0],rd_data_base[15:0]};
// 			3'b011:wr_data_b={rd_data_base[63:32],wr_data_i[7:0],rd_data_base[23:0]};
//             3'b100:wr_data_b={rd_data_base[63:40],wr_data_i[7:0],rd_data_base[31:0]};
// 			3'b101:wr_data_b={rd_data_base[63:48],wr_data_i[7:0],rd_data_base[39:0]};
// 			3'b110:wr_data_b={rd_data_base[63:56],wr_data_i[7:0],rd_data_base[47:0]};
// 			3'b111:wr_data_b={wr_data_i[7:0],rd_data_base[55:0]};
// 		endcase
//         case(addr_i[2:1])
//             2'b00:wr_data_h={rd_data_base[63:16],wr_data_i[15:0]};
// 			2'b01:wr_data_h={rd_data_base[63:32],wr_data_i[15:0],rd_data_base[15:0]};
// 			2'b10:wr_data_h={rd_data_base[63:48],wr_data_i[15:0],rd_data_base[31:0]};
// 			2'b11:wr_data_h={wr_data_i[15:0],rd_data_base[47:0]};
//         endcase
//         case(addr_i[2])
//             1'b0:wr_data_w={rd_data_base[63:32],wr_data_i[31:0]};
// 			1'b1:wr_data_w={wr_data_i[31:0],rd_data_base[31:0]};
//         endcase
// end

// wire    [`XLEN-1:0] wr_data;
// assign  wr_data = `XLEN'b0
//                   |({`XLEN{sb}} & (wr_data_b))
//                   |({`XLEN{sh}} & (wr_data_h))
//                   |({`XLEN{sw}} & (wr_data_w))
//                   |({`XLEN{sd}} & (wr_data_i));


// reg     [`XLEN-1:0] wr_data_buf;
// always @(posedge clk) begin
//     if(wren) begin
//         vmemwrite(dpi_addr, wr_data, pc_ls_i);
//         wr_data_buf <= wr_data;
//     end
// end
reg     [2:0]     wr_size;
reg     [7:0]     wr_mask;  
wire                    sb,sh,sw,sd;  

assign  sb = wren & (memop == `sb);
assign  sh = wren & (memop == `sh);
assign  sw = wren & (memop == `sw);
assign  sd = wren & (memop == `sd);

always @(*) begin
    case({sb,sh,sw,sd})
        4'b1000: begin
            wr_mask = 8'b0000_0001;
            wr_size = 3'b000;
        end
        4'b0100: begin
            wr_mask = 8'b0000_0011;
            wr_size = 3'b001;
        end
        4'b0010: begin
            wr_mask = 8'b0000_1111;
            wr_size = 3'b010;
        end
        4'b0001: begin
            wr_mask = 8'b1111_1111;
            wr_size = 3'b011;
        end
        default: begin
            wr_mask = 8'b0000_0000;
            wr_size = 3'b000;
        end
    endcase 
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

wire    ld_st_en;                                           //load-store前递
assign ld_st_en = (instr_last_i[6:2] == `load) & (instr_i[24:20] == instr_last_i[11:7]);
assign wr_data = ld_st_en ? wb_data_i : rs2_i;

endmodule