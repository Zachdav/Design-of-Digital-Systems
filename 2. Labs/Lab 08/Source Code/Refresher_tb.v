`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 10/30/2017 
// Design Name: 
// Module Name:    Refresh
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module Refresh_tb();
	reg Clk_t, DivRst_t;
	wire Refresh_t, Selector_t;
	
	Refresh Refresh_1(Clk_t, DivRst_t, Refresh_t, Selector_t);
	
	always
		begin
			Clk_t <= 1;
			#10;
			Clk_t <= 0;
			#10;
		end
	
	initial 
	begin
		DivRst_t <= 0;
		#100;
		DivRst_t <= 1;
		#200;
		DivRst_t <= 0;
	end
endmodule
