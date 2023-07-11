`include "defines.v"
module bcu (
    input       [2:0]   bcon,
    input               zero,less,
    output  reg         PCAsrc,PCBsrc
);

`define     A_4     1'b0
`define     A_imm   1'b1
`define     B_PC    1'b0
`define     B_rs1   1'b1

always @(*) begin
    PCAsrc = `A_4;
    PCBsrc = `B_PC;
    case(bcon)
        `NonBranch: begin
            PCAsrc = `A_4;
            PCBsrc = `B_PC;
        end
        `JalCon: begin
            PCAsrc = `A_imm;
            PCBsrc = `B_PC;
        end   
        `JalrCon: begin
            PCAsrc = `A_imm;
            PCBsrc = `B_rs1;            
        end  
        `BeqCon: begin
            if(zero) begin
                PCAsrc = `A_imm;
                PCBsrc = `B_PC;                
            end
            else begin
                PCAsrc = `A_4;
                PCBsrc = `B_PC;
            end 
        end   
        `BneCon: begin
            if(~zero) begin
                PCAsrc = `A_imm;
                PCBsrc = `B_PC;                
            end
            else begin
                PCAsrc = `A_4;
                PCBsrc = `B_PC;
            end            
        end   
        `BltCon: begin
            if(less) begin
                PCAsrc = `A_imm;
                PCBsrc = `B_PC;                
            end
            else begin
                PCAsrc = `A_4;
                PCBsrc = `B_PC;
            end            
        end   
        `BgeCon: begin
            if(~less) begin
                PCAsrc = `A_imm;
                PCBsrc = `B_PC;                
            end
            else begin
                PCAsrc = `A_4;
                PCBsrc = `B_PC;
            end            
        end
        default: begin
            PCAsrc = `A_4;
            PCBsrc = `B_PC;
        end   
    endcase
end
endmodule //bcu