`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:45:21 09/01/2017 
// Design Name: 
// Module Name:    and2gate 
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
module and2gate(A,B,F);

	input A,B;
	output F;
	reg F;
	
	always @ (A,B)
	begin
		F <= A & B;
	end

endmodule
