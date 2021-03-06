/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_G_A_TM_conversions.h"

/* TM_conversions::CAST_Int_to_G_A */
G_A CAST_Int_to_G_A_TM_conversions(
  /* TM_conversions::CAST_Int_to_G_A::g_a_int */ kcg_int g_a_int)
{
  /* TM_conversions::CAST_Int_to_G_A::g_a */
  static G_A g_a;
  
  g_a = g_a_int;
  return g_a;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_G_A_TM_conversions.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

