`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 11/06/2017 
// Design Name: 
// Module Name:    Display Driver
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module Display_Driver(Clk, Rst, Tens, Ones, A, B, C, D, E, F, G, Selector);
   input Clk, Rst;
   input [3:0] Tens;
	input [3:0] Ones;
   output A, B, C, D, E, F, G;
	
	output Selector;
	wire [3:0] DValue;
	wire Refresh;
	
	Refresh Refresh_1 (Clk, Rst, Refresh,Selector);
	Mux2x1 Mux2x1_1 (Ones, Tens, Refresh, DValue);
	Seven_Segment_Display Seven_Segment_Display_1(DValue, A, B, C, D, E, F, G);

endmodule
