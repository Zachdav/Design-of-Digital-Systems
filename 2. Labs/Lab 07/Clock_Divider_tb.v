`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer:       Zachary Davis & Ryan Cruz
// 
// Create Date:    11:24:41 10/13/2017 
// Design Name: 	 Thunderbird Turn Signal
// Module Name:    Clock_Divider_tb 
// Description: 	 A clock divider that divides 50 MHz into 1 Hz on the FPGA
//						 board.  Simulator.
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
