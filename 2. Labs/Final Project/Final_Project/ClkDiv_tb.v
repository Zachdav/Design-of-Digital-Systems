`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    20:08:28 11/15/2017 
// Design Name:    Clock Divider
// Module Name:    ClkDiv_tb.v
// Project Name:   Final Project
// Description: 
//
//////////////////////////////////////////////////////////////////////////////////
module ClkDiv_tb();
 
	reg Clk, Rst;
	wire ClkOut;
 
	ClkDiv ClkDiv_tb(Clk, Rst, ClkOut);

	always
	begin
		Clk <= 0;
		#10;
		Clk <= 1;
		#15;
	end
	initial
	begin
		Rst <= 1;
		#30;
		Rst <= 0;
		#500;
		Rst <= 1;
		#30;
		Rst <= 0;  
	end
endmodule
