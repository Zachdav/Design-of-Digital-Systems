//beltwarn_structural.v
`timescale 1ns / 1ps
module beltwarn_structural( K, P, S, W);
	input K,P,S;
	output W;

	wire N1;

	not Inverter(N1, S);
	and And(W, N1, K, P);

endmodule
