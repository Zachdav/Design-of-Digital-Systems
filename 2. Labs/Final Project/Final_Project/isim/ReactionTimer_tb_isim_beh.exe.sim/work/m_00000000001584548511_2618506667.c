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
static const char *ng0 = "G:/Final Project/Final_Project/Bin2BCD.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {9, 0};
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};
static int ng6[] = {3, 0};
static int ng7[] = {13, 0};
static int ng8[] = {10, 0};
static int ng9[] = {17, 0};
static int ng10[] = {14, 0};
static int ng11[] = {21, 0};
static int ng12[] = {18, 0};
static int ng13[] = {25, 0};
static int ng14[] = {22, 0};



static void Always_16_0(char *t0)
{
    char t4[8];
    char t17[8];
    char t25[8];
    char t38[8];
    char t40[8];
    char t41[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    int t50;
    char *t51;
    unsigned int t52;
    int t53;
    int t54;
    char *t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    xsi_vlogtype_concat(t4, 26, 26, 2U, t5, 16, t6, 10);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 26);
    xsi_set_current_line(18, ng0);
    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_lshift(t4, 26, t5, 26, t6, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 26);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 10);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 10);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 65535U);
    t13 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 16, 0LL);
    goto LAB2;

LAB7:    xsi_set_current_line(18, ng0);

LAB9:    xsi_set_current_line(19, ng0);
    t13 = (t0 + 1608);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_lshift(t17, 26, t15, 26, t16, 32);
    t18 = (t0 + 1608);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 26);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 10);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 10);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 15U);
    t13 = ((char*)((ng5)));
    memset(t17, 0, 8);
    t14 = (t4 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t15 = (t13 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t4) > *((unsigned int *)t13))
        goto LAB12;

LAB13:    t18 = (t17 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t17);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 14);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 14);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 15U);
    t13 = ((char*)((ng5)));
    memset(t17, 0, 8);
    t14 = (t4 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB21;

LAB20:    t15 = (t13 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t4) > *((unsigned int *)t13))
        goto LAB22;

LAB23:    t18 = (t17 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t17);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 18);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 18);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 15U);
    t13 = ((char*)((ng5)));
    memset(t17, 0, 8);
    t14 = (t4 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB31;

LAB30:    t15 = (t13 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t4) > *((unsigned int *)t13))
        goto LAB32;

LAB33:    t18 = (t17 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t17);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 22);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 22);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 15U);
    t13 = ((char*)((ng5)));
    memset(t17, 0, 8);
    t14 = (t4 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB41;

LAB40:    t15 = (t13 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB41;

LAB44:    if (*((unsigned int *)t4) > *((unsigned int *)t13))
        goto LAB42;

LAB43:    t18 = (t17 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t17);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB6;

LAB11:    t16 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t17) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(21, ng0);
    t26 = (t0 + 1608);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t25, 0, 8);
    t29 = (t25 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 10);
    *((unsigned int *)t25) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 10);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 & 15U);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & 15U);
    t37 = ((char*)((ng6)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t25, 32, t37, 32);
    t39 = (t0 + 1608);
    t43 = (t0 + 1608);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng7)));
    t47 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t40, t41, t42, ((int*)(t45)), 2, t46, 32, 1, t47, 32, 1);
    t48 = (t40 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t41 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    t55 = (t42 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB18;

LAB19:    goto LAB17;

LAB18:    t59 = *((unsigned int *)t42);
    t60 = (t59 + 0);
    t61 = *((unsigned int *)t40);
    t62 = *((unsigned int *)t41);
    t63 = (t61 - t62);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t39, t38, t60, *((unsigned int *)t41), t64);
    goto LAB19;

LAB21:    t16 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t17) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(23, ng0);
    t26 = (t0 + 1608);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t25, 0, 8);
    t29 = (t25 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 14);
    *((unsigned int *)t25) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 14);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 & 15U);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & 15U);
    t37 = ((char*)((ng6)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t25, 32, t37, 32);
    t39 = (t0 + 1608);
    t43 = (t0 + 1608);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng9)));
    t47 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t40, t41, t42, ((int*)(t45)), 2, t46, 32, 1, t47, 32, 1);
    t48 = (t40 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t41 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    t55 = (t42 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB28;

LAB29:    goto LAB27;

LAB28:    t59 = *((unsigned int *)t42);
    t60 = (t59 + 0);
    t61 = *((unsigned int *)t40);
    t62 = *((unsigned int *)t41);
    t63 = (t61 - t62);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t39, t38, t60, *((unsigned int *)t41), t64);
    goto LAB29;

LAB31:    t16 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t17) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(25, ng0);
    t26 = (t0 + 1608);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t25, 0, 8);
    t29 = (t25 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 18);
    *((unsigned int *)t25) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 18);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 & 15U);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & 15U);
    t37 = ((char*)((ng6)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t25, 32, t37, 32);
    t39 = (t0 + 1608);
    t43 = (t0 + 1608);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng11)));
    t47 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t40, t41, t42, ((int*)(t45)), 2, t46, 32, 1, t47, 32, 1);
    t48 = (t40 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t41 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    t55 = (t42 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB38;

LAB39:    goto LAB37;

LAB38:    t59 = *((unsigned int *)t42);
    t60 = (t59 + 0);
    t61 = *((unsigned int *)t40);
    t62 = *((unsigned int *)t41);
    t63 = (t61 - t62);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t39, t38, t60, *((unsigned int *)t41), t64);
    goto LAB39;

LAB41:    t16 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB43;

LAB42:    *((unsigned int *)t17) = 1;
    goto LAB43;

LAB45:    xsi_set_current_line(27, ng0);
    t26 = (t0 + 1608);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t25, 0, 8);
    t29 = (t25 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 22);
    *((unsigned int *)t25) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 22);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 & 15U);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & 15U);
    t37 = ((char*)((ng6)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t25, 32, t37, 32);
    t39 = (t0 + 1608);
    t43 = (t0 + 1608);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng13)));
    t47 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t40, t41, t42, ((int*)(t45)), 2, t46, 32, 1, t47, 32, 1);
    t48 = (t40 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t41 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    t55 = (t42 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB48;

LAB49:    goto LAB47;

LAB48:    t59 = *((unsigned int *)t42);
    t60 = (t59 + 0);
    t61 = *((unsigned int *)t40);
    t62 = *((unsigned int *)t41);
    t63 = (t61 - t62);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t39, t38, t60, *((unsigned int *)t41), t64);
    goto LAB49;

}


extern void work_m_00000000001584548511_2618506667_init()
{
	static char *pe[] = {(void *)Always_16_0};
	xsi_register_didat("work_m_00000000001584548511_2618506667", "isim/ReactionTimer_tb_isim_beh.exe.sim/work/m_00000000001584548511_2618506667.didat");
	xsi_register_executes(pe);
}
