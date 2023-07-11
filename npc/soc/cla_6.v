module cla_6(
    input  [5:0] a_6,
    input  [5:0] b_6,
    input        cin_6,
    input  [5:0] p_6,
    input  [5:0] g_6,
    output [5:0] s_6,
    output  px_6,gx_6
);
//genera_6te ca_6rry bits
    wire[5:0]    c_int;
    assign c_int[0]=g_6[0] | (cin_6&p_6[0]);
    assign c_int[1]=g_6[1] | (p_6[1]&g_6[0]) | (p_6[1]&p_6[0]&cin_6);
    assign c_int[2]=g_6[2] | (p_6[2]&g_6[1]) | (p_6[2]&p_6[1]&g_6[0]) | (p_6[2]&p_6[1]&p_6[0]&cin_6);
    assign c_int[3]=g_6[3] | (p_6[3]&g_6[2]) | (p_6[3]&p_6[2]&g_6[1]) | (p_6[3]&p_6[2]&p_6[1]&g_6[0]) | (p_6[3]&p_6[2]&p_6[1]&p_6[0]&cin_6);
    assign c_int[4]=g_6[4] | (p_6[4]&g_6[3]) | (p_6[4]&p_6[3]&g_6[2]) | (p_6[4]&p_6[3]&p_6[2]&g_6[1]) | (p_6[4]&p_6[3]&p_6[2]&p_6[1]&g_6[0]) | (p_6[4]&p_6[3]&p_6[2]&p_6[1]&p_6[0]&cin_6);
//genera_6te sum bits
    assign s_6[0]=a_6[0]^b_6[0]^cin_6;
    assign s_6[1]=a_6[1]^b_6[1]^c_int[0];
    assign s_6[2]=a_6[2]^b_6[2]^c_int[1];
    assign s_6[3]=a_6[3]^b_6[3]^c_int[2];
    assign s_6[4]=a_6[4]^b_6[4]^c_int[3];
    assign s_6[5]=a_6[5]^b_6[5]^c_int[4];
//genera_6te tota_6l pg signa_6ls
    assign px_6 = &p_6;
    assign gx_6 = g_6[5] | (p_6[5]&g_6[4]) | (p_6[5]&p_6[4]&g_6[3]) | (p_6[5]&p_6[4]&p_6[3]&g_6[2]) | (p_6[5]&p_6[4]&p_6[3]&p_6[2]&g_6[1]) | (p_6[5]&p_6[4]&p_6[3]&p_6[2]&p_6[1]&g_6[0]) | (p_6[5]&p_6[4]&p_6[3]&p_6[2]&p_6[1]&p_6[0]&cin_6);
endmodule
