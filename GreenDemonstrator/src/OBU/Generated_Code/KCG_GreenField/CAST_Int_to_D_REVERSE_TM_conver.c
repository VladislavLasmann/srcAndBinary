/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_REVERSE_TM_conver.h"

/* TM_conversions::CAST_Int_to_D_REVERSE */
D_REVERSE CAST_Int_to_D_REVERSE_TM_conver(
  /* TM_conversions::CAST_Int_to_D_REVERSE::d_reverse_int */ kcg_int d_reverse_int)
{
  /* TM_conversions::CAST_Int_to_D_REVERSE::d_reverse */
  static D_REVERSE d_reverse;
  
  d_reverse = d_reverse_int;
  return d_reverse;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_REVERSE_TM_conver.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

