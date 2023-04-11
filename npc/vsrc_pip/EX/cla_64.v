module cla_64 (
    input[63:0] a_64,
    input[63:0] b_64,
    input   cin_64,
    input[63:0] p_64,
    input[63:0] g_64,
    output[63:0] s_64,
    output gx_64,px_64
);
    wire px1,px2,px3,px4,gx1,gx2,gx3,gx4;
    wire c15,c31,c47;

    //adders
    cla_16 u1(
            .a_16(a_64[15:0]),
            .b_16(b_64[15:0]),
            .cin_16(cin_64),
            .p_16(p_64[15:0]),
            .g_16(g_64[15:0]),
            .s_16(s_64[15:0]),
            .px_16(px1),
            .gx_16(gx1)
    );


    cla_16 u2(
            .a_16(a_64[31:16]),
            .b_16(b_64[31:16]),
            .cin_16(c15),
            .p_16(p_64[31:16]),
            .g_16(g_64[31:16]),
            .s_16(s_64[31:16]),
            .px_16(px2),
            .gx_16(gx2)
    );

    cla_16 u3(
            .a_16(a_64[47:32]),
            .b_16(b_64[47:32]),
            .cin_16(c31),
            .p_16(p_64[47:32]),
            .g_16(g_64[47:32]),
            .s_16(s_64[47:32]),
            .px_16(px3),
            .gx_16(gx3)
    );

    cla_16 u4(
            .a_16(a_64[63:48]),
            .b_16(b_64[63:48]),
            .cin_16(c47),
            .p_16(p_64[63:48]),
            .g_16(g_64[63:48]),
            .s_16(s_64[63:48]),
            .px_16(px4),
            .gx_16(gx4)
    );

//generate internal carry bits and pg signals
    assign c15 =  gx1 | (px1&cin_64);
    assign c31 =  gx2 | (px2&gx1) | (px2&px1&cin_64);
    assign c47 =  gx3 | (px3&gx2) | (px3&px2&gx1) |(px3&px2&px1&cin_64);

    assign px_64 = px1 & px2 & px3 & px4;
    assign gx_64 = gx4 | (px4&gx3) | (px4&px3&gx2) | (px4&px3&px2&gx1);
endmodule //cla_64
