`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Zachary Davis
// 
// Create Date:    11:24:41 10/13/2017 
// Design Name: 	 Thunderbird Turn Signal
// Module Name:    Top_Mod  
// Description: 	 Implements the thunderbird turn signal logic with a 
//						 a clock divider to implement in onto the FPGA Board.
//
//////////////////////////////////////////////////////////////////////////////////
module Top_Mod(L, R, Rst, Clk_In, Div_Rst, LA, LB, LC, RA, RB, RC);
	input L, R, Rst, Clk_In, Div_Rst;
	output LA, LB, LC, RA, RB, RC;
	wire Clk_Out;
	
	Clock_Divider Clock_Divider_1 (Clk_In, Div_Rst, Clk_Out);
	Thunderbird Thunderbird_1 (L, R, Rst, Clk_Out, LA, LB, LC, RA, RB, RC);
endmodule
