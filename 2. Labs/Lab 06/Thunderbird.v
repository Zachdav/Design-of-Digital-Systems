`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Zachary Davis & Ryan Cruz
// Create Date:    12:12:08 10/06/2017 
// Design Name: 	 Thunderbird
// Module Name:    Thunderbird.v 
// Project Name: 	 Thunderbird
// Target Devices: Spartan 3E
// Description: 	 Behavioral Design of the thunderbird blinker problem that
//						 was given in class.
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Thunderbird(L, R, Rst, Clk, LA, LB, LC, RA, RB, RC);
	
	//Define inputs and outputs of the circuit.  Using a 
	//3-bit register.
	input L, R, Rst, Clk;
	output reg LA, LB, LC, RA, RB, RC;
	reg [2:0] State, State_Next;

	//Defining all of the seven states from our FSM.
	parameter
		S_Off = 0,
		SL_On1 = 1,
		SL_On2 = 2,
		SL_On3 = 3,
		SR_On1 = 4,
		SR_On2 = 5,
		SR_On3 = 6;
		
//On every positive clock edge if reset is on then return to the off
//state, otherwise the current state equals whatever the next-state was
//defined as.
always@(posedge Clk)
begin
		if(Rst == 1)
			State <= S_Off;
		else
			State <= State_Next;
end

//Conditional Logic
always@(State, R, L, Rst)
	begin
		case(State)
			//Define all outputs at 0 before the first clock edge.
			default:
			begin
				LA <= 0; LB <= 0; LC <= 0;
				RA <= 0; RB <= 0; RC <= 0;
				State_Next <= S_Off;
			end
			
			//The off state has no lights on.  If neither R or L is 1
			//or R and L are 1 we remain in the off state as well as 
			//reset.  R or L being 1 initiates the blinker states.
			S_Off:
			begin
				LA <= 0; LB <= 0; LC <= 0;
				RA <= 0; RB <= 0; RC <= 0;
				if((Rst==0) && (R==0) && (L==1))
					State_Next <= SL_On1;
				else if((Rst==0) && (R==1) && (L==0))
					State_Next <= SR_On1;
				else if((R==1) && (L==1))
					State_Next <= S_Off;
				else if((R==0) && (L==0))
					State_Next <= S_Off;
				else 
					State_Next <= S_Off;	
			end
			
			//This is the first of three blinker states.  La is one
			//only.  If only R is on then the left cycle is ended 
			//and the right cycle is begun.  Both R and L being on 
			//or off do nothing by design.
			SL_On1:
			begin
				LA <= 1; LB <= 0; LC <= 0;
				RA <= 0; RB <= 0; RC <= 0;
				if((Rst==0) && (R==1) && (L==0))
					State_Next <= SR_On1;
				else if (((Rst==0) && (R==1) && (L==1)) || ((Rst==0) && (R==0)))
					State_Next <= SL_On2;
				else
					State_Next <= S_Off;
			end
			
			//This is the second of the three states.  This has the same
			//properties as above.
			SL_On2:
			begin
				LA <= 1; LB <= 1; LC <= 0;
				RA <= 0; RB <= 0; RC <= 0;
				if((Rst==0) && (R==1) && (L==0))
					State_Next <= SR_On1;
				else if(((Rst==0) && (R==1) && (L==1))|| ((Rst==0) && (R==0)))
					State_Next <= SL_On3;
				else
					State_Next <= S_Off;
			end
			
			//The final left on state.  If R is one then the right cycle
			//is begun otherwise its back to the off state.
			SL_On3:
			begin
				LA <= 1; LB <= 1; LC <= 1;
				RA <= 0; RB <= 0; RC <= 0;
				if((Rst==0) && (R==1) && (L==0))
					State_Next <= SR_On1;
				else
					State_Next <= S_Off;
			end
			
			
			//The same properties as the left counter part.
			SR_On1:
			begin
				LA <= 0; LB <= 0; LC <= 0;
				RA <= 1; RB <= 0; RC <= 0;
				if((Rst==0) && (R==0) && (L==1))
					State_Next <= SL_On1;
				else if(((Rst==0) && (R==1) && (L==1))|| ((Rst==0) && (L==0)))
					State_Next <= SR_On2;
				else
					State_Next <= S_Off;
			end
			
			//The same properties as the left counterpart.
			SR_On2:
			begin
				LA <= 0; LB <= 0; LC <= 0;
				RA <= 1; RB <= 1; RC <= 0;
				if((Rst==0) && (R==0) && (L==1))
					State_Next <= SL_On1;
				else if(((Rst==0) && (R==1) && (L==1))|| ((Rst==0) && (L==0)))
					State_Next <= SR_On3;
				else
					State_Next <= S_Off;
			end
			
			//The same properties as the left counterpart.
			SR_On3:
			begin
				LA <= 0; LB <= 0; LC <= 0;
				RA <= 1; RB <= 1; RC <= 1;
				if((Rst==0) && (R==0) && (L==1))
					State_Next <= SL_On1;
				else
					State_Next <= S_Off;
			end
		endcase
	end
endmodule
