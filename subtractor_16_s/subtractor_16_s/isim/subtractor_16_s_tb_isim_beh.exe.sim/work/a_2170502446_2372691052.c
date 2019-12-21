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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Admin00/Documents/Polito/Specification and simulation of digital systems/Mini assignment/subtractor_16_s/subtractor_16_s/subtractor_16_s_tb.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

void ieee_p_3564397177_sub_2889341154_91900896(char *, char *, char *, char *, char *);


static void work_a_2170502446_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3912);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3912);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2170502446_2372691052_p_1(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;

LAB0:    t1 = (t0 + 4352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3096U);
    t3 = (t0 + 11245);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 10;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (10 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(100, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 5488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(101, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 5552);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(104, ng0);

LAB4:    t2 = (t0 + 3096U);
    t12 = std_textio_endfile(t2);
    t13 = (!(t12));
    if (t13 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3096U);
    std_textio_file_close(t2);
    xsi_set_current_line(119, ng0);

LAB24:    *((char **)t1) = &&LAB25;

LAB1:    return;
LAB5:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 4160);
    t4 = (t0 + 3096U);
    t6 = (t0 + 3376U);
    std_textio_readline(STD_TEXTIO, t3, t4, t6);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4160);
    t3 = (t0 + 3376U);
    t4 = (t0 + 2408U);
    t6 = *((char **)t4);
    t4 = (t0 + 10908U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4160);
    t3 = (t0 + 3376U);
    t4 = (t0 + 2648U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    std_textio_read8(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4160);
    t3 = (t0 + 3376U);
    t4 = (t0 + 2528U);
    t6 = *((char **)t4);
    t4 = (t0 + 10924U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t2 = (t0 + 5488);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2528U);
    t3 = *((char **)t2);
    t2 = (t0 + 5552);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(114, ng0);

LAB10:    t2 = (t0 + 5168);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    t6 = (t0 + 5168);
    *((int *)t6) = 0;
    xsi_set_current_line(115, ng0);

LAB17:    t2 = (t0 + 5184);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB9:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB12;

LAB13:    t12 = (unsigned char)0;

LAB14:    if (t12 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t3 = (t0 + 1312U);
    t15 = xsi_signal_has_event(t3);
    t12 = t15;
    goto LAB14;

LAB15:    t6 = (t0 + 5184);
    *((int *)t6) = 0;
    goto LAB4;

LAB16:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB19;

LAB20:    t12 = (unsigned char)0;

LAB21:    if (t12 == 1)
        goto LAB15;
    else
        goto LAB17;

LAB18:    goto LAB16;

LAB19:    t3 = (t0 + 1312U);
    t15 = xsi_signal_has_event(t3);
    t12 = t15;
    goto LAB21;

LAB22:    goto LAB2;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

}

static void work_a_2170502446_2372691052_p_2(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;

LAB0:    t1 = (t0 + 4600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3200U);
    t3 = (t0 + 11255);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 12;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (12 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(130, ng0);
    t2 = xsi_get_transient_memory(17U);
    memset(t2, 0, 17U);
    t3 = t2;
    memset(t3, (unsigned char)2, 17U);
    t4 = (t0 + 5616);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 17U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(131, ng0);

LAB6:    t2 = (t0 + 5200);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 5200);
    *((int *)t6) = 0;
    xsi_set_current_line(132, ng0);

LAB13:    t2 = (t0 + 5216);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB5:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB8;

LAB9:    t12 = (unsigned char)0;

LAB10:    if (t12 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t3 = (t0 + 1312U);
    t15 = xsi_signal_has_event(t3);
    t12 = t15;
    goto LAB10;

LAB11:    t6 = (t0 + 5216);
    *((int *)t6) = 0;
    xsi_set_current_line(133, ng0);

LAB20:    t2 = (t0 + 5232);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB12:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB15;

LAB16:    t12 = (unsigned char)0;

LAB17:    if (t12 == 1)
        goto LAB11;
    else
        goto LAB13;

LAB14:    goto LAB12;

LAB15:    t3 = (t0 + 1312U);
    t15 = xsi_signal_has_event(t3);
    t12 = t15;
    goto LAB17;

LAB18:    t6 = (t0 + 5232);
    *((int *)t6) = 0;
    xsi_set_current_line(136, ng0);

LAB25:    t2 = (t0 + 3200U);
    t12 = std_textio_endfile(t2);
    t13 = (!(t12));
    if (t13 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3200U);
    std_textio_file_close(t2);
    xsi_set_current_line(146, ng0);

LAB45:    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB19:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB22;

LAB23:    t12 = (unsigned char)0;

LAB24:    if (t12 == 1)
        goto LAB18;
    else
        goto LAB20;

LAB21:    goto LAB19;

LAB22:    t3 = (t0 + 1312U);
    t15 = xsi_signal_has_event(t3);
    t12 = t15;
    goto LAB24;

LAB26:    xsi_set_current_line(138, ng0);
    t3 = (t0 + 4408);
    t4 = (t0 + 3200U);
    t6 = (t0 + 3448U);
    std_textio_readline(STD_TEXTIO, t3, t4, t6);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4408);
    t3 = (t0 + 3448U);
    t4 = (t0 + 2768U);
    t6 = *((char **)t4);
    t4 = (t0 + 10940U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t2 = (t0 + 5616);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t3, 17U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(142, ng0);

LAB31:    t2 = (t0 + 5248);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB27:;
LAB29:    t6 = (t0 + 5248);
    *((int *)t6) = 0;
    xsi_set_current_line(143, ng0);

LAB38:    t2 = (t0 + 5264);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB30:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB33;

LAB34:    t12 = (unsigned char)0;

LAB35:    if (t12 == 1)
        goto LAB29;
    else
        goto LAB31;

LAB32:    goto LAB30;

LAB33:    t3 = (t0 + 1312U);
    t15 = xsi_signal_has_event(t3);
    t12 = t15;
    goto LAB35;

LAB36:    t6 = (t0 + 5264);
    *((int *)t6) = 0;
    goto LAB25;

LAB37:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB40;

LAB41:    t12 = (unsigned char)0;

LAB42:    if (t12 == 1)
        goto LAB36;
    else
        goto LAB38;

LAB39:    goto LAB37;

LAB40:    t3 = (t0 + 1312U);
    t15 = xsi_signal_has_event(t3);
    t12 = t15;
    goto LAB42;

LAB43:    goto LAB2;

LAB44:    goto LAB43;

LAB46:    goto LAB44;

}

static void work_a_2170502446_2372691052_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(153, ng0);

LAB6:    t2 = (t0 + 5280);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t9 = (t0 + 5280);
    *((int *)t9) = 0;
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t3 = 1;
    if (17U == 17U)
        goto LAB14;

LAB15:    t3 = 0;

LAB16:    if ((!(t3)) != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 5680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB12:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 != (unsigned char)3);
    if (t6 == 0)
        goto LAB20;

LAB21:    goto LAB2;

LAB5:    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 1312U);
    t8 = xsi_signal_has_event(t4);
    t3 = t8;
    goto LAB10;

LAB11:    xsi_set_current_line(156, ng0);
    t11 = (t0 + 5680);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t11);
    goto LAB12;

LAB14:    t10 = 0;

LAB17:    if (t10 < 17U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t2 = (t4 + t10);
    t9 = (t5 + t10);
    if (*((unsigned char *)t2) != *((unsigned char *)t9))
        goto LAB15;

LAB19:    t10 = (t10 + 1);
    goto LAB17;

LAB20:    t2 = (t0 + 11267);
    xsi_report(t2, 20U, (unsigned char)2);
    goto LAB21;

}


extern void work_a_2170502446_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2170502446_2372691052_p_0,(void *)work_a_2170502446_2372691052_p_1,(void *)work_a_2170502446_2372691052_p_2,(void *)work_a_2170502446_2372691052_p_3};
	xsi_register_didat("work_a_2170502446_2372691052", "isim/subtractor_16_s_tb_isim_beh.exe.sim/work/a_2170502446_2372691052.didat");
	xsi_register_executes(pe);
}
