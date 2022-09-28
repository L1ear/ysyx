
module decoder (
    input           [`XLEN-1:0]     pc_i,
    input           [`inst_len-1:0] instr_i,

    output   reg    [4      :0]     rs1_idx_o,rs2_idx_o,
    output   reg    [4      :0]     ext_op_o,
    output   reg                    src1sel_o,
    output   reg    [1      :0]     src2sel_o,
    output   reg    [4      :0]     aluctr_o,
    output   reg                    is_jalr_o,is_jal_o,is_brc_o,
    output   reg                    wb_en_o,
    output   reg                    DivEn,
    output   reg    [2      :0]     DivSel,
    output   reg                    trap_id_o,in_trap_id,out_trap_id
    // output   reg                    csrWrEn,
    // output   reg    [11     :0]     csr_idx_o
);
wire    [4:0]   opcode = instr_i[6:2];
wire    [2:0]   fun_3 = instr_i[14:12];
wire    [6:0]   fun_7 = instr_i[31:25];

// assign  Rd_o = instr_i[11:7];
// assign  Rs1_o = instr_i[19:15];
// assign  Rs2_o = instr_i[24:20];
// assign  csrIdx = instr_i[31:20];



always @(*) begin
    ext_op_o = 5'b0;                          //默认拓展模块输出0
    aluctr_o = `AluAdd_64;                   //默认add
    src1sel_o = `Rs1;                        //默认Rs1    
    src2sel_o = `Rs2;                        //默认Rs2
    is_jalr_o = 1'b0;
    is_jal_o = 1'b0;
    is_brc_o = 1'b0;
    wb_en_o = 1'b0;
    rs1_idx_o = 5'b0;
    rs2_idx_o = 5'b0;
    trap_id_o = 1'b0;
    in_trap_id = 1'b0;
    out_trap_id = 1'b0;
    // csrWrEn = 1'b0;
    // csr_op = 2'b0;              
    // IntSync = 1'b0;
    // mret = 1'b0;
//64/32
    DivEn = 1'b0;                          //默认不使能DIV
    DivSel = `DivMul;
//TODO: 补全！！！！！！！！！！！！
    case(opcode)
        `OP_REG,`OP_REG_32: begin
            src1sel_o = `Rs1;
            src2sel_o = `Rs2;
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = instr_i[24:20];  
            wb_en_o = 1'b1;
            DivEn = fun_7[0];
            DivSel = fun_3;
            case(fun_3)
                `add_sub: begin                                          
                    if(fun_7[5]) begin      //Sub
                        aluctr_o = opcode[1] ? `AluSub_32 : `AluSub_64;
                    end
                    else begin
                        aluctr_o = opcode[1] ? `AluAdd_32 : `AluAdd_64;
                    end
                end
                `sll: begin
                    aluctr_o = opcode[1] ? `AluSll_32 : `AluSll_64;
                end    
                `slt: begin
                    aluctr_o = `AluSlt;
                end
                `sltu: begin
                    aluctr_o = `AluSltu;
                end   
                `Xor: begin
                    aluctr_o = `AluXor;
                end    
                `sr_l_a: begin
                    if(fun_7[5]) begin      //SRA
                        aluctr_o = opcode[1] ? `AluSra_32 : `AluSra_64;
                    end
                    else begin
                        aluctr_o = opcode[1] ? `AluSrl_32 : `AluSrl_64;
                    end
                end 
                `Or: begin
                    aluctr_o = `AluOr;
                end     
                `And: begin
                    aluctr_o = `AluAnd;
                end    
            endcase
        end
        `OP_IMM,`OP_IMM_32: begin
            src1sel_o = `Rs1;
            src2sel_o = `imm;  
            ext_op_o = `immI;
            wb_en_o = 1'b1;  
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = 5'b0;
            DivEn = 1'b0;
            DivSel = `DivMul;
            case(fun_3)
                `addi: begin
                    aluctr_o = opcode[1] ? `AluAdd_32 : `AluAdd_64;
                end   
                `slli: begin
                    aluctr_o = opcode[1] ? `AluSll_32 : `AluSll_64;
                end   
                `slti: begin
                    aluctr_o = `AluSlt;
                end   
                `sltiu: begin
                    aluctr_o = `AluSltu;
                end  
                `Xori: begin
                    aluctr_o = `AluXor;
                end   
                `sri_l_a: begin
                    if(fun_7[5]) begin      //SRA
                        aluctr_o =  opcode[1] ? `AluSra_32 : `AluSra_64;
                    end
                    else begin
                        aluctr_o = opcode[1] ? `AluSrl_32 : `AluSrl_64;
                    end
                end
                `Ori: begin
                    aluctr_o = `AluOr;
                end    
                `Andi: begin
                    aluctr_o = `AluAnd;
                end   
            endcase
        end
        `load: begin
            ext_op_o = `immI;                          
            aluctr_o = `AluAdd_64;                      
            src1sel_o = `Rs1;                       
            src2sel_o = `imm; 
            wb_en_o = 1'b1; 
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = 5'b0;                      
            DivEn = 1'b0;
            DivSel = `DivMul;
        end  
        `store: begin
            ext_op_o = `immS;                          
            aluctr_o = `AluAdd_64;                      
            src1sel_o = `Rs1;                       
            src2sel_o = `imm;  
            wb_en_o = 1'b0; 
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = instr_i[24:20];                     
            DivEn = 1'b0;
            DivSel = `DivMul;
        end
        `branch: begin
            is_brc_o = 1'b1;
            src1sel_o = `Rs1;
            src2sel_o = `Rs2;  
            ext_op_o = `immB;
            wb_en_o = 1'b0; 
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = instr_i[24:20];  
            DivEn = 1'b0;
            DivSel = `DivMul;
        end
        `jal: begin
            src1sel_o = `PC;
            src2sel_o = `src_4;  
            ext_op_o = `immJ;  
            is_jal_o = 1'b1;
            // branch = `JalCon;
            aluctr_o = `AluAdd_64; 
            wb_en_o = 1'b1; 
            rs1_idx_o = 5'b0;
            rs2_idx_o = 5'b0;
            DivEn = 1'b0;
            DivSel = `DivMul;
        end   
        `jalr: begin
            src1sel_o = `PC;
            src2sel_o = `src_4;  
            ext_op_o = `immI;  
            is_jalr_o = 1'b1;
            // branch = `JalrCon;     
            aluctr_o = `AluAdd_64; 
            wb_en_o = 1'b1; 
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = 5'b0;
            DivEn = 1'b0;
            DivSel = `DivMul;
        end                                
        `lui: begin
            src1sel_o = `Rs1;
            src2sel_o = `imm;  
            ext_op_o = `immU;  
            // branch = `NonBranch;   
            aluctr_o = `AluSrc2;  
            wb_en_o = 1'b1;
            rs1_idx_o = 5'b0;
            rs2_idx_o = 5'b0; 
            DivEn = 1'b0;
            DivSel = `DivMul;  
        end   
        `auipc: begin
            src1sel_o = `PC;
            src2sel_o = `imm;  
            ext_op_o = `immU;  
            // branch = `NonBranch;   
            aluctr_o = `AluAdd_64;
            wb_en_o = 1'b1; 
            rs1_idx_o = 5'b0;
            rs2_idx_o = 5'b0;
            DivEn = 1'b0;
            DivSel = `DivMul;            
        end
        // //调用DPI-C函数
        `system: begin
            src1sel_o = `Rs1;
            src2sel_o = `src_0;
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = 5'b0;
            // csrWrEn = 1'b1;
            aluctr_o = `AluAdd_64;
            case(fun_3)
                `env: begin
                    trap_id_o = 1'b1;
                    

                    wb_en_o = 1'b0;
                    if(instr_i[20]) begin                       //ebreak;
                    //    ebreak();
                        in_trap_id = 1'b1;
                    end
                    else if(~instr_i[21]) begin                 //ecall              //ecall;
                        //TODO
                        in_trap_id = 1'b1;
        //                 IntSync = 1'b1;
                    end
                    else begin     
                        out_trap_id = 1'b1;                             //mret
                        // mret = 1'b1;
                    end
                end
                `csrrw: begin
        //             //TODO
                    wb_en_o = 1'b1;
                    // ALUctr = `AluSrc2;
                    // csr_op = 2'b10;         //直接写
                end
                `csrrs: begin
                    //TODO
                    wb_en_o = 1'b1;
                    // ALUctr = `AluSrc2;
                    // csr_op = 2'b11;         //或后写
                end
                default: begin

                end
            endcase
        end
        default: begin
            //TODO
            //trap_id_o = 1'b1;
        end
    endcase
end
endmodule //ID_stage
