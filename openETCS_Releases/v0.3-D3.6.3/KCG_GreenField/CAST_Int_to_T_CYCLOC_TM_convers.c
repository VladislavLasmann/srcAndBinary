/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_CYCLOC_TM_convers.h"

/* TM_conversions::CAST_Int_to_T_CYCLOC */
T_CYCLOC CAST_Int_to_T_CYCLOC_TM_convers(
  /* TM_conversions::CAST_Int_to_T_CYCLOC::t_cycloc_int */ kcg_int t_cycloc_int)
{
  /* TM_conversions::CAST_Int_to_T_CYCLOC::t_cycloc */
  static T_CYCLOC t_cycloc;
  
  t_cycloc = t_cycloc_int;
  return t_cycloc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_CYCLOC_TM_convers.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

