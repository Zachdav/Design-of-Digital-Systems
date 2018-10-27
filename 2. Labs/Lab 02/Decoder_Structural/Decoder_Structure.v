`timescale 1ns / 1ps

module Decoder_Structural(In1, In2, Out1, Out2, Out3, Out4);
	input In1, In2;
	output Out1, Out2, Out3, Out4;
	reg Out1, Out2, Out3, Out4;
	
	always @(In1, In2)
	begin
	
		if ((In1 == 0) && (In2 == 0))
			begin
			Out1 <= 1;
			Out2 <= 0;
			Out3 <= 0;
			Out4 <= 0;
			end
		else if ((In1 == 0) && (In2 == 1))
			begin
			Out1 <= 0;
			Out2 <= 1;
			Out3 <= 0;
			Out4 <= 0;
			end
		else if ((In1 == 1) && (In2 == 0))
			begin
			Out1 <= 0;
			Out2 <= 0;
			Out3 <= 1;
			Out4 <= 0;
			end
		else
			begin
			Out1 <= 0;
			Out2 <= 0;
			Out3 <= 0;
			Out4 <= 1;
			end
			
		end
endmodule