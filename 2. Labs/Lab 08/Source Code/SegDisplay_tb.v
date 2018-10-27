`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 10/30/2017 
// Design Name:    
// Module Name:    Seven Segment Display
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module Seven_Segment_Display_tb();
	reg [3:0] In_t;
	wire A_t, B_t, C_t, D_t, E_t, F_t, G_t;
	
	Seven_Segment_Display Seven_Segment_Display_1(In_t, A_t, B_t, C_t, D_t, E_t, F_t, G_t);
	
	initial
	begin
		//case 0
		In_t[3] <= 0; In_t[2] <= 0; In_t[1] <= 0; In_t[0] <= 0;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 1
		In_t[3] <= 0; In_t[2] <= 0; In_t[1] <= 0; In_t[0] <= 1;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 2
		In_t[3] <= 0; In_t[2] <= 0; In_t[1] <= 1; In_t[0] <= 0;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 3
		In_t[3] <= 0; In_t[2] <= 0; In_t[1] <= 1; In_t[0] <= 1;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 4
		In_t[3] <= 0; In_t[2] <= 1; In_t[1] <= 0; In_t[0] <= 0;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 5
		In_t[3] <= 0; In_t[2] <= 1; In_t[1] <= 0; In_t[0] <= 1;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 6
		In_t[3] <= 0; In_t[2] <= 1; In_t[1] <= 1; In_t[0] <= 0;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 7
		In_t[3] <= 0; In_t[2] <= 1; In_t[1] <= 1; In_t[0] <= 1;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 8
		In_t[3] <= 0; In_t[2] <= 0; In_t[1] <= 0; In_t[0] <= 0;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 0
		In_t[3] <= 1; In_t[2] <= 0; In_t[1] <= 0; In_t[0] <= 0;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 9
		In_t[3] <= 1; In_t[2] <= 0; In_t[1] <= 0; In_t[0] <= 1;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 10
		In_t[3] <= 1; In_t[2] <= 0; In_t[1] <= 1; In_t[0] <= 0;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 11
		In_t[3] <= 1; In_t[2] <= 0; In_t[1] <= 1; In_t[0] <= 1;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 12
		In_t[3] <= 1; In_t[2] <= 1; In_t[1] <= 0; In_t[0] <= 0;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 13
		In_t[3] <= 1; In_t[2] <= 1; In_t[1] <= 0; In_t[0] <= 1;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 14
		In_t[3] <= 1; In_t[2] <= 1; In_t[1] <= 1; In_t[0] <= 0;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
		
		//case 15
		In_t[3] <= 1; In_t[2] <= 1; In_t[1] <= 1; In_t[0] <= 1;
		#1 $display("A_t = %b", A_t);
		#1 $display("B_t = %b", B_t);
		#1 $display("C_t = %b", C_t);
		#1 $display("D_t = %b", D_t);
		#1 $display("E_t = %b", E_t);
		#1 $display("F_t = %b", F_t);
		#1 $display("G_t = %b", G_t);
	
	end
endmodule
