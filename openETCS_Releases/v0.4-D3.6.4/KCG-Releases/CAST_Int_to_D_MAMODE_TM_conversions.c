/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_MAMODE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_MAMODE */
D_MAMODE CAST_Int_to_D_MAMODE_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_MAMODE::d_mamode_int */ kcg_int d_mamode_int)
{
  /* TM_conversions::CAST_Int_to_D_MAMODE::d_mamode */
  static D_MAMODE d_mamode;
  
  d_mamode = d_mamode_int;
  return d_mamode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_MAMODE_TM_conversions.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

