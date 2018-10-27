`timescale 1ns / 1ps
module Mux_tb();
	reg S0_t, S1_t, S2_t;
	reg D0_t, D1_t, D2_t, D3_t, D4_t, D5_t, D6_t, D7_t;
	wire Y_t;

	Mux Mux_1(S0_t, S1_t, S2_t, D0_t, D1_t, D2_t, D3_t, D4_t, D5_t, D6_t, D7_t, Y_t);
	
	initial
	begin
	
	//Case 0
	S0_t <= 0;
	S1_t <= 0;
	S2_t <= 0;
	D0_t <= 1;
	D1_t <= 0;
	D2_t <= 0;
	D3_t <= 0;
	D4_t <= 0;
	D5_t <= 0;
	D6_t <= 0;
	D7_t <= 0;
	#1 $display("");
	#1 $display("Case 0: ");
	#1 $display("Y_t = %b", Y_t);
	
	//Case 1
	S0_t <= 0;
	S1_t <= 0;
	S2_t <= 1;
	D0_t <= 0;
	D1_t <= 1;
	D2_t <= 0;
	D3_t <= 0;
	D4_t <= 0;
	D5_t <= 0;
	D6_t <= 0;
	D7_t <= 0;
	#1 $display("");
	#1 $display("Case 1: ");
	#1 $display("Y_t = %b", Y_t);
	
	//Case 2
	S0_t <= 0;
	S1_t <= 1;
	S2_t <= 0;
	D0_t <= 0;
	D1_t <= 0;
	D2_t <= 1;
	D3_t <= 0;
	D4_t <= 0;
	D5_t <= 0;
	D6_t <= 0;
	D7_t <= 0;
	#1 $display("");
	#1 $display("Case 2: ");
	#1 $display("Y_t = %b", Y_t);
	
	//Case 3
	S0_t <= 0;
	S1_t <= 1;
	S2_t <= 1;
	D0_t <= 0;
	D1_t <= 0;
	D2_t <= 0;
	D3_t <= 1;
	D4_t <= 0;
	D5_t <= 0;
	D6_t <= 0;
	D7_t <= 0;
	#1 $display("");
	#1 $display("Case 3: ");
	#1 $display("Y_t = %b", Y_t);
	
	//Case 4
	S0_t <= 1;
	S1_t <= 0;
	S2_t <= 0;
	D0_t <= 0;
	D1_t <= 0;
	D2_t <= 0;
	D3_t <= 0;
	D4_t <= 1;
	D5_t <= 0;
	D6_t <= 0;
	D7_t <= 0;
	#1 $display("");
	#1 $display("Case 4: ");
	#1 $display("Y_t = %b", Y_t);
	
	//Case 5
	S0_t <= 1;
	S1_t <= 0;
	S2_t <= 1;
	D0_t <= 0;
	D1_t <= 0;
	D2_t <= 0;
	D3_t <= 0;
	D4_t <= 0;
	D5_t <= 1;
	D6_t <= 0;
	D7_t <= 0;
	#1 $display("");
	#1 $display("Case 5: ");
	#1 $display("Y_t = %b", Y_t);
	
	//Case 6
	S0_t <= 1;
	S1_t <= 1;
	S2_t <= 0;
	D0_t <= 0;
	D1_t <= 0;
	D2_t <= 0;
	D3_t <= 0;
	D4_t <= 0;
	D5_t <= 0;
	D6_t <= 1;
	D7_t <= 0;
	#1 $display("");
	#1 $display("Case 6: ");
	#1 $display("Y_t = %b", Y_t);
	
	//Case 7
	S0_t <= 1;
	S1_t <= 1;
	S2_t <= 1;
	D0_t <= 0;
	D1_t <= 0;
	D2_t <= 0;
	D3_t <= 0;
	D4_t <= 0;
	D5_t <= 0;
	D6_t <= 0;
	D7_t <= 1;
	#1 $display("");
	#1 $display("Case 7: ");
	#1 $display("Y_t = %b", Y_t);
	
	end
endmodule
