`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 11/06/2017 
// Design Name: 
// Module Name:    Two by One Multiplexor
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module Mux2x1(Ones, Tens, Refresh, DValue);
	input [3:0] Tens;
	input [3:0] Ones;
	input [1:0] Refresh;
	output reg [3:0] DValue;
	
	always @ (Refresh)
	begin
		if (Refresh == 4'b00) 
		begin
			DValue[3] <= Tens[3];
			DValue[2] <= Tens[2];
			DValue[1] <= Tens[1];
			DValue[0] <= Tens[0];
		end
		else 
		begin
			DValue[3] <= Ones[3];
			DValue[2] <= Ones[2];
			DValue[1] <= Ones[1];
			DValue[0] <= Ones[0];
		end
	end
endmodule
