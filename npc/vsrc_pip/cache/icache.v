`include "defines.v"
module icache(
    input           [`XLEN-1:0]         addr,

    output                              valid,
    output          [`inst_len-1:0]     data_o

);

reg     [`XLEN-1:0]     data_1[0:255];
reg     [`XLEN-1:0]     data_2[0:255];
reg     [54     :0]     tagvd_1[0:255];
reg     [54     :0]     tagvd_2[0:255];

wire    index = addr[10:3];
wire    tag = addr[63:11];
wire    tag_1 = tagvd_1[index][52:0];
wire    tag_2 = tagvd_2[index][52:0];

wire    hit_1 = (tag == tag_1) && tagvd_1[addr[10:3]][53];
wire    hit_2 = (tag == tag_2) && tagvd_2[addr[10:3]][53];
assign  valid = hit_1 || hit_2;

assign  data_o = ({64{hit_1}} && data_1[index]) ||
                 ({64{hit_2}} && data_2[index]);
// always@()begin

// end








endmodule