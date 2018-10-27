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
static const char *ng0 = "G:/Final Project/Final_Project/LCDInterface.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng4[] = {128U, 0U};
static int ng5[] = {15, 0};
static int ng6[] = {8, 0};



static void Always_36_0(char *t0)
{
    char t6[8];
    char t32[32];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;

LAB0:    t1 = (t0 + 5760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 6080);
    *((int *)t2) = 1;
    t3 = (t0 + 5792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 2680U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(46, ng0);

LAB14:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = (t0 + 472);
    t7 = *((char **)t5);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t7, 32);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB30;

LAB31:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB32;

LAB33:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB34;

LAB35:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB36;

LAB37:
LAB38:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);

LAB13:    xsi_set_current_line(38, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 128, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(54, ng0);

LAB39:    xsi_set_current_line(55, ng0);
    t5 = ((char*)((ng3)));
    t8 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t8, t5, 0, 0, 128, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t6) = 1;

LAB43:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB46:    goto LAB38;

LAB18:    xsi_set_current_line(61, ng0);

LAB47:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3160U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB51;

LAB48:    if (t18 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t6) = 1;

LAB51:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB54:    goto LAB38;

LAB20:    xsi_set_current_line(66, ng0);

LAB55:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3480U);
    t3 = *((char **)t2);
    t2 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 128, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB38;

LAB22:    xsi_set_current_line(75, ng0);

LAB56:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB60;

LAB57:    if (t18 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t6) = 1;

LAB60:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB63:    goto LAB38;

LAB24:    xsi_set_current_line(83, ng0);

LAB64:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB68;

LAB65:    if (t18 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t6) = 1;

LAB68:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB71:    goto LAB38;

LAB26:    xsi_set_current_line(91, ng0);

LAB72:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB76;

LAB73:    if (t18 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t6) = 1;

LAB76:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(97, ng0);

LAB81:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB79:    goto LAB38;

LAB28:    xsi_set_current_line(103, ng0);

LAB82:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4840);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 24);
    t22 = (t7 + 28);
    t9 = *((unsigned int *)t21);
    t10 = (t9 >> 24);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t22);
    t12 = (t11 >> 24);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 255U);
    t28 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t28, t6, 0, 0, 8, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB38;

LAB30:    xsi_set_current_line(110, ng0);

LAB83:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4840);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 24);
    t22 = (t7 + 28);
    t9 = *((unsigned int *)t21);
    t10 = (t9 >> 24);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t22);
    t12 = (t11 >> 24);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 255U);
    t28 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t28, t6, 0, 0, 8, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB87;

LAB84:    if (t18 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t6) = 1;

LAB87:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB90:    goto LAB38;

LAB32:    xsi_set_current_line(118, ng0);

LAB91:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 4840);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 24);
    t22 = (t7 + 28);
    t9 = *((unsigned int *)t21);
    t10 = (t9 >> 24);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t22);
    t12 = (t11 >> 24);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 255U);
    t28 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t28, t6, 0, 0, 8, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB95;

LAB92:    if (t18 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t6) = 1;

LAB95:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB98:    goto LAB38;

LAB34:    xsi_set_current_line(126, ng0);

LAB99:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB103;

LAB100:    if (t18 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t6) = 1;

LAB103:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(129, ng0);

LAB107:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB111;

LAB108:    if (t18 != 0)
        goto LAB110;

LAB109:    *((unsigned int *)t6) = 1;

LAB111:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB112;

LAB113:    xsi_set_current_line(133, ng0);

LAB116:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 4520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 5, t7, 32);
    t8 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 5, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng6)));
    xsi_vlog_unsigned_lshift(t32, 128, t5, 128, t7, 32);
    t8 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t8, t32, 0, 0, 128, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB114:
LAB106:    goto LAB38;

LAB36:    xsi_set_current_line(141, ng0);

LAB117:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3000U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB121;

LAB118:    if (t18 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t6) = 1;

LAB121:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB124:    goto LAB38;

LAB42:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(57, ng0);
    t22 = (t0 + 472);
    t28 = *((char **)t22);
    t22 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t22, t28, 0, 0, 4, 0LL);
    goto LAB46;

LAB50:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(62, ng0);
    t28 = (t0 + 608);
    t29 = *((char **)t28);
    t28 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 4, 0LL);
    goto LAB54;

LAB59:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(79, ng0);
    t22 = (t0 + 880);
    t28 = *((char **)t22);
    t22 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t22, t28, 0, 0, 4, 0LL);
    goto LAB63;

LAB67:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(87, ng0);
    t22 = (t0 + 1016);
    t28 = *((char **)t22);
    t22 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t22, t28, 0, 0, 4, 0LL);
    goto LAB71;

LAB75:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(93, ng0);

LAB80:    xsi_set_current_line(94, ng0);
    t22 = ((char*)((ng2)));
    t28 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 5, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB79;

LAB86:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(114, ng0);
    t22 = (t0 + 1424);
    t28 = *((char **)t22);
    t22 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t22, t28, 0, 0, 4, 0LL);
    goto LAB90;

LAB94:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(122, ng0);
    t22 = (t0 + 1560);
    t28 = *((char **)t22);
    t22 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t22, t28, 0, 0, 4, 0LL);
    goto LAB98;

LAB102:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB103;

LAB104:    xsi_set_current_line(128, ng0);
    t22 = (t0 + 1696);
    t28 = *((char **)t22);
    t22 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t22, t28, 0, 0, 4, 0LL);
    goto LAB106;

LAB110:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB111;

LAB112:    xsi_set_current_line(130, ng0);

LAB115:    xsi_set_current_line(131, ng0);
    t29 = (t0 + 1832);
    t31 = *((char **)t29);
    t29 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t29, t31, 0, 0, 4, 0LL);
    goto LAB114;

LAB120:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(142, ng0);
    t28 = (t0 + 744);
    t29 = *((char **)t28);
    t28 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 4, 0LL);
    goto LAB124;

}


extern void work_m_00000000001915013172_2191703979_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000001915013172_2191703979", "isim/ReactionTimer_tb_isim_beh.exe.sim/work/m_00000000001915013172_2191703979.didat");
	xsi_register_executes(pe);
}
