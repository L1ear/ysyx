module cla_16 (
    input[15:0] a_16,
    input[15:0] b_16,
    input   cin_16,
    input[15:0] p_16,
    input[15:0] g_16,
    output[15:0] s_16,
    output gx_16,px_16
);
//define internal carry bits and pg signals
    wire c3,c7,c11;
    wire px1,px2,px3,px4,gx1,gx2,gx3,gx4;
//adders
    cla_4 u1(
            .a_4(a_16[3:0]),
            .b_4(b_16[3:0]),
            .cin_4(cin_16),
            .p_4(p_16[3:0]),
            .g_4(g_16[3:0]),
            .s_4(s_16[3:0]),
            .px_4(px1),
            .gx_4(gx1)
    );


    cla_4 u2(
            .a_4(a_16[7:4]),
            .b_4(b_16[7:4]),
            .cin_4(c3),
            .p_4(p_16[7:4]),
            .g_4(g_16[7:4]),
            .s_4(s_16[7:4]),
            .px_4(px2),
            .gx_4(gx2)
    );

    cla_4 u3(
            .a_4(a_16[11:8]),
            .b_4(b_16[11:8]),
            .cin_4(c7),
            .p_4(p_16[11:8]),
            .g_4(g_16[11:8]),
            .s_4(s_16[11:8]),
            .px_4(px3),
            .gx_4(gx3)
    );

    cla_4 u4(
            .a_4(a_16[15:12]),
            .b_4(b_16[15:12]),
            .cin_4(c11),
            .p_4(p_16[15:12]),
            .g_4(g_16[15:12]),
            .s_4(s_16[15:12]),
            .px_4(px4),
            .gx_4(gx4)
    );

//generate internal carry bits and pg signals
    assign c3 =  gx1 | (px1&cin_16);
    assign c7 =  gx2 | (px2&gx1) | (px2&px1&cin_16);
    assign c11=  gx3 | (px3&gx2) | (px3&px2&gx1) |(px3&px2&px1&cin_16);

    assign px_16 = px1 & px2 & px3 & px4;
    assign gx_16 = gx4 | (px4&gx3) | (px4&px3&gx2) | (px4&px3&px2&gx1);


endmodule
