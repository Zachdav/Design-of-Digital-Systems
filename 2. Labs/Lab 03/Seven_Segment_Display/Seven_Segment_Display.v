`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Zachary Davis, Ryan Cruz
// 
// Create Date:    12:28:46 09/22/2017 
// Module Name:    Seven_Segment_Display 
// Project Name: 
// Target Devices: Sparten 3E
// Description: Displays the numbers 0-15 in hexidecimal on and LED display
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Seven_Segment_Display(In3, In2, In1, In0, A, B, C, D, E, F, G);
	input In3, In2, In1, In0;
	output A, B, C, D, E, F, G;
	reg A, B, C, D, E, F, G;

	always@*
	begin
		A = (!In3 & !In2 & !In1 & !In0) | (!In3 & !In2 & In1 & !In0) | (!In3 & !In2 & In1 & In0) | (!In3 & In2 & !In1 & In0) | (!In3 & In2 & In1 & !In0) 
		| (!In3 & In2 & In1 & In0) | (In3 & !In2 & !In1 & !In0) | (In3 & !In2 & !In1 & In0) | (In3 & !In2 & In1 & !In0) | (In3 & In2 & !In1 & !In0) 
		| (In3 & In2 & In1 & !In0) | (In3 & In2 & In1 & In0);
		
		B = (!In3 & !In2 & !In1 & !In0) | (!In3 & !In2 & !In1 & In0) | (!In3 & !In2 & In1 & !In0) | (!In3 & !In2 & In1 & In0) | (!In3 & In2 & !In1 & !In0)
		| (!In3 & In2 & In1 & In0) | (In3 & !In2 & !In1 & !In0) | (In3 & !In2 & !In1 & In0) | (In3 & !In2 & In1 & !In0) | (In3 & In2 & !In1 & In0);
		
		C = (!In3 & !In2 & !In1 & !In0) | (!In3 & !In2 & !In1 & In0) | (!In3 & !In2 & In1 & In0) | (!In3 & In2 & !In1 & !In0) | (!In3 & In2 & !In1 & In0) |
		(!In3 & In2 & In1 & !In0) | (!In3 & In2 & In1 & In0) | (In3 & !In2 & !In1 & !In0) | (In3 & !In2 & !In1 & In0) | (In3 & !In2 & In1 & !In0) |
		(In3 & !In2 & In1 & In0) | (In3 & In2 & !In1 & In0);
		
		D = (!In3 & !In2 & !In1 & !In0) | (!In3 & !In2 & In1 & !In0) | (!In3 & !In2 & In1 & In0) | (!In3 & In2 & !In1 & In0) | (!In3 & In2 & In1 & !In0) |
		(In3 & !In2 & !In1 & !In0) | (In3 & !In2 & !In1 & In0) | (In3 & !In2 & In1 & In0) | (In3 & In2 & !In1 & !In0) | (In3 & In2 & !In1 & In0) |
		(In3 & In2 & In1 & !In0);
		
		E = (!In3 & !In2 & !In1 & !In0) | (!In3 & !In2 & In1 & !In0) | (!In3 & In2 & In1 & !In0) | (In3 & !In2 & !In1 & !In0) | (In3 & !In2 & In1 & !In0) |
		(In3 & !In2 & In1 & In0) | (In3 & In2 & !In1 & !In0) | (In3 & In2 & !In1 & In0) | (In3 & In2 & In1 & !In0) | (In3 & In2 & In1 & In0);
		
		F = (!In3 & !In2 & !In1 & !In0) | (!In3 & In2 & !In1 & !In0) | (!In3 & In2 & !In1 & In0) | (!In3 & In2 & In1 & !In0) | (In3 & !In2 & !In1 & !In0) |
		(In3 & !In2 & !In1 & In0) | (In3 & !In2 & In1 & !In0) | (In3 & !In2 & In1 & In0) | (In3 & In2 & !In1 & !In0) | (In3 & In2 & In1 & !In0) |
		(In3 & In2 & In1 & In0);
		
		G = (!In3 & !In2 & In1 & !In0) | (!In3 & !In2 & In1 & In0) |(!In3 & In2 & !In1 & !In0) | (!In3 & In2 & !In1 & In0) | (!In3 & In2 & In1 & !In0) | (In3 & !In2 & !In1 & !In0) |
		(In3 & !In2 & !In1 & In0) | (In3 & !In2 & In1 & !In0) | (In3 & !In2 & In1 & In0) | (In3 & In2 & !In1 & In0) | (In3 & In2 & In1 & !In0) |
		(In3 & In2 & In1 & In0);
	end
endmodule
