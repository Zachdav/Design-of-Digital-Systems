`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 10/30/2017 
// Design Name: 
// Module Name:    Refresh
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module Refresh(Clk, Rst, Refresh, Selector);
   input Clk, Rst;
   output reg Refresh, Selector;
  
   parameter Divider = 2;
   reg[19:0] Counter;
   reg Clk_Count;
	
   always @(posedge Clk) begin
      if( Rst == 1 )begin
         Counter <= 0;
         Refresh <= 0;
			Selector <=0;
         Clk_Count <= 0;
      end
      else begin
         if( Counter == Divider ) begin
            Refresh <= ~Clk_Count;
				Selector <= ~Clk_Count;
            Clk_Count <= ~Clk_Count;
            Counter <= 0;
         end
         else begin
            Refresh <= Clk_Count;
				Selector <= Clk_Count;
            Clk_Count <= Clk_Count;
            Counter <= Counter + 1;
         end
      end
   end
endmodule
