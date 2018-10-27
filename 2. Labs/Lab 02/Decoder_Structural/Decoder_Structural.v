`timescale 1ns / 1ps

module Decoder_Structural(In1, In2, Out1, Out2, Out3, Out4);
	input In1, In2;
	output Out1, Out2, Out3, Out4;
	wire N1, N2;
	
	not invert_1(N1, In1);
	not invert_2(N2, In2);
	
	and and_1(Out1, N1, N2);
	and and_2(Out2, N1, In2);
	and and_3(Out3, In1, N2);
	and and_4(Out4, In1, In2);
	
endmodule
