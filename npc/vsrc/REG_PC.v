module REG_PC (
    input                   clk,
    input                   rst_n,


    output    [`XLEN-1 : 0]       pc_o
);
    
    reg       [`XLEN-1 : 0]       pc_reg;
    always @(posedge clk)   begin
        if (~rst_n) begin
            pc_reg <= `pc_rst_val;
        end
        else begin
            pc_reg <= pc_reg + pc_inc;
        end
    end
    assign  pc_o = pc_reg;
endmodule