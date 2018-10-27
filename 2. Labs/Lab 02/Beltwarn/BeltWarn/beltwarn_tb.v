`timescale 1ns / 1ps
module beltwarn_tb();
	reg K_t, P_t, S_t;
	wire W_t;
	
	beltwarn beltwarn_1(K_t, P_t, S_t, W_t);
	
	initial
	begin
	
	//Case 0
	K_t <= 0; P_t <= 0; S_t <= 0;
	#1 $display("Case 0");
	#1 $display("W_t = %b", W_t);
	#1 $display("");
	
	//Case 1
	K_t <= 0; P_t <= 0; S_t <= 1;
	#1 $display("Case 1");
	#1 $display("W_t = %b", W_t);
	#1 $display("");

	//Case 2
	K_t <= 0; P_t <= 1; S_t <= 0;
	#1 $display("Case 2");
	#1 $display("W_t = %b", W_t);
	#1 $display("");
	
	//Case 3
	K_t <= 0; P_t <= 1; S_t <= 1;
	#1 $display("Case 3");
	#1 $display("W_t = %b", W_t);
	#1 $display("");
	
	//Case 4
	K_t <= 1; P_t <= 0; S_t <= 0;
	#1 $display("Case 4");
	#1 $display("W_t = %b", W_t);
	#1 $display("");
	
	//Case 5
	K_t <= 1; P_t <= 0; S_t <= 1;
	#1 $display("Case 5");
	#1 $display("W_t = %b", W_t);
	#1 $display("");
	
	//Case 6
	K_t <= 1; P_t <= 1; S_t <= 0;
	#1 $display("Case 6");
	#1 $display("W_t = %b", W_t);
	#1 $display("");
	
	//Case 7
	K_t <= 1; P_t <= 1; S_t <= 1;
	#1 $display("Case 7");
	#1 $display("W_t = %b", W_t);
	#1 $display("");

	end
endmodule
