`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:35:01 08/25/2017 
// Design Name: 
// Module Name:    invgate 
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
module invgate(A,F);
input A;
	output F;
	reg F;
	
	always @ (A)
	begin
		F<= !A;
	end

endmodule
