`include "defines.v"
module csr_reg (
    //TODO
    input                           clk,rst_n,
    input   [`csrAddrWidth-1:0]     csrIdx,
    input                           csrWrEn,
    input   [`XLEN-1:0]             csrWrData,
    output  [`XLEN-1:0]             csrRdData,

    input   [`XLEN-1:0]             mcause_n,
    input   [`XLEN-1:0]             mepc_n,  
    input                           mstatus_n,
    input                           csrUpdata,

    output  [`XLEN-1:0]             csr_mtvec,
    output  [`XLEN-1:0]             csr_mepc,
    output                          gIntEn
);

//mtvec,mcause,mstatus,mepc

//0x341 R&W mepc
reg     [`XLEN-1:0]     mepc;
wire sel_mepc = (csrIdx == 12'h341);
wire wr_mepc = sel_mepc & csrWrEn;
always@(posedge clk) begin
    if(~rst_n) begin
        mepc <= 64'h80000000;
    end
    else begin
        mepc <= csrUpdata?mepc_n:
                wr_mepc?csrWrData:mepc;
    end
end
assign csr_mepc = mepc;

//0x305 R&W mtvec
reg     [`XLEN-1:0]     mtvec;
wire sel_mtvec = (csrIdx == 12'h305);
wire wr_mtvec = sel_mtvec & csrWrEn;
always@(posedge clk) begin
    if(~rst_n) begin
        mtvec <= 64'h0;
    end
    else begin
        mtvec <= wr_mtvec?csrWrData:mtvec;
    end
end
assign  csr_mtvec = mtvec;

//0x300 R&W mstatus
//We only use MIE,MPIE
reg     [`XLEN-1:0]     mstatus;
wire sel_mstatus = (csrIdx == 12'h300);
wire wr_mstatus = sel_mstatus & csrWrEn;
always @(posedge clk ) begin
    if(~rst_n) begin
        mstatus <= 64'ha000000000001800;
    end
    else begin
        mstatus <= csrUpdata? (mstatus_n?{mstatus[`XLEN-1:8],mstatus[3],mstatus[6:4],1'b0,      mstatus[2:0]}:
                                         {mstatus[`XLEN-1:8],1'b1,      mstatus[6:4],mstatus[7],mstatus[2:0]}):
                   wr_mstatus?csrWrData:mstatus;
    end
end
assign  gIntEn = mstatus[3];

//0x342 R&W mcause
reg     [`XLEN-1:0]     mcause;
wire sel_mcause = (csrIdx == 12'h342);
wire wr_mcause = sel_mcause & csrWrEn;
always @(posedge clk) begin
    if(~rst_n) begin
        mcause <= 64'b0;
    end
    else begin
        mcause <= csrUpdata? mcause_n:
                  wr_mcause?csrWrData:mcause;
    end
end


assign  csrRdData = `XLEN'b0
                    |({`XLEN{sel_mepc}} & mepc)
                    |({`XLEN{sel_mtvec}} & mtvec)
                    |({`XLEN{sel_mstatus}} & mstatus)
                    |({`XLEN{sel_mcause}} & mcause);



endmodule //csr_reg