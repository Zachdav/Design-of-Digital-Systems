`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 10/30/2017 
// Design Name: 
// Module Name:    
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module TopModule(Clk, DivRst, Rst, UpDown, Enable, A, B, C, D, E, F, G, Selector);
   input Clk, DivRst, Rst, UpDown, Enable;
   output A, B, C, D, E, F, G, Selector;
	
	wire ClkOut;
	wire [3:0] Count;
	wire [3:0] Tens, Ones;
	
	Clock_Divider Clock_Divider_1(ClkIn, DivRst, ClkOut);
	UpDown UpDown_1(ClkOut, Rst, Enable, UpDown, Count);
	BinToBCD BinToBCD_1(Count, Tens, Ones);
	Display_Driver Display_Driver_1(Clk, Rst, Tens, Ones, A, B, C, D, E, F, G, Selector);

endmodule
