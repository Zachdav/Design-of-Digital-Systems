`timescale 1ns / 1ps
module PartB_tb();
	reg A_t, B_t, C_t;
	wire Y_t;
	
	PartB PartB_1(A_t, B_t, C_t, Y_t);
	
	initial
	begin
	
	//Case 0
	A_t <= 0; B_t <= 0; C_t <= 0;
	#1 $display("Case 0");
	#1 $display("Y_t = %b", Y_t);
	#1 $display("");
	
	//Case 1
	A_t <= 0; B_t <= 0; C_t <= 1;
	#1 $display("Case 1");
	#1 $display("Y_t = %b", Y_t);
	#1 $display("");

	//Case 2
	A_t <= 0; B_t <= 1; C_t <= 0;
	#1 $display("Case 2");
	#1 $display("Y_t = %b", Y_t);
	#1 $display("");
	
	//Case 3
	A_t <= 0; B_t <= 1; C_t <= 1;
	#1 $display("Case 3");
	#1 $display("Y_t = %b", Y_t);
	#1 $display("");
	
	//Case 4
	A_t <= 1; B_t <= 0; C_t <= 0;
	#1 $display("Case 4");
	#1 $display("Y_t = %b", Y_t);
	#1 $display("");
	
	//Case 5
	A_t <= 1; B_t <= 0; C_t <= 1;
	#1 $display("Case 5");
	#1 $display("Y_t = %b", Y_t);
	#1 $display("");
	
	//Case 6
	A_t <= 1; B_t <= 1; C_t <= 0;
	#1 $display("Case 6");
	#1 $display("Y_t = %b", Y_t);
	#1 $display("");
	
	//Case 7
	A_t <= 1; B_t <= 1; C_t <= 1;
	#1 $display("Case 7");
	#1 $display("Y_t = %b", Y_t);
	#1 $display("");

	end
endmodule
