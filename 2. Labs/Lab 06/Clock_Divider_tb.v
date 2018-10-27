`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Zachary Davis
// 
// Create Date:    11:24:41 10/13/2017 
// Design Name: 	 Thunderbird Turn Signal
// Module Name:    Clock_Divider_tb 
// Description: 	 A clock divider that divides 50 MHz into 1 Hz on the FPGA
//						 board.  Simulator.
//
//////////////////////////////////////////////////////////////////////////////////
module Clock_Divider_tb();
	reg Clk_In_s, Div_Rst_s;
	wire Clk_Out_s;
	
	Clock_Divider Clock_Divider_1(Clk_In_s, Div_Rst_s, Clk_Out_s);
	
	always
		begin
			Clk_In_s <= 1;
			#10;
			Clk_In_s <= 0;
			#10;
		end
	
	initial begin
		Div_Rst_s <= 0;
		#5;
		Div_Rst_s <= 1;
		#5;
		Div_Rst_s <= 0;
	end
endmodule
