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
static const char *ng0 = "/home/c/projects/memory/memory_test.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {2U, 0U};
static int ng3[] = {1, 0};



static void Initial_73_0(char *t0)
{
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 5080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);

LAB4:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4888);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 5136);
    t3 = (t0 + 4888);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 5384);
    t5 = (t0 + 4888);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 5632);
    t7 = (t0 + 4888);
    xsi_add_process_toexecute(0, t6, t7);
    t8 = (t0 + 5880);
    t9 = (t0 + 4888);
    xsi_add_process_toexecute(0, t8, t9);
    t10 = (t0 + 6128);
    t11 = (t0 + 4888);
    xsi_add_process_toexecute(0, t10, t11);
    t12 = (t0 + 6376);
    t13 = (t0 + 4888);
    xsi_add_process_toexecute(0, t12, t13);
    t14 = (t0 + 6624);
    t15 = (t0 + 4888);
    xsi_add_process_toexecute(0, t14, t15);
    t16 = (t0 + 6872);
    t17 = (t0 + 4888);
    xsi_add_process_toexecute(0, t16, t17);
    t18 = (t0 + 4168);
    memset(t19, 0, 8);
    *((unsigned int *)t19) = 8;
    xsi_vlogvar_assign_value(t18, t19, 0, 0, 32);
    t20 = (t0 + 7384);
    *((int *)t20) = 1;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    t21 = (t0 + 4168);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    if (*((int *)t23) > 0)
        goto LAB7;

LAB8:    t25 = (t0 + 4888);
    xsi_clean_active_fork_process_list(t25);
    goto LAB1;

LAB7:    t24 = (t0 + 7384);
    *((int *)t24) = 1;
    goto LAB1;

}

static void Forked_88_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 5328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5136);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(88, ng0);

LAB6:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 5136);
    xsi_process_wait(t3, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB5:    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t4, t5, 8);
    t9 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    goto LAB2;

LAB7:    xsi_set_current_line(88, ng0);
    t5 = (t0 + 3208);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t8) == 0)
        goto LAB8;

LAB10:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB11:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB13;

LAB12:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 3208);
    xsi_vlogvar_assign_value(t25, t4, 0, 0, 1);
    goto LAB6;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB13:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB12;

LAB14:    goto LAB5;

}

static void Forked_90_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 5576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5384);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(90, ng0);
    t3 = (t0 + 5384);
    xsi_process_wait(t3, 150000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB5;

}

static void Forked_91_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 5824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5632);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(91, ng0);
    t3 = (t0 + 5632);
    xsi_process_wait(t3, 150000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(91, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3528);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB5;

}

static void Forked_92_4(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 6072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5880);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(92, ng0);
    t3 = (t0 + 5880);
    xsi_process_wait(t3, 150000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(92, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_93_5(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 6320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6128);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(93, ng0);
    t3 = (t0 + 6128);
    xsi_process_wait(t3, 350000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(93, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_95_6(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 6568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6376);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(95, ng0);
    t3 = (t0 + 6376);
    xsi_process_wait(t3, 400000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(95, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3688);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_96_7(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 6816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6624);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(96, ng0);
    t3 = (t0 + 6624);
    xsi_process_wait(t3, 400000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(96, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_97_8(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 7064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6872);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(97, ng0);
    t3 = (t0 + 6872);
    xsi_process_wait(t3, 600000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(97, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}


extern void work_m_17562920528647824815_1072309162_init()
{
	static char *pe[] = {(void *)Initial_73_0,(void *)Forked_88_1,(void *)Forked_90_2,(void *)Forked_91_3,(void *)Forked_92_4,(void *)Forked_93_5,(void *)Forked_95_6,(void *)Forked_96_7,(void *)Forked_97_8};
	xsi_register_didat("work_m_17562920528647824815_1072309162", "isim/memory_test_isim_beh.exe.sim/work/m_17562920528647824815_1072309162.didat");
	xsi_register_executes(pe);
}
