/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_ENDTIMER_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_ENDTIMER */
T_ENDTIMER CAST_Int_to_T_ENDTIMER_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_ENDTIMER::t_endtimer_int */ kcg_int t_endtimer_int)
{
  /* TM_conversions::CAST_Int_to_T_ENDTIMER::t_endtimer */
  static T_ENDTIMER t_endtimer;
  
  t_endtimer = t_endtimer_int;
  return t_endtimer;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_ENDTIMER_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

