`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer:       Zachary Davis & Ryan Cruz
// 
// Create Date:    12:29:15 10/20/2017 
// Design Name:    Seven Segment Display
// Module Name:    Top_Mod 
// Description:    Call on clock divider, seven segement display, and up down
//                 to combine the whole project.
//
//////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ps

module Top_Mod(Clk_In, Rst, Enable, UpDown, A, B, C, D, E, F, G, Div_Rst);
	input Clk_In, Rst, Enable, UpDown, Div_Rst;
	output A, B, C, D, E, F, G;
	
	wire Clk_Out;
	wire [3:0] Count;

	Clock_Divider Clock_Divider_1 (Clk_In, Div_Rst, Clk_Out);
	UpDown UpDown_1 (Clk_Out, Rst, Enable, UpDown, Count);
	Seven_Segment_Display Seven_Segment_Display_1 (Count, A, B, C, D, E, F, G);
endmodule
