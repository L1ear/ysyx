module tcu (
    input                       IntSync,
    input                       IntTime,
    input                       IntSoft,
    input                       mret,
    input   [`XLEN-1:0]         currPC,
    input                       gIntEn,         //全局中断使能

    output  reg                 csrUpdata,
    output  reg [`XLEN-1:0]     mcause_n,
    output  reg [`XLEN-1:0]     mepc_n,
    output  reg                 mstatus_n,
    output  reg [1:0]           iotrap
);


//暂且只支持ecall的同步中断
always @(*) begin
    if(IntSync & gIntEn) begin
        csrUpdata = 1'b1;
        mcause_n = `ecall_m;
        mepc_n = currPC + `XLEN'd4;
        mstatus_n = 1'b1;             //暂时预留给后面，现在基本无用//已修改作为进出中断的标志
        iotrap = 2'b10;             //intrap
    end
    else if (mret & ~gIntEn) begin
        csrUpdata = 1'b1;
        mcause_n = 64'b0;
        mepc_n = 64'b0;
        mstatus_n = 1'b0;        
        iotrap = 2'b11;             //outtrap
    end
    else begin
        csrUpdata = 1'b0;
        mcause_n = 64'b0;
        mepc_n = 64'b0;
        mstatus_n = 1'b0;             //暂时预留给后面，现在基本无用
        iotrap = 2'b0;              //正常执行
    end
end 

endmodule //tcu