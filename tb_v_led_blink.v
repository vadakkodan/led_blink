`include "v_led_blink.v"
`timescale 1ns/100ps

module tb_led_blink;
  reg tb_clock  = 1'b0;
  reg tb_enable = 1'b0;
  reg tb_sw1    = 1'b0;
  reg tb_sw2    = 1'b0;
  wire tb_led;

  led_blink tb_led_blink
  (
    .clock (tb_clock),
    .enable (tb_enable),
    .sw1 (tb_sw1),
    .sw2 (tb_sw2),
    .led (tb_led)
  );

always #10 tb_clock <= !tb_clock;

initial begin
  tb_enable = 1'b1;
  tb_sw1    = 1'b0;
  tb_sw2    = 1'b0;
  #1_000_000_000 //One toggle takes 0.005s, that is a period takes 0.01s. Run values for 1sec.

  tb_enable = 1'b1;
  tb_sw1    = 1'b0;
  tb_sw2    = 1'b1;
  #1_000_000_000 // One toggle takes (500_000 * 0.02) us = 0.01 sec. Run the simulation for 1sec.

  tb_enable = 1'b1;
  tb_sw1    = 1'b1;
  tb_sw2    = 1'b0;
  #3_000_000_000 // One toggle takes (25_000_00 *0.02)us = 0.05 sec. Run the simulation for 2 sec.

  tb_enable = 1'b1;
  tb_sw1    = 1'b1;
  tb_sw2    = 1'b1;
  #3_000_000_000 // One toggle takes (25_000_000 * 0.02)us = 0.25 sec. Run the simulation for 3 sec.
  $display("Test Complete");
  $stop;

end

endmodule

