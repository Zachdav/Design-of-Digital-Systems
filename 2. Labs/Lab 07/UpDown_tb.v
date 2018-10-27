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
module UpDown_tb();
	reg Clk_Out_t, Rst_t, UpDown_t, Enable_t;
	wire [3:0] Count_t;
	
	UpDown UpDown_1(Clk_Out_t, Rst_t, Enable_t, UpDown_t, Count_t);
	
	initial
	Clk_Out_t <= 0;
	
	always
	#10 Clk_Out_t <= ~Clk_Out_t;
	
	initial begin
	UpDown_t <= 0; Rst_t <= 0; Enable_t <= 0;
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	UpDown_t <= 1; Rst_t <= 0; Enable_t <= 1;
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	UpDown_t <= 0; Rst_t <= 0; Enable_t <= 1;
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	Enable_t <= 0;
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);
	Enable_t <= 1;
	@(posedge Clk_Out_t);
	@(posedge Clk_Out_t);	
	@(posedge Clk_Out_t);
	Rst_t <= 1;
	end
endmodule
