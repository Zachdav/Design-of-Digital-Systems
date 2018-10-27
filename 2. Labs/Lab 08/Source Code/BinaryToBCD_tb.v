`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 10/30/2017 
// Design Name: 
// Module Name:     BinToBCD
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module BinToBCD_tb();
	reg [3:0] Count_t;
	wire [3:0] Tens_t;
	wire [3:0] Ones_t;
	
	BinToBCD BinToBCD_1(Count_t, Tens_t, Ones_t);
	
	initial begin
		Count_t <= 4'b0000;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b0001;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b0010;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b0011;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b0100;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b0101;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b0110;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b0111;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b1000;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b1001;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b1010;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b1011;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b1100;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b1101;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b1110;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
		#10;
		Count_t <= 4'b1111;
		#1 $display ("Ones_t = %b", Ones_t);
		#1 $display ("Tens_t = %b", Tens_t);
	end
endmodule
