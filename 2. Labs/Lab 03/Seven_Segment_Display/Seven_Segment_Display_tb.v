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
module Seven_Segment_Display_tb();

	reg In3_t, In2_t, In1_t, In0_t;
	wire A_t, B_t,C_t, D_t, E_t, F_t, G_t;

	Seven_Segment_Display Seven_Segment_Display_1(In3_t, In2_t, In1_t, In0_t, A_t, B_t,C_t, D_t, E_t, F_t, G_t);
	
	initial
	begin
	
	//Case 0
	In3_t <= 0;
	In2_t <= 0;
	In1_t <= 0;
	In0_t <= 0;
	#1 $display("");
	#1 $display("Case 0: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 1
	In3_t <= 0;
	In2_t <= 0;
	In1_t <= 0;
	In0_t <= 1;
	#1 $display("");
	#1 $display("Case 1: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 2
	In3_t <= 0;
	In2_t <= 0;
	In1_t <= 1;
	In0_t <= 0;
	#1 $display("");
	#1 $display("Case 2: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 3
	In3_t <= 0;
	In2_t <= 0;
	In1_t <= 1;
	In0_t <= 1;
	#1 $display("");
	#1 $display("Case 3: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 4
	In3_t <= 0;
	In2_t <= 1;
	In1_t <= 0;
	In0_t <= 0;
	#1 $display("");
	#1 $display("Case 4: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 5
	In3_t <= 0;
	In2_t <= 1;
	In1_t <= 0;
	In0_t <= 1;
	#1 $display("");
	#1 $display("Case 5: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 6
	In3_t <= 0;
	In2_t <= 1;
	In1_t <= 1;
	In0_t <= 0;
	#1 $display("");
	#1 $display("Case 6: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 7
	In3_t <= 0;
	In2_t <= 1;
	In1_t <= 1;
	In0_t <= 1;
	#1 $display("");
	#1 $display("Case 7: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 8
	In3_t <= 1;
	In2_t <= 0;
	In1_t <= 0;
	In0_t <= 0;
	#1 $display("");
	#1 $display("Case 8: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 9
	In3_t <= 1;
	In2_t <= 0;
	In1_t <= 0;
	In0_t <= 1;
	#1 $display("");
	#1 $display("Case 9: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 10
	In3_t <= 1;
	In2_t <= 0;
	In1_t <= 1;
	In0_t <= 0;
	#1 $display("");
	#1 $display("Case 10: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 11
	In3_t <= 1;
	In2_t <= 0;
	In1_t <= 1;
	In0_t <= 1;
	#1 $display("");
	#1 $display("Case 11: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 12
	In3_t <= 1;
	In2_t <= 1;
	In1_t <= 0;
	In0_t <= 0;
	#1 $display("");
	#1 $display("Case 12: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 13
	In3_t <= 1;
	In2_t <= 1;
	In1_t <= 0;
	In0_t <= 1;
	#1 $display("");
	#1 $display("Case 13: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 14
	In3_t <= 1;
	In2_t <= 1;
	In1_t <= 1;
	In0_t <= 0;
	#1 $display("");
	#1 $display("Case 14: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);
	
	//Case 15
	In3_t <= 1;
	In2_t <= 1;
	In1_t <= 1;
	In0_t <= 1;
	#1 $display("");
	#1 $display("Case 15: ");
	#1 $display("A_t = %b", A_t);
	#1 $display("B_t = %b", B_t);
	#1 $display("C_t = %b", C_t);
	#1 $display("D_t = %b", D_t);
	#1 $display("E_t = %b", E_t);
	#1 $display("F_t = %b", F_t);
	#1 $display("G_t = %b", G_t);

	end
endmodule
