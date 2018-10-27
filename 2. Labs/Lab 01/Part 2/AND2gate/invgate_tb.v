`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:18:26 09/01/2017 
// Design Name: 
// Module Name:    invgate_tb 
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
module invgate_tb();
	reg A_t;
	wire F_t;
	
	invgate invgate_1(A_t,F_t);
	
	initial
	begin
	
		//case 0
		A_t <=0;
		#1 $display("F_t = %b", F_t);
		
		//case 1
		A_t <=1;
		#1 $display("F_t = %b", F_t);
		
		
	end	

endmodule
