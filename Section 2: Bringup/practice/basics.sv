`default_nettype none
module top_module(
    input a,
    input b,
    input c,
    input d,
    output out,
    output out_n   );

    wire one;

    assign one = a & b | c & d;
    assign out = one;
    assign out_n = ~out;

endmodule
