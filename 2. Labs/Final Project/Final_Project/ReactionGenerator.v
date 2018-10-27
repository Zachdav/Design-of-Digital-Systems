`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:45:39 11/15/2016 
// Design Name: 
// Module Name:    RandomReaction_tb 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module RandomReaction_tb();
	reg Clk, DivRst, Rst, Start, LCDAck;
   wire ClkMS;
   wire [11:0] RandomValue;
   wire [9:0] ReactionTime;
	wire [7:0] LED;
   wire Cheat, Slow, Wait;
	wire LCDUpdate;

	ClkDiv ClkDiv_1 (Clk, DivRst, ClkMS);
	RandomGen RandomGen_1(Clk, Rst, RandomValue);
	ReactionTimer ReactionTimer_1 (ClkMS, Rst, Start, LED, ReactionTime, Cheat, Slow, Wait, RandomValue, LCDUpdate, LCDAck);

	always begin
		Clk <= 1;
		#10;
		Clk <= 0;
		#10;
	end
	
	initial begin
		DivRst <= 0;
		Rst <= 0;
		Start <= 0;
		LCDAck <= 0;
		#60;
		#2;
		Start <= 1;
		#500;
		Start <= 0;
		#120;
		LCDAck <= 1;
		#360;		
		LCDAck <= 0;
		#520;
		Start <= 1;
		#180;
		Start <= 0;
		#180;
		LCDAck <= 1;
		#180;
		LCDAck <= 0;
	end
endmodule
