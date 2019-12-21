/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_1242562249;
char *STD_TEXTIO;
char *XILINXCORELIB_P_1433929353;
char *IEEE_P_3564397177;
char *XILINXCORELIB_P_0624651749;
char *IEEE_P_2592010699;
char *XILINXCORELIB_P_0718376120;
char *XILINXCORELIB_P_3155556343;
char *STD_STANDARD;
char *XILINXCORELIB_P_1837083571;
char *XILINXCORELIB_P_3381355550;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    std_textio_init();
    ieee_p_3564397177_init();
    ieee_p_1242562249_init();
    xilinxcorelib_p_0718376120_init();
    xilinxcorelib_p_1837083571_init();
    xilinxcorelib_p_3381355550_init();
    xilinxcorelib_p_1433929353_init();
    xilinxcorelib_p_3155556343_init();
    xilinxcorelib_p_0624651749_init();
    xilinxcorelib_a_3584556465_3212880686_init();
    xilinxcorelib_a_2517092272_3212880686_init();
    xilinxcorelib_a_1405641309_3212880686_init();
    work_a_2180387997_4187769080_init();
    work_a_0491446778_3212880686_init();
    work_a_2170502446_2372691052_init();


    xsi_register_tops("work_a_2170502446_2372691052");

    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    XILINXCORELIB_P_1433929353 = xsi_get_engine_memory("xilinxcorelib_p_1433929353");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    XILINXCORELIB_P_0624651749 = xsi_get_engine_memory("xilinxcorelib_p_0624651749");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    XILINXCORELIB_P_0718376120 = xsi_get_engine_memory("xilinxcorelib_p_0718376120");
    XILINXCORELIB_P_3155556343 = xsi_get_engine_memory("xilinxcorelib_p_3155556343");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    XILINXCORELIB_P_1837083571 = xsi_get_engine_memory("xilinxcorelib_p_1837083571");
    XILINXCORELIB_P_3381355550 = xsi_get_engine_memory("xilinxcorelib_p_3381355550");

    return xsi_run_simulation(argc, argv);

}
