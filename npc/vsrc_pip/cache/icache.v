module icache(
    input           [`XLEN-1:0]     addr,

    output                          valid

);

reg     [`XLEN-1:0]     way_1[0:255];
reg     [`XLEN-1:0]     way_2[0:255];
reg     [54     :0]     tagvd_1[0:255];
reg     [54     :0]     tagvd_2[0:255];

wire    tag_cmp_1 = addr[63:11] == tagvd_1[addr[10:3]][52:0];






endmodule