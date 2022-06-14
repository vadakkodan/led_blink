module led_blink(
  input clock,
  input enable,
  input sw1,
  input sw2,
  output led);

parameter count_100Hz = 250_000;
parameter count_50Hz  = 500_000;
parameter count_10Hz  = 25_000_00;
parameter count_1Hz   = 25_000_000;

reg [31:0] r_100Hz_counter = 32'b0;
reg [31:0] r_50Hz_counter  = 32'b0;
reg [31:0] r_10Hz_counter  = 32'b0;
reg [31:0] r_1Hz_counter   = 32'b0;

reg t_100_toggle = 1'b0;
reg t_50_toggle = 1'b0;
reg t_10_toggle = 1'b0;
reg t_1_toggle = 1'b0;

reg o_led;


//begin

always @ (posedge clock)
begin
  if (r_100Hz_counter ==  count_100Hz -1)
  begin
    t_100_toggle    <= !(t_100_toggle);
    r_100Hz_counter <= 0;
  end
  else
    r_100Hz_counter <= r_100Hz_counter +1;
end

always @ (posedge clock)
begin
  if (r_50Hz_counter ==  count_50Hz -1)
  begin
    t_50_toggle    <= !(t_50_toggle);
    r_50Hz_counter <= 0;
  end
  else
    r_50Hz_counter <= r_50Hz_counter +1;
end

always @ (posedge clock)
begin
  if (r_10Hz_counter ==  count_10Hz -1)
  begin
    t_10_toggle    <= !(t_10_toggle);
    r_10Hz_counter <= 0;
  end
  else
    r_10Hz_counter <= r_10Hz_counter +1;
end


always @ (posedge clock)
begin
  if (r_1Hz_counter ==  count_1Hz -1)
  begin
    t_1_toggle    <= !(t_1_toggle);
    r_1Hz_counter <= 0;
  end
  else
    r_1Hz_counter <= r_1Hz_counter +1;
end


always @ (*)
begin
  if (enable)
  begin
    case ({sw1,sw2})
      2'b00 : o_led <= t_100_toggle;
      2'b01 : o_led <= t_50_toggle;
      2'b10 : o_led <= t_10_toggle;
      2'b11 : o_led <= t_1_toggle;
      default: o_led <= 0;
    endcase
  end
end

assign led = o_led;
//end
endmodule

