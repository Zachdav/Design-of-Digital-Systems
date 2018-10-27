`timescale 1 ns / 1ps

module TopModule_tb();
	reg Clk_s, Rst_s, Enable_s, UpDown_s, DivRst_s;
	wire A_s, B_s, C_s, D_s, E_s, F_s, G_s, ClkOut_s, SegSel_s, Refresh_s;
	wire [3:0] Cnt_s;
	wire [3:0] Tens_s;
	wire [3:0] Ones_s;
	wire [3:0] DValue_s;
	
	Clock_Divider Clock_Divider_1(Clk_s, DivRst_s, ClkOut_s);
	UpDown UpDown_1(ClkOut_s, Rst_s, Enable_s, UpDown_s, Cnt_s);
	BinToBCD BinToBCD_1(Cnt_s, Tens_s, Ones_s);
	Refresh Refresh_1 (Clk_s, Rst_s, Refresh_s, SegSel_s);
	Mux2x1 Mux2x1_1 (Tens_s, Ones_s, Refresh_s, DValue_s);
	Seven_Segment_Display Seven_Segment_Display_1 (DValue_s, A_s, B_s, C_s, D_s, E_s, F_s, G_s);
	
	always begin
	Clk_s <= 0;
	#10;
	Clk_s <= 1;
	#10;
	end
	
	initial begin
	Rst_s <= 1; Enable_s <= 0; UpDown_s <= 0; DivRst_s <= 1;
	#50;
	@ (posedge Clk_s);
	Rst_s <= 0; Enable_s <= 1; UpDown_s <= 1; DivRst_s <= 0;
	#1900;
	@ (posedge Clk_s);
	Rst_s <= 0; Enable_s <= 0; UpDown_s <= 1; DivRst_s <= 0;
	#100
	@ (posedge Clk_s);
	Rst_s <= 0; Enable_s <= 1; UpDown_s <= 1; DivRst_s <= 0;
	#100
	@ (posedge Clk_s);
	Rst_s <= 0; Enable_s <= 1; UpDown_s <= 0; DivRst_s <= 0;
	#100
	@ (posedge Clk_s);
	Rst_s <= 0; Enable_s <= 1; UpDown_s <= 1; DivRst_s <= 0;
	#100
	@ (posedge Clk_s);
	Rst_s <= 0; Enable_s <= 1; UpDown_s <= 1; DivRst_s <= 1;
	#100
	@ (posedge Clk_s);
	Rst_s <= 0; Enable_s <= 1; UpDown_s <= 1; DivRst_s <= 1;
	#1400
	@ (posedge Clk_s);
	Rst_s <= 0; Enable_s <= 1; UpDown_s <= 0; DivRst_s <= 0;
	#800;
	@ (posedge Clk_s);
	Rst_s <= 0; Enable_s <= 1; UpDown_s <= 0; DivRst_s <= 0;
	@ (posedge Clk_s);
	#50;
	Rst_s <= 0; Enable_s <= 0; UpDown_s <= 0; DivRst_s <= 1;
	@ (posedge Clk_s);
	#50;
	Rst_s <= 1; Enable_s <= 0; UpDown_s <= 0; DivRst_s <= 0;
	end
endmodule
