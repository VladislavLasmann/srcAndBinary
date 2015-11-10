/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_LOA_TM_conversion.h"

/* TM_conversions::CAST_Int_to_T_LOA */
T_LOA CAST_Int_to_T_LOA_TM_conversion(
  /* TM_conversions::CAST_Int_to_T_LOA::t_loa_int */ kcg_int t_loa_int)
{
  /* TM_conversions::CAST_Int_to_T_LOA::t_loa */
  static T_LOA t_loa;
  
  t_loa = t_loa_int;
  return t_loa;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_LOA_TM_conversion.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

