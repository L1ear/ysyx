`include "defines.v"
module IDU(
    input                           clk,
    input                           rst_n,
    input   [`inst_len-1:0]         instr_i,
    // // to I_E
    // output  reg [4:0]            rd,
    // output  reg [`XLEN-1:0]      src1,
    // output  reg [`XLEN-1:0]      src2,
    // output  reg [2:0]            alu_ctr,    
    // // to regfiles
    // output reg [4:0]             reg_addr1_o,
    // input  [`XLEN-1:0]           re_data1_i,
    // output reg [4:0]             reg_addr2_o,
    // input  [`XLEN-1:0]           re_data2_i
//To RegFiles
    output  [`RegfileAddrWidth-1:0] Rd_o,
    output  [`RegfileAddrWidth-1:0] Rs1_o,
    output  [`RegfileAddrWidth-1:0] Rs2_o, 
    output  reg                     RegWrEn,
//To ImmExt
    output  reg     [4:0]           ExtOp,
//To Alu
    output  reg     [4:0]           ALUctr,
    output  reg     [1:0]           Src2Sel,
    output  reg                     Src1Sel,
//To Div
    output  reg                     DivEn,
    output  reg     [2:0]           DivSel,
//To Data memory
    output  reg     [2:0]           MemOp,
    output  reg                     MemWr,
    output  reg                     RegWrSel,  
//To branch control
    output  reg      [2:0]          branch,
//To csr
    output  reg                     csrWrEn,
    output  reg      [11:0]         csrIdx,
    output  reg      [1:0]          csr_op,
//To tcu
    output  reg                     IntSync,
    output  reg                     mret
    );  
    
wire    [4:0]   opcode = instr_i[6:2];
wire    [2:0]   fun_3 = instr_i[14:12];
wire    [6:0]   fun_7 = instr_i[31:25];

assign  Rd_o = instr_i[11:7];
assign  Rs1_o = instr_i[19:15];
assign  Rs2_o = instr_i[24:20];
assign  csrIdx = instr_i[31:20];

import "DPI-C" function void ebreak(); 

always @(*) begin
    branch = `NonBranch;
    RegWrSel = `AluOut;
    MemWr = 1'b0;
    RegWrEn = 1'b0;
    ExtOp = 5'b0;                          //默认拓展模块输出0
    ALUctr = `AluAdd_64;                   //默认add
    Src1Sel = `Rs1;                        //默认Rs1    
    Src2Sel = `Rs2;                        //默认Rs2
    MemOp = 3'b0;                          //默认lb
    csrWrEn = 1'b0;
    csr_op = 2'b0;              
    IntSync = 1'b0;
    mret = 1'b0;
//64/32

    DivEn = 1'b0;                          //默认不使能DIV
    DivSel = `DivMul;
//TODO: 补全！！！！！！！！！！！！
    case(opcode)
        `OP_REG,`OP_REG_32: begin
            Src1Sel = `Rs1;
            Src2Sel = `Rs2;
            MemWr = 1'b0;
            RegWrEn = 1'b1;
            RegWrSel = `AluOut;   //选择Alu输出写入   
            branch = `NonBranch;
            DivEn = fun_7[0];
            DivSel = fun_3;
            case(fun_3)
                `add_sub: begin                                          
                    if(fun_7[5]) begin      //Sub
                        ALUctr = opcode[1] ? `AluSub_32 : `AluSub_64;
                    end
                    else begin
                        ALUctr = opcode[1] ? `AluAdd_32 : `AluAdd_64;
                    end
                end
                `sll: begin
                    ALUctr = opcode[1] ? `AluSll_32 : `AluSll_64;
                end    
                `slt: begin
                    ALUctr = `AluSlt;
                end
                `sltu: begin
                    ALUctr = `AluSltu;
                end   
                `Xor: begin
                    ALUctr = `AluXor;
                end    
                `sr_l_a: begin
                    if(fun_7[5]) begin      //SRA
                        ALUctr = opcode[1] ? `AluSra_32 : `AluSra_64;
                    end
                    else begin
                        ALUctr = opcode[1] ? `AluSrl_32 : `AluSrl_64;
                    end
                end 
                `Or: begin
                    ALUctr = `AluOr;
                end     
                `And: begin
                    ALUctr = `AluAnd;
                end    
            endcase
        end
        `OP_IMM,`OP_IMM_32: begin
            Src1Sel = `Rs1;
            Src2Sel = `imm;  
            ExtOp = `immI;  
            RegWrEn = 1'b1;
            branch = `NonBranch;
            RegWrSel = `AluOut;
            MemWr = 1'b0;
            DivEn = 1'b0;
            DivSel = `DivMul;
            case(fun_3)
                `addi: begin
                    ALUctr = opcode[1] ? `AluAdd_32 : `AluAdd_64;
                end   
                `slli: begin
                    ALUctr = opcode[1] ? `AluSll_32 : `AluSll_64;
                end   
                `slti: begin
                    ALUctr = `AluSlt;
                end   
                `sltiu: begin
                    ALUctr = `AluSltu;
                end  
                `Xori: begin
                    ALUctr = `AluXor;
                end   
                `sri_l_a: begin
                    if(fun_7[5]) begin      //SRA
                        ALUctr =  opcode[1] ? `AluSra_32 : `AluSra_64;
                    end
                    else begin
                        ALUctr = opcode[1] ? `AluSrl_32 : `AluSrl_64;
                    end
                end
                `Ori: begin
                    ALUctr = `AluOr;
                end    
                `Andi: begin
                    ALUctr = `AluAnd;
                end   
            endcase
        end
        `load: begin
            branch = `NonBranch;
            RegWrSel = `DmemOut;
            MemWr = 1'b0;
            RegWrEn = 1'b1;
            ExtOp = `immI;                          
            ALUctr = `AluAdd_64;                      
            Src1Sel = `Rs1;                       
            Src2Sel = `imm;                        
            MemOp = fun_3;
            DivEn = 1'b0;
            DivSel = `DivMul;
        end  
        `store: begin
            branch = `NonBranch;
            RegWrSel = `DmemOut;
            MemWr = 1'b1;
            RegWrEn = 1'b0;
            ExtOp = `immS;                          
            ALUctr = `AluAdd_64;                      
            Src1Sel = `Rs1;                       
            Src2Sel = `imm;                        
            MemOp = fun_3;
            DivEn = 1'b0;
            DivSel = `DivMul;
        end
        `branch: begin
            Src1Sel = `Rs1;
            Src2Sel = `Rs2;  
            ExtOp = `immB;  
            RegWrEn = 1'b0;
            MemWr = 1'b0;
            DivEn = 1'b0;
            DivSel = `DivMul;
            case(fun_3)
                `Beq: begin
                    ALUctr = `AluSlt;
                    branch = `BeqCon;
                end 
                `Bne: begin
                    ALUctr = `AluSlt;
                    branch = `BneCon;                    
                end 
                `Blt: begin
                    ALUctr = `AluSlt;
                    branch = `BltCon;                    
                end
                `Bge: begin
                    ALUctr = `AluSlt;
                    branch = `BgeCon;                    
                end 
                `Bltu: begin
                    ALUctr = `AluSltu;
                    branch = `BltCon;                    
                end
                `Bgeu: begin
                    ALUctr = `AluSltu;
                    branch = `BgeCon;                     
                end
                //  TODO: 记得改的合理一点
                default: begin
                    ALUctr = `AluSlt;
                    branch = `NonBranch;
                end
            endcase
        end
        `jal: begin
            Src1Sel = `PC;
            Src2Sel = `src_4;  
            ExtOp = `immJ;  
            RegWrEn = 1'b1;
            branch = `JalCon;
            RegWrSel = `AluOut;
            MemWr = 1'b0;        
            ALUctr = `AluAdd_64; 
            DivEn = 1'b0;
            DivSel = `DivMul;
        end   
        `jalr: begin
            Src1Sel = `PC;
            Src2Sel = `src_4;  
            ExtOp = `immI;  
            RegWrEn = 1'b1;
            branch = `JalrCon;
            RegWrSel = `AluOut;
            MemWr = 1'b0;        
            ALUctr = `AluAdd_64; 
            DivEn = 1'b0;
            DivSel = `DivMul;
        end                                
        `lui: begin
            Src1Sel = `Rs1;
            Src2Sel = `imm;  
            ExtOp = `immU;  
            RegWrEn = 1'b1;
            branch = `NonBranch;
            RegWrSel = `AluOut;
            MemWr = 1'b0;        
            ALUctr = `AluSrc2;  
            DivEn = 1'b0;
            DivSel = `DivMul;  
        end   
        `auipc: begin
            Src1Sel = `PC;
            Src2Sel = `imm;  
            ExtOp = `immU;  
            RegWrEn = 1'b1;
            branch = `NonBranch;
            RegWrSel = `AluOut;
            MemWr = 1'b0;        
            ALUctr = `AluAdd_64;
            DivEn = 1'b0;
            DivSel = `DivMul;            
        end
        //调用DPI-C函数
        `syscall: begin
            Src1Sel = `Rs1;
            Src2Sel = `csr;
            RegWrEn = 1'b1;
            branch = `NonBranch;
            RegWrSel = `AluOut;
            csrWrEn = 1'b1;
            case(fun_3)
                `env: begin
                    if(instr_i[20]) begin                       //ebreak;
                       ebreak();
                    end
                    else if(~instr_i[21]) begin                 //ecall              //ecall;
                        //TODO
                        IntSync = 1'b1;
                    end
                    else begin                                  //mret
                        mret = 1'b1;
                    end
                end
                `csrrw: begin
                    //TODO
                    ALUctr = `AluSrc2;
                    csr_op = 2'b10;         //直接写
                end
                `csrrs: begin
                    //TODO
                    ALUctr = `AluSrc2;
                    csr_op = 2'b11;         //或后写
                end
                default: begin

                end
            endcase
        end
        default: begin
            //TODO
        end
    endcase
end








endmodule  
 