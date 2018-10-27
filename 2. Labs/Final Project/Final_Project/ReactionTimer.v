`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company:        Zachary Davis & Ryan Cruz
// Engineer: 
// 
// Create Date:    20:08:28 11/15/2017 
// Design Name:    Reaction Timer
// Module Name:    ReactionTime.v
// Project Name:   Final Project
// Description: 
//
//////////////////////////////////////////////////////////////////////////////////
module ReactionTimer(Clk, Rst, Start, LED, ReactionTime, Cheat, Slow, Wait, RandomValue, LCDUpdate, LCDAck);
	input Start, LCDAck, Clk, Rst;
	input [12:0] RandomValue;
	output reg [9:0] ReactionTime;
	output reg [7:0] LED;
   output reg Cheat, Slow, Wait;
	output reg LCDUpdate;

	reg [12:0] counter = 0;
	reg [3:0] State;
	reg [9:0] delay;
	reg [12:0] RandomPlace;
	integer Debounce = 0;
	parameter 	S_Initial = 0,
					S_Wait = 1,
					S_Reaction = 2,
					S_Win = 3,
					S_Cheat = 4,
					S_Slow = 5,
					S_Delay = 6;
	initial 
	begin
		ReactionTime <= 0;
		LED <= 0;
		Cheat <= 0;
		Slow <= 0;	
		Wait <= 0;
		LCDUpdate <= 0;
		counter = 0;
		RandomPlace <= 0;
		State <= S_Initial;
	end
	always @(posedge Clk) 
	begin
		if( Rst == 1 ) 
		begin
			delay <= 0;
			Debounce <= S_Initial;
			State <= S_Initial;
		end
         
		case( State )
		//Intital State
      S_Initial: 
		begin
			LED <= 0;
			ReactionTime = 0;
			Cheat <= 0;
			Slow <= 0;
			Wait <= 0;
			LCDUpdate <= 0;
			counter = 0;
			if (Start == 1) 
			begin
				delay <= 0;
				Debounce <= S_Wait;
				State <= S_Wait;
			end
		end
   
		//Wait State
      S_Wait: 
		begin
			Wait <= 1;
			LCDUpdate <= 1;
			
			//Handshaking Process
			if ((LCDAck == 1) && (LCDUpdate == 1)) 
			begin
				LCDUpdate <= 0;
				Wait <= 0;
				RandomPlace <= RandomValue;
				State <= S_Reaction;
			end
		end
   
		//Cheating State
      S_Cheat: 
		begin
			Cheat <= 1;
			LCDUpdate <= 1;
			
			//Handshaking Process
			if ((LCDAck == 1) && (LCDUpdate == 1)) 
			begin
				LCDUpdate <= 0;
			end
			if ((LCDUpdate == 0) && (Start == 1)) 
			begin
				Debounce <= S_Initial;
				State <= S_Initial;
			end
      end
		
		//Slow State
      S_Slow: 
		begin
			Slow <= 1;
			LCDUpdate <= 1;
			LED <= 0;
		
			//Handshaking Process
			if ((LCDAck == 1) && (LCDUpdate == 1)) 
			begin
				LCDUpdate <= 0;
			end
			if ((LCDUpdate == 0) && (Start == 1)) 
			begin
				Debounce <= S_Initial;
				State <= S_Initial;
			end
		end
   
		//Reaction State
      S_Reaction: 
		begin
			if(counter == RandomPlace)
			begin
				LED <= 8'b1111_1111;
			end
			if(counter < RandomPlace && Start == 1)
			begin
				delay <= 0;
				Debounce <= S_Cheat;
				State <= S_Cheat;
			end
			else if((LED == 8'b1111_1111) && Start == 0 && counter > (RandomPlace+500))
			begin
				State <= S_Slow;
			end
			else if((LED == 8'b1111_1111) && Start == 1 && counter < (RandomPlace+500))
			begin
				ReactionTime = (counter-RandomPlace);
				delay <= 0;
				Debounce <= S_Win;
				State <= S_Win;
				State <= S_Win;
			end
			counter = counter+1;
		end
   
		//Win State
		S_Win:
		begin
			LED <= 0;
			LCDUpdate <= 1;
			
			//Handshaking Process
			if ((LCDAck == 1) && (LCDUpdate == 1)) 
			begin
				LCDUpdate <= 0;
			end
			if ((LCDUpdate == 0) && (Start == 1)) 
			begin
				Debounce <= S_Initial;
				State <= S_Initial; 
			end
		end
    
		//Button Press State
		S_Delay: 
		begin
			if( delay == 1) 
			begin
				if (Start == 0) 
				begin
					State <= Debounce;
				end
				else
					delay <= 0;
				end
			else //incremental delay
			begin
				delay <= delay + 1;
				State <= S_Delay;
				end
			end    
		endcase
	end
endmodule
