`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:06:20 10/13/2014 
// Design Name: 
// Module Name:    memory_top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module memory_top(
    output [7:0] led,
    input [7:0] sw,
    output [25:0] ram_addr,
    inout [15:0] ram_data,
    input clk,
    input btnu,
    output ram_oe,
    output ram_we,
    output ram_clk,
    output ram_adv,
    input ram_wait,
    output ram_ce,
    output ram_ub,
    output ram_lb,
    output ram_cre
    );
    
  reg [31:0] addr;
  reg [7:0] data_i;
  reg [7:0] data_o;
  reg we;
  wire done;
  reg go;
  
  wire [7:0] data_o_wire;
  
  assign led[3:0] = data_o[3:0];
  //assign led[3:0] = ram_data[3:0];
  
  reg clk_delay = 0;
  reg [25:0] delay_timer;
  assign led[7] = clk_delay;
  assign led[4] = done;
  assign led[5] = ram_oe;
  assign led[6] = ram_we;
  
  /*
  always @ ( posedge clk ) begin
    delay_timer = delay_timer + 1;
    if (delay_timer == 0)
      clk_delay = ~clk_delay;
  end;
  */

  memory M(
    clk,
    addr,
    data_i,
    data_o_wire,
    we,
    go,
    done,
    
    ram_addr,
    ram_data,
    ram_oe,
    ram_we,
    ram_clk,
    ram_adv,
    ram_wait,
    ram_ce,
    ram_ub,
    ram_lb,
    ram_cre
  );
  
  always @ ( posedge clk ) begin
    if ( done ) begin
      we = btnu;
      addr[3:0] = sw[3:0];
      data_i[3:0] = sw[7:4];
      go = 1;
      data_o = data_o_wire;
    end;
  end;

endmodule
