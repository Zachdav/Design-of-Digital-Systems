//Part2.v
`timescale 1ns / 1ps
module PartB(A,B,C,Y);
	input A,B,C;
	output Y;
	reg Y;

	always @(A, B, C)
	begin
		Y <= (!A & !B & !C )|| (A & !B & !C) || (A & !B & C);
	end
endmodule
