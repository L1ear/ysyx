module cla_4(
    input  [3:0] a_4,
    input  [3:0] b_4,
    input        cin_4,
    input  [3:0] p_4,
    input  [3:0] g_4,
    output [3:0] s_4,
    output  px_4,gx_4 
);
//genera_4te ca_4rry bits
    wire[2:0]    c_int;
    assign c_int[0]=g_4[0] | (cin_4&p_4[0]);
    assign c_int[1]=g_4[1] | (p_4[1]&g_4[0]) | (p_4[1]&p_4[0]&cin_4);
    assign c_int[2]=g_4[2] | (p_4[2]&g_4[1]) | (p_4[2]&p_4[1]&g_4[0]) | (p_4[2]&p_4[1]&p_4[0]&cin_4);
    //assign c_int[3]=g_4[3] | (p_4[3]&g_4[2]) | (p_4[3]&p_4[2]&g_4[1]) | (p_4[3]&p_4[2]&p_4[1]&g_4[0]) | (p_4[3]&p_4[2]&p_4[1]&p_4[0]&cin_4);
//genera_4te sum bits
    assign s_4[0]=a_4[0]^b_4[0]^cin_4;
    assign s_4[1]=a_4[1]^b_4[1]^c_int[0];
    assign s_4[2]=a_4[2]^b_4[2]^c_int[1];
    assign s_4[3]=a_4[3]^b_4[3]^c_int[2];
//generate total pg signals
    assign px_4 = &p_4;
    assign gx_4 = g_4[3] | (p_4[3]&g_4[2]) | (p_4[3]&p_4[2]&g_4[1]) | (p_4[3]&p_4[2]&p_4[1]&g_4[0]);

endmodule
