`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 10/30/2017 
// Design Name: 
// Module Name:    BinToBCD
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module BinToBCD(Counter, Tens, Ones);
   input [3:0] Counter;
   output reg [3:0] Tens, Ones;

	always @ (Counter)
	begin
		if (Counter == 4'b0000)
			begin
			Ones <= 4'b0000;
			Tens <= 4'b0000;
			end
		else if (Counter == 4'b0001)
			begin
			Ones <= 4'b0001;
			Tens <= 4'b0000;
			end
		else if (Counter == 4'b0010)
			begin
			Ones <= 4'b0010;
			Tens <= 4'b0000;
			end
		else if (Counter == 4'b0011)
			begin
			Ones <= 4'b0011;
			Tens <= 4'b0000;
			end
		else if (Counter == 4'b0100)
			begin
			Ones <= 4'b0100;
			Tens <= 4'b0000;
			end
		else if (Counter == 4'b0101)
			begin
			Ones <= 4'b0101;
			Tens <= 4'b0000;
			end
		else if (Counter == 4'b0110)
			begin
			Ones <= 4'b0110;
			Tens <= 4'b0000;
			end
		else if (Counter == 4'b0111)
			begin
			Ones <= 4'b0111;
			Tens <= 4'b0000;
			end
		else if (Counter == 4'b1000)
			begin
			Ones <= 4'b1000;
			Tens <= 4'b0000;
			end
		else if (Counter == 4'b1001)
			begin
			Ones <= 4'b1001;
			Tens <= 4'b0000;
			end
		else if (Counter == 4'b1010)
			begin
			Ones <= 4'b0000;
			Tens <= 4'b0001;
			end
		else if (Counter == 4'b1011)
			begin
			Ones <= 4'b0001;
			Tens <= 4'b0001;
			end
		else if (Counter == 4'b1100)
			begin
			Ones <= 4'b0010;
			Tens <= 4'b0001;
			end
		else if (Counter == 4'b1101)
			begin
			Ones <= 4'b0011;
			Tens <= 4'b0001;
			end
		else if (Counter == 4'b1110)
			begin
			Ones <= 4'b0100;
			Tens <= 4'b0001;
			end
		else
			begin
			Ones <= 4'b0101;
			Tens <= 4'b0001;
			end
	end
endmodule
