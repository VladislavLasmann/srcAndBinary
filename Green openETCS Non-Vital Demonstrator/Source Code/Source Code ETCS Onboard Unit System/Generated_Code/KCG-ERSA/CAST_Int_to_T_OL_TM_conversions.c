/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_OL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_OL */
T_OL CAST_Int_to_T_OL_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_OL::t_ol_int */ kcg_int t_ol_int)
{
  /* TM_conversions::CAST_Int_to_T_OL::t_ol */
  static T_OL t_ol;
  
  t_ol = t_ol_int;
  return t_ol;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_OL_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

