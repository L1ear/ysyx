`include "defines.v"
module clint (
        input                                   clk,rst_n,

		input  [63 : 0]       clint_axi_araddr,
		input  [2 : 0]                          clint_axi_arprot,
		input                                   clint_axi_arvalid,
		output                                  clint_axi_arready,
		input  [2:0]                            clint_axi_arsize,

		output  [63 : 0]      clint_axi_rdata,
		output  [1 : 0]                         clint_axi_rresp,
		output                                  clint_axi_rvalid,
		input                                   clint_axi_rready,   

		input  [2:0]                            clint_axi_awsize,
		input  [63 : 0]       clint_axi_awaddr,
		input  [2 : 0]                          clint_axi_awprot,
		input                                   clint_axi_awvalid,
		output                                  clint_axi_awready,

		input  [63 : 0]       clint_axi_wdata,
		input  [7 : 0]   clint_axi_wstrb,
		input                                   clint_axi_wvalid,
		output                                  clint_axi_wready,

		output  [1 : 0]                         clint_axi_bresp,
		output                                  clint_axi_bvalid,
		input                                   clint_axi_bready,

        output                                  hart0_time_int_o
);

reg [63 : 0] 	axi_awaddr;
reg  	        axi_awready;
reg  	        axi_wready;
reg [1 : 0] 	axi_bresp;
reg  	        axi_bvalid;
reg [63 : 0] 	axi_araddr;
reg  	        axi_arready;
reg [1 : 0] 	axi_rresp;
reg  	        axi_rvalid;
reg	            aw_en;
reg [63:0]	    reg_data_out;

reg [63:0]      mtime;
reg [63:0]      mtimecmp;
reg             mtimeWrEn,mtimecmpWrEn;

assign clint_axi_rdata = reg_data_out;

always @( posedge clk ) begin
	  if (~rst_n)
	    begin
	      axi_awready <= 1'b0;
	      aw_en <= 1'b1;
	    end 
	  else
	    begin    
	      if (~axi_awready && clint_axi_awvalid && aw_en)
	        begin
	          // slave is ready to accept write address when 
	          // there is a valid write address and write data
	          // on the write address and data bus. This design 
	          // expects no outstanding transactions. 
	          axi_awready <= 1'b1;
	          aw_en <= 1'b0;
	        end
	        else if (clint_axi_bready && axi_bvalid)
	            begin
	              aw_en <= 1'b1;
	              axi_awready <= 1'b0;
	            end
	      else           
	        begin
	          axi_awready <= 1'b0;
	        end
	    end 
end   

always @( posedge clk )
begin
  if (~rst_n)
    begin
      axi_awaddr <= 'b0;
    end 
  else
    begin    
      if (~axi_awready && clint_axi_awvalid && aw_en)
        begin
          // Write Address latching 
          axi_awaddr <= clint_axi_awaddr;
        end
    end 
end  

always @( posedge clk )
begin
  if (~rst_n)
    begin
      axi_wready <= 1'b0;
    end 
  else
    begin    
      if (~axi_wready && clint_axi_wvalid )
        begin
          // slave is ready to accept write data when 
          // there is a valid write address and write data
          // on the write address and data bus. This design 
          // expects no outstanding transactions. 
          axi_wready <= 1'b1;
        end
      else
        begin
          axi_wready <= 1'b0;
        end
    end 
end  

assign slv_reg_wren = axi_wready && clint_axi_wvalid ;

always @(*) begin
    if (slv_reg_wren) begin
        case(axi_awaddr[15:0])
            16'h4000: begin
                mtimeWrEn       <= 'b0;
                mtimecmpWrEn    <= 'b1;
            end
            16'hbff8: begin
                mtimeWrEn       <= 'b1;
                mtimecmpWrEn    <= 'b0;
            end
            default:begin
                mtimeWrEn       <= 'b0;
                mtimecmpWrEn    <= 'b0;
            end
        endcase
      end
      else begin
        mtimeWrEn       <= 'b0;
        mtimecmpWrEn    <= 'b0;        
      end  
end   

always @( posedge clk )
	begin
	  if (~rst_n)
	    begin
	      axi_bvalid  <= 0;
	      axi_bresp   <= 2'b0;
	    end 
	  else
	    begin    
	      if (axi_wready && clint_axi_wvalid)
	        begin
	          // indicates a valid write response is available
	          axi_bvalid <= 1'b1;
	          axi_bresp  <= 2'b0; // 'OKAY' response 
	        end                   // work error responses in future
	      else
	        begin
	          if (clint_axi_bready && axi_bvalid) 
	            //check if bready is asserted while bvalid is high) 
	            //(there is a possibility that bready is always asserted high)   
	            begin
	              axi_bvalid <= 1'b0; 
	            end  
	        end
	    end
	end

always @( posedge clk )
	begin
	  if (~rst_n)
	    begin
	      axi_arready <= 1'b0;
	      axi_araddr  <= 64'b0;
	    end 
	  else
	    begin    
	      if (~axi_arready && clint_axi_arvalid)
	        begin
	          // indicates that the slave has acceped the valid read address
	          axi_arready <= 1'b1;
	          // Read address latching
	          axi_araddr  <= clint_axi_araddr;
	        end
	      else
	        begin
	          axi_arready <= 1'b0;
	        end
	    end 
	end

always @( posedge clk )
	begin
	  if (~rst_n)
	    begin
	      axi_rvalid <= 0;
	      axi_rresp  <= 0;
	    end 
	  else
	    begin    
	      if (axi_arready && clint_axi_arvalid && ~axi_rvalid)
	        begin
	          // Valid read data is available at the read data bus
	          axi_rvalid <= 1'b1;
	          axi_rresp  <= 2'b0; // 'OKAY' response
	        end   
	      else if (axi_rvalid && clint_axi_rready)
	        begin
	          // Read data is accepted by the master
	          axi_rvalid <= 1'b0;
	        end                
	    end
	end  

	wire	 slv_reg_rden;
    assign slv_reg_rden = axi_arready & S_AXI_ARVALID & ~axi_rvalid;
always @(*) begin
    if (slv_reg_rden)
    case(axi_awaddr[15:0])
        16'h4000: begin
            reg_data_out       <= mtime;
        end
        16'hbff8: begin
            reg_data_out       <= mtimecmp;
        end
        default:begin
            reg_data_out       <= 'b0;
        end
    endcase
    else
        reg_data_out <= 'b0;        
end

integer	 byte_index;
//mtime
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mtime <= 'b0;
    end
    else begin
        if(mtimeWrEn) begin
            for ( byte_index = 0; byte_index <= 8; byte_index = byte_index+1 )
                if ( clint_axi_wstrb[byte_index] == 1 ) begin
                // Respective byte enables are asserted as per write strobes 
                // Slave register 0
                mtime[(byte_index*8) +: 8] <= clint_axi_wdata[(byte_index*8) +: 8];
                end  
        end
        else begin
            mtime <= mtime + 'b1;
        end
    end
end
//mtimecmp
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mtimecmp <= 'b0;
    end
    else begin
        if(mtimecmpWrEn) begin
            for ( byte_index = 0; byte_index <= 8; byte_index = byte_index+1 )
                if ( clint_axi_wstrb[byte_index] == 1 ) begin
                // Respective byte enables are asserted as per write strobes 
                // Slave register 0
                    mtimecmp[(byte_index*8) +: 8] <= clint_axi_wdata[(byte_index*8) +: 8];
                end  
        end
        else begin
            mtimecmp <= mtimecmp;
        end
    end    
end

wire    time_int_intern;
assign time_int_intern = (mtime >= mtimecmp);
//上升沿检测
reg time_int_intern_0,time_int_intern_1;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n)begin
        time_int_intern_0 <= 'b0;
        time_int_intern_1 <= 'b0;
    end
    else begin
        time_int_intern_0 <= time_int_intern;
        time_int_intern_1 <= time_int_intern_0;
    end
end
assign hart0_time_int_o = time_int_intern_0 && ~time_int_intern_1;

endmodule //clint
