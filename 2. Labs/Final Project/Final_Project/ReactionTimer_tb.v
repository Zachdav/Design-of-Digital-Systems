`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Daivs & Ryan Cruz
// Engineer:       
// 
// Create Date:    20:08:28 11/15/2017 
// Design Name:    Reaction Timer TestBench
// Module Name:    ReactionTimer_tb.v
// Project Name:   Final Project
// Description: 
//
//////////////////////////////////////////////////////////////////////////////////
module ReactionTimer_tb();
	reg Clk, Rst, Start, LCDAck;
	wire [11:0] RandomValue;
	wire [7:0] LED;
	wire [9:0] ReactionTime;
	wire Cheat, Slow, Wait, LCDUpdate;
	//parameter [11:0]RandomValue = 11'b010011100010;
	
	RandomGen RandomGen_tb(Clk, Rst, RandomValue);
	LCDDisplay LCDDisplay_tb(Clk, Rst, Cheat, Slow, Wait, ReactionTime, LCDUpdate, LCDAck, LCD_Data, LCD_E, LCD_RS, LCD_RW);
	ReactionTimer ReactionTimer_tb(Clk, Rst, Start, LED, ReactionTime, Cheat, Slow, Wait, RandomValue, LCDUpdate, LCDAck);

always
	begin
		Clk <= 0;
		#20;
		Clk <= 1;
		#20;
		//Start <= 1;
		//#50;
		//Start <= 0;
	end
	
	initial
	begin
		Rst <= 0;
		LCDAck <= 0;
		Start <= 0;
		@(posedge Clk);
		#2;
		Start <= 1;
		@(posedge Clk);
		#2;
		LCDAck <= 1;
		@(posedge Clk);
		#2;
		Start <= 0;
		@(posedge Clk);
		#2;
		LCDAck <= 0;
		@(posedge Clk);
		Start <= 1;
		@(posedge Clk);
		@(posedge Clk);
		@(posedge Clk);
		@(posedge Clk);
		Start <= 0;
		@(posedge Clk);
		@(posedge Clk);
		#2;
		LCDAck <= 1;
		@(posedge Clk);
		@(posedge Clk);
		@(posedge Clk);
		#2;
		LCDAck <= 0;
		@(posedge Clk);
		@(posedge Clk);
		@(posedge Clk);
		#2;
		Start <=1;
		@(posedge Clk);
		@(posedge Clk);
		Rst <= 1;
		Start <= 0;
		@(posedge Clk);
		@(posedge Clk);
		@(posedge Clk);
	end
endmodule
