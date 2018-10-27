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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/Digital/Lab02/Decoder/Decoder_tb.v";
static int ng1[] = {0, 0};
static const char *ng2 = "Case 0: ";
static const char *ng3 = "Out1_t = %b";
static const char *ng4 = "Out2_t = %b";
static const char *ng5 = "Out3_t = %b";
static const char *ng6 = "Out4_t = %b";
static int ng7[] = {1, 0};
static const char *ng8 = "Case 1: ";
static const char *ng9 = "Case 2: ";
static const char *ng10 = "Case 3: ";



static void Initial_9_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);

LAB4:    xsi_set_current_line(13, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(14, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(15, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(17, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(24, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(33, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(42, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t4, 1);
    goto LAB1;

}


extern void work_m_00000000002846113128_0965959873_init()
{
	static char *pe[] = {(void *)Initial_9_0};
	xsi_register_didat("work_m_00000000002846113128_0965959873", "isim/Decoder_tb_isim_beh.exe.sim/work/m_00000000002846113128_0965959873.didat");
	xsi_register_executes(pe);
}
