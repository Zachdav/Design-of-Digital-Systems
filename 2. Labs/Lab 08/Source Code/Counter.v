`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 10/30/2017 
// Design Name: 
// Module Name:    UpDown
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module UpDown(Clk, Rst, Enable, UpDown, Count);
	input Clk, Rst, Enable, UpDown;
	output reg [3:0] Count = 4'b0000;
	
	always @ (posedge Clk)
		begin
		if (Rst == 4'b0001)
			Count <= 4'b0000;
		else if (Enable == 4'b0000)
			Count <= Count;
		else
			begin
			if (UpDown == 4'b0001)
				begin
				if (Count == 4'b1111)
					Count <= 4'b0000;
				else
					Count <= Count + 4'b0001;
				end
			else
				begin
				if (Count == 4'b0000)
					Count <= 4'b1111;
				else
					Count <= Count - 4'b0001;
				end
		end
	end
endmodule
