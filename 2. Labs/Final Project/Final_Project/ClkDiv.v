`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer:       
// 
// Create Date:    20:08:28 11/15/2017 
// Design Name:    Clock Divider
// Module Name:    ClkDiv.v
// Project Name:   Final Project
// Description: 
//
//////////////////////////////////////////////////////////////////////////////////
// Generate a 1 kHz clock from 50 MHz clock
module ClkDiv(Clk, Rst, ClkOut);
   input Clk, Rst;
   output reg ClkOut;
	
	parameter DivVal = 25;//25000
   reg[25:0] DivCnt;
	reg ClkInt;

   always @(posedge Clk) begin
      if( Rst == 1 )
		begin
         DivCnt <= 0;
         ClkOut <= 0;
         ClkInt <= 0;
      end
      else 
		begin
         if( DivCnt == DivVal ) 
			begin
            ClkOut <= ~ClkInt;
            ClkInt <= ~ClkInt;
            DivCnt <= 0;
         end
         else 
			begin
            ClkOut <= ClkInt;
            ClkInt <= ClkInt;
            DivCnt <= DivCnt + 1;
         end
      end
   end
  endmodule
  