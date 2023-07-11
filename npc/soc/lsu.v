
module lsu (
    input                           wren,rden,
    input           [2      :0]     memop,    
    input           [`XLEN-1:0]     wr_data_i,
    input           [32-1:0]     addr_i,

    output          [`XLEN-1:0]     ls_res_o,
    output                          ls_not_ok,    

//sram interface
    // output          [`XLEN-1:0]     ls_sram_addr,
    output                          ls_sram_rd_en,              //这里不再需要addr_valid信号了，而是有两个en信号代替，一个时钟周期内要么读要么写，不会有歧义
    output                          ls_sram_wr_en,
    output          [`XLEN-1:0]     ls_sram_wr_data,
    output          [7      :0]     ls_sram_wr_mask,
    output          [2      :0]     ls_sram_wr_size,
    output          [2      :0]     ls_sram_rd_size,
    // input                           ls_sram_rd_data_valid,
    input                           ls_sram_data_not_ok,
    input           [`XLEN-1:0]     ls_sram_rd_data
);



wire    [`XLEN-1:0]     rd_data_base;


// assign  ls_sram_addr = addr_i;
assign  ls_sram_rd_en = rden;// && ~ls_ok;
assign  ls_sram_wr_en = wren;// && ~ls_ok;
assign  ls_sram_wr_mask = wr_mask;
assign  ls_sram_wr_data = wr_data_i;
assign  rd_data_base = ls_sram_rd_data;
assign  ls_not_ok = ls_sram_data_not_ok;
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

assign  rd_size = ({3{lb}}      & 3'b000)
                |({3{lbu}}    & 3'b000)
                |({3{lh}}     & 3'b001)
                |({3{lhu}}    & 3'b001)
                |({3{lw}}     & 3'b010)
                |({3{lwu}}    & 3'b010)
                |({3{ld}}     & 3'b011);

// //仅支持对齐的访问，否则出错
reg     [7      :0]     rd_data_b;
reg     [15     :0]     rd_data_h;
reg     [31     :0]     rd_data_w;
//仅支持对齐的访问，否则出错
always @(*) begin
    case(addr_i[2:0])
        3'b000: begin
            rd_data_b = rd_data_base[7      :0];
        end
        3'b001: begin
            rd_data_b = rd_data_base[15     :8];
        end
        3'b010: begin
            rd_data_b = rd_data_base[23     :16];
        end
        3'b011: begin
            rd_data_b = rd_data_base[31     :24];
        end
        3'b100: begin
            rd_data_b = rd_data_base[39     :32];
        end
        3'b101: begin
            rd_data_b = rd_data_base[47     :40];
        end
        3'b110: begin
            rd_data_b = rd_data_base[55     :48];
        end
        3'b111: begin
            rd_data_b = rd_data_base[63     :56];
        end               
    endcase
end

always @(*) begin
    case(addr_i[2:1])
        2'b00: begin
            rd_data_h = rd_data_base[15     :0];
        end
        2'b01: begin
            rd_data_h = rd_data_base[31     :16];
        end
        2'b10: begin
            rd_data_h = rd_data_base[47     :32];
        end
        2'b11: begin
            rd_data_h = rd_data_base[63     :48];
        end              
    endcase
end
always @(*) begin
    case(addr_i[2])
        1'b0: begin
            rd_data_w = rd_data_base[31     :0];
        end
        1'b1: begin
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


reg     [2:0]     wr_size;  //给cache的话，其实只要两位，mask可不要
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

