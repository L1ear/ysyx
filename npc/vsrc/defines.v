`define		XLEN	            64
`define     reg_addr_width      5

`define     csrAddrWidth        12

`define     inst_len            32

`define     RegfileAddrWidth    5
//immediate expension opcode(one-hot-code)
`define     immI                5'b00001
`define     immU                5'b00010
`define     immS                5'b00100
`define     immJ                5'b01000
`define     immB                5'b10000

//OpCode defines
`define     syscall             5'b11100
`define     lui                 5'b01101
`define     auipc               5'b00101
`define     OP_IMM              5'b00100
`define     OP_IMM_32           5'b00110
`define     OP_REG              5'b01100
`define     OP_REG_32           5'b01110
`define     jal                 5'b11011
`define     jalr                5'b11001
`define     branch              5'b11000
`define     load                5'b00000
`define     store               5'b01000

//src1 select defines
`define     Rs1                 1'b0
`define     PC                  1'b1

//src2 select defines
`define     Rs2                 2'b00
`define     imm                 2'b01
`define     src_4               2'b11
`define     csr                 2'b10

//fun3 defines
//OP_REG
`define     add_sub             3'b000
`define     sll                 3'b001
`define     slt                 3'b010
`define     sltu                3'b011
`define     Xor                 3'b100
`define     sr_l_a              3'b101
`define     Or                  3'b110
`define     And                 3'b111
//OP_IMM
`define     addi                3'b000
`define     slli                3'b001
`define     slti                3'b010
`define     sltiu               3'b011
`define     Xori                3'b100
`define     sri_l_a             3'b101
`define     Ori                 3'b110
`define     Andi                3'b111
//branch op defines
`define     Beq                 3'b000
`define     Bne                 3'b001
`define     Blt                 3'b100
`define     Bge                 3'b101
`define     Bltu                3'b110
`define     Bgeu                3'b111
//save or load 
`define     sb                  3'b000
`define     sh                  3'b001
`define     sw                  3'b010
`define     sd                  3'b011
`define     lb                  3'b000
`define     lbu                 3'b100
`define     lh                  3'b001
`define     lhu                 3'b101
`define     lw                  3'b010
`define     lwu                 3'b110
`define     ld                  3'b011
//syscall
`define     env                 3'b000
`define     csrrw               3'b001
`define     csrrs               3'b010

//ALU out sel
`define     out_64              1'b0
`define     out_32              1'b1

//Register write control
`define     AluOut              1'b0
`define     DmemOut             1'b1
//branch control defines
`define     NonBranch           3'b000
`define     JalCon              3'b001                 
`define     JalrCon             3'b010
`define     BeqCon              3'b100
`define     BneCon              3'b101
`define     BltCon              3'b110
`define     BgeCon              3'b111
//ALu control defines
`define     AluAdd              4'b0000
`define     AluSub              4'b1000
`define     AluSll              4'b0001
`define     AluSlt              4'b0010
`define     AluSltu             4'b1010
`define     AluSrc2             4'b0011
`define     AluXor              4'b0100
`define     AluSrl              4'b0101
`define     AluSra              4'b1101
`define     AluOr               4'b0110
`define     AluAnd              4'b0111
//DIVIDER controls
`define     DivMul              3'b000
`define     DivMulh             3'b001
`define     DivMulhsu           3'b010
`define     DivMulhu            3'b011
`define     DivDiv              3'b100
`define     DivDivu             3'b101
`define     DivRem              3'b110
`define     DivRemu             3'b111


// `define                         5'
// `define                         5'
// `define                         5'
//TO DO
`define     NOP                 32'b0000000_00000_00000_000_00000_0010011           //NOP
