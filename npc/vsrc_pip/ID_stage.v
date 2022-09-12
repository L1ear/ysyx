`include "defines.v"
module ID_stage (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_i,
    input           [`XLEN-1:0]     pc_wb_i,                    //for diff-test
    input           [`inst_len-1:0] instr_wb_i,                 //for ebreak
    input           [`inst_len-1:0] instr_i,
    input           [`XLEN-1:0]     wb_data_i,
    input           [4      :0]     wb_rdid_i,
    input                           wb_wren_i,                

    output          [`XLEN-1:0]     rs1_o,rs2_o,imm_o,
    // output          [`XLEN-1:0]     src1_o,src2_o,
    output                          src1sel,
    output          [1      :0]     src2sel,
    output          [4      :0]     aluctr_o,
    output                          is_jalr_id_o,is_jal_id_o,is_brc_id_o,
    output                          wben_id_o,
    output          [4      :0]     rs1_idx,rs2_idx,
    output	[`XLEN-1:0]				regA0,
    output                          DivEn,
    output          [2:0]           DivSel    
    // output          [`XLEN-1:0]     pc_next_o,
    // output                          is_jump_o
);

wire    [4      :0]     ext_op;
// wire                    is_jalr,is_jal,is_brc;
wire    [`XLEN-1:0]     imm;
wire    [`XLEN-1:0]     rs1,rs2;
// wire    [`4     :0]     rs1_idx,rs2_idx;
// wire                    src1sel;
// wire    [1      :0]     src2sel;

assign rs2_o = rs2;
assign rs1_o = rs1;
assign imm_o = imm;

// assign src1_o = src1sel ? pc_i : rs1;
// assign src2_o = src2sel[1] ? `XLEN'd4 :
//                             src2sel[0] ? imm : rs2;
decoder decoder_u(
    .pc_i(pc_i),
    .instr_i(instr_i),
    .ext_op_o(ext_op),
    .src1sel_o(src1sel),
    .src2sel_o(src2sel),
    .aluctr_o(aluctr_o),
    .is_jalr_o(is_jalr_id_o),
    .is_jal_o(is_jal_id_o),
    .is_brc_o(is_brc_id_o),
    .wb_en_o(wben_id_o),
    .rs1_idx_o(rs1_idx),
    .rs2_idx_o(rs2_idx),
    .DivEn(DivEn),
    .DivSel(DivSel)
);
imm_ext imm_ext_u(
    .instr_imm_i(instr_i[31:7]),
    .ext_op_i(ext_op),
    .imm_o(imm)
);
regfiles regfile_u(
    .clk(clk),
    .rs1_addr_i(rs1_idx),
    .rs1_data_o(rs1),
    .rs2_addr_i(rs2_idx),
    .rs2_data_o(rs2),
    .wr_addr_i(wb_rdid_i),
    .wr_data_i(wb_data_i),
    .wr_en(wb_wren_i),
    .pc_wb(pc_wb_i),
    .regA0(regA0),
    .instr_wb_i(instr_wb_i)
);
// bcu bcu_u(
//     .rs1_i(rs1),
//     .rs2_i(rs2),
//     .is_jalr_i(is_jalr),
//     .is_jal_i(is_jal),
//     .is_brc_i(is_brc),
//     .fun_3(instr_i[14:12]),
//     .imm_i(imm),
//     .pc_i(pc_i),
//     .brc_pc_o(pc_next_o),
//     .is_jump_o(is_jump_o)
// );

endmodule


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
    output   reg    [2      :0]     DivSel
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
        `syscall: begin
        //     Src1Sel = `Rs1;
        //     Src2Sel = `csr;
        //     RegWrEn = 1'b1;
        //     branch = `NonBranch;
        //     RegWrSel = `AluOut;
        //     csrWrEn = 1'b1;
        //     case(fun_3)
        //         `env: begin
        //             if(instr_i[20]) begin                       //ebreak;
                    //    ebreak();
        //             end
        //             else if(~instr_i[21]) begin                 //ecall              //ecall;
        //                 //TODO
        //                 IntSync = 1'b1;
        //             end
        //             else begin                                  //mret
        //                 mret = 1'b1;
        //             end
        //         end
        //         `csrrw: begin
        //             //TODO
        //             ALUctr = `AluSrc2;
        //             csr_op = 2'b10;         //直接写
        //         end
        //         `csrrs: begin
        //             //TODO
        //             ALUctr = `AluSrc2;
        //             csr_op = 2'b11;         //或后写
        //         end
        //         default: begin

        //         end
        //     endcase
        end
        default: begin
            //TODO
        end
    endcase
end
endmodule //ID_stage

// //immediate expension opcode(one-hot-code)
// `define     immI                5'b00001
// `define     immU                5'b00010
// `define     immS                5'b00100
// `define     immJ                5'b01000
// `define     immB                5'b10000
module imm_ext (
    input       [31:7]      instr_imm_i,
    input       [4:0]       ext_op_i,

    output  reg [`XLEN-1:0] imm_o
);
always @(*) begin
    case(ext_op_i)
        `immI:
            imm_o = {{52{instr_imm_i[31]}},instr_imm_i[31:20]};
        `immU:
            imm_o = {{32{instr_imm_i[31]}},instr_imm_i[31:12],12'h0};
        `immS:
            imm_o = {{52{instr_imm_i[31]}},instr_imm_i[31:25],instr_imm_i[11:7]};
        `immJ:
            imm_o = {{44{instr_imm_i[31]}},instr_imm_i[19:12],instr_imm_i[20],instr_imm_i[30:21],1'h0};
        `immB:
            imm_o = {{52{instr_imm_i[31]}},instr_imm_i[7],instr_imm_i[30:25],instr_imm_i[11:8],1'h0};
        default: 
            imm_o = `XLEN'h0;
    endcase 
end

endmodule //imm_exp

module hazard_detect (
    input           [`inst_len-1:0] instr_id_i,instr_ex_i,
    
    output                          stalln_pc,stalln_id,stalln_ex
);

wire    hazard;
assign  hazard = (instr_ex_i[6:0] == {`load,2'b11}) &   //此处不加两比特1就会卡在开头，麻
                 (instr_id_i[6:2] == `jalr || 
                 instr_id_i[6:2] == `branch || 
                 instr_id_i[6:2] == `OP_IMM || 
                 instr_id_i[6:2] == `OP_IMM_32 || 
                 instr_id_i[6:2] == `OP_REG || 
                 instr_id_i[6:2] == `OP_REG_32) &
                 (instr_ex_i[11:7] == instr_id_i[19:15] || 
                 instr_ex_i[11:7] == instr_id_i[24:20]);
assign stalln_pc = ~hazard;
assign stalln_id = ~hazard;
assign stalln_ex = ~hazard;

endmodule //ID_stage