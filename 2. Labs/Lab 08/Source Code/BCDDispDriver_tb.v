`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 11/06/2017 
// Design Name: 
// Module Name:    
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module Display_Driver_tb();
	reg Clk_s, Rst_s;
	reg [3:0] Tens_s;
	reg [3:0] Ones_s;
	wire A_s, B_s, C_s, D_s, E_s, F_s, G_s; 
	wire Refresh_s;
	wire [3:0] DValue_s;
	wire Selector_s;
	
	Refresh Refresh_1 (Clk_s, Rst_s, Refresh_s, Selector_s);
	Mux2x1 Mux2x1_1 (Tens_s, Ones_s, Refresh_s, DValue_s);
	Seven_Segment_Display Seven_Segment_Display_1 (DValue_s, A_s, B_s, C_s, D_s, E_s, F_s, G_s);
		
	always
		begin
			Clk_s <= 1;
			#10;
			Clk_s <= 0;
			#10;
	end
	
	initial 
	begin
		Rst_s <= 1; Tens_s <= 4'b0000; Ones_s <= 4'b0000;
		#20;
		Rst_s<= 0; Tens_s <= 4'b0001; Ones_s <= 4'b0000;
		#50 $display ("DValue_s = %b", DValue_s);
		Rst_s<=0; Tens_s <= 4'b0001; Ones_s <= 4'b0001;
		#50 $display ("DValue_s = %b", DValue_s);
		Rst_s <= 0; Tens_s <= 4'b0001; Ones_s <= 4'b0011;
		#50 $display ("DValue_s = %b", DValue_s);
		Rst_s<=0; Tens_s <= 4'b0001; Ones_s <= 4'b0010;
		#50 $display ("DValue_s = %b", DValue_s);
		Rst_s<=0; Tens_s <= 4'b0000; Ones_s <= 4'b1111;
		#50 $display ("DValue_s = %b", DValue_s);
		Rst_s<=0; Tens_s <= 4'b0000; Ones_s <= 4'b1000;
		#50 $display ("DValue_s = %b", DValue_s);
		Rst_s<=0; Tens_s <= 4'b0000; Ones_s <= 4'b1010;
		#50 $display ("DValue_s = %b", DValue_s);
	end
endmodule
