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
    work_m_00000000003814131977_2275660060_init();
    work_m_00000000001210219286_1448365076_init();
    work_m_00000000000704567283_3818977158_init();
    work_m_00000000002582701083_4160190615_init();
    work_m_00000000003044439957_1811013465_init();
    work_m_00000000002106613638_1459641541_init();
    work_m_00000000002456124627_3525779745_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002456124627_3525779745");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
