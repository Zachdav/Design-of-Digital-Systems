`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 10/30/2017 
// Design Name:    
// Module Name:    Clock Divider
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module Clock_Divider_tb();
	reg Clk_In_t, Div_Rst_t;
	wire Clk_Out_t;
	
	Clock_Divider Clock_Divider_1(Clk_In_t, Div_Rst_t, Clk_Out_t);
	
	always
		begin
			Clk_In_t <= 1;
			#10;
			Clk_In_t <= 0;
			#10;
		end
	
	initial begin
		Div_Rst_t <= 0;
		#5;
		Div_Rst_t <= 1;
		#5;
		Div_Rst_t <= 0;
	end
endmodule
