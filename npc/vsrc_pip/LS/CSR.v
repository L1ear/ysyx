`include "defines.v"
module CSR (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_i,
    input           [`inst_len-1:0] instr_i,
    // input                           csr_wr_en,
    // input           [11     :0]     csr_idx,   
    input           [`XLEN-1:0]     csr_wr_data,
    input                           trap,
    input                           stall_n,

    input                           timer_int_i,

    output          [`XLEN-1:0]     csr_data_o,
    output          [`XLEN-1:0]     mtvec_o,mepc_o
);
// mtvec,mepc,mcause,mstatus//mie,mip,mscratch,mtval
assign  mtvec_o = mtvec;
assign  mepc_o = mepc;

wire    csrrw = (instr_i[14:12] == `csrrw);
wire    csrrs = (instr_i[14:12] == `csrrs);
wire    csrrc = (instr_i[14:12] == `csrrc);

wire    system = (instr_i[6:2] == `system);
// wire    trap = (instr_i[14:12] == 3'b0) & system;
wire    csr_wr_en;
assign  csr_wr_en = (csrrw | csrrs | csrrc) & system;    

//有例外发生时，在这里添加使能条件

wire sel_mepc       = (instr_i[31:20] == 12'h341) & csr_wr_en;
wire sel_mtvec      = (instr_i[31:20] == 12'h305) & csr_wr_en;
wire sel_mstatus    = (instr_i[31:20] == 12'h300) & csr_wr_en;
wire sel_mcause     = (instr_i[31:20] == 12'h342) & csr_wr_en;
wire sel_mie        = (instr_i[31:20] == 12'h304) & csr_wr_en;
wire sel_mip        = (instr_i[31:20] == 12'h344) & csr_wr_en;

assign  csr_data_o = `XLEN'b0                             //在各个csr未被选中使能时不发生翻转，降低功耗
                        |({`XLEN{sel_mepc}} & mepc)
                        |({`XLEN{sel_mtvec}} & mtvec)
                        |({`XLEN{sel_mstatus}} & mstatus)
                        |({`XLEN{sel_mcause}} & mcause);

//即将被写入的数据
wire    [`XLEN-1:0]     rw = csr_wr_data;
wire    [`XLEN-1:0]     rs = csr_wr_data | csr_data_o;
wire    [`XLEN-1:0]     rc = (~csr_wr_data) & csr_data_o;

wire    [`XLEN-1:0]     wr_data = `XLEN'b0                            
                                |({`XLEN{csrrw}} & rw)
                                |({`XLEN{csrrs}} & rs)
                                |({`XLEN{csrrc}} & rc);

//0x341 R&W mepc
reg     [`XLEN-1:0]     mepc;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mepc <= `XLEN'b0;
    end
    else if((sel_mepc | trap ) && stall_n) begin
        mepc[`XLEN-1:2]<= trap ? pc_i[`XLEN-1:2] : wr_data[`XLEN-1:2];
        //interupt时pc+4
    end
end

//0x305 R&W mtvec
reg     [`XLEN-1:0]     mtvec;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mtvec <= `XLEN'b0;
    end
    else if(sel_mtvec && stall_n) begin
        mtvec[`XLEN-1:2] <= wr_data[`XLEN-1:2];
    end
end

//0x300 R&W mstatus
//We only use MIE,MPIE
reg     [`XLEN-1:0]     mstatus;
wire                    mstatus_MIE = mstatus[3];
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mstatus <= `XLEN'ha00001800;
    end
    else if((sel_mstatus | trap) && stall_n) begin
        mstatus <= trap ? (system & ~instr_i[21] & (instr_i[14:12]==3'b0)) ? {mstatus[`XLEN-1:13],2'b11,mstatus[10:8],mstatus[3],mstatus[6:4],1'b0,      mstatus[2:0]}
                                                                          : {mstatus[`XLEN-1:8]                     ,1'b1,      mstatus[6:4],mstatus[7],mstatus[2:0]} :      //此处暂未正确实现
                                                                            wr_data;
    end
end
//mcause更新策略
wire [`XLEN-1:0]    mcause_n;
assign  mcause_n = system ? `XLEN'd11 : `XLEN'b0;   //支持ecall，暂时
                                                    //时钟中断为0x8000000000000007


//0x342 R&W mcause
reg     [`XLEN-1:0]     mcause;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mcause <= `XLEN'h0;
    end
    else if((sel_mcause | trap) && stall_n) begin
        mcause <= trap ? mcause_n:      //此处暂未正确实现  //已实现ecall
                        wr_data;
    end
end


//0x304 R&W mie
reg     [`XLEN-1:0]     mie;
wire                    mie_MTIE = mie[7];

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mie <= `XLEN'h0;
    end
    else if((sel_mie) && stall_n) begin
        mie <= wr_data;
    end
end

//0x344 R&W mip
reg     [`XLEN-1:0]     mip;
wire                    mie_MTIP = mip[7];

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mip <= `XLEN'h0;
    end
    else if((sel_mip) && stall_n) begin
        mip <= wr_data;
    end
    else if(timer_int_i && mie_MTIE && mstatus_MIE) begin
        mip[7] <= 1'b1;
    end
end
endmodule
