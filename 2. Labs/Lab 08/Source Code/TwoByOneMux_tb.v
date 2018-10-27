`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 11/06/2017 
// Design Name: 
// Module Name:    
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module Mux2x1_tb();
	reg [3:0] Tens_t;
	reg [3:0] Ones_t;
	reg [1:0] Refresh_t;
	wire [3:0] DValue_t;
	
	Mux2x1 Mux2x1_1(Tens_t, Ones_t, Refresh_t, DValue_t);
	
	initial
	begin
		//Case 0
		Tens_t <= 4'b0000; Ones_t <= 4'b1111; Refresh_t <= 2'b00;
		#1 $display ("DValue_t = %b", DValue_t);
		#10;
		//Case 1
		Tens_t <= 4'b1010; Ones_t <= 4'b0000; Refresh_t <= 2'b11;
		#1 $display ("DValue_t = %b", DValue_t);
		#10;
		//Case 2
		Tens_t <= 4'b0000; Ones_t <= 4'b0101; Refresh_t <= 2'b00;
		#1 $display ("DValue_t = %b", DValue_t);
	end
endmodule
