`timescale 1ns / 1ps

module Thunderbird_tb();
	reg L_s, R_s, Rst_s, Clk_s;
	wire LA_s;
	wire LB_s;
	wire LC_s;
	wire RA_s;
	wire RB_s;
	wire RC_s;

	Thunderbird Thunderbird_1 (L_s, R_s, Rst_s, Clk_s, LA_s, LB_s, LC_s, RA_s, RB_s, RC_s);

	always 
		begin
			Clk_s <= 0;
			#10;
			Clk_s <= 1;
			#10;
		end

	initial begin
		Rst_s <= 0;
		R_s <= 0; L_s <= 0;
		@(posedge Clk_s);
		#5 L_s <= 1;
		@(posedge Clk_s);
		#5 L_s <= 0; 
		@(posedge Clk_s);
		@(posedge Clk_s);
		@(posedge Clk_s);
		
		@(posedge Clk_s);
		#5 R_s <= 1;
		@(posedge Clk_s);
		#5 R_s <= 0; 
		@(posedge Clk_s);
		@(posedge Clk_s);
		@(posedge Clk_s);
		 // both L and R are on
		@(posedge Clk_s);
		#5 R_s <= 1; L_s <= 1;
		@(posedge Clk_s);
		#5 R_s <= 0; L_s <= 0;
		@(posedge Clk_s);
		@(posedge Clk_s);
		// strobe for while
		@(posedge Clk_s);
		#5 R_s <= 1; L_s <= 1;
		@(posedge Clk_s);
		@(posedge Clk_s);
		@(posedge Clk_s);
		#5 R_s <= 0; L_s <= 0;
		@(posedge Clk_s);
		 // left strobe
		@(posedge Clk_s);
		#5 L_s <=1;
		@(posedge Clk_s);
		@(posedge Clk_s);
		@(posedge Clk_s);
		@(posedge Clk_s);
		#5 L_s <=0;
		@(posedge Clk_s);
		@(posedge Clk_s);
		@(posedge Clk_s);
		 // right strobe
		@(posedge Clk_s);
		#5 R_s <=1;
		@(posedge Clk_s);
		@(posedge Clk_s);
		@(posedge Clk_s);
		@(posedge Clk_s);
		#5 R_s <=0;
		@(posedge Clk_s);
		@(posedge Clk_s);
		@(posedge Clk_s);
		
		#5 L_s <=1;
		@(posedge Clk_s);
		#5 L_s <=0;
		@(posedge Clk_s);
		#5 R_s <=1;
		@(posedge Clk_s);
		#5 R_s <=0;
		@(posedge Clk_s);
		
		
	end
endmodule
