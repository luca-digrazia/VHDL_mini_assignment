----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    
-- Design Name: 
-- Module Name:    top_level_subtractor_16_s - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top_level_subtractor_16_s is
    Port ( a : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    s : OUT STD_LOGIC_VECTOR(16 DOWNTO 0));
	end top_level_subtractor_16_s;

architecture Behavioral of top_level_subtractor_16_s is
------------- Begin Cut here for COMPONENT Declaration ------ COMP_TAG
COMPONENT subtractor_16_s_core
  PORT (
    a : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    s : OUT STD_LOGIC_VECTOR(16 DOWNTO 0)
  );
END COMPONENT;
-- COMP_TAG_END ------ End COMPONENT Declaration ------------

-- The following code must appear in the VHDL architecture
-- body. Substitute your own instance name and net names.
begin
------------- Begin Cut here for INSTANTIATION Template ----- INST_TAG
sub : subtractor_16_s_core
  PORT MAP (
    a => a,
    b => b,
    clk => clk,
    ce => ce,
    s => s
  );
end Behavioral;

