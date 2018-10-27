`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    20:08:28 11/15/2017 
// Design Name:    Random Number Generator TestBench
// Module Name:    RandomGen_tb.v
// Project Name:   Final Project
// Description: 
//
//////////////////////////////////////////////////////////////////////////////////
module RandomGen_tb();

	reg Clk, Rst;
	wire [11:0] RandomValue;

	RandomGen RandomGen_tb(Clk, Rst, RandomValue);
 
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
		#50;
		Rst <= 1;
		#30;
		Rst <= 0;  
	end
endmodule
