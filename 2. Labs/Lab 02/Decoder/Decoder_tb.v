`timescale 1ns / 1ps
 
module Decoder_tb();
	reg In1_t, In2_t;
	wire Out1_t, Out2_t, Out3_t, Out4_t;
	
	Decoder Decoder_1(In1_t, In2_t, Out1_t, Out2_t, Out3_t, Out4_t);
	
	initial
	begin
	
	//Case0
	In1_t <= 0;
	In2_t <= 0;
	#1 $display("Case 0: ");
	#1 $display("Out1_t = %b", Out1_t);
	#1 $display("Out2_t = %b", Out2_t);
	#1 $display("Out3_t = %b", Out3_t);
	#1 $display("Out4_t = %b", Out4_t);

	//Case1
	In1_t <= 0;
	In2_t <= 1;
	#1 $display("Case 1: ");
	#1 $display("Out1_t = %b", Out1_t);
	#1 $display("Out2_t = %b", Out2_t);
	#1 $display("Out3_t = %b", Out3_t);
	#1 $display("Out4_t = %b", Out4_t);
	
	//Case2
	In1_t <= 1;
	In2_t <= 0;
	#1 $display("Case 2: ");
	#1 $display("Out1_t = %b", Out1_t);
	#1 $display("Out2_t = %b", Out2_t);
	#1 $display("Out3_t = %b", Out3_t);
	#1 $display("Out4_t = %b", Out4_t);
	
	//Case3
	In1_t <= 1;
	In2_t <= 1;
	#1 $display("Case 3: ");
	#1 $display("Out1_t = %b", Out1_t);
	#1 $display("Out2_t = %b", Out2_t);
	#1 $display("Out3_t = %b", Out3_t);
	#1 $display("Out4_t = %b", Out4_t);
	
	end
endmodule
