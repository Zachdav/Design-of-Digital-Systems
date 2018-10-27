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
static const char *ng0 = "G:/Final Project/Final_Project/LCDDisplay.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1701978144, 0, 542402925, 0, 1953066862, 0, 1382375779, 0};
static int ng4[] = {538976288, 0, 1768843041, 0, 1751474548, 0, 1315905603, 0};
static int ng5[] = {538976288, 0, 555753504, 0, 1399615351, 0, 1416589088, 0};
static int ng6[] = {1932406318, 0, 541869380, 0, 543584114, 0, 1466001780, 0};
static int ng7[] = {538976288, 0, 538976288, 0, 807432992, 0, 808333360, 0};
static unsigned int ng8[] = {48U, 0U};
static int ng9[] = {112, 0};
static int ng10[] = {105, 0};
static int ng11[] = {104, 0};
static int ng12[] = {97, 0};
static int ng13[] = {96, 0};
static int ng14[] = {89, 0};



static void Always_38_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t36[8];
    char t52[8];
    char t60[8];
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;

LAB0:    t1 = (t0 + 6240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 6560);
    *((int *)t2) = 1;
    t3 = (t0 + 6272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 2840U);
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

LAB11:    xsi_set_current_line(45, ng0);

LAB14:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = (t0 + 1152);
    t7 = *((char **)t5);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t7, 32);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB28;

LAB29:
LAB30:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t28 = (t0 + 1152);
    t29 = *((char **)t28);
    t28 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 4, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 128, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(48, ng0);

LAB31:    xsi_set_current_line(49, ng0);
    t5 = ((char*)((ng3)));
    t8 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t8, t5, 0, 0, 128, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB30;

LAB18:    xsi_set_current_line(54, ng0);

LAB32:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3000U);
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
        goto LAB36;

LAB33:    if (t18 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t6) = 1;

LAB36:    memset(t31, 0, 8);
    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t21) != 0)
        goto LAB39;

LAB40:    t28 = (t31 + 4);
    t32 = *((unsigned int *)t31);
    t33 = *((unsigned int *)t28);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB41;

LAB42:    memcpy(t60, t31, 8);

LAB43:    t91 = (t60 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t60);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(59, ng0);
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
        goto LAB62;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;

LAB62:    memset(t31, 0, 8);
    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t21) != 0)
        goto LAB65;

LAB66:    t28 = (t31 + 4);
    t32 = *((unsigned int *)t31);
    t33 = *((unsigned int *)t28);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB67;

LAB68:    memcpy(t60, t31, 8);

LAB69:    t91 = (t60 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t60);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3320U);
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
        goto LAB88;

LAB85:    if (t18 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t6) = 1;

LAB88:    memset(t31, 0, 8);
    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t21) != 0)
        goto LAB91;

LAB92:    t28 = (t31 + 4);
    t32 = *((unsigned int *)t31);
    t33 = *((unsigned int *)t28);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB93;

LAB94:    memcpy(t60, t31, 8);

LAB95:    t91 = (t60 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t60);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3640U);
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
        goto LAB114;

LAB111:    if (t18 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t6) = 1;

LAB114:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(68, ng0);

LAB119:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB117:
LAB109:
LAB83:
LAB57:    goto LAB30;

LAB20:    xsi_set_current_line(73, ng0);

LAB120:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 128, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB30;

LAB22:    xsi_set_current_line(79, ng0);

LAB121:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 128, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB30;

LAB24:    xsi_set_current_line(85, ng0);

LAB122:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 128, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB30;

LAB26:    xsi_set_current_line(91, ng0);

LAB123:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 128, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4440U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 15U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 8, t2, 8, t6, 8);
    t8 = (t0 + 5000);
    t21 = (t0 + 5000);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng9)));
    t35 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t36, t52, t60, ((int*)(t28)), 2, t29, 32, 1, t35, 32, 1);
    t37 = (t36 + 4);
    t15 = *((unsigned int *)t37);
    t30 = (!(t15));
    t38 = (t52 + 4);
    t16 = *((unsigned int *)t38);
    t84 = (!(t16));
    t99 = (t30 && t84);
    t51 = (t60 + 4);
    t17 = *((unsigned int *)t51);
    t100 = (!(t17));
    t101 = (t99 && t100);
    if (t101 == 1)
        goto LAB124;

LAB125:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4440U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 15U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 8, t2, 8, t6, 8);
    t8 = (t0 + 5000);
    t21 = (t0 + 5000);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng11)));
    t35 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t36, t52, t60, ((int*)(t28)), 2, t29, 32, 1, t35, 32, 1);
    t37 = (t36 + 4);
    t15 = *((unsigned int *)t37);
    t30 = (!(t15));
    t38 = (t52 + 4);
    t16 = *((unsigned int *)t38);
    t84 = (!(t16));
    t99 = (t30 && t84);
    t51 = (t60 + 4);
    t17 = *((unsigned int *)t51);
    t100 = (!(t17));
    t101 = (t99 && t100);
    if (t101 == 1)
        goto LAB126;

LAB127:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4440U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 15U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 8, t2, 8, t6, 8);
    t8 = (t0 + 5000);
    t21 = (t0 + 5000);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng13)));
    t35 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t36, t52, t60, ((int*)(t28)), 2, t29, 32, 1, t35, 32, 1);
    t37 = (t36 + 4);
    t15 = *((unsigned int *)t37);
    t30 = (!(t15));
    t38 = (t52 + 4);
    t16 = *((unsigned int *)t38);
    t84 = (!(t16));
    t99 = (t30 && t84);
    t51 = (t60 + 4);
    t17 = *((unsigned int *)t51);
    t100 = (!(t17));
    t101 = (t99 && t100);
    if (t101 == 1)
        goto LAB128;

LAB129:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB30;

LAB28:    xsi_set_current_line(100, ng0);

LAB130:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3640U);
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
        goto LAB134;

LAB131:    if (t18 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t6) = 1;

LAB134:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB135;

LAB136:    xsi_set_current_line(105, ng0);

LAB139:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB137:    goto LAB30;

LAB35:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t31) = 1;
    goto LAB40;

LAB39:    t22 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB40;

LAB41:    t29 = (t0 + 3640U);
    t35 = *((char **)t29);
    t29 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t29 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t29);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB47;

LAB44:    if (t48 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t36) = 1;

LAB47:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t53) != 0)
        goto LAB50;

LAB51:    t61 = *((unsigned int *)t31);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t31 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB43;

LAB46:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t52) = 1;
    goto LAB51;

LAB50:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB51;

LAB52:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t31 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t31);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t30 = (t77 & t79);
    t84 = (t81 & t83);
    t85 = (~(t30));
    t86 = (~(t84));
    t87 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t87 & t85);
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t89 & t85);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    goto LAB54;

LAB55:    xsi_set_current_line(56, ng0);

LAB58:    xsi_set_current_line(57, ng0);
    t97 = (t0 + 1696);
    t98 = *((char **)t97);
    t97 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t97, t98, 0, 0, 4, 0LL);
    goto LAB57;

LAB61:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t31) = 1;
    goto LAB66;

LAB65:    t22 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB66;

LAB67:    t29 = (t0 + 3640U);
    t35 = *((char **)t29);
    t29 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t29 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t29);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB73;

LAB70:    if (t48 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t36) = 1;

LAB73:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t53) != 0)
        goto LAB76;

LAB77:    t61 = *((unsigned int *)t31);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t31 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB78;

LAB79:
LAB80:    goto LAB69;

LAB72:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t52) = 1;
    goto LAB77;

LAB76:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB77;

LAB78:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t31 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t31);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t30 = (t77 & t79);
    t84 = (t81 & t83);
    t85 = (~(t30));
    t86 = (~(t84));
    t87 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t87 & t85);
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t89 & t85);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    goto LAB80;

LAB81:    xsi_set_current_line(59, ng0);

LAB84:    xsi_set_current_line(60, ng0);
    t97 = (t0 + 1832);
    t98 = *((char **)t97);
    t97 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t97, t98, 0, 0, 4, 0LL);
    goto LAB83;

LAB87:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB88;

LAB89:    *((unsigned int *)t31) = 1;
    goto LAB92;

LAB91:    t22 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB92;

LAB93:    t29 = (t0 + 3640U);
    t35 = *((char **)t29);
    t29 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t29 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t29);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB99;

LAB96:    if (t48 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t36) = 1;

LAB99:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t53) != 0)
        goto LAB102;

LAB103:    t61 = *((unsigned int *)t31);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t31 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB104;

LAB105:
LAB106:    goto LAB95;

LAB98:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB99;

LAB100:    *((unsigned int *)t52) = 1;
    goto LAB103;

LAB102:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB103;

LAB104:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t31 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t31);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t30 = (t77 & t79);
    t84 = (t81 & t83);
    t85 = (~(t30));
    t86 = (~(t84));
    t87 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t87 & t85);
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t89 & t85);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    goto LAB106;

LAB107:    xsi_set_current_line(62, ng0);

LAB110:    xsi_set_current_line(63, ng0);
    t97 = (t0 + 1968);
    t98 = *((char **)t97);
    t97 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t97, t98, 0, 0, 4, 0LL);
    goto LAB109;

LAB113:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB114;

LAB115:    xsi_set_current_line(65, ng0);

LAB118:    xsi_set_current_line(66, ng0);
    t22 = (t0 + 1424);
    t28 = *((char **)t22);
    t22 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t22, t28, 0, 0, 4, 0LL);
    goto LAB117;

LAB124:    t18 = *((unsigned int *)t60);
    t102 = (t18 + 0);
    t19 = *((unsigned int *)t36);
    t20 = *((unsigned int *)t52);
    t103 = (t19 - t20);
    t104 = (t103 + 1);
    xsi_vlogvar_wait_assign_value(t8, t31, t102, *((unsigned int *)t52), t104, 0LL);
    goto LAB125;

LAB126:    t18 = *((unsigned int *)t60);
    t102 = (t18 + 0);
    t19 = *((unsigned int *)t36);
    t20 = *((unsigned int *)t52);
    t103 = (t19 - t20);
    t104 = (t103 + 1);
    xsi_vlogvar_wait_assign_value(t8, t31, t102, *((unsigned int *)t52), t104, 0LL);
    goto LAB127;

LAB128:    t18 = *((unsigned int *)t60);
    t102 = (t18 + 0);
    t19 = *((unsigned int *)t36);
    t20 = *((unsigned int *)t52);
    t103 = (t19 - t20);
    t104 = (t103 + 1);
    xsi_vlogvar_wait_assign_value(t8, t31, t102, *((unsigned int *)t52), t104, 0LL);
    goto LAB129;

LAB133:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB134;

LAB135:    xsi_set_current_line(102, ng0);

LAB138:    xsi_set_current_line(103, ng0);
    t22 = (t0 + 1560);
    t28 = *((char **)t22);
    t22 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t22, t28, 0, 0, 4, 0LL);
    goto LAB137;

}


extern void work_m_00000000003220439038_2272006259_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000003220439038_2272006259", "isim/ReactionTimer_tb_isim_beh.exe.sim/work/m_00000000003220439038_2272006259.didat");
	xsi_register_executes(pe);
}
