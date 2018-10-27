`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Zachary Davis & Ryan Cruz
// Create Date:    12:12:08 10/06/2017 
// Design Name: 	 Thunderbird_tb
// Module Name:    Thunderbird_tb.v 
// Project Name: 	 Thunderbird
// Target Devices: Spartan 3E
// Description: 	 This simulates many cases of the thunderbird blinkers.  As 
// 					 well as demonstrating how we handled some of the cases left
//						 to us.
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Thunderbird_tb();
	reg L_t, R_t, Rst_t, Clk_t;
	
	//Individually wiring each of the outputs.
	wire LA_t;
	wire LB_t;
	wire LC_t;
	wire RA_t;
	wire RB_t;
	wire RC_t;
	
	Thunderbird Thunderbird_1(L_t, R_t, Rst_t, Clk_t, LA_t, LB_t, LC_t, RA_t, RB_t, RC_t);
	
	//Setting the clock cycle frequency.
	always
	begin
		Clk_t <= 0;
		#10;
		Clk_t <= 1;
		#10;
	end
	
	//Manually testing all the cases of our design.
	initial
	begin
		//Initial input values.
		Rst_t <= 1;
		L_t <=0;
		R_t <=0;
		
		//Test the Left Blinker switch.
		@(posedge Clk_t);
		#5 Rst_t <=0;
		@(posedge Clk_t);
		#5 L_t <=1;
		@(posedge Clk_t);
		#5 L_t <=0;
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		
		//Testing the Right Blinker switch.
		@(posedge Clk_t);
		#5 R_t <=1;
		@(posedge Clk_t);
		#5 R_t <=0;
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		
		//Testing Reseting the Left Blinker.
		@(posedge Clk_t);
		#5 L_t <=1;
		@(posedge Clk_t);
		#5 L_t <=0;
		@(posedge Clk_t);
		#5 Rst_t <=1;
		
		//Testing Reseting the Right Blinker.
		@(posedge Clk_t);
		#5 R_t <=1;
		#5 Rst_t <=0;
		@(posedge Clk_t);
		#5 Rst_t <=1;
		#5 R_t <=0;
		
		//Testing a Right Blinker Interrupting a Left Blinker.
		//Then A Left Blinker interrupting that Right Blinker.
		@(posedge Clk_t);
		#5 L_t <=1;
		#5 Rst_t <=0;
		@(posedge Clk_t);
		#5 L_t <=0;
		@(posedge Clk_t);
		#5 R_t <=1;
		@(posedge Clk_t);
		#5 L_t <=1;
		#5 R_t <=0;
		@(posedge Clk_t);
		#5 L_t <=0;
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		
		//Finally Testing Both Blinkers on and off.
		@(posedge Clk_t);
		#5 L_t <=0;
		#5 R_t <=0;
		@(posedge Clk_t);
		#5 L_t <=1;
		#5 R_t <=1;
		
		//Clearing the waves with a reset.
		@(posedge Clk_t);
		#5 L_t <=0;
		#5 R_t <=0;
		#5 Rst_t <=1;
	end
endmodule
