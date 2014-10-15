`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:02:35 10/13/2014
// Design Name:   memory
// Module Name:   /home/c/projects/memory/memory_test.v
// Project Name:  memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module memory_test;

	// Inputs
	reg clk;
	reg [31:0] addr;
	reg [7:0] data_i;
	reg write_enable;
	reg go;
	reg ram_wait;

	// Outputs
	wire [7:0] data_o;
	wire done;
	wire [25:0] ram_addr;
	wire ram_oe;
	wire ram_we;
	wire ram_clk;
	wire ram_adv;
	wire ram_ce;
	wire ram_ub;
	wire ram_lb;
	wire ram_cre;

	// Bidirs
	wire [15:0] ram_data;

	// Instantiate the Unit Under Test (UUT)
	memory uut (
		.clk(clk), 
		.addr(addr), 
		.data_i(data_i), 
		.data_o(data_o), 
		.write_enable(write_enable), 
		.go(go), 
		.done(done), 
		.ram_addr(ram_addr), 
		.ram_data(ram_data), 
		.ram_oe(ram_oe), 
		.ram_we(ram_we), 
		.ram_clk(ram_clk), 
		.ram_adv(ram_adv), 
		.ram_wait(ram_wait), 
		.ram_ce(ram_ce), 
		.ram_ub(ram_ub), 
		.ram_lb(ram_lb), 
		.ram_cre(ram_cre)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		addr = 0;
		data_i = 0;
		write_enable = 0;
		go = 0;
		ram_wait = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
    
    fork
      forever #10 clk = ~clk;
      
      #150 addr = 32'b10;
      #150 data_i = 0;
      #150 go = 1;
      #350 go = 0;
      
      #400 write_enable = 1;
      #400 go = 1;
      #600 go = 0;
    join;

	end
      
endmodule

