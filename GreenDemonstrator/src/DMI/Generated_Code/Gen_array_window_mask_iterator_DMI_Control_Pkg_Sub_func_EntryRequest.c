/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator */
kcg_bool Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator::position */kcg_int position)
{
  /* DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator::Output */ kcg_bool Output;
  
  if (index == position) {
    Output = kcg_true;
  }
  else {
    Output = kcg_false;
  }
  return Output;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

