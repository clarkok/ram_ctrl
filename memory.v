`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:02:53 10/13/2014 
// Design Name: 
// Module Name:    memory 
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
module memory(
    input clk,
    input [31:0] addr,
    input [7:0] data_i,
    output [7:0] data_o,
    input write_enable,
    input go,
    output done,
    
    output [25:0] ram_addr,
    inout [15:0] ram_data,
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

  reg ce, oe, we, ub = 1, lb = 1, adv = 0;
  assign ram_ub = ub;
  assign ram_lb = lb;
  assign ram_adv = adv;
      
  assign ram_oe = oe;
  assign ram_we = we;
  assign ram_ce = ce;
  
  reg done_buff;
  assign done = done_buff;
      
  reg cre = 0;
  assign ram_cre = cre;
  
  reg [7:0] data_o_buff;
  assign data_o = data_o_buff;
  
  reg clk_buff = 0;
  assign ram_clk = clk_buff;
  
  reg [25:0] addr_;
  assign ram_addr = addr_;
  
  reg [15:0] data_buff;
  assign ram_data = data_buff;
  
`define RAM_WAIT 0
`define RAM_IDLE 1
`define WAIT_TIME 10
  
  reg state = `RAM_IDLE;
  
  reg [3:0] timer;
  reg carrier;
  
  reg in_rcr_mode = 0;
  reg [5:0] rcr_mode_state = 0;
  
  always @ ( posedge clk ) begin
    if ( !in_rcr_mode ) begin
      rcr_mode_state <= rcr_mode_state + 1;
      
      if ( rcr_mode_state == 0 ) begin
        addr_ <= 23'b000_00_0000000000_1_00_1_0_000;
        cre <= 1;
        ce <= 0;
        adv <= 0;
      end
      if ( rcr_mode_state == 2 ) begin
        we <= 0;
      end
      if ( rcr_mode_state == 18 ) begin
        ce <= 1;
        we <= 1;
        adv <= 1;
      end
      if ( rcr_mode_state == 19 ) begin
        cre <= 0;
      end;
      if ( rcr_mode_state == 35 ) begin
        addr_ <= 0;
      end;
      if ( rcr_mode_state == 37 ) begin
        ce <= 0;
        oe <= 0;
        adv <= 0;
        ub <= 0;
        lb <= 0;
      end;
      if ( rcr_mode_state == 39 ) begin
        ce <= 1;
        oe <= 1;
        in_rcr_mode <= 1;
      end;
    end
    else
      case (state)
        `RAM_IDLE: begin
          if ( go ) begin
            if ( write_enable ) begin
              data_buff <= data_i;
              data_o_buff <= 8'b0;
            end;
            we <= ~write_enable;
            oe <= write_enable;
            addr_ <= addr[25:0];
            
            timer <= 4'b0;
            ce <= 0;
            done_buff <= 0;
            
            state <= `RAM_WAIT;
          end;
        end
        `RAM_WAIT: begin
          {carrier, timer} <= timer + 1;
          if ( timer == `WAIT_TIME ) begin
            data_o_buff <= ram_data;
            
            ce <= 1;
            oe <= 1;
            we <= 1;
            done_buff <= 1;
            
            state <= `RAM_IDLE;
          end;
        end
        default: begin
          state <= `RAM_IDLE;
        end
      endcase;
  end;

endmodule
