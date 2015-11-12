/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_delete_time_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time */
void FIFO_delete_time_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time::hh_array */array_real_5 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time::mm_array */array_real_5 *mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time::new_mm_array */array_real_5 *new_mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time::new_hh_array */array_real_5 *new_hh_array)
{
  array_real_5 tmp;
  kcg_int i;
  
  kcg_copy_array_real_5(
    new_mm_array,
    (array_real_5 *) &cArray_hh_leer_DMI_Control_Pkg);
  for (i = 0; i < 5; i++) {
    kcg_copy_array_real_5(&tmp, new_mm_array);
    /* 2 */
    deleteTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp,
      0,
      mm_array,
      new_mm_array);
  }
  kcg_copy_array_real_5(
    new_hh_array,
    (array_real_5 *) &cArray_hh_leer_DMI_Control_Pkg);
  for (i = 0; i < 5; i++) {
    kcg_copy_array_real_5(&tmp, new_hh_array);
    /* 1 */
    deleteTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp,
      0,
      hh_array,
      new_hh_array);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FIFO_delete_time_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

