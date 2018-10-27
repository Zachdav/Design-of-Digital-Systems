`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 10/30/2017 
// Design Name: 
// Module Name:    UpDown
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module UpDown_tb();
	reg Clk_t, Rst_t, UpDown_t, Enable_t;
	wire [3:0] Count_t;
	
	UpDown UpDown_1(Clk_t, Rst_t, Enable_t, UpDown_t, Count_t);
	
	initial
	begin
		Clk_t <= 0;
		Rst_t <= 0;
		Enable_t <= 0;
		UpDown_t <= 0;
	end
	
	always
	begin
		#10 Clk_t <= ~Clk_t;
	end
	
	initial 
	begin
		#5;
		UpDown_t <= 0; Rst_t <= 0; Enable_t <= 0;
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		#5;
		UpDown_t <= 1; Rst_t <= 0; Enable_t <= 1;
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		#5;
		UpDown_t <= 0; Rst_t <= 0; Enable_t <= 1;
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		#5;
		Enable_t <= 0;
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		#5;
		Enable_t <= 1;
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		@(posedge Clk_t);
		#5;
		Rst_t <= 1;
	end
endmodule
