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
			if (counter == 25_000_000) //Set to 5 to see behavior in sim.
				begin
				counter <= 0;
				Clk_Out <= ~Clk_Out;
				end
			end
		end
endmodule
