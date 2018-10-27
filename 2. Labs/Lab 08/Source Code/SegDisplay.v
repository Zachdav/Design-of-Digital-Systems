`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    13:43:37 10/30/2017 
// Design Name:    
// Module Name:    Seven Segment Display
// Project Name:   Binary to Binary Coded Decimal
//
//////////////////////////////////////////////////////////////////////////////////
module Seven_Segment_Display(In, A, B, C, D, E, F, G);
	input [3:0] In;
	output reg A, B, C, D, E, F, G;
	
	always @ (In)
	begin
		if (In[3] == 0 && In[2] == 0 && In[1] == 0 && In[0] == 0)
			begin
			A <= 1;
			B <= 1;
			C <= 1;
			D <= 1;
			E <= 1;
			F <= 1;
			G <= 0;
			end
		else if (In[3] == 0 && In[2] == 0 && In[1] == 0 && In[0] == 1)
			begin
			A <= 0;
			B <= 1;
			C <= 1;
			D <= 0;
			E <= 0;
			F <= 0;
			G <= 0;
			end
		else if (In[3] == 0 && In[2] == 0 && In[1] == 1 && In[0] == 0)
			begin
			A <= 1;
			B <= 1;
			C <= 0;
			D <= 1;
			E <= 1;
			F <= 0;
			G <= 1;
			end
		else if (In[3] == 0 && In[2] == 0 && In[1] == 1 && In[0] == 1)
			begin
			A <= 1;
			B <= 1;
			C <= 1;
			D <= 1;
			E <= 0;
			F <= 0;
			G <= 1;
			end
		else if (In[3] == 0 && In[2] == 1 && In[1] == 0 && In[0] == 0)
			begin
			A <= 0;
			B <= 1;
			C <= 1;
			D <= 0;
			E <= 0;
			F <= 1;
			G <= 1;
			end
		else if (In[3] == 0 && In[2] == 1 && In[1] == 0 && In[0] == 1)
			begin
			A <= 1;
			B <= 0;
			C <= 1;
			D <= 1;
			E <= 0;
			F <= 1;
			G <= 1;
			end
		else if (In[3] == 0 && In[2] == 1 && In[1] == 1 && In[0] == 0)
			begin
			A <= 1;
			B <= 0;
			C <= 1;
			D <= 1;
			E <= 1;
			F <= 1;
			G <= 1;
			end
		else if (In[3] == 0 && In[2] == 1 && In[1] == 1 && In[0] == 1)
			begin
			A <= 1;
			B <= 1;
			C <= 1;
			D <= 0;
			E <= 0;
			F <= 0;
			G <= 0;
			end
		else if (In[3] == 1 && In[2] == 0 && In[1] == 0 && In[0] == 0)
			begin
			A <= 1;
			B <= 1;
			C <= 1;
			D <= 1;
			E <= 1;
			F <= 1;
			G <= 1;
			end
		else if (In[3] == 1 && In[2] == 0 && In[1] == 0 && In[0] == 1)
			begin
			A <= 1;
			B <= 1;
			C <= 1;
			D <= 1;
			E <= 0;
			F <= 1;
			G <= 1;
			end
		else if (In[3] == 1 && In[2] == 0 && In[1] == 1 && In[0] == 0)
			begin
			A <= 1;
			B <= 1;
			C <= 1;
			D <= 0;
			E <= 1;
			F <= 1;
			G <= 1;
			end
		else if (In[3] == 1 && In[2] == 0 && In[1] == 1 && In[0] == 1)
			begin
			A <= 0;
			B <= 0;
			C <= 1;
			D <= 1;
			E <= 1;
			F <= 1;
			G <= 1;
			end
		else if (In[3] == 1 && In[2] == 1 && In[1] == 0 && In[0] == 0)
			begin
			A <= 1;
			B <= 0;
			C <= 0;
			D <= 1;
			E <= 1;
			F <= 1;
			G <= 0;
			end
		else if (In[3] == 1 && In[2] == 1 && In[1] == 0 && In[0] == 1)
			begin
			A <= 0;
			B <= 1;
			C <= 1;
			D <= 1;
			E <= 1;
			F <= 0;
			G <= 1;
			end
		else if (In[3] == 1 && In[2] == 1 && In[1] == 1 && In[0] == 0)
			begin
			A <= 1;
			B <= 0;
			C <= 0;
			D <= 1;
			E <= 1;
			F <= 1;
			G <= 1;
			end
		else
			begin
			A <= 1;
			B <= 0;
			C <= 0;
			D <= 0;
			E <= 1;
			F <= 1;
			G <= 1;
			end
	end
endmodule
