`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Zachary Davis
// 
// Create Date:    11:24:41 10/13/2017 
// Design Name: 	 Thunderbird Turn Signal
// Module Name:    Clock_Divider  
// Description: 	 A clock divider that divides 50 MHz into 1 Hz on the FPGA
//						 board.
//
//////////////////////////////////////////////////////////////////////////////////
module Clock_Divider(Clk_In, Div_Rst, Clk_Out);
	input Clk_In, Div_Rst;
	output reg Clk_Out;
	reg [24:0] counter;
	
	always @(posedge Clk_In or posedge Div_Rst)
		begin
		if (Div_Rst == 1'b1)
			begin
			counter <= 0;
			Clk_Out <= 0;
			end
		else
			begin
			counter <= counter + 1;
			if (counter == 5_000_000) //25_000_000
				begin
				counter <= 0;
				Clk_Out <= ~Clk_Out;
				end
			end
		end
endmodule
