`timescale 1ns / 1ps
module beltwarn(K, P, S, W);
	input K, P, S;
	output W;
	reg W;
	
	always @(K, P, S)
	begin
		W <= K & P & !S;
	end
endmodule
