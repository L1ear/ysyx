`include "defines.v"
module top(
	input   			        clk,rst_n,
	input       [`XLEN-1:0] 	DmemDataO,
    // instr_mem intputs
    input       [31:0]          instr,

    output reg  [`XLEN-1:0]     instrAddr,
	output      [`XLEN-1:0]     DmemAddr,
	output      [`XLEN-1:0] 	DmemDataI,
	output 				        MemWr,
	output      [2:0] 		    MemOp,
//for verilator dbug(:p)
    output      [6:0]           OPcode,
    output      [`XLEN-1:0]     regA0
);

assign  OPcode = instr[6:0];

// bcu Outputs
wire  PCAsrc;
wire  PCBsrc;

// PC Inputs
reg   [`XLEN-1:0]  NextPc;
always @(posedge clk) begin
    instrAddr <= NextPc;
end


// PC Outputs
wire  [`XLEN-1:0]  CurPc;

wire  [`XLEN-1:0]  rs1_data;
wire  [`XLEN-1:0]  rs2_data;
 
wire  [`XLEN-1:0]  imm;

// IDU Outputs
wire  [`RegfileAddrWidth-1:0]  RdAddr; 
wire  [`RegfileAddrWidth-1:0]  Rs1Addr;
wire  [`RegfileAddrWidth-1:0]  Rs2Addr;
wire  RegWrEn;
wire  [4:0]  ExtOp;
wire  [3:0]  ALUctr;
wire  [1:0]  Src2Sel;
wire  Src1Sel;
wire  RegWrSel;
wire  [2:0]  branch;
wire         dwsel;
wire         DivEn;
wire  [2:0]  DivSel;
wire         Div32;
wire         sft32;
wire  [11:0] csrIdx;
wire         csrWrEn;
wire         IntSync;
wire         mret;

// ALU Outputs
wire  [`XLEN-1:0]  ALUout;
wire  less;

wire  zero;

//csr_reg output
wire                       gIntEn;
wire    [`XLEN-1:0]        csr_mtvec; 
wire    [`XLEN-1:0]        csr_mepc;  
wire    [`XLEN-1:0]        csrRdData; 

//tcu output
wire                       csrUpdata;
wire    [`XLEN-1:0]        mcause_n;
wire    [`XLEN-1:0]        mepc_n;
wire                       mstatus_n;
wire    [1:0]              iotrap;



// `define     A_4     1'b0
// `define     A_imm   1'b1
// `define     B_PC    1'b0
// `define     B_rs1   1'b1
// assign NextPc = (~rst_n)?32'b0:
//                 ((PCAsrc)?imm:`XLEN'd4) + ((PCBsrc)?rs1_data:CurPc);
always @(*) begin
    if(~rst_n) begin
        NextPc = `XLEN'h80000000;
    end
    else begin
        NextPc = iotrap[1]?(iotrap[0]?csr_mepc:csr_mtvec):
                 ((PCAsrc)?imm:`XLEN'd4) + ((PCBsrc)?rs1_data:CurPc);
    end
end

assign DmemAddr = ALUout;
assign DmemDataI = rs2_data;
PC  u_PC (
    .clk                     ( clk      ),
    .rst_n                   ( rst_n    ),
    .NextPc                  ( NextPc   ),

    .CurPc                   ( CurPc    ) 
);


bcu  u_bcu (
    .bcon                    ( branch   ),
    .zero                    ( zero     ),
    .less                    ( less     ),

    .PCAsrc                  ( PCAsrc   ),
    .PCBsrc                  ( PCBsrc   ) 
);

wire [`XLEN-1:0]	ALUsrc1;
wire [`XLEN-1:0]	ALUsrc2;
assign ALUsrc1 = (Src1Sel)?CurPc:rs1_data;
assign ALUsrc2 = (Src2Sel[1])?(Src2Sel[0]?`XLEN'd4:csrRdData):
				 (Src2Sel[0])?imm:rs2_data;
ALU  u_ALU (
    .ALUctr                  ( ALUctr   ),
    .src1                    ( ALUsrc1  ),
    .src2                    ( ALUsrc2  ),

    .ALUout                  ( ALUout   ),
    .less                    ( less     ),
    .zero                    ( zero     ),
    .DivEn                   ( DivEn    ),
    .DivSel                  ( DivSel   ),
    .Div32                   ( Div32    ),
    .sft32                   ( sft32    )
);


wire 	[`XLEN-1:0]		RegWrData;
wire    [`XLEN-1:0]     AluTmp;
assign AluTmp = (dwsel)?{{32{ALUout[31]}},ALUout[31:0]}:ALUout;
assign RegWrData = (RegWrSel)?DmemDataO:AluTmp;
regfiles  u_regfiles (
    .clk                     ( clk          ),
    .rs1_addr_i              ( Rs1Addr      ),
    .rs2_addr_i              ( Rs2Addr      ),
    .wr_addr_i               ( RdAddr       ),
    .wr_data_i               ( RegWrData    ),
    .wr_en                   ( RegWrEn      ),

    .rs1_data_o              ( rs1_data     ),
    .rs2_data_o              ( rs2_data     ),
    .regA0                   ( regA0        )
);



IDU  u_IDU (
    .clk                     ( clk        ),
    .rst_n                   ( rst_n      ),
    .instr_i                 ( instr    ),

    .Rd_o                    ( RdAddr     ),
    .Rs1_o                   ( Rs1Addr    ),
    .Rs2_o                   ( Rs2Addr    ),
    .RegWrEn                 ( RegWrEn    ),
    .ExtOp                   ( ExtOp      ),
    .ALUctr                  ( ALUctr     ),
    .Src2Sel                 ( Src2Sel    ),
    .Src1Sel                 ( Src1Sel    ),
    .MemOp                   ( MemOp      ),
    .MemWr                   ( MemWr      ),
    .RegWrSel                ( RegWrSel   ),
    .branch                  ( branch     ),
    .dwsel                   ( dwsel      ),
    .DivEn                   ( DivEn      ),
    .DivSel                  ( DivSel     ),
    .Div32                   ( Div32      ),
    .sft32                   ( sft32      ),
    .csrWrEn                 (csrWrEn),
    .csrIdx                  (csrIdx),
    .IntSync                 (IntSync),
    .mret                    (mret)
);
    
// instr_mem  u_instr_mem (
//     .rst_n                   ( rst_n        ),
//     .clk                     ( clk          ),
//     .instr_addr              ( NextPc	    ),

//     .instr_o                 ( instr        )
// );

imm_exp  u_imm_exp (
    .instr_imm_i             ( instr[31:7]  ),
    .exp_op_i                ( ExtOp        ),

    .imm_o                   ( imm          ) 
);

tcu u_tcu (
    .IntSync                (IntSync),
    .IntTime                (1'b0),
    .IntSoft                (1'b0),
    .mret                   (mret),
    .currPC                 (CurPc),
    .gIntEn                 (gIntEn),

    .csrUpdata              (csrUpdata),
    .mcause_n               (mcause_n),
    .mepc_n                 (mcause_n),
    .mstatus_n              (mstatus_n), 
    .iotrap                 (iotrap)
);

csr_reg u_csr_reg (
   .clk                         (clk),
   .rst_n                       (rst_n),
   .csrIdx                      (csrIdx),
   .csrWrEn                     (csrWrEn),
   .csrWrData                   (RegWrData),
   .csrRdData                   (csrRdData),
   .mcause_n                    (mcause_n),
   .mepc_n                      (mepc_n),  
   .mstatus_n                   (mstatus_n),
   .csrUpdata                   (csrUpdata),
   .csr_mtvec                   (csr_mtvec),
   .csr_mepc                    (csr_mepc),
   .gIntEn                      (gIntEn)
);


endmodule
