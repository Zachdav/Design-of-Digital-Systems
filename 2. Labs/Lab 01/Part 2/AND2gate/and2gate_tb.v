`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:47:33 09/01/2017 
// Design Name: 
// Module Name:    and2gate_tb 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module and2gate_tb();
	reg A_t, B_t;
	wire F_t;
	
	and2gate and2gate_1(A_t,B_t,F_t);
	
	initial
	begin
	
		//case 0
		A_t <=0; B_t <=0;
		#1 $display("F_t = %b", F_t);
		
		//case 1
		A_t <=0; B_t <=1;
		#1 $display("F_t = %b", F_t);
		
		//case 0
		A_t <=1; B_t <=0;
		#1 $display("F_t = %b", F_t);
		
		//case 0
		A_t <=1; B_t <=1;
		#1 $display("F_t = %b", F_t);
		
	end	

endmodule
