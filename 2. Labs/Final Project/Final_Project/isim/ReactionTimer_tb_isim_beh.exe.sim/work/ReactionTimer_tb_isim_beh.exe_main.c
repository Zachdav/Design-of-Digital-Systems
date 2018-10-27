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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000186999867_2983297728_init();
    work_m_00000000001915013172_2191703979_init();
    work_m_00000000004164609501_0609946208_init();
    work_m_00000000001839025451_3096712468_init();
    work_m_00000000001584548511_2618506667_init();
    work_m_00000000003220439038_2272006259_init();
    work_m_00000000002309447481_1968796347_init();
    work_m_00000000000449907804_2799127148_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000449907804_2799127148");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
