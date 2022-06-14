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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/mnt/Documents/Projects/verilog/v_led_blink.v";
static int ng1[] = {1, 0, 0, 0};
static int ng2[] = {0, 0, 0, 0};



static void Always_18_0(char *t0)
{
    char t9[16];
    char t10[16];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 3704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 4024);
    *((int *)t2) = 1;
    t3 = (t0 + 3736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 2632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    xsi_vlog_unsigned_minus(t9, 33, t8, 32, t7, 32);
    xsi_vlog_unsigned_equal(t10, 33, t6, 33, t9, 33);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    xsi_vlog_unsigned_add(t9, 33, t4, 33, t5, 32);
    t6 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t6, t9, 0, 0, 33, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(21, ng0);

LAB9:    xsi_set_current_line(22, ng0);
    t18 = (t0 + 2792);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t21) == 0)
        goto LAB10;

LAB12:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;

LAB13:    t28 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t28, t17, 0, 0, 1, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 33, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t17) = 1;
    goto LAB13;

}


extern void work_m_01377057740027159982_4173650464_init()
{
	static char *pe[] = {(void *)Always_18_0};
	xsi_register_didat("work_m_01377057740027159982_4173650464", "isim/led_blink_isim_beh.exe.sim/work/m_01377057740027159982_4173650464.didat");
	xsi_register_executes(pe);
}
