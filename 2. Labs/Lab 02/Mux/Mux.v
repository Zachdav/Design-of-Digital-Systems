`timescale 1ns / 1ps
module Mux(S0, S1, S2, D0, D1, D2, D3, D4, D5, D6, D7, Y);
	input S0, S1, S2;
	input D0, D1, D2, D3, D4, D5, D6, D7;
	output Y;
	reg Y;
	
	always@*
	begin
		if ((S0 == 0) && (S1 ==0) && (S2 == 0))
			begin
			Y <= D0;
			end
		else if ((S0 == 0) && (S1 ==0) && (S2 == 1))
			begin
			Y <= D1;
			end
		else if ((S0 == 0) && (S1 ==1) && (S2 == 0))
			begin
			Y <= D2;
			end
		else if ((S0 == 0) && (S1 ==1) && (S2 == 1))
			begin
			Y <= D3;
			end
		else if ((S0 == 1) && (S1 ==0) && (S2 == 0))
			begin
			Y <= D4;
			end
		else if ((S0 == 1) && (S1 ==0) && (S2 == 1))
			begin
			Y <= D5;
			end
		else if ((S0 == 1) && (S1 ==1) && (S2 == 0))
			begin
			Y <= D6;
			end
		else
			begin
			Y <= D7;
			end
	end
endmodule
