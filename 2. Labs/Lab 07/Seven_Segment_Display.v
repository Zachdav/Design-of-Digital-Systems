`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// Engineer:       Zachary Davis & Ryan Cruz
// 
// Create Date:    11:24:41 10/13/2017 
// Design Name:    Seven_Segment_Display
// Module Name:    Seven_Segment_Display  
// Description:    Displays the numbers 0-15 in hexidecimal on and LED display
//						 
////////////////////////////////////////////////////////////////////////////////
module Seven_Segment_Display(In, A, B, C, D, E, F, G);
	input [3:0] In;
	output A, B, C, D, E, F, G;
	reg A, B, C, D, E, F, G;
	
	always @ (In[3], In[2], In[1], In[0])
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
