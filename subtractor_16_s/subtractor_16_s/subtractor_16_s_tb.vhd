--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   
-- Design Name:   
-- Module Name:   C:/Users/Admin00/Documents/Polito/Specification and simulation of digital systems/Mini assignment/subtractor_16_s/subtractor_16_s/subtractor_16_s_tb.vhd
-- Project Name:  subtractor_16_s
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: top_level_subtractor_16_s
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE std.textio.ALL;
use ieee.std_logic_textio.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY subtractor_16_s_tb IS
END subtractor_16_s_tb;
 
ARCHITECTURE behavior OF subtractor_16_s_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top_level_subtractor_16_s
    PORT(
         a : IN  std_logic_vector(15 downto 0);
         b : IN  std_logic_vector(15 downto 0);
         clk : IN  std_logic;
         ce : IN  std_logic;
         s : OUT  std_logic_vector(16 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(15 downto 0) := (others => '0');
   signal b : std_logic_vector(15 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal ce : std_logic := '0';

 	--Outputs
   signal s : std_logic_vector(16 downto 0);
	signal Err_s: std_logic;
	signal Exp_v: std_logic_vector(16 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top_level_subtractor_16_s PORT MAP (
          a => a,
          b => b,
          clk => clk,
          ce => ce,
          s => s
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 
 --Process that reads input values from a file 
	VectorProc: PROCESS
    FILE vectorfile: text; 
    VARIABLE inputline: line;
    variable v_A : std_logic_vector(15 downto 0);
    variable v_B : std_logic_vector(15 downto 0);
    variable v_SPACE     : character;
	 
  BEGIN
    file_open(vectorfile, "vector.txt", read_mode);
		ce <= '1';
		a <= (others => '0');
		b <= (others => '0');
  
  --There is a while that read all input file
    WHILE NOT endfile(vectorfile) LOOP
      readline(vectorfile, inputline);
		
			read(inputline, v_A);
			read(inputline, v_SPACE); -- read the space character
			read(inputline, v_B);
			
			a <= v_A;
			b <= v_B;
			
        WAIT UNTIL clk='1' AND clk'EVENT;
		  WAIT UNTIL clk='1' AND clk'EVENT;
 
    END LOOP; 
    file_close(vectorfile);
    WAIT;
  END PROCESS VectorProc; 

 --Process that reads expected outputs from a file
  ExpectedProc: PROCESS
    FILE expectedfile: text; 
    VARIABLE inputline: line;
	 variable v_SUM : std_logic_vector(16 downto 0);
	 
  BEGIN
    file_open(expectedfile, "expected.txt", read_mode);
	  Exp_v <= (others => '0');
	  WAIT UNTIL clk='1' AND clk'EVENT;
		WAIT UNTIL clk='1' AND clk'EVENT;
		WAIT UNTIL clk='1' AND clk'EVENT;
		
	--There is a while that read all input file	
    WHILE NOT endfile(expectedfile) LOOP
		  
      readline(expectedfile, inputline);
        read(inputline, v_SUM);
		  Exp_v <= v_SUM;
		
		WAIT UNTIL clk='1' AND clk'EVENT;
		WAIT UNTIL clk='1' AND clk'EVENT;
    END LOOP; 
    file_close(expectedfile);
    WAIT;
  END PROCESS ExpectedProc; 

--The process that check the result of subtractor and the expected value,
--if there are not equal, rising an ASSERT
  CheckProc: PROCESS
  BEGIN
	 WAIT UNTIL clk='1' AND clk'EVENT;
	 
    IF s /= Exp_v THEN
      Err_s <= '1';
    ELSE
      Err_s <= '0';
    END IF;
    ASSERT (Err_s /= '1') REPORT "Unexpected behaviour" SEVERITY error;
 
  END PROCESS CheckProc;


END;
