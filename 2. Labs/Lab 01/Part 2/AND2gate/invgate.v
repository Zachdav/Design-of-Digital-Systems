`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:18:13 09/01/2017 
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
		F <= !A;
	end

endmodule
