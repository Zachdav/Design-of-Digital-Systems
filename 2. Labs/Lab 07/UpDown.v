`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// Engineer:      Zachary Davis & Ryan Cruz
// 
// Create Date:    11:24:41 10/13/2017 
// Design Name:    UpDown_tb
// Module Name:    UpDown  
// Description:    Uses switches to control the seven segment display by 
//                 counting up or down on the rising edge of a clock cycle.
//						 
////////////////////////////////////////////////////////////////////////////////
module UpDown(Clk_Out, Rst, Enable, UpDown, Count);
	input Clk_Out, Rst, Enable, UpDown;
	output reg [3:0] Count = 4'b0000;
	
	always @ (posedge Clk_Out)
		begin
		if (Rst == 4'b0001)
			Count <= 4'b0000;
		else if (Enable == 4'b0000)
			Count <= Count;
		else
			begin
			if (UpDown == 4'b0001)
				begin
				if (Count == 4'b1111)
					Count <= 4'b0000;
				else
					Count <= Count + 4'b0001;
				end
			else
				begin
				if (Count == 4'b0000)
					Count <= 4'b1111;
				else
					Count <= Count - 4'b0001;
				end
		end
	end
endmodule
