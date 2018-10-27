`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    20:08:28 11/15/2017 
// Design Name:    Random Number Generator 
// Module Name:    RandomGen.v
// Project Name:   Final Project
// Description: 
//
//////////////////////////////////////////////////////////////////////////////////
module RandomGen(Clk, Rst, RandomValue);

   input Clk, Rst;
   output reg [11:0] RandomValue; // you need decide the number of bits here.

	always @(posedge Clk) begin
   if (Rst == 1)
		RandomValue <= 1000;
   else 
	begin
		RandomValue <= RandomValue + 270; // add 270 ms eachtime
		if (RandomValue > 2730) 
		begin
			RandomValue <= 1250;//reset at 3
		end
	end
	end
endmodule
